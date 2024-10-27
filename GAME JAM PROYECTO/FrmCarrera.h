#pragma once
#include "conio.h"
#include "Carrera.h"

namespace GAMEJAMPROYECTO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmCarrera
	/// </summary>
	public ref class FrmCarrera : public System::Windows::Forms::Form
	{
	public:
		FrmCarrera(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			srand(time(NULL));
			int coordenadaXInicio = 20;
			segundosEsperaGanador = 0;
			segundosEspera = 0;
			carrera = new Carrera(coordenadaXInicio, 80, coordenadaXInicio, 240, coordenadaXInicio, 400);
			panel = this->CreateGraphics();
			contexto = BufferedGraphicsManager::Current;
			buffer = contexto->Allocate(panel, this->ClientRectangle);
			// Iniciar contadores
			timer1->Enabled = true;
			timer2->Enabled = true;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FrmCarrera()
		{
			if (components)
			{
				delete components;
			}

			if (buffer != nullptr) {
				delete buffer;
			}

			delete carrera;
		}
	private: System::Windows::Forms::Timer^ timer1;
	protected:
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Label^ lblTimer;
	private: System::Windows::Forms::Label^ lblSeconds;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		int segundosEsperaGanador;
		int segundosEspera;
		Carrera* carrera;
		Graphics^ panel;
		BufferedGraphicsContext^ contexto;


	private: System::Windows::Forms::Label^ lblVictoriasCarro1;
	private: System::Windows::Forms::Label^ lblCantVictoriasCarro1;
	private: System::Windows::Forms::Label^ lblCantVictoriasCarro2;



	private: System::Windows::Forms::Label^ lblVictoriasCarro2;
	private: System::Windows::Forms::Label^ lblCantVictoriasCarro3;



	private: System::Windows::Forms::Label^ lblVictoriasCarro3;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::Button^ btnSalir;

		   BufferedGraphics^ buffer;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblTimer = (gcnew System::Windows::Forms::Label());
			this->lblSeconds = (gcnew System::Windows::Forms::Label());
			this->lblVictoriasCarro1 = (gcnew System::Windows::Forms::Label());
			this->lblCantVictoriasCarro1 = (gcnew System::Windows::Forms::Label());
			this->lblCantVictoriasCarro2 = (gcnew System::Windows::Forms::Label());
			this->lblVictoriasCarro2 = (gcnew System::Windows::Forms::Label());
			this->lblCantVictoriasCarro3 = (gcnew System::Windows::Forms::Label());
			this->lblVictoriasCarro3 = (gcnew System::Windows::Forms::Label());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			this->btnSalir->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &FrmCarrera::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Tick += gcnew System::EventHandler(this, &FrmCarrera::timer2_Tick);
			// 
			// lblTimer
			// 
			this->lblTimer->AutoSize = true;
			this->lblTimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lblTimer->Location = System::Drawing::Point(12, 9);
			this->lblTimer->Name = L"lblTimer";
			this->lblTimer->Size = System::Drawing::Size(113, 39);
			this->lblTimer->TabIndex = 0;
			this->lblTimer->Text = L"Timer:";
			// 
			// lblSeconds
			// 
			this->lblSeconds->AutoSize = true;
			this->lblSeconds->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lblSeconds->Location = System::Drawing::Point(131, 9);
			this->lblSeconds->Name = L"lblSeconds";
			this->lblSeconds->Size = System::Drawing::Size(36, 39);
			this->lblSeconds->TabIndex = 1;
			this->lblSeconds->Text = L"0";
			// 
			// lblVictoriasCarro1
			// 
			this->lblVictoriasCarro1->AutoSize = true;
			this->lblVictoriasCarro1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lblVictoriasCarro1->Location = System::Drawing::Point(34, 697);
			this->lblVictoriasCarro1->Name = L"lblVictoriasCarro1";
			this->lblVictoriasCarro1->Size = System::Drawing::Size(279, 39);
			this->lblVictoriasCarro1->TabIndex = 4;
			this->lblVictoriasCarro1->Text = L"Victorias Carro 1:";
			// 
			// lblCantVictoriasCarro1
			// 
			this->lblCantVictoriasCarro1->AutoSize = true;
			this->lblCantVictoriasCarro1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lblCantVictoriasCarro1->Location = System::Drawing::Point(328, 697);
			this->lblCantVictoriasCarro1->Name = L"lblCantVictoriasCarro1";
			this->lblCantVictoriasCarro1->Size = System::Drawing::Size(36, 39);
			this->lblCantVictoriasCarro1->TabIndex = 5;
			this->lblCantVictoriasCarro1->Text = L"0";
			// 
			// lblCantVictoriasCarro2
			// 
			this->lblCantVictoriasCarro2->AutoSize = true;
			this->lblCantVictoriasCarro2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lblCantVictoriasCarro2->Location = System::Drawing::Point(832, 697);
			this->lblCantVictoriasCarro2->Name = L"lblCantVictoriasCarro2";
			this->lblCantVictoriasCarro2->Size = System::Drawing::Size(36, 39);
			this->lblCantVictoriasCarro2->TabIndex = 7;
			this->lblCantVictoriasCarro2->Text = L"0";
			this->lblCantVictoriasCarro2->Click += gcnew System::EventHandler(this, &FrmCarrera::label3_Click);
			// 
			// lblVictoriasCarro2
			// 
			this->lblVictoriasCarro2->AutoSize = true;
			this->lblVictoriasCarro2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lblVictoriasCarro2->Location = System::Drawing::Point(535, 697);
			this->lblVictoriasCarro2->Name = L"lblVictoriasCarro2";
			this->lblVictoriasCarro2->Size = System::Drawing::Size(279, 39);
			this->lblVictoriasCarro2->TabIndex = 6;
			this->lblVictoriasCarro2->Text = L"Victorias Carro 2:";
			// 
			// lblCantVictoriasCarro3
			// 
			this->lblCantVictoriasCarro3->AutoSize = true;
			this->lblCantVictoriasCarro3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lblCantVictoriasCarro3->Location = System::Drawing::Point(1395, 697);
			this->lblCantVictoriasCarro3->Name = L"lblCantVictoriasCarro3";
			this->lblCantVictoriasCarro3->Size = System::Drawing::Size(36, 39);
			this->lblCantVictoriasCarro3->TabIndex = 9;
			this->lblCantVictoriasCarro3->Text = L"0";
			// 
			// lblVictoriasCarro3
			// 
			this->lblVictoriasCarro3->AutoSize = true;
			this->lblVictoriasCarro3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lblVictoriasCarro3->Location = System::Drawing::Point(1097, 697);
			this->lblVictoriasCarro3->Name = L"lblVictoriasCarro3";
			this->lblVictoriasCarro3->Size = System::Drawing::Size(279, 39);
			this->lblVictoriasCarro3->TabIndex = 8;
			this->lblVictoriasCarro3->Text = L"Victorias Carro 3:";
			// 
			// timer3
			// 
			this->timer3->Interval = 1000;
			this->timer3->Tick += gcnew System::EventHandler(this, &FrmCarrera::timer3_Tick);
			// 
			// btnSalir
			// 
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btnSalir->Location = System::Drawing::Point(19, 680);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(222, 56);
			this->btnSalir->TabIndex = 10;
			this->btnSalir->Text = L"SALIR";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &FrmCarrera::btnSalir_Click);
			// 
			// FrmCarrera
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1598, 745);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->lblCantVictoriasCarro3);
			this->Controls->Add(this->lblVictoriasCarro3);
			this->Controls->Add(this->lblCantVictoriasCarro2);
			this->Controls->Add(this->lblVictoriasCarro2);
			this->Controls->Add(this->lblCantVictoriasCarro1);
			this->Controls->Add(this->lblVictoriasCarro1);
			this->Controls->Add(this->lblSeconds);
			this->Controls->Add(this->lblTimer);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FrmCarrera";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FrmCarrera";
			this->Load += gcnew System::EventHandler(this, &FrmCarrera::FrmCarrera_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		segundosEspera++;
		lblSeconds->Text = segundosEspera.ToString();
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		lblCantVictoriasCarro1->Text = carrera->victoriasCarro1().ToString();
		lblCantVictoriasCarro2->Text = carrera->victoriasCarro2().ToString();
		lblCantVictoriasCarro3->Text = carrera->victoriasCarro3().ToString();

		buffer->Graphics->Clear(Color::White);
		carrera->mover();
		carrera->mostrar(buffer->Graphics);
		buffer->Render(panel);
		if (carrera->obtenerCarrera()) {
			timer1->Enabled = false;
			timer3->Enabled = true;
		}
	}
	private: System::Void FrmCarrera_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
			   segundosEsperaGanador++;

			   if (segundosEsperaGanador >= 1) {

				   lblVictoriasCarro1->Visible = false;
				   lblCantVictoriasCarro1->Visible = false;
				   lblVictoriasCarro2->Visible = false;
				   lblCantVictoriasCarro2->Visible = false;
				   lblVictoriasCarro3->Visible = false;
				   lblCantVictoriasCarro3->Visible = false;
				   btnSalir->Visible = true;

				   timer2->Enabled = false;
				   buffer->Graphics->Clear(Color::White);

				   System::Drawing::Font^ font = gcnew System::Drawing::Font("Comic Sans MS", 20);
				   System::Drawing::Font^ fontCarro = gcnew System::Drawing::Font("Arial", 10);
				   String^ ganadorText = "GANADOR!!";
				   int carroGanador = carrera->obtenerCarroGanador() + 1;
				   String^ carroGanadorText = "" + carroGanador + "";
				   Color colorCarroGanador;
				   int centerX = buffer->Graphics->VisibleClipBounds.Width / 2;
				   int centerY = buffer->Graphics->VisibleClipBounds.Height / 2;
				   switch (carrera->obtenerCarroGanador()) {
				   case 0: {
					   colorCarroGanador = Color::DarkCyan;
					   break;
				   }
				   case 1: {
					   colorCarroGanador = Color::DarkBlue;
					   break;
				   }
				   case 2: {
					   colorCarroGanador = Color::DeepPink;
					   break;
				   }
				   }
				   SolidBrush^ brocha = gcnew SolidBrush(colorCarroGanador);
				   System::Drawing::SizeF ganadorSize = buffer->Graphics->MeasureString(ganadorText, font);
				   System::Drawing::SizeF carroGanadorSize = buffer->Graphics->MeasureString(carroGanadorText, fontCarro);

				   buffer->Graphics->DrawString(ganadorText, font, Brushes::Black, centerX - ganadorSize.Width / 2, centerY - ganadorSize.Height - 100);
				   buffer->Graphics->DrawString(carroGanadorText, font, Brushes::Black, centerX - carroGanadorSize.Width / 2, centerY + ganadorSize.Height - 90);
				   buffer->Graphics->FillEllipse(brocha, centerX - 50, centerY + 20, 100, 100);
				   buffer->Render(panel);

				   timer3->Enabled = false;
			   }
		   }

	private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		timer1->Enabled = false;
		timer2->Enabled = false;
		timer3->Enabled = false;
	}
};
}
