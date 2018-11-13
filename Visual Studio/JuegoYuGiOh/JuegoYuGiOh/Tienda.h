#pragma once
#include "CControladorTienda.h"


namespace JuegoYuGiOh {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Tienda
	/// </summary>
	public ref class Tienda : public System::Windows::Forms::Form
	{
	//private:
		CControladorTienda*objvectienda;
	public:
		Tienda(void)
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
		~Tienda()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  sad;
	private: System::Windows::Forms::Button^  btncomprar;
	private: System::Windows::Forms::TextBox^  txtmonedas;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  lblcartas;
	private: System::Windows::Forms::TabPage^  dfs;
	private: System::Windows::Forms::ListBox^  lbxinventario;
	private: System::Windows::Forms::Button^  btnganardinero;

	protected:




	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Tienda::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->sad = (gcnew System::Windows::Forms::TabPage());
			this->btncomprar = (gcnew System::Windows::Forms::Button());
			this->txtmonedas = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblcartas = (gcnew System::Windows::Forms::ListBox());
			this->dfs = (gcnew System::Windows::Forms::TabPage());
			this->lbxinventario = (gcnew System::Windows::Forms::ListBox());
			this->btnganardinero = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->sad->SuspendLayout();
			this->dfs->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->sad);
			this->tabControl1->Controls->Add(this->dfs);
			this->tabControl1->Location = System::Drawing::Point(22, 31);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(699, 632);
			this->tabControl1->TabIndex = 4;
			// 
			// sad
			// 
			this->sad->Controls->Add(this->btnganardinero);
			this->sad->Controls->Add(this->btncomprar);
			this->sad->Controls->Add(this->txtmonedas);
			this->sad->Controls->Add(this->label1);
			this->sad->Controls->Add(this->lblcartas);
			this->sad->Location = System::Drawing::Point(4, 25);
			this->sad->Name = L"sad";
			this->sad->Padding = System::Windows::Forms::Padding(3);
			this->sad->Size = System::Drawing::Size(691, 603);
			this->sad->TabIndex = 0;
			this->sad->Text = L"Tienda";
			this->sad->UseVisualStyleBackColor = true;
			// 
			// btncomprar
			// 
			this->btncomprar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btncomprar.Image")));
			this->btncomprar->Location = System::Drawing::Point(368, 498);
			this->btncomprar->Name = L"btncomprar";
			this->btncomprar->Size = System::Drawing::Size(308, 85);
			this->btncomprar->TabIndex = 6;
			this->btncomprar->UseVisualStyleBackColor = true;
			this->btncomprar->Click += gcnew System::EventHandler(this, &Tienda::btncomprar_Click_1);
			// 
			// txtmonedas
			// 
			this->txtmonedas->Enabled = false;
			this->txtmonedas->Location = System::Drawing::Point(146, 534);
			this->txtmonedas->Name = L"txtmonedas";
			this->txtmonedas->Size = System::Drawing::Size(100, 22);
			this->txtmonedas->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 534);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Monedas :";
			// 
			// lblcartas
			// 
			this->lblcartas->FormattingEnabled = true;
			this->lblcartas->ItemHeight = 16;
			this->lblcartas->Location = System::Drawing::Point(23, 21);
			this->lblcartas->Name = L"lblcartas";
			this->lblcartas->Size = System::Drawing::Size(627, 452);
			this->lblcartas->TabIndex = 0;
			// 
			// dfs
			// 
			this->dfs->Controls->Add(this->lbxinventario);
			this->dfs->Location = System::Drawing::Point(4, 25);
			this->dfs->Name = L"dfs";
			this->dfs->Padding = System::Windows::Forms::Padding(3);
			this->dfs->Size = System::Drawing::Size(691, 603);
			this->dfs->TabIndex = 1;
			this->dfs->Text = L"Inventario";
			this->dfs->UseVisualStyleBackColor = true;
			// 
			// lbxinventario
			// 
			this->lbxinventario->FormattingEnabled = true;
			this->lbxinventario->ItemHeight = 16;
			this->lbxinventario->Location = System::Drawing::Point(23, 24);
			this->lbxinventario->Name = L"lbxinventario";
			this->lbxinventario->Size = System::Drawing::Size(557, 388);
			this->lbxinventario->TabIndex = 1;
			// 
			// btnganardinero
			// 
			this->btnganardinero->Location = System::Drawing::Point(146, 492);
			this->btnganardinero->Name = L"btnganardinero";
			this->btnganardinero->Size = System::Drawing::Size(157, 36);
			this->btnganardinero->TabIndex = 5;
			this->btnganardinero->Text = L"Gana dinero";
			this->btnganardinero->UseVisualStyleBackColor = true;
			this->btnganardinero->Click += gcnew System::EventHandler(this, &Tienda::btnganardinero_Click);
			// 
			// Tienda
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(752, 696);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Tienda";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Yu Gi Oh";
			this->Load += gcnew System::EventHandler(this, &Tienda::Tienda_Load);
			this->tabControl1->ResumeLayout(false);
			this->sad->ResumeLayout(false);
			this->sad->PerformLayout();
			this->dfs->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void Tienda_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		objvectienda = new CControladorTienda();
		txtmonedas->Text = objvectienda->Get_monedas().ToString();
		comprados();
		cartas();

		
	}
