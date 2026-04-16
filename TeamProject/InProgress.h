#pragma once
#include "../../../../../../Program Files (x86)/Reference Assemblies/Microsoft/Framework/.NETFramework/v4.7.2/System.Data.dll"

namespace TeamProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для InProgress
	/// </summary>
	public ref class InProgress : public System::Windows::Forms::Form
	{
	public:
		InProgress(void)
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
		~InProgress()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 35);
			this->button4->TabIndex = 5;
			this->button4->Text = L"< Назад";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &InProgress::button4_Click);
			// 
			// InProgress
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1132, 563);
			this->Controls->Add(this->button4);
			this->Name = L"InProgress";
			this->Text = L"InProgress";
			this->Load += gcnew System::EventHandler(this, &InProgress::InProgressForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void InProgressForm_Load(System::Object^ sender, System::EventArgs^ e) {
		if (!File::Exists("database.txt")) return; // Если файла нет, ничего не делаем

		StreamReader^ sr = gcnew StreamReader("database.txt");
		String^ line;
		int y = 60; // Начальная координата по вертикали для первой кнопки

		while ((line = sr->ReadLine()) != nullptr) {
			array<String^>^ data = line->Split('|'); // Разделяем строку: Название|Адрес|Статус|Фото|Макет

			String^ name = data[0];
			String^ status = data[2];

			if (status == "В процессе") {
				// Создаем кнопку динамически
				Button^ btn = gcnew Button();
				btn->Text = name; // Название из файла [cite: 17]
				btn->Location = System::Drawing::Point(50, y); // Ставим на форму
				btn->Size = System::Drawing::Size(300, 40);
				btn->FlatStyle = FlatStyle::Flat;
				btn->BackColor = Color::LightBlue;

				// Самое важное: привязываем клик, чтобы открывалась инфо о здании 
				btn->Click += gcnew EventHandler(this, &InProgress::OnProjectClick);

				this->Controls->Add(btn);
				y += 50; // Сдвигаем следующую кнопку ниже
			}
		}
		sr->Close();
	}
	private: System::Void OnProjectClick(System::Object^ sender, System::EventArgs^ e) {
		Button^ clickedButton = (Button^)sender;

		// Здесь мы создаем окно информации 
		// В идеале сюда нужно передать данные из файла, но для начала просто откроем форму
		MessageBox::Show("Открываем информацию об объекте: " + clickedButton->Text);

		/* BuildingInfoForm^ info = gcnew BuildingInfoForm();
		info->Show();
		*/
	}
};
