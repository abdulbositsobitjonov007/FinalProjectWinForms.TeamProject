#pragma once

namespace TeamProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainMenuForm
	/// </summary>
	public ref class MainMenuForm : public System::Windows::Forms::Form
	{
	public:
		MainMenuForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainMenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnProjects;
	private: System::Windows::Forms::Button^ btnFinance;
	private: System::Windows::Forms::Button^ btnAboutCompany;
	private: System::Windows::Forms::Button^ btnExit;

	protected:

	protected:



	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnProjects = (gcnew System::Windows::Forms::Button());
			this->btnFinance = (gcnew System::Windows::Forms::Button());
			this->btnAboutCompany = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnProjects
			// 
			this->btnProjects->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnProjects->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnProjects->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnProjects->Location = System::Drawing::Point(12, 74);
			this->btnProjects->Name = L"btnProjects";
			this->btnProjects->Size = System::Drawing::Size(175, 39);
			this->btnProjects->TabIndex = 0;
			this->btnProjects->Text = L"Проекты";
			this->btnProjects->UseVisualStyleBackColor = false;
			// 
			// btnFinance
			// 
			this->btnFinance->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnFinance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnFinance->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnFinance->Location = System::Drawing::Point(12, 119);
			this->btnFinance->Name = L"btnFinance";
			this->btnFinance->Size = System::Drawing::Size(175, 41);
			this->btnFinance->TabIndex = 1;
			this->btnFinance->Text = L"Расходы и доходы";
			this->btnFinance->UseVisualStyleBackColor = false;
			// 
			// btnAboutCompany
			// 
			this->btnAboutCompany->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnAboutCompany->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAboutCompany->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnAboutCompany->Location = System::Drawing::Point(12, 166);
			this->btnAboutCompany->Name = L"btnAboutCompany";
			this->btnAboutCompany->Size = System::Drawing::Size(175, 42);
			this->btnAboutCompany->TabIndex = 2;
			this->btnAboutCompany->Text = L"О компании";
			this->btnAboutCompany->UseVisualStyleBackColor = false;
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnExit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnExit->Location = System::Drawing::Point(12, 214);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(175, 41);
			this->btnExit->TabIndex = 3;
			this->btnExit->Text = L"Выйти";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MainMenuForm::btnExit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(3, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 49);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Главная";
			// 
			// MainMenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1188, 588);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnAboutCompany);
			this->Controls->Add(this->btnFinance);
			this->Controls->Add(this->btnProjects);
			this->Name = L"MainMenuForm";
			this->Text = L"MainMenuForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close(); // Закрывает текущее главное меню
		// Если вы хотите вернуться на форму логина, она должна быть открыта или создана заново
	}
};
}
