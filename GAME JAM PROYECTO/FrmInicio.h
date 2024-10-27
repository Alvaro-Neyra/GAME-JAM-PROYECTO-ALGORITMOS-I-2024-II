#pragma once
#include "FrmMain.h"

namespace GAMEJAMPROYECTO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmInicio
	/// </summary>
	public ref class FrmInicio : public System::Windows::Forms::Form
	{
	public:
		FrmInicio(void)
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
		~FrmInicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ txtNamejuego;
	protected:
	private: System::Windows::Forms::Button^ btnIniciar;
	private: System::Windows::Forms::Button^ btnSalir;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtNamejuego = (gcnew System::Windows::Forms::Label());
			this->btnIniciar = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtNamejuego
			// 
			this->txtNamejuego->AutoSize = true;
			this->txtNamejuego->BackColor = System::Drawing::SystemColors::HighlightText;
			this->txtNamejuego->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 60, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout))));
			this->txtNamejuego->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->txtNamejuego->Location = System::Drawing::Point(393, 102);
			this->txtNamejuego->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->txtNamejuego->Name = L"txtNamejuego";
			this->txtNamejuego->Size = System::Drawing::Size(509, 119);
			this->txtNamejuego->TabIndex = 3;
			this->txtNamejuego->Text = L"Drift King";
			// 
			// btnIniciar
			// 
			this->btnIniciar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btnIniciar->Location = System::Drawing::Point(413, 352);
			this->btnIniciar->Name = L"btnIniciar";
			this->btnIniciar->Size = System::Drawing::Size(467, 88);
			this->btnIniciar->TabIndex = 4;
			this->btnIniciar->Text = L"INICIAR";
			this->btnIniciar->UseVisualStyleBackColor = true;
			this->btnIniciar->Click += gcnew System::EventHandler(this, &FrmInicio::btnIniciar_Click);
			// 
			// btnSalir
			// 
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btnSalir->Location = System::Drawing::Point(12, 594);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(253, 75);
			this->btnSalir->TabIndex = 5;
			this->btnSalir->Text = L"SALIR";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &FrmInicio::btnSalir_Click);
			// 
			// FrmInicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1371, 681);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->btnIniciar);
			this->Controls->Add(this->txtNamejuego);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FrmInicio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FrmInicio";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnIniciar_Click(System::Object^ sender, System::EventArgs^ e) {
		FrmMain^ formPrincipal = gcnew FrmMain();
		formPrincipal->ShowDialog();
	}
	private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
