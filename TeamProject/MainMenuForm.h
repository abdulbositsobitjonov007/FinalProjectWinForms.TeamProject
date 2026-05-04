#pragma once

#include "ProjectsSection.h"
#include "Finance.h"
#include "ListofEmployee.h"

namespace TeamProject {
	ref class ProjectsSection;

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

	private: System::Windows::Forms::Button^ btnAboutCompany;
	private: System::Windows::Forms::Button^ btnExit;

	protected:

	protected:



	private: System::Windows::Forms::Label^ label1;
<<<<<<< HEAD
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
=======
	private: System::Windows::Forms::Button^ btnFinance;
	private: System::Windows::Forms::Button^ btnEmployee;

>>>>>>> f454eca1bdb450ce768126efc96b79a9aa0fc008




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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->btnProjects = (gcnew System::Windows::Forms::Button());
			this->btnAboutCompany = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
<<<<<<< HEAD
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
=======
			this->btnFinance = (gcnew System::Windows::Forms::Button());
			this->btnEmployee = (gcnew System::Windows::Forms::Button());
>>>>>>> f454eca1bdb450ce768126efc96b79a9aa0fc008
			this->SuspendLayout();
			// 
			// btnProjects
			// 
			this->btnProjects->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnProjects->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnProjects->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnProjects->Location = System::Drawing::Point(37, 88);
			this->btnProjects->Name = L"btnProjects";
			this->btnProjects->Size = System::Drawing::Size(175, 39);
			this->btnProjects->TabIndex = 0;
			this->btnProjects->Text = L"Проекты";
			this->btnProjects->UseVisualStyleBackColor = false;
<<<<<<< HEAD
			this->btnProjects->Click += gcnew System::EventHandler(this, &MainMenuForm::btnProjects_Click_1);
			// 
			// btnFinance
			// 
			this->btnFinance->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnFinance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnFinance->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnFinance->Location = System::Drawing::Point(37, 133);
			this->btnFinance->Name = L"btnFinance";
			this->btnFinance->Size = System::Drawing::Size(175, 41);
			this->btnFinance->TabIndex = 1;
			this->btnFinance->Text = L"Расходы и доходы";
			this->btnFinance->UseVisualStyleBackColor = false;
			this->btnFinance->Click += gcnew System::EventHandler(this, &MainMenuForm::btnFinance_Click);
=======
			this->btnProjects->Click += gcnew System::EventHandler(this, &MainMenuForm::btnProjects_Click);
>>>>>>> f454eca1bdb450ce768126efc96b79a9aa0fc008
			// 
			// btnAboutCompany
			// 
			this->btnAboutCompany->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnAboutCompany->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAboutCompany->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
<<<<<<< HEAD
			this->btnAboutCompany->Location = System::Drawing::Point(37, 180);
=======
			this->btnAboutCompany->Location = System::Drawing::Point(12, 180);
>>>>>>> f454eca1bdb450ce768126efc96b79a9aa0fc008
			this->btnAboutCompany->Name = L"btnAboutCompany";
			this->btnAboutCompany->Size = System::Drawing::Size(175, 42);
			this->btnAboutCompany->TabIndex = 2;
			this->btnAboutCompany->Text = L"О компании";
			this->btnAboutCompany->UseVisualStyleBackColor = false;
			this->btnAboutCompany->Click += gcnew System::EventHandler(this, &MainMenuForm::btnAboutCompany_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnExit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnExit->Location = System::Drawing::Point(36, 491);
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
<<<<<<< HEAD
			this->label1->Location = System::Drawing::Point(37, 23);
=======
			this->label1->Location = System::Drawing::Point(35, 9);
>>>>>>> f454eca1bdb450ce768126efc96b79a9aa0fc008
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 48);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Главная";
			this->label1->Click += gcnew System::EventHandler(this, &MainMenuForm::label1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->btnProjects);
			this->groupBox1->Controls->Add(this->btnExit);
			this->groupBox1->Controls->Add(this->btnFinance);
			this->groupBox1->Controls->Add(this->btnAboutCompany);
			this->groupBox1->Location = System::Drawing::Point(-25, -14);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(237, 553);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(704, 91);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(287, 237);
			this->chart1->TabIndex = 6;
			this->chart1->Text = L"chart1";
			// 
			// btnFinance
			// 
			this->btnFinance->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnFinance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnFinance->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnFinance->Location = System::Drawing::Point(11, 119);
			this->btnFinance->Name = L"btnFinance";
			this->btnFinance->Size = System::Drawing::Size(175, 42);
			this->btnFinance->TabIndex = 5;
			this->btnFinance->Text = L"Аналитика";
			this->btnFinance->UseVisualStyleBackColor = false;
			this->btnFinance->Click += gcnew System::EventHandler(this, &MainMenuForm::btnFinance_Click);
			// 
			// btnEmployee
			// 
			this->btnEmployee->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnEmployee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEmployee->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnEmployee->Location = System::Drawing::Point(12, 243);
			this->btnEmployee->Name = L"btnEmployee";
			this->btnEmployee->Size = System::Drawing::Size(175, 42);
			this->btnEmployee->TabIndex = 6;
			this->btnEmployee->Text = L"Сотрудники";
			this->btnEmployee->UseVisualStyleBackColor = false;
			this->btnEmployee->Click += gcnew System::EventHandler(this, &MainMenuForm::button1_Click);
			// 
			// MainMenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1188, 530);
<<<<<<< HEAD
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->groupBox1);
=======
			this->Controls->Add(this->btnEmployee);
			this->Controls->Add(this->btnFinance);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnAboutCompany);
			this->Controls->Add(this->btnProjects);
>>>>>>> f454eca1bdb450ce768126efc96b79a9aa0fc008
			this->Name = L"MainMenuForm";
			this->Text = L"MainMenuForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainMenuForm::MainMenuForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MainMenuForm::MainMenuForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

			  // 1. Переход в проекты
			  private: System::Void btnProjects_Click(System::Object^ sender, System::EventArgs^ e) {
				  ProjectsSection^ projMenu = gcnew ProjectsSection();
				  projMenu->Show(this);
				  this->Hide();
			  }

		  // 2. Логика выхода
	   private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		   Application::Exit();
	   }

		  // 3. Полное закрытие программы при нажатии на "крестик"
	   private: System::Void MainMenuForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		   Application::Exit();
	   }

	   private: System::Void MainMenuForm_Load(System::Object^ sender, System::EventArgs^ e) {
		   // Логика загрузки формы при открытии
	   }

	   private: System::Void btnFinance_Click(System::Object^ sender, System::EventArgs^ e) {
		   MyForm1^ financeForm = gcnew MyForm1();
		   financeForm->Show(this);
		   this->Hide();
	   }

	   private: System::Void btnAboutCompany_Click(System::Object^ sender, System::EventArgs^ e) {
		   // О компании - реализация
	   }

	   private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		   ListofEmployee^ employeeForm = gcnew ListofEmployee();
		   employeeForm->Show(this);
		   this->Hide();
	   }


<<<<<<< HEAD
	   // 3. Полное закрытие программы при нажатии на "крестик"
private: System::Void MainMenuForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();
}
private: System::Void MainMenuForm_Load(System::Object^ sender, System::EventArgs^ e) {
	// Привязка обработчика кнопки "Проекты"
	this->btnProjects->Click += gcnew System::EventHandler(this, &MainMenuForm::btnProjects_Click);
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnAboutCompany_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnFinance_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnProjects_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
=======
>>>>>>> f454eca1bdb450ce768126efc96b79a9aa0fc008
};
}
