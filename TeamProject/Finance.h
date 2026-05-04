#pragma once
#include <cmath> 
namespace TeamProject {
	ref class MainMenuForm;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		double Income(double x)
		{
			return 100 + 10 * x + 20 * sin(x / 2.0) + 5 * log(x + 1);
		}

		double Expense(double x)
		{
			return 80 + 6 * x + 15 * cos(x / 3.0) + 3 * log(x + 1);
		}

		double Profit(double x)
		{
			return Income(x) - Expense(x);
		}

		void DrawChart()
		{
			chart1->Series[0]->Points->Clear();

			array<String^>^ months = {
				"Jan","Feb","Mar","Apr","May","Jun",
				"Jul","Aug","Sep","Oct","Nov","Dec"
			};

			for (int i = 0; i < 12; i++)
			{
				double x = i;
				double y;

				if (radioIncome->Checked)
				{
					chart1->Series[0]->Color = Color::Green;
					y = Income(x);
				}
				else if (radioExpense->Checked)
				{
					chart1->Series[0]->Color = Color::Red;
					y = Expense(x);
				}
				else
				{
					chart1->Series[0]->Color = Color::Blue;
					y = Profit(x);
				}

				chart1->Series[0]->Points->AddXY(months[i], y);
			}
		}
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioProfit;
	protected:

	private: System::Windows::Forms::RadioButton^ radioExpense;

	private: System::Windows::Forms::RadioButton^ radioIncome;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button4;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioProfit = (gcnew System::Windows::Forms::RadioButton());
			this->radioExpense = (gcnew System::Windows::Forms::RadioButton());
			this->radioIncome = (gcnew System::Windows::Forms::RadioButton());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioProfit);
			this->groupBox1->Controls->Add(this->radioExpense);
			this->groupBox1->Controls->Add(this->radioIncome);
			this->groupBox1->Location = System::Drawing::Point(12, 397);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(239, 203);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// radioProfit
			// 
			this->radioProfit->AutoSize = true;
			this->radioProfit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->radioProfit->Location = System::Drawing::Point(41, 111);
			this->radioProfit->Name = L"radioProfit";
			this->radioProfit->Size = System::Drawing::Size(143, 33);
			this->radioProfit->TabIndex = 2;
			this->radioProfit->TabStop = true;
			this->radioProfit->Text = L"прибыль ";
			this->radioProfit->UseVisualStyleBackColor = true;
			this->radioProfit->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton3_CheckedChanged);
			// 
			// radioExpense
			// 
			this->radioExpense->AutoSize = true;
			this->radioExpense->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->radioExpense->Location = System::Drawing::Point(41, 70);
			this->radioExpense->Name = L"radioExpense";
			this->radioExpense->Size = System::Drawing::Size(114, 33);
			this->radioExpense->TabIndex = 1;
			this->radioExpense->TabStop = true;
			this->radioExpense->Text = L"Расход";
			this->radioExpense->UseVisualStyleBackColor = true;
			this->radioExpense->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton2_CheckedChanged);
			// 
			// radioIncome
			// 
			this->radioIncome->AutoSize = true;
			this->radioIncome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->radioIncome->Location = System::Drawing::Point(41, 35);
			this->radioIncome->Name = L"radioIncome";
			this->radioIncome->Size = System::Drawing::Size(103, 33);
			this->radioIncome->TabIndex = 0;
			this->radioIncome->TabStop = true;
			this->radioIncome->Text = L"Доход";
			this->radioIncome->UseVisualStyleBackColor = true;
			this->radioIncome->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioIncome_CheckedChanged);
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Transparent;
			this->chart1->BorderlineColor = System::Drawing::Color::Transparent;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(277, 7);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(861, 631);
			this->chart1->TabIndex = 1;
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm1::chart1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 35);
			this->button4->TabIndex = 4;
			this->button4->Text = L"< Назад";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(988, 650);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
		chart1->Legends[0]->Enabled = false;
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioExpense->Checked)
			DrawChart();
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioProfit->Checked)
			DrawChart();
	}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		radioIncome->Checked = true;

		chart1->Series[0]->ChartType =
			System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;

		// 🔥 толщина линии
		chart1->Series[0]->BorderWidth = 5;

		DrawChart();
	}
	private: System::Void radioIncome_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioIncome->Checked)
			DrawChart();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
