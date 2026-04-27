
#include "AddProjects.h"
#include "AllProjects.h"

namespace TeamProject {
	ref class MainMenuForm;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ProjectsSection
	/// </summary>
	public ref class ProjectsSection : public System::Windows::Forms::Form
	{
	public:
		ProjectsSection(void)
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
		~ProjectsSection()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button2;

	protected:


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			this->button1->BackColor = System::Drawing::Color::Cyan;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(76, 73);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(441, 426);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Добавить проект";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ProjectsSection::button1_Click);
			this->button4->Location = System::Drawing::Point(12, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 35);
			this->button4->TabIndex = 3;
			this->button4->Text = L"< Назад";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ProjectsSection::button4_Click);
			this->button2->BackColor = System::Drawing::Color::Lime;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(523, 73);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(441, 426);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Все проекты";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ProjectsSection::button2_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1201, 586);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Name = L"ProjectsSection";
			this->Text = L"ProjectsSection";
			this->Load += gcnew System::EventHandler(this, &ProjectsSection::ProjectsSection_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		// Кнопка "Добавить проект" (Синяя)
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		AddProjects^ addForm = gcnew AddProjects();
		addForm->ShowDialog(this); // Показываем как модальное диалоговое окно
		// После закрытия диалога ProjectsSection остаётся видимой
	}

		   // Кнопка "Все проекты" (Зеленая)
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Создаем и открываем окно со списком всех проектов
	AllProjects^ allProj = gcnew AllProjects();
	allProj->Show();
	this->Hide(); // Скрываем текущее окно
}

		   // Кнопка "< Назад"
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ProjectsSection_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
