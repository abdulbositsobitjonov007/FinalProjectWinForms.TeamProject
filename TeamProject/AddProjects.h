#pragma once

namespace TeamProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для AddProjects
	/// </summary>
	public ref class AddProjects : public System::Windows::Forms::Form
	{
	public:
		AddProjects(void)
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
		~AddProjects()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ buttonPhoto;
	private: System::Windows::Forms::PictureBox^ pbPhoto;
	private: System::Windows::Forms::PictureBox^ pbModel;





	private: System::Windows::Forms::Button^ buttonModel;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button1;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->buttonPhoto = (gcnew System::Windows::Forms::Button());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->pbModel = (gcnew System::Windows::Forms::PictureBox());
			this->buttonModel = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbModel))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 35);
			this->button4->TabIndex = 4;
			this->button4->Text = L"< Назад";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AddProjects::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(113, 170);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(230, 22);
			this->textBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(107, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 64);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Создать проект\r\n\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(110, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Название проекта";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(110, 213);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(161, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Адрес местоположения";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(113, 232);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(230, 22);
			this->textBox2->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(113, 278);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Список вещей";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"В процессе", L"Ещё не начатые" });
			this->comboBox1->Location = System::Drawing::Point(113, 419);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(230, 24);
			this->comboBox1->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(113, 400);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 16);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Статус";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// buttonPhoto
			// 
			this->buttonPhoto->Location = System::Drawing::Point(396, 170);
			this->buttonPhoto->Name = L"buttonPhoto";
			this->buttonPhoto->Size = System::Drawing::Size(277, 23);
			this->buttonPhoto->TabIndex = 15;
			this->buttonPhoto->Text = L"Вставить фото";
			this->buttonPhoto->UseVisualStyleBackColor = true;
			this->buttonPhoto->Click += gcnew System::EventHandler(this, &AddProjects::button1_Click);
			// 
			// pbPhoto
			// 
			this->pbPhoto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pbPhoto->Location = System::Drawing::Point(396, 204);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(277, 239);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbPhoto->TabIndex = 16;
			this->pbPhoto->TabStop = false;
			// 
			// pbModel
			// 
			this->pbModel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pbModel->Location = System::Drawing::Point(728, 204);
			this->pbModel->Name = L"pbModel";
			this->pbModel->Size = System::Drawing::Size(277, 239);
			this->pbModel->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbModel->TabIndex = 18;
			this->pbModel->TabStop = false;
			// 
			// buttonModel
			// 
			this->buttonModel->Location = System::Drawing::Point(728, 169);
			this->buttonModel->Name = L"buttonModel";
			this->buttonModel->Size = System::Drawing::Size(277, 23);
			this->buttonModel->TabIndex = 17;
			this->buttonModel->Text = L"Вставить макет";
			this->buttonModel->UseVisualStyleBackColor = true;
			this->buttonModel->Click += gcnew System::EventHandler(this, &AddProjects::buttonModel_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(113, 297);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(230, 83);
			this->richTextBox1->TabIndex = 19;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(810, 476);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 46);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Сохранить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AddProjects::button1_Click_1);
			// 
			// AddProjects
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1206, 570);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->pbModel);
			this->Controls->Add(this->buttonModel);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->buttonPhoto);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Name = L"AddProjects";
			this->Text = L"AddProjects";
			this->Load += gcnew System::EventHandler(this, &AddProjects::AddProjects_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbModel))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Настраиваем окно выбора файла, чтобы оно искало только картинки
		openFileDialog1->Filter = "Изображения (*.jpg;*.jpeg;*.png)|*.jpg;*.jpeg;*.png";
		openFileDialog1->Title = "Выберите фотографию здания";

		// Если пользователь выбрал файл и нажал "Открыть"
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			// Сохраняем путь в переменную и выводим в первый PictureBox
			this->pbPhoto->ImageLocation = openFileDialog1->FileName;
			MessageBox::Show("Фотография успешно загружена!");
		}
	}
	private: System::Void buttonModel_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->Filter = "Изображения (*.jpg;*.jpeg;*.png)|*.jpg;*.jpeg;*.png";
		openFileDialog1->Title = "Выберите макет здания";

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			this->pbModel->ImageLocation = openFileDialog1->FileName;
			MessageBox::Show("Макет успешно загружен!");
		}
	}
	private: System::Void AddProjects_Load(System::Object^ sender, System::EventArgs^ e) {
		// Инициализация значений при загрузке формы
		if (this->comboBox1->Items->Count > 0) this->comboBox1->SelectedIndex = 0;
	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		// Проверка на пустое название
		if (this->textBox1->Text->Trim() == "") {
			MessageBox::Show("Пожалуйста, введите название проекта!");
			return;
		}

		String^ selectedStatus = this->comboBox1->Text;

		// Учитываем обе версии строки с "ё" и без
		if (selectedStatus == "В процессе" || selectedStatus == "Ещё не начатые" || selectedStatus == "Еще не начатые") {
			try {
				StreamWriter^ sw = gcnew StreamWriter("database.txt", true);

				// Используем richTextBox1 как поле "Список вещей"
				String^ itemsList = this->richTextBox1->Text;

				// Заменяем переносы строк на запятые и пробелы, чтобы одна запись = одна строка в файле
				itemsList = itemsList->Replace("\r\n", ", ");
				itemsList = itemsList->Replace("\n", ", ");
				itemsList = itemsList->Replace("\r", ", ");
				// Удаляем двойные пробелы и запятые
				while (itemsList->Contains(", , ")) {
					itemsList = itemsList->Replace(", , ", ", ");
				}

				// Проверяем пути к изображениям на null
				String^ photoPath = (this->pbPhoto->ImageLocation == nullptr) ? "" : this->pbPhoto->ImageLocation;
				String^ modelPath = (this->pbModel->ImageLocation == nullptr) ? "" : this->pbModel->ImageLocation;

				// Формат: Название|Адрес|Список вещей|Статус|Путь_к_фото|Путь_к_макету
				sw->WriteLine(
					this->textBox1->Text + "|" +
					this->textBox2->Text + "|" +
					itemsList + "|" +
					selectedStatus + "|" +
					photoPath + "|" +
					modelPath
				);

						sw->Close();

						MessageBox::Show("Проект '" + this->textBox1->Text + "' успешно сохранен в базу!");
						this->DialogResult = System::Windows::Forms::DialogResult::OK;
						this->Close(); // Закрываем диалог
					}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка при сохранении: " + ex->Message);
			}
		}
		else {
			MessageBox::Show("Пожалуйста, выберите статус проекта!");
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
