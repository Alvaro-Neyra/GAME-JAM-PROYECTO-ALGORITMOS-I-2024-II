#pragma once

namespace GAMEJAMPROYECTO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmIntegrantes
	/// </summary>
	public ref class FrmIntegrantes : public System::Windows::Forms::Form
	{
	public:
		FrmIntegrantes(void)
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
		~FrmIntegrantes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblIntegrantes;
	private: System::Windows::Forms::Label^ lblJoao;
	protected:

	protected:

	private: System::Windows::Forms::Button^ btnVolver;
	private: System::Windows::Forms::Label^ lvlIvan;

	private: System::Windows::Forms::Label^ lblAlvaro;


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
			this->lblIntegrantes = (gcnew System::Windows::Forms::Label());
			this->lblJoao = (gcnew System::Windows::Forms::Label());
			this->btnVolver = (gcnew System::Windows::Forms::Button());
			this->lvlIvan = (gcnew System::Windows::Forms::Label());
			this->lblAlvaro = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblIntegrantes
			// 
			this->lblIntegrantes->AutoSize = true;
			this->lblIntegrantes->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIntegrantes->Location = System::Drawing::Point(228, 85);
			this->lblIntegrantes->Name = L"lblIntegrantes";
			this->lblIntegrantes->Size = System::Drawing::Size(270, 45);
			this->lblIntegrantes->TabIndex = 0;
			this->lblIntegrantes->Text = L"INTEGRANTES";
			// 
			// lblJoao
			// 
			this->lblJoao->AutoSize = true;
			this->lblJoao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lblJoao->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->lblJoao->Location = System::Drawing::Point(224, 173);
			this->lblJoao->Name = L"lblJoao";
			this->lblJoao->Size = System::Drawing::Size(274, 25);
			this->lblJoao->TabIndex = 1;
			this->lblJoao->Text = L"U20231G046 - Joao Jimenez \n";
			// 
			// btnVolver
			// 
			this->btnVolver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btnVolver->Location = System::Drawing::Point(12, 555);
			this->btnVolver->Name = L"btnVolver";
			this->btnVolver->Size = System::Drawing::Size(211, 54);
			this->btnVolver->TabIndex = 2;
			this->btnVolver->Text = L"VOLVER AL MENU";
			this->btnVolver->UseVisualStyleBackColor = true;
			this->btnVolver->Click += gcnew System::EventHandler(this, &FrmIntegrantes::btnVolver_Click);
			// 
			// lvlIvan
			// 
			this->lvlIvan->AutoSize = true;
			this->lvlIvan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lvlIvan->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->lvlIvan->Location = System::Drawing::Point(224, 227);
			this->lvlIvan->Name = L"lvlIvan";
			this->lvlIvan->Size = System::Drawing::Size(249, 25);
			this->lvlIvan->TabIndex = 3;
			this->lvlIvan->Text = L"U20241C412 - Iván Carrillo\n";
			// 
			// lblAlvaro
			// 
			this->lblAlvaro->AutoSize = true;
			this->lblAlvaro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lblAlvaro->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->lblAlvaro->Location = System::Drawing::Point(224, 278);
			this->lblAlvaro->Name = L"lblAlvaro";
			this->lblAlvaro->Size = System::Drawing::Size(260, 25);
			this->lblAlvaro->TabIndex = 4;
			this->lblAlvaro->Text = L"U202211741 - Alvaro Neyra ";
			this->lblAlvaro->Click += gcnew System::EventHandler(this, &FrmIntegrantes::label3_Click);
			// 
			// FrmIntegrantes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(799, 621);
			this->ControlBox = false;
			this->Controls->Add(this->lblAlvaro);
			this->Controls->Add(this->lvlIvan);
			this->Controls->Add(this->btnVolver);
			this->Controls->Add(this->lblJoao);
			this->Controls->Add(this->lblIntegrantes);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"FrmIntegrantes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"FrmIntegrantes";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnVolver_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
