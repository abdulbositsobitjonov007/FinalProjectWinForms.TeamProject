#pragma once

namespace TeamProject {
	ref class MainMenuForm;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ListofEmployee
	/// </summary>
	public ref class ListofEmployee : public System::Windows::Forms::Form
	{
	public:
		ListofEmployee(void)
		{
			InitializeComponent();

			table = gcnew DataTable();
			table->Columns->Add("ФИО");
			table->Columns->Add("Должность");
			table->Columns->Add("Стаж");
			table->Columns->Add("Отдел");
			table->Columns->Add("Зарплата (сум)");
			table->Columns->Add("Телефон");
			table->Columns->Add("Статус");
			table->Rows->Add("Азизбек Каримов", "Директор", 12, "Администрация", 12000000, "+998901112233", "Работает");
			table->Rows->Add("Жасур Рахмонов", "Инженер", 8, "Технический отдел", 8500000, "+998902223344", "Работает");
			table->Rows->Add("Дилшод Турсунов", "Инженер", 7, "Технический отдел", 8000000, "+998903334455", "Работает");
			table->Rows->Add("Шерзод Хасанов", "Мастер", 6, "Ремонтный отдел", 6500000, "+998904445566", "В отпуске");
			table->Rows->Add("Бекзод Йулдошев", "Мастер", 5, "Ремонтный отдел", 6000000, "+998905556677", "Работает");

			table->Rows->Add("Ойбек Кадыров", "Электрик", 4, "Электроотдел", 5000000, "+998906667788", "Работает");
			table->Rows->Add("Рустам Алиев", "Электрик", 3, "Электроотдел", 4500000, "+998907778899", "Работает");
			table->Rows->Add("Сардор Эшонов", "Слесарь", 5, "Ремонтный отдел", 5500000, "+998908889900", "Работает");
			table->Rows->Add("Жамшид Исмоилов", "Слесарь", 4, "Ремонтный отдел", 5000000, "+998901122334", "В отпуске");
			table->Rows->Add("Акмал Собиров", "Техник", 2, "Сервис", 4000000, "+998902233445", "Работает");

			table->Rows->Add("Достон Нурматов", "Техник", 3, "Сервис", 4200000, "+998903344556", "Работает");
			table->Rows->Add("Миржалол Косимов", "Мастер", 6, "Ремонтный отдел", 7000000, "+998904455667", "Работает");
			table->Rows->Add("Улугбек Эргашев", "Инженер", 7, "Технический отдел", 7800000, "+998905566778", "Работает");
			table->Rows->Add("Шохрух Нематов", "Слесарь", 3, "Ремонтный отдел", 4800000, "+998906677889", "Работает");
			table->Rows->Add("Санжар Тохиров", "Техник", 2, "Сервис", 3900000, "+998907788990", "Работает");

			table->Rows->Add("Фаррух Худойбердиев", "Электрик", 4, "Электроотдел", 5200000, "+998908899001", "Работает");
			table->Rows->Add("Бобур Рахмонов", "Мастер", 5, "Ремонтный отдел", 6100000, "+998901210987", "Работает");
			table->Rows->Add("Ислом Файзиев", "Инженер", 6, "Технический отдел", 7500000, "+998902321098", "Работает");
			table->Rows->Add("Темур Джураев", "Слесарь", 4, "Ремонтный отдел", 5200000, "+998903432109", "Работает");
			table->Rows->Add("Анвар Усмонов", "Мастер", 5, "Ремонтный отдел", 6300000, "+998904543210", "В отпуске");

			table->Rows->Add("Камолиддин Расулов", "Техник", 2, "Сервис", 4100000, "+998905654321", "Работает");
			table->Rows->Add("Зафарбек Кадыров", "Электрик", 3, "Электроотдел", 4600000, "+998906765432", "Работает");
			table->Rows->Add("Оятуллох Каримов", "Слесарь", 4, "Ремонтный отдел", 5000000, "+998907876543", "Работает");
			table->Rows->Add("Жавохир Саидов", "Техник", 2, "Сервис", 3900000, "+998908987654", "Работает");
			table->Rows->Add("Аббосхон Ёкубов", "Мастер", 6, "Ремонтный отдел", 7200000, "+998901098765", "Работает");

			table->Rows->Add("Шахзод Курбанов", "Электрик", 4, "Электроотдел", 5300000, "+998902109876", "Работает");
			table->Rows->Add("Нодирбек Хамидов", "Слесарь", 5, "Ремонтный отдел", 6000000, "+998903210987", "Работает");
			table->Rows->Add("Иброхим Турсунбоев", "Техник", 3, "Сервис", 4300000, "+998904321098", "Работает");
			table->Rows->Add("Сардор Юлдашев", "Мастер", 6, "Ремонтный отдел", 7000000, "+998905432109", "Работает");
			table->Rows->Add("Жасур Тухтаев", "Инженер", 7, "Технический отдел", 8200000, "+998906543210", "Работает");

			dataGridView1->DataSource = table;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ListofEmployee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
 	private: System::Data::DataTable^ table;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(104, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(790, 781);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ListofEmployee::dataGridView1_CellContentClick);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 35);
			this->button4->TabIndex = 5;
			this->button4->Text = L"< Назад";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ListofEmployee::button4_Click);
			// 
			// ListofEmployee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(894, 787);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ListofEmployee";
			this->Text = L"ListofEmployee";
			this->Load += gcnew System::EventHandler(this, &ListofEmployee::ListofEmployee_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ListofEmployee_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
};
}
