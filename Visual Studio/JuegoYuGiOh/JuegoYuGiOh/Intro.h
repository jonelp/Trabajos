#pragma once
#include "Juego.h"

namespace JuegoYuGiOh {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Intro
	/// </summary>
	public ref class Intro : public System::Windows::Forms::Form
	{
	private:
		Graphics^ g;
		BufferedGraphics^ buffer; 

		Bitmap^img1;
		Bitmap^img2;
		Bitmap^img3;


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pcb2;
	private: System::Windows::Forms::PictureBox^  pcb3;
	private: System::Windows::Forms::PictureBox^  pcb1;

			 Bitmap^img;


	public:
		Intro(void)
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
		~Intro()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::Timer^  timerintro;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Intro::typeid));
			this->timerintro = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pcb2 = (gcnew System::Windows::Forms::PictureBox());
			this->pcb3 = (gcnew System::Windows::Forms::PictureBox());
			this->pcb1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcb2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcb3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcb1))->BeginInit();
			this->SuspendLayout();
			// 
			// timerintro
			// 
			this->timerintro->Enabled = true;
			this->timerintro->Tick += gcnew System::EventHandler(this, &Intro::timerintro_Tick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Location = System::Drawing::Point(650, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(398, 97);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Intro::button1_Click);
			// 
			// pcb2
			// 
			this->pcb2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcb2.Image")));
			this->pcb2->Location = System::Drawing::Point(12, 0);
			this->pcb2->Name = L"pcb2";
			this->pcb2->Size = System::Drawing::Size(208, 214);
			this->pcb2->TabIndex = 1;
			this->pcb2->TabStop = false;
			this->pcb2->Visible = false;
			// 
			// pcb3
			// 
			this->pcb3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcb3.Image")));
			this->pcb3->Location = System::Drawing::Point(799, 151);
			this->pcb3->Name = L"pcb3";
			this->pcb3->Size = System::Drawing::Size(323, 194);
			this->pcb3->TabIndex = 2;
			this->pcb3->TabStop = false;
			this->pcb3->Visible = false;
			// 
			// pcb1
			// 
			this->pcb1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcb1.Image")));
			this->pcb1->Location = System::Drawing::Point(799, 437);
			this->pcb1->Name = L"pcb1";
			this->pcb1->Size = System::Drawing::Size(268, 127);
			this->pcb1->TabIndex = 3;
			this->pcb1->TabStop = false;
			this->pcb1->Visible = false;
			// 
			// Intro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1079, 719);
			this->Controls->Add(this->pcb1);
			this->Controls->Add(this->pcb3);
			this->Controls->Add(this->pcb2);
			this->Controls->Add(this->button1);
			this->Name = L"Intro";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"YU Gi Oh ";
			this->Load += gcnew System::EventHandler(this, &Intro::Intro_Load);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Intro::Intro_MouseClick);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Intro::Intro_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcb2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcb3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcb1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int cont = 1;
	private: System::Void timerintro_Tick(System::Object^  sender, System::EventArgs^  e) 
	{
		Graphics ^g = CreateGraphics();
		BufferedGraphicsContext^contex = BufferedGraphicsManager::Current;
		BufferedGraphics^buffer = contex->Allocate(g, this->ClientRectangle);

		Rectangle Intro1 = Rectangle(0, 0, img1->Width, img1->Height);
		Rectangle Intro2 = Rectangle(0, 0, img2->Width, img2->Height);
		Rectangle Intro3 = Rectangle(0, 0, img3->Width, img3->Height);

		if (cont == 1)
		{
			buffer->Graphics->DrawImage(img1, g->VisibleClipBounds, Intro1, GraphicsUnit::Pixel);
		}
		if (cont == 2)
		{
			buffer->Graphics->DrawImage(img2, g->VisibleClipBounds, Intro2, GraphicsUnit::Pixel);
		}
		if (cont == 3)
		{
			buffer->Graphics->DrawImage(img3, g->VisibleClipBounds, Intro3, GraphicsUnit::Pixel);
		}
		
		buffer->Render(g);
		delete buffer;
		delete contex;
		delete g;

	}
private: System::Void Intro_Load(System::Object^  sender, System::EventArgs^  e) 
{
	img1 = gcnew Bitmap(pcb1->Image);
	img2 = gcnew Bitmap(pcb2->Image);
	img3 = gcnew Bitmap(pcb3->Image);


}
private: System::Void Intro_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	
}
private: System::Void Intro_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (cont == 3)
	{
		Juego^objuego = gcnew Juego();
		objuego->ShowDialog(this);

		this->Close();
		this->Show();
	}
	cont++;
}
};
}
