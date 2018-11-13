#pragma once
#include "Intro.h"
#include "CIntro.h"


namespace JuegoYuGiOh {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	private:
		CIntro* objintro;
		Graphics^ g;
		BufferedGraphics^ buffer;
		Bitmap^ imgB1;
		Bitmap^ imgB2;
		Bitmap^ imgB3;
		Bitmap^ imgB4;
		Bitmap^ imgF1;
		Bitmap^ imgF2;

	private: System::Windows::Forms::PictureBox^  pcbinstrucciones;
	private: System::Windows::Forms::PictureBox^  btnatras;
	private: System::Windows::Forms::PictureBox^  btnsalir;
	private: System::Windows::Forms::PictureBox^  btninstrucciones;
	private: System::Windows::Forms::PictureBox^  btninicio;
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::PictureBox^  pcbintro;






		
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pcbinstrucciones = (gcnew System::Windows::Forms::PictureBox());
			this->btnatras = (gcnew System::Windows::Forms::PictureBox());
			this->btnsalir = (gcnew System::Windows::Forms::PictureBox());
			this->btninstrucciones = (gcnew System::Windows::Forms::PictureBox());
			this->btninicio = (gcnew System::Windows::Forms::PictureBox());
			this->pcbintro = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbinstrucciones))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnatras))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnsalir))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btninstrucciones))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btninicio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbintro))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// pcbinstrucciones
			// 
			this->pcbinstrucciones->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcbinstrucciones.Image")));
			this->pcbinstrucciones->Location = System::Drawing::Point(326, 412);
			this->pcbinstrucciones->Name = L"pcbinstrucciones";
			this->pcbinstrucciones->Size = System::Drawing::Size(205, 129);
			this->pcbinstrucciones->TabIndex = 25;
			this->pcbinstrucciones->TabStop = false;
			this->pcbinstrucciones->Visible = false;
			// 
			// btnatras
			// 
			this->btnatras->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnatras.Image")));
			this->btnatras->Location = System::Drawing::Point(661, 370);
			this->btnatras->Name = L"btnatras";
			this->btnatras->Size = System::Drawing::Size(104, 52);
			this->btnatras->TabIndex = 24;
			this->btnatras->TabStop = false;
			this->btnatras->Visible = false;
			// 
			// btnsalir
			// 
			this->btnsalir->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnsalir.Image")));
			this->btnsalir->Location = System::Drawing::Point(687, 259);
			this->btnsalir->Name = L"btnsalir";
			this->btnsalir->Size = System::Drawing::Size(93, 47);
			this->btnsalir->TabIndex = 23;
			this->btnsalir->TabStop = false;
			this->btnsalir->Visible = false;
			// 
			// btninstrucciones
			// 
			this->btninstrucciones->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btninstrucciones.Image")));
			this->btninstrucciones->Location = System::Drawing::Point(651, 312);
			this->btninstrucciones->Name = L"btninstrucciones";
			this->btninstrucciones->Size = System::Drawing::Size(138, 52);
			this->btninstrucciones->TabIndex = 22;
			this->btninstrucciones->TabStop = false;
			this->btninstrucciones->Visible = false;
			// 
			// btninicio
			// 
			this->btninicio->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btninicio.Image")));
			this->btninicio->Location = System::Drawing::Point(673, 163);
			this->btninicio->Name = L"btninicio";
			this->btninicio->Size = System::Drawing::Size(163, 62);
			this->btninicio->TabIndex = 21;
			this->btninicio->TabStop = false;
			this->btninicio->Visible = false;
			// 
			// pcbintro
			// 
			this->pcbintro->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pcbintro.Image")));
			this->pcbintro->Location = System::Drawing::Point(57, 89);
			this->pcbintro->Name = L"pcbintro";
			this->pcbintro->Size = System::Drawing::Size(211, 145);
			this->pcbintro->TabIndex = 20;
			this->pcbintro->TabStop = false;
			this->pcbintro->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Firebrick;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(157, 651);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(214, 52);
			this->button1->TabIndex = 26;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1079, 719);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pcbinstrucciones);
			this->Controls->Add(this->btnatras);
			this->Controls->Add(this->btnsalir);
			this->Controls->Add(this->btninstrucciones);
			this->Controls->Add(this->btninicio);
			this->Controls->Add(this->pcbintro);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Yu Gi Oh ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseClick);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbinstrucciones))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnatras))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnsalir))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btninstrucciones))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btninicio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pcbintro))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		objintro = new CIntro();


		g = this->CreateGraphics();
		BufferedGraphicsContext^ context = BufferedGraphicsManager::Current;
		buffer = context->Allocate(g, this->ClientRectangle);
		delete context;


		

		imgB1 = gcnew Bitmap(btninicio->Image);
		imgB2 = gcnew Bitmap(btninstrucciones->Image);
		imgB3 = gcnew Bitmap(btnsalir->Image);
		imgB4 = gcnew Bitmap(btnatras->Image);
		imgF1 = gcnew Bitmap(pcbintro->Image);
		imgF2 = gcnew Bitmap(pcbinstrucciones->Image);

	

	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
	{
		
			objintro->Dibujar(buffer->Graphics, imgB1, imgB2, imgB3, imgB4, imgF1, imgF2);
			buffer->Render(g);
			
			if (objintro->Cont() == 1){ button1->Enabled = false; button1->Visible = false; }
			if (objintro->Cont() == 2){ button1->Enabled = true; button1->Visible = true; }

	}
	private: System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
	{
		
	}
private: System::Void pcbmapa_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
}
private: System::Void MyForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	this->Cursor = objintro->HaySeleccion(e->X, e->Y) ?
		Cursors::Hand : Cursors::Default;
}
private: System::Void MyForm_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
{
	CBotones::TypeFormulario Formulario = objintro->Get_Boton(e->X, e->Y);

	if (Formulario != CBotones::TypeFormulario::SinSeleccion)
	{
		if (Formulario == CBotones::TypeFormulario::Fin)
			this->Close();

		objintro->Set_Formulario(Formulario);
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{

	Intro^objin = gcnew Intro();
	objin->ShowDialog(this);
	this->Close();
}
};
}
