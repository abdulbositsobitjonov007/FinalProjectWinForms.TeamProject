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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Label^ label1;





	protected:





	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(1, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(238, 609);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(11, 224);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(195, 65);
			this->button5->TabIndex = 5;
			this->button5->Text = L"о нашей компании ";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(11, 508);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(195, 65);
			this->button4->TabIndex = 4;
			this->button4->Text = L"выход";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(11, 126);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(195, 65);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Сотртудники";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(11, 34);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(195, 65);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Проекты";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// chart3
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart3->Legends->Add(legend1);
			this->chart3->Location = System::Drawing::Point(651, 34);
			this->chart3->Name = L"chart3";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart3->Series->Add(series1);
			this->chart3->Size = System::Drawing::Size(544, 468);
			this->chart3->TabIndex = 3;
			this->chart3->Text = L"chart3";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(389, 126);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(103, 20);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(389, 181);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(103, 20);
			this->radioButton2->TabIndex = 5;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(389, 230);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(103, 20);
			this->radioButton3->TabIndex = 6;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 25.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(245, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(245, 55);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Аналитика ";
			// 
			// MainMenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1198, 610);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MainMenuForm";
			this->Text = L"MainMenuForm";
			this->Load += gcnew System::EventHandler(this, &MainMenuForm::MainMenuForm_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close(); // Закрывает текущее главное меню
		// Если вы хотите вернуться на форму логина, она должна быть открыта или создана заново
	}
private: System::Void MainMenuForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void chart3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
