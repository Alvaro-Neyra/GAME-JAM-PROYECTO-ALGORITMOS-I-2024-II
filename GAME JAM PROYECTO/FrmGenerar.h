#pragma once
#include "GenerarCarros.h"

namespace GAMEJAMPROYECTO{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmGenerar
	/// </summary>
	public ref class FrmGenerar : public System::Windows::Forms::Form
	{
	public:
		FrmGenerar(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			primerTiempo = 1;
			segundosGeneracion = 0;
			panel = this->CreateGraphics();
			float xCentro = panel->VisibleClipBounds.Right / 2 - 50;
			float yCentro = panel->VisibleClipBounds.Bottom / 2 - 50;
			float gap = 20;
			carros = new GenerarCarros(xCentro - 100.0f - gap, yCentro, xCentro, yCentro, xCentro + 100.0f + gap, yCentro);
			carros->pararCarros();
			contexto = BufferedGraphicsManager::Current;
			buffer = contexto->Allocate(panel, this->ClientRectangle);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FrmGenerar()
		{
			if (components)
			{
				delete components;
			}

			if (buffer != nullptr) {
				delete buffer;
			}

			delete carros;
		}
	private: System::Windows::Forms::Button^ btnSalir;
	protected:



	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		int primerTiempo;
		int segundosGeneracion;
		GenerarCarros* carros;
		Graphics^ panel;
		BufferedGraphicsContext^ contexto;
	private: System::Windows::Forms::Label^ lblGeneracion;
	private: System::Windows::Forms::Label^ lblSeconds;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Label^ lblCantidadDeCarrosTxt;
	private: System::Windows::Forms::Label^ lblCantidadDeCarros;



		   BufferedGraphics^ buffer;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblGeneracion = (gcnew System::Windows::Forms::Label());
			this->lblSeconds = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblCantidadDeCarrosTxt = (gcnew System::Windows::Forms::Label());
			this->lblCantidadDeCarros = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnSalir
			// 
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btnSalir->Location = System::Drawing::Point(21, 696);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(173, 42);
			this->btnSalir->TabIndex = 4;
			this->btnSalir->Text = L"SALIR";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &FrmGenerar::btnSalir_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &FrmGenerar::timer1_Tick);
			// 
			// lblGeneracion
			// 
			this->lblGeneracion->AutoSize = true;
			this->lblGeneracion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lblGeneracion->Location = System::Drawing::Point(18, 25);
			this->lblGeneracion->Name = L"lblGeneracion";
			this->lblGeneracion->Size = System::Drawing::Size(220, 25);
			this->lblGeneracion->TabIndex = 5;
			this->lblGeneracion->Text = L"Tiempo De Generacion:";
			// 
			// lblSeconds
			// 
			this->lblSeconds->AutoSize = true;
			this->lblSeconds->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lblSeconds->Location = System::Drawing::Point(255, 25);
			this->lblSeconds->Name = L"lblSeconds";
			this->lblSeconds->Size = System::Drawing::Size(23, 25);
			this->lblSeconds->TabIndex = 6;
			this->lblSeconds->Text = L"0";
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Tick += gcnew System::EventHandler(this, &FrmGenerar::timer2_Tick);
			// 
			// lblCantidadDeCarrosTxt
			// 
			this->lblCantidadDeCarrosTxt->AutoSize = true;
			this->lblCantidadDeCarrosTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lblCantidadDeCarrosTxt->Location = System::Drawing::Point(18, 64);
			this->lblCantidadDeCarrosTxt->Name = L"lblCantidadDeCarrosTxt";
			this->lblCantidadDeCarrosTxt->Size = System::Drawing::Size(191, 25);
			this->lblCantidadDeCarrosTxt->TabIndex = 7;
			this->lblCantidadDeCarrosTxt->Text = L"Cantidad De Carros:";
			// 
			// lblCantidadDeCarros
			// 
			this->lblCantidadDeCarros->AutoSize = true;
			this->lblCantidadDeCarros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lblCantidadDeCarros->Location = System::Drawing::Point(255, 64);
			this->lblCantidadDeCarros->Name = L"lblCantidadDeCarros";
			this->lblCantidadDeCarros->Size = System::Drawing::Size(23, 25);
			this->lblCantidadDeCarros->TabIndex = 8;
			this->lblCantidadDeCarros->Text = L"0";
			// 
			// FrmGenerar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1412, 750);
			this->Controls->Add(this->lblCantidadDeCarros);
			this->Controls->Add(this->lblCantidadDeCarrosTxt);
			this->Controls->Add(this->lblSeconds);
			this->Controls->Add(this->lblGeneracion);
			this->Controls->Add(this->btnSalir);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FrmGenerar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FrmGenerar";
			this->Load += gcnew System::EventHandler(this, &FrmGenerar::FrmGenerar_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		segundosGeneracion++;
		lblSeconds->Text = segundosGeneracion.ToString();
		lblCantidadDeCarros->Text = carros->getCantidadDeCarros().ToString();
	}
	private: System::Void FrmGenerar_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		buffer->Graphics->Clear(Color::White);
		carros->mover(panel);
		carros->mostrarCarros(buffer->Graphics);
		buffer->Render(panel);
		
		if (segundosGeneracion >= 20) {
			if (carros->getCantidadDeCarros() < 20) {
				if (primerTiempo) {
					carros->cambiarVelocidad();
					primerTiempo = 0;
				}
				carros->agregarCarros((rand() % 3 + 1), panel);
			}
			segundosGeneracion = 0;
		}
	}
private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Enabled = false;
	timer2->Enabled = false;
	this->Close();
}
};
}
