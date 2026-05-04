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

    public ref class MainMenuForm : public System::Windows::Forms::Form
    {
    public:
        MainMenuForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MainMenuForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Button^ btnProjects;
    private: System::Windows::Forms::Button^ btnFinance;
    private: System::Windows::Forms::Button^ btnEmployee;
    private: System::Windows::Forms::Button^ btnAboutCompany;
    private: System::Windows::Forms::Button^ btnExit;
    private: System::Windows::Forms::Label^ label1;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->btnProjects = (gcnew System::Windows::Forms::Button());
            this->btnFinance = (gcnew System::Windows::Forms::Button());
            this->btnEmployee = (gcnew System::Windows::Forms::Button());
            this->btnAboutCompany = (gcnew System::Windows::Forms::Button());
            this->btnExit = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();

            // btnProjects
            this->btnProjects->BackColor = System::Drawing::SystemColors::MenuHighlight;
            this->btnProjects->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->btnProjects->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btnProjects->Location = System::Drawing::Point(12, 88);
            this->btnProjects->Name = L"btnProjects";
            this->btnProjects->Size = System::Drawing::Size(175, 39);
            this->btnProjects->TabIndex = 0;
            this->btnProjects->Text = L"Проекты";
            this->btnProjects->UseVisualStyleBackColor = false;
            this->btnProjects->Click += gcnew System::EventHandler(this, &MainMenuForm::btnProjects_Click);

            // btnFinance
            this->btnFinance->BackColor = System::Drawing::SystemColors::MenuHighlight;
            this->btnFinance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->btnFinance->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btnFinance->Location = System::Drawing::Point(12, 133);
            this->btnFinance->Name = L"btnFinance";
            this->btnFinance->Size = System::Drawing::Size(175, 41);
            this->btnFinance->TabIndex = 1;
            this->btnFinance->Text = L"Аналитика";
            this->btnFinance->UseVisualStyleBackColor = false;
            this->btnFinance->Click += gcnew System::EventHandler(this, &MainMenuForm::btnFinance_Click);

            // btnEmployee
            this->btnEmployee->BackColor = System::Drawing::SystemColors::MenuHighlight;
            this->btnEmployee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->btnEmployee->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btnEmployee->Location = System::Drawing::Point(12, 180);
            this->btnEmployee->Name = L"btnEmployee";
            this->btnEmployee->Size = System::Drawing::Size(175, 42);
            this->btnEmployee->TabIndex = 2;
            this->btnEmployee->Text = L"Сотрудники";
            this->btnEmployee->UseVisualStyleBackColor = false;
            this->btnEmployee->Click += gcnew System::EventHandler(this, &MainMenuForm::btnEmployee_Click);

            // btnAboutCompany
            this->btnAboutCompany->BackColor = System::Drawing::SystemColors::MenuHighlight;
            this->btnAboutCompany->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->btnAboutCompany->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btnAboutCompany->Location = System::Drawing::Point(12, 228);
            this->btnAboutCompany->Name = L"btnAboutCompany";
            this->btnAboutCompany->Size = System::Drawing::Size(175, 42);
            this->btnAboutCompany->TabIndex = 3;
            this->btnAboutCompany->Text = L"О компании";
            this->btnAboutCompany->UseVisualStyleBackColor = false;
            this->btnAboutCompany->Click += gcnew System::EventHandler(this, &MainMenuForm::btnAboutCompany_Click);

            // btnExit
            this->btnExit->BackColor = System::Drawing::SystemColors::MenuHighlight;
            this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->btnExit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btnExit->Location = System::Drawing::Point(12, 491);
            this->btnExit->Name = L"btnExit";
            this->btnExit->Size = System::Drawing::Size(175, 41);
            this->btnExit->TabIndex = 4;
            this->btnExit->Text = L"Выйти";
            this->btnExit->UseVisualStyleBackColor = false;
            this->btnExit->Click += gcnew System::EventHandler(this, &MainMenuForm::btnExit_Click);

            // label1
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->label1->Location = System::Drawing::Point(35, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(135, 48);
            this->label1->TabIndex = 5;
            this->label1->Text = L"Главная";

            // MainMenuForm
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1188, 530);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->btnExit);
            this->Controls->Add(this->btnAboutCompany);
            this->Controls->Add(this->btnEmployee);
            this->Controls->Add(this->btnFinance);
            this->Controls->Add(this->btnProjects);
            this->Name = L"MainMenuForm";
            this->Text = L"MainMenuForm";
            this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainMenuForm::MainMenuForm_FormClosed);
            this->Load += gcnew System::EventHandler(this, &MainMenuForm::MainMenuForm_Load);
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion

    private: System::Void btnProjects_Click(System::Object^ sender, System::EventArgs^ e) {
        ProjectsSection^ projMenu = gcnew ProjectsSection();
        projMenu->Show(this);
        this->Hide();
    }

    private: System::Void btnFinance_Click(System::Object^ sender, System::EventArgs^ e) {
        MyForm1^ financeForm = gcnew MyForm1();
        financeForm->Show(this);
        this->Hide();
    }

    private: System::Void btnEmployee_Click(System::Object^ sender, System::EventArgs^ e) {
        ListofEmployee^ employeeForm = gcnew ListofEmployee();
        employeeForm->Show(this);
        this->Hide();
    }

    private: System::Void btnAboutCompany_Click(System::Object^ sender, System::EventArgs^ e) {
        MessageBox::Show("О компании - информация");
    }

    private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
        Application::Exit();
    }

    private: System::Void MainMenuForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
        Application::Exit();
    }

    private: System::Void MainMenuForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}
