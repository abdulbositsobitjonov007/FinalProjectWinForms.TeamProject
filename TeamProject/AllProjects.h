#pragma once

namespace TeamProject {

	ref class ProjectsSection;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для AllProjects
	/// </summary>
	public ref class AllProjects : public System::Windows::Forms::Form
	{
	public:
		AllProjects(void)
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
		~AllProjects()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->button4->Click += gcnew System::EventHandler(this, &AllProjects::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(62, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 38);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Все проекты";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(69, 114);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(856, 419);
			this->dataGridView1->TabIndex = 7;
			// 
			// AllProjects
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(991, 560);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Name = L"AllProjects";
			this->Text = L"AllProjects";
			this->Load += gcnew System::EventHandler(this, &AllProjects::AllProjects_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AllProjects_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Очищаем таблицу перед загрузкой
			dataGridView1->Rows->Clear();
			dataGridView1->Columns->Clear();

			// Создаем колонки
			if (dataGridView1->ColumnCount == 0) {
				dataGridView1->Columns->Add("name", "Название");
				dataGridView1->Columns->Add("address", "Адрес");
				dataGridView1->Columns->Add("items", "Список вещей");
				dataGridView1->Columns->Add("status", "Статус");

				// Добавляем колонку для фото
				DataGridViewImageColumn^ photoColumn = gcnew DataGridViewImageColumn();
				photoColumn->Name = L"photo";
				photoColumn->HeaderText = L"Фото";
				photoColumn->ImageLayout = DataGridViewImageCellLayout::Zoom;
				photoColumn->Width = 120;
				dataGridView1->Columns->Add(photoColumn);

				// Устанавливаем высоту строк для отображения картинок
				dataGridView1->RowTemplate->Height = 100;
				dataGridView1->AutoResizeColumns();
			}

			// Читаем данные из файла
			String^ filePath = "database.txt";
			if (File::Exists(filePath)) {
				array<String^>^ lines = File::ReadAllLines(filePath);

				for each (String^ line in lines) {
					// Пропускаем пустые строки
					if (String::IsNullOrWhiteSpace(line)) continue;

					// Разделяем по символу "|"
					array<String^>^ parts = line->Split('|');

					// Проверяем, что у нас достаточно полей
					if (parts->Length >= 5) {
						String^ name = parts[0]->Trim();
						String^ address = parts[1]->Trim();
						String^ items = parts[2]->Trim();
						String^ status = parts[3]->Trim();
						String^ photoPath = parts[4]->Trim();

						// Загружаем изображение если путь не пуст и файл существует
						Image^ photo = nullptr;
						if (!String::IsNullOrEmpty(photoPath) && File::Exists(photoPath)) {
							try {
								photo = Image::FromFile(photoPath);
							}
							catch (Exception^ ex) {
								// Если ошибка при загрузке картинки, пропускаем
								photo = nullptr;
							}
						}

						// Добавляем строку в таблицу
						int rowIndex = dataGridView1->Rows->Add(name, address, items, status, photo);
					}
				}

				// Если данных нет
				if (dataGridView1->Rows->Count == 0) {
					MessageBox::Show("В базе данных нет проектов.");
				}
			}
			else {
				MessageBox::Show("Файл database.txt не найден. Сначала добавьте проекты.");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка при загрузке данных: " + ex->Message);
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close(); // Закрываем текущее окно
	}
	
	};
}
