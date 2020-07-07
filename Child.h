#pragma once
#include <map>
#include "Dictionary.h"
using namespace System::IO;

namespace Myinterface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Child
	/// </summary>
	public ref class Child : public System::Windows::Forms::Form
	{
	public:
		Child(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		String^ W;
		Word ^A;
		
		Child(String^ my_word)
		{
			InitializeComponent();
			W = gcnew String(my_word);
			A = gcnew Word();

		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Child()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	protected:
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::RichTextBox^ richTextBox2;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label1;



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
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->statusStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 395);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(581, 26);
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(151, 20);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Pink;
			this->button1->Location = System::Drawing::Point(402, 396);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 26);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Закрыть";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Child::button1_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(12, 12);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(180, 28);
			this->richTextBox2->TabIndex = 3;
			this->richTextBox2->Text = L"";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::LightCyan;
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->richTextBox5);
			this->groupBox1->Controls->Add(this->richTextBox4);
			this->groupBox1->Location = System::Drawing::Point(218, 174);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(362, 177);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Добавление/Удаление слов";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Azure;
			this->button3->Location = System::Drawing::Point(6, 145);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(148, 26);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Child::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Azure;
			this->button2->Location = System::Drawing::Point(192, 145);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 26);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Добавить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Child::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Определение:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Слово:";
			// 
			// richTextBox5
			// 
			this->richTextBox5->Location = System::Drawing::Point(9, 83);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(347, 56);
			this->richTextBox5->TabIndex = 1;
			this->richTextBox5->Text = L"";
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(81, 24);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(259, 26);
			this->richTextBox4->TabIndex = 0;
			this->richTextBox4->Text = L"";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(12, 50);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(197, 308);
			this->listBox1->TabIndex = 11;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(215, 50);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(365, 118);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(215, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Определение:";
			// 
			// Child
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LavenderBlush;
			this->ClientSize = System::Drawing::Size(581, 421);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->statusStrip1);
			this->Name = L"Child";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Child";
			this->Load += gcnew System::EventHandler(this, &Child::Child_Load);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Child_Load(System::Object^ sender, System::EventArgs^ e) {
		////Вывод текста из файла
		//String^ File_Name;
		//File_Name = Directory::GetCurrentDirectory() + "//Переводы.txt";
		//StreamReader^ My_SR = File::OpenText(File_Name);
		//String^ My_Str = My_SR->ReadToEnd();

		////Вывод в richTextBox1
		//this->richTextBox1->Text = My_Str;
		A->from_file_in("Переводы.txt");
		toolStripStatusLabel1->Text = "Словарь запущен";
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (richTextBox4->Text != "")
	{
		listBox1->Items->Add(richTextBox4->Text);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		listBox1->Items->Remove(richTextBox4->Text);
		//загрузка из текст бокса в массив элементов функция
		//обновлять каждый раз при нажатии

}


};
};