private: System::Void btncomprar_Click(System::Object^  sender, System::EventArgs^  e) 
{
	
}

		 void cartas()
		 {
			 vector<CTienda*> aux = objvectienda->vector_cartas()->Get_Tienda();
			 lblcartas->Items->Clear();
			 for (int i = 0; i < aux.size(); i++){
				 System::String ^dato;
				 dato = "Nombre: " + gcnew System::String(aux[i]->Get_nombre()) + " Ataque: " + Convert::ToInt32(aux[i]->Get_ataque()) + " Defensa:  " + Convert::ToInt32(aux[i]->Get_defensa()) + " Costo: " + Convert::ToInt32(aux[i]->Get_costo());
				 lblcartas->Items->Add(dato);
			 }

		 }
		 void comprados()
		 {
			 vector<CTienda*> aux = objvectienda->vector_cartas()->Get_Inventario();
			 lbxinventario->Items->Clear();
			 for (int i = 0; i < aux.size(); i++){
				 System::String ^dato;
				 dato = "Nombre: " + gcnew System::String(aux[i]->Get_nombre()) + " Ataque: " + Convert::ToInt32(aux[i]->Get_ataque()) + " Defensa:  " + Convert::ToInt32(aux[i]->Get_defensa()) + " Costo: " + Convert::ToInt32(aux[i]->Get_costo());				
				 lbxinventario->Items->Add(dato);
			 }
		 }
		 
		 void Comprar()
		 {
			 int indice = Convert::ToInt32(lblcartas->SelectedIndex);

			 objvectienda->vector_cartas()->Comprar(indice);
			 comprados();
			
		 }

		 bool Puede(){
			 vector<CTienda*> aux = objvectienda->vector_cartas()->Get_Tienda();
			 int indice = Convert::ToInt32(lblcartas->SelectedIndex);
			 int dinero = objvectienda->Get_monedas();
			 int costo = aux[indice]->Get_costo();

			 if (dinero >= costo){
				 objvectienda->Set_monedas(costo*-1);
				 return true;
			 }
			 else{ return false; }
		 }

private: System::Void btncomprar_Click_1(System::Object^  sender, System::EventArgs^  e) 
{
	if (lblcartas->SelectedIndex == -1)
	{
		MessageBox::Show("Por favor seleccione una carta ");
		return;
	}

	if (Puede())
	{
		Comprar();
		txtmonedas->Text = objvectienda->Get_monedas().ToString();
	}
	else{
		MessageBox::Show("Ahora no joven,no tiene dinero");
	}
}
private: System::Void btnganardinero_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Random^r = gcnew System::Random((int)System::DateTime::Now.Ticks);
	int x = r->Next(1, 24);


	if (x == 1){ MessageBox::Show("Ganaste 500 monedas usalas bien "); objvectienda->Set_monedas(500); txtmonedas->Text = objvectienda->Get_monedas().ToString(); }
	if (x == 2){ MessageBox::Show("Ganaste 100 monedas usalas bien "); objvectienda->Set_monedas(100); txtmonedas->Text = objvectienda->Get_monedas().ToString(); }
	if (x == 3)MessageBox::Show("Ganaste... no mentira no ganste nada "); 
	if (x == 4)MessageBox::Show("Sigue intentando "); 
	if (x == 5){ MessageBox::Show("Ganaste 250 monedas usalas bien "); objvectienda->Set_monedas(250); txtmonedas->Text = objvectienda->Get_monedas().ToString(); }
	if (x == 6)MessageBox::Show("Sigue intentando ");
	if (x == 7)MessageBox::Show("Sigue intentando ");
	if (x == 8)MessageBox::Show("Sigue intentando ");
	if (x == 9)MessageBox::Show("Sigue intentando ");
	if (x == 10)MessageBox::Show("Sigue intentando ");
	if (x == 11)MessageBox::Show("Sigue intentando ");
	if (x == 12)MessageBox::Show("Sigue intentando ");
	if (x == 13)MessageBox::Show("Sigue intentando ");
	if (x == 14){ MessageBox::Show("Ganaste 100 monedas usalas bien "); objvectienda->Set_monedas(100); txtmonedas->Text = objvectienda->Get_monedas().ToString(); }
	if (x == 15){ MessageBox::Show("Ganaste 100 monedas usalas bien "); objvectienda->Set_monedas(100); txtmonedas->Text = objvectienda->Get_monedas().ToString(); }
	if (x == 16)MessageBox::Show("Ganaste... no mentira no ganste nada ");
	if (x == 17)MessageBox::Show("Ganaste... no mentira no ganste nada ");
	if (x == 18)MessageBox::Show("Ganaste... no mentira no ganste nada ");
	if (x == 19)MessageBox::Show("Ganaste... no mentira no ganste nada ");
	if (x == 20){ MessageBox::Show("Ganaste 250 monedas usalas bien "); objvectienda->Set_monedas(250); txtmonedas->Text = objvectienda->Get_monedas().ToString(); }
	if (x == 21){ MessageBox::Show("Ganaste 250 monedas usalas bien "); objvectienda->Set_monedas(250); txtmonedas->Text = objvectienda->Get_monedas().ToString(); }
	if (x == 22){ MessageBox::Show("Ganaste 500 monedas usalas bien "); objvectienda->Set_monedas(500); txtmonedas->Text = objvectienda->Get_monedas().ToString(); }
	if (x == 23){ MessageBox::Show("Ganaste 500 monedas usalas bien "); objvectienda->Set_monedas(500); txtmonedas->Text = objvectienda->Get_monedas().ToString(); }
	if (x == 24){ MessageBox::Show("Ganaste 50 monedas usalas bien "); objvectienda->Set_monedas(50); txtmonedas->Text = objvectienda->Get_monedas().ToString(); }

}
};
}
