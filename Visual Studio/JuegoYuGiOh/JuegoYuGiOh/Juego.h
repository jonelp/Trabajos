#pragma once
#include "CJuego.h"
#include "Tienda.h"

namespace JuegoYuGiOh {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Juego
	/// </summary>
	public ref class Juego : public System::Windows::Forms::Form
	{
	private:
		Graphics^ g;
		BufferedGraphics^ buffer;

		CJuego*objuego;
		Bitmap^ Mapa;
		Bitmap^ Mapa2;
	private: System::Windows::Forms::PictureBox^  pcbmapa2;
			 Bitmap^Jugador;

	public:
	

		Juego(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Juego()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pcbjugador;
	protected:
	private: System::Windows::Forms::PictureBox^  pcbmapa;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Juego::typeid));
			this->pcbjugador = (gcnew System::Windows::Forms::PictureBox());
			this->pcbmapa = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pcbmapa2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbjugador))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbmapa))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbmapa2))->BeginInit();
			this->SuspendLayout();
			// 
			// pcbjugador
			// 
			this->pcbjugador->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcbjugador.Image")));
			this->pcbjugador->Location = System::Drawing::Point(720, 150);
			this->pcbjugador->Name = L"pcbjugador";
			this->pcbjugador->Size = System::Drawing::Size(106, 201);
			this->pcbjugador->TabIndex = 5;
			this->pcbjugador->TabStop = false;
			this->pcbjugador->Visible = false;
			// 
			// pcbmapa
			// 
			this->pcbmapa->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcbmapa.Image")));
			this->pcbmapa->Location = System::Drawing::Point(144, 88);
			this->pcbmapa->Name = L"pcbmapa";
			this->pcbmapa->Size = System::Drawing::Size(508, 332);
			this->pcbmapa->TabIndex = 4;
			this->pcbmapa->TabStop = false;
			this->pcbmapa->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Juego::timer1_Tick);
			// 
			// pcbmapa2
			// 
			this->pcbmapa2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcbmapa2.Image")));
			this->pcbmapa2->Location = System::Drawing::Point(880, 88);
			this->pcbmapa2->Name = L"pcbmapa2";
			this->pcbmapa2->Size = System::Drawing::Size(106, 201);
			this->pcbmapa2->TabIndex = 6;
			this->pcbmapa2->TabStop = false;
			this->pcbmapa2->Visible = false;
			// 
			// Juego
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1079, 719);
			this->Controls->Add(this->pcbmapa2);
			this->Controls->Add(this->pcbjugador);
			this->Controls->Add(this->pcbmapa);
			this->Name = L"Juego";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Yu Gi Oh ";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Juego::Juego_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Juego::Juego_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Juego::Juego_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbjugador))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbmapa))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbmapa2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Juego_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		objuego = new CJuego();


		Mapa = gcnew Bitmap(pcbmapa->Image);
		Jugador = gcnew Bitmap(pcbjugador->Image);
		Jugador->MakeTransparent(Jugador->GetPixel(0, 0));
		Mapa2 = gcnew Bitmap(pcbmapa2->Image);


	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
	{
		Graphics^g = this->CreateGraphics();
		BufferedGraphicsContext^contexto = BufferedGraphicsManager::Current;
		BufferedGraphics^buffer = contexto->Allocate(g, this->ClientRectangle);

		objuego->DibujarMapa(buffer->Graphics, Mapa, Jugador);
		buffer->Render(g);
		delete g, contexto, buffer;
		timer1->Enabled = false;
		
	}
	private: System::Void Juego_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
	{
		if (e->KeyCode == Keys::Escape)
		{
			exit(0);
			/*this->Close();
			timer1->Enabled = false;*/
		}
		if ( e->KeyCode == Keys::T)
		{

			Tienda^objtienda = gcnew Tienda();
			objtienda->ShowDialog(this);
			this->Show();
		}
		

			timer1->Enabled = true;
			Graphics^g = this->CreateGraphics();
			BufferedGraphicsContext^contexto = BufferedGraphicsManager::Current;
			BufferedGraphics^buffer = contexto->Allocate(g, this->ClientRectangle);


			if (objuego->Get_TipoCampo() == 0 || objuego->Get_TipoCampo() == 1 )
			{
				objuego->DibujarJuego(buffer->Graphics, Jugador, Mapa, e->KeyCode, Mapa2);
				objuego->MoverJugador(this->ClientRectangle.Width, this->ClientRectangle.Height, e->KeyCode);
			}
			buffer->Render(g);
			delete g, contexto, buffer;
			timer1->Enabled = false;
		
	}
private: System::Void Juego_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) 
{
}
};
}
