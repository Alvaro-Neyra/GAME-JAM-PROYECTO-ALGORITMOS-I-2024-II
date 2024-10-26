#pragma once
#include "FrmCarrera.h"
#include "FrmGenerar.h"
#include "FrmIntegrantes.h"

namespace GAMEJAMPROYECTO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmMain
	/// </summary>
	public ref class FrmMain : public System::Windows::Forms::Form
	{
	public:
		FrmMain(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FrmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnCarrera;
	protected:
	private: System::Windows::Forms::Button^ btnGenerar;
	private: System::Windows::Forms::Button^ btnIntegrantes;
	private: System::Windows::Forms::Button^ btnSalir;
	private: System::Windows::Forms::Label^ lblMenu;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnCarrera = (gcnew System::Windows::Forms::Button());
			this->btnGenerar = (gcnew System::Windows::Forms::Button());
			this->btnIntegrantes = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->lblMenu = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnCarrera
			// 
			this->btnCarrera->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btnCarrera->Location = System::Drawing::Point(380, 236);
			this->btnCarrera->Name = L"btnCarrera";
			this->btnCarrera->Size = System::Drawing::Size(244, 78);
			this->btnCarrera->TabIndex = 0;
			this->btnCarrera->Text = L"Carrera";
			this->btnCarrera->UseVisualStyleBackColor = true;
			this->btnCarrera->Click += gcnew System::EventHandler(this, &FrmMain::btnCarrera_Click);
			// 
			// btnGenerar
			// 
			this->btnGenerar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btnGenerar->Location = System::Drawing::Point(739, 236);
			this->btnGenerar->Name = L"btnGenerar";
			this->btnGenerar->Size = System::Drawing::Size(244, 78);
			this->btnGenerar->TabIndex = 1;
			this->btnGenerar->Text = L"Generar Carros";
			this->btnGenerar->UseVisualStyleBackColor = true;
			this->btnGenerar->Click += gcnew System::EventHandler(this, &FrmMain::btnGenerar_Click);
			// 
			// btnIntegrantes
			// 
			this->btnIntegrantes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btnIntegrantes->Location = System::Drawing::Point(560, 342);
			this->btnIntegrantes->Name = L"btnIntegrantes";
			this->btnIntegrantes->Size = System::Drawing::Size(244, 78);
			this->btnIntegrantes->TabIndex = 2;
			this->btnIntegrantes->Text = L"Integrantes";
			this->btnIntegrantes->UseVisualStyleBackColor = true;
			this->btnIntegrantes->Click += gcnew System::EventHandler(this, &FrmMain::btnIntegrantes_Click);
			// 
			// btnSalir
			// 
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btnSalir->Location = System::Drawing::Point(12, 691);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(222, 56);
			this->btnSalir->TabIndex = 3;
			this->btnSalir->Text = L"SALIR";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &FrmMain::btnSalir_Click);
			// 
			// lblMenu
			// 
			this->lblMenu->AutoSize = true;
			this->lblMenu->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMenu->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->lblMenu->Location = System::Drawing::Point(523, 143);
			this->lblMenu->Name = L"lblMenu";
			this->lblMenu->Size = System::Drawing::Size(317, 45);
			this->lblMenu->TabIndex = 4;
			this->lblMenu->Text = L"MENU PRINCIPAL";
			// 
			// FrmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1441, 759);
			this->Controls->Add(this->lblMenu);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->btnIntegrantes);
			this->Controls->Add(this->btnGenerar);
			this->Controls->Add(this->btnCarrera);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FrmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FrmMain";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnCarrera_Click(System::Object^ sender, System::EventArgs^ e) {
		FrmCarrera^ frmCarrera = gcnew FrmCarrera();
		frmCarrera->ShowDialog();
	}
	private: System::Void btnGenerar_Click(System::Object^ sender, System::EventArgs^ e) {
		FrmGenerar^ frmGenerar = gcnew FrmGenerar();
		frmGenerar->ShowDialog();
	}
	private: System::Void btnIntegrantes_Click(System::Object^ sender, System::EventArgs^ e) {
		FrmIntegrantes^ frmIntegrantes = gcnew FrmIntegrantes();
		frmIntegrantes->ShowDialog();
	}
	};
}
