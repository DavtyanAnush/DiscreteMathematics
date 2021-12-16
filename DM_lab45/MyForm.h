#include "struct.h"
#include "string.h"
#pragma once

namespace DMlab45 {

	/// <summary>
	/// Сводка для MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ закрытьToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->закрытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(810, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->открытьToolStripMenuItem,
					this->сохранитьToolStripMenuItem, this->закрытьToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->открытьToolStripMenuItem->Text = L"Открыть...";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить...";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// закрытьToolStripMenuItem
			// 
			this->закрытьToolStripMenuItem->Name = L"закрытьToolStripMenuItem";
			this->закрытьToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->закрытьToolStripMenuItem->Text = L"Закрыть";
			this->закрытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::закрытьToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(138, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Добавить вершину";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 27);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(810, 424);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button9);
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(802, 398);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Функции графа";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 248);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 21);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Путь: ";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(62, 186);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(144, 40);
			this->button9->TabIndex = 20;
			this->button9->Text = L"Обход в глубину";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(555, 349);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(144, 40);
			this->button8->TabIndex = 19;
			this->button8->Text = L"Сохранить";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(555, 286);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(144, 40);
			this->button7->TabIndex = 18;
			this->button7->Text = L"Загрузить";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(62, 349);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(144, 40);
			this->button6->TabIndex = 17;
			this->button6->Text = L"Сумма степеней всех вершин графа";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(62, 286);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(144, 40);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Проверка на полноту";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(247, 106);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(270, 291);
			this->dataGridView1->TabIndex = 12;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(644, 71);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(144, 23);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Удалить ребро";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(520, 71);
			this->textBox5->MaxLength = 1;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 13;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(416, 71);
			this->textBox6->MaxLength = 1;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(87, 20);
			this->textBox6->TabIndex = 9;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox6_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(434, 24);
			this->textBox4->MaxLength = 1;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(87, 20);
			this->textBox4->TabIndex = 8;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(555, 21);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(144, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Удалить вершину";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(232, 68);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Добавить ребро";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(110, 68);
			this->textBox3->MaxLength = 1;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(87, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(4, 68);
			this->textBox2->MaxLength = 1;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(87, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(17, 21);
			this->textBox1->MaxLength = 1;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(87, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(802, 398);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Отображение графа";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tabPage2_Paint);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Вершины";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Смежные вершины";
			this->Column2->Name = L"Column2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(810, 450);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Представление графов в ЭВМ. Операции над графами. Алгоритмы на графах";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void закрытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Application::Exit();
	}

	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		char n = e->KeyChar;													//ограничение ввода символов
		if ((n < 49 || n > 57) && n!=8) e->Handled = true;
		
	}
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		char n = e->KeyChar;													//ограничение ввода символов
		if ((n < 49 || n > 57) && n != 8) e->Handled = true;
	}
	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		char n = e->KeyChar;													//ограничение ввода символов
		if ((n < 49 || n > 57) && n != 8) e->Handled = true;
	}
	private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		char n = e->KeyChar;													//ограничение ввода символов
		if ((n < 49 || n > 57) && n != 8) e->Handled = true;
	}
	private: System::Void textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		char n = e->KeyChar;													//ограничение ввода символов
		if ((n < 49 || n > 57) && n != 8) e->Handled = true;
	}
	private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
	{
		char n = e->KeyChar;													//ограничение ввода символов
		if ((n < 49 || n > 57) && n != 8) e->Handled = true;
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)	//добавление вершины
	{
		if (G.addvertex(Convert::ToInt32(textBox1->Text)))
		{
			G.addvertex(Convert::ToInt32(textBox1->Text));					
			int q = dataGridView1->Rows->Add();
			dataGridView1->Rows[q]->Cells[0]->Value = textBox1->Text;

		} else MessageBox::Show("Такая вершина уже есть!!!");

		textBox1->Text = "";
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)   //удаление вершины
	{
		if (G.delvertex(Convert::ToInt32(textBox4->Text))) 
		{
			int m[9] = { 0,0,0,0,0,0,0,0,0 };
			G.delvertex(Convert::ToInt32(textBox4->Text));
			for (int i = 0; i < dataGridView1->Rows->Count - 1; i++)
			{
				if (dataGridView1->Rows[i]->Cells[0]->Value->Equals(textBox4->Text))
				{
					dataGridView1->Rows->RemoveAt(i);
				}
			}
			for (int i = 0; i < dataGridView1->Rows->Count - 1; i++)
			{
				dataGridView1->Rows[i]->Cells[1]->Value = "";
				G.display(Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value), m);
				for (int j = 0; j < 9; j++)
					if (m[j] != 0) dataGridView1->Rows[i]->Cells[1]->Value
						+= Convert::ToString(m[j]);
			}
		}
		else MessageBox::Show("Такой вершины нет!!!");
		textBox4->Text = "";
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)    //добавление ребра
	{
		if(G.addedge(Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text)))
		{ 
			int m[9] = {0,0,0,0,0,0,0,0,0};				
			G.addedge(Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text));
			for (int i = 0; i < dataGridView1->Rows->Count-1; i++)
			{
				if (dataGridView1->Rows[i]->Cells[0]->Value->Equals(textBox2->Text))
				{

					dataGridView1->Rows[i]->Cells[1]->Value = "";
				
					G.display(Convert::ToInt32(textBox2->Text), m);
					for (int j = 0; j < 9; j++)
						if (m[j] != 0) dataGridView1->Rows[i]->Cells[1]->Value 
							+= Convert::ToString(m[j]);
				}
			
				if (dataGridView1->Rows[i]->Cells[0]->Value->Equals(textBox3->Text))
				{

					dataGridView1->Rows[i]->Cells[1]->Value = "";
					G.display(Convert::ToInt32(textBox3->Text), m);
					for (int j = 0; j < 9; j++)
						if (m[j] != 0) dataGridView1->Rows[i]->Cells[1]->Value
							+= Convert::ToString(m[j]);
				}
			}
		} else MessageBox::Show("Ошибка добавления ребра");

		textBox2->Text = "";
		textBox3->Text = "";
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)  //удаление ребра
	{
		if (G.deledge(Convert::ToInt32(textBox6->Text), Convert::ToInt32(textBox5->Text)))
		{
			int m[9] = { 0,0,0,0,0,0,0,0,0 };
			G.deledge(Convert::ToInt32(textBox6->Text), Convert::ToInt32(textBox5->Text));
			for (int i = 0; i < dataGridView1->Rows->Count - 1; i++)
			{

				if (dataGridView1->Rows[i]->Cells[0]->Value->Equals(textBox6->Text))
				{

					dataGridView1->Rows[i]->Cells[1]->Value = "";
					G.display(Convert::ToInt32(textBox6->Text), m);
					for (int j = 0; j < 9; j++)
						if (m[j] != 0) dataGridView1->Rows[i]->Cells[1]->Value
							+= Convert::ToString(m[j]);
				}

				if (dataGridView1->Rows[i]->Cells[0]->Value->Equals(textBox5->Text))
				{

					dataGridView1->Rows[i]->Cells[1]->Value = "";
					G.display(Convert::ToInt32(textBox5->Text), m);
					for (int j = 0; j < 9; j++)
						if (m[j] != 0) dataGridView1->Rows[i]->Cells[1]->Value
							+= Convert::ToString(m[j]);
				}
			}
		}else MessageBox::Show("Ошибка удаления ребра");
		textBox6->Text = "";
		textBox5->Text = "";
	}
   
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) //проверка на полноту
	{
		if (dataGridView1->Rows[0]->Cells[0]->Value != nullptr) G.isfull();
		else MessageBox::Show("\tСписок пуст!\n Загрузите граф и попробуйте снова");
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) //сумма степеней всех вершин графа
	{
		if (dataGridView1->Rows[0]->Cells[0]->Value != nullptr) G.D();
		else MessageBox::Show("\tСписок пуст!\n Загрузите граф и попробуйте снова");
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) //загрузка графа из файла
	{
		int m[9] = { 0,0,0,0,0,0,0,0,0 };				
		G.loadG();

		dataGridView1->Rows->Clear();
		for (int i = 1; i < 9; i++)
		{
			if (G.display(i, m) != 0)
			{
				int q = dataGridView1->Rows->Add();
				dataGridView1->Rows[q]->Cells[0]->Value = Convert::ToString(i);
				dataGridView1->Rows[q]->Cells[1]->Value = "";
				G.display(i, m);
				for (int j = 0; j < 9; j++)
					if (m[j] != 0) dataGridView1->Rows[q]->Cells[1]->Value
						+= Convert::ToString(m[j]);
			}
		}
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) //сохранение графа в файл
	{
		if (dataGridView1->Rows[0]->Cells[0]->Value != nullptr) G.saveG();
		else MessageBox::Show("\tСписок пуст!\n Загрузите граф и попробуйте снова");
	}

	private: System::Void tabPage2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) //отрисовка
	{
		float x0 = 0;
		float y0 = 0;
		float x1 = 0;
		float y1 = 0;
		System::String^ sss;
		
		System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 12);
		System::Drawing::SolidBrush^ drawBrush = gcnew
		System::Drawing::SolidBrush(System::Drawing::Color::Black);
		System::Drawing::StringFormat^ drawFormat =
				gcnew System::Drawing::StringFormat();
		System::Drawing::Graphics^ formGraphics = tabPage2->CreateGraphics();
		Pen^ blackPen = gcnew Pen(Color::Black, 3.0f);
		

		int X[9] = {430,630,170,400,250,600,170,550,250};
		int Y[9] = {10, 244,264,370,34, 90,134, 344,344};
		
		for (int i = 0; i < dataGridView1->Rows->Count - 1; i++)
		{
			x0 = X[i];
			y0 = Y[i];
			PointF point1 = PointF(x0, y0);
			formGraphics->DrawString(Convert::ToString(dataGridView1->Rows[i]->Cells[0]->Value), drawFont, drawBrush, x0, y0, drawFormat);

			if (dataGridView1->Rows[i]->Cells[1]->Value != NULL)
			{
				sss = Convert::ToString(dataGridView1->Rows[i]->Cells[1]->Value);
				for (int j = 0; j < sss->Length; j++)
				{ 
					
					for (int k = 0; k < dataGridView1->Rows->Count - 1; k++)
					{
						if (dataGridView1->Rows[k]->Cells[0]->Value->Equals(Convert::ToString(sss[j])))
						{
							x1 = X[k];
							y1 = Y[k];
							PointF point2 = PointF(x1, y1);
							formGraphics->DrawLine(blackPen, point1, point2);
						}
					}
				
				}
			}
		}
		delete drawFont;
		delete drawBrush;
		delete formGraphics;
	}
	
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)    //обход
	{
		label1->Text = "Путь: ";
		if (dataGridView1->Rows[0]->Cells[0]->Value != nullptr) 
		{
			
			
			int s = dataGridView1->Rows->Count - 1;
			int* v = new int[s];
			
			int i = 0;
			for (int i = 0; i < s; i++) v[i] = 0;
			System::String^ stek = Convert::ToString(dataGridView1->Rows[0]->Cells[0]->Value);
			v[0] = 1;
			System::String^ zapom = Convert::ToString(dataGridView1->Rows[0]->Cells[0]->Value);
				check:					
				System::String^ sss = Convert::ToString(dataGridView1->Rows[i]->Cells[1]->Value);
				for (int j = 0; j < sss->Length; j++)
				{
					int a;
					for (a = 0; a < dataGridView1->Rows->Count - 1; a++)
						if (dataGridView1->Rows[a]->Cells[0]->Value->Equals(Convert::ToString(sss[j]))) 
							break;
					
					if (v[a] != 1)
					{
						zapom += sss[j];
						for (int k = 0; k < dataGridView1->Rows->Count - 1; k++)
						{
							if (dataGridView1->Rows[k]->Cells[0]->Value->Equals(Convert::ToString(sss[j])))
							{
								stek += Convert::ToString(dataGridView1->Rows[k]->Cells[0]->Value);
								v[k] = 1;
								i = k;
								goto check;
							} 
							
						}
					}
				} 
				if (zapom != "")
				{
					zapom = zapom->Remove(zapom->Length - 1);
					if (zapom != "") 
					{
						for (i = 0; i < dataGridView1->Rows->Count - 1; i++)
							if (dataGridView1->Rows[i]->Cells[0]->Value->Equals(Convert::ToString(zapom[zapom->Length - 1])))
								break;
						goto check;
					}
				}
				 
				label1->Text += stek;


		}else MessageBox::Show("\tСписок пуст!\n Загрузите граф и попробуйте снова");
	}
	
};
};