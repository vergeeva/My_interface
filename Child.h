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
			InitializeComponent();
			A = gcnew my_dict();
			B = gcnew Word();
		}
		String^ W;
		my_dict ^A;

	public:
	private: System::Windows::Forms::RichTextBox^ Def;
	private: System::Windows::Forms::TextBox^ Wor;
		   Word^ B;
		
		Child(String^ my_word)
		{
			InitializeComponent();
			W = gcnew String(my_word);
			A = gcnew my_dict();
			B = gcnew Word();


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


	protected:

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::RichTextBox^ richTextBox2;


	private: System::Windows::Forms::GroupBox^ groupBox1;






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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Wor = (gcnew System::Windows::Forms::TextBox());
			this->Def = (gcnew System::Windows::Forms::RichTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
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
			this->richTextBox2->Size = System::Drawing::Size(197, 28);
			this->richTextBox2->TabIndex = 3;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &Child::richTextBox2_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::LightCyan;
			this->groupBox1->Controls->Add(this->Wor);
			this->groupBox1->Controls->Add(this->Def);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(218, 174);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(362, 177);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Добавление/Удаление слов";
			// 
			// Wor
			// 
			this->Wor->Location = System::Drawing::Point(63, 28);
			this->Wor->Name = L"Wor";
			this->Wor->Size = System::Drawing::Size(288, 22);
			this->Wor->TabIndex = 7;
			// 
			// Def
			// 
			this->Def->Location = System::Drawing::Point(11, 84);
			this->Def->Name = L"Def";
			this->Def->Size = System::Drawing::Size(341, 52);
			this->Def->TabIndex = 6;
			this->Def->Text = L"";
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
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(12, 50);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(197, 308);
			this->listBox1->TabIndex = 11;
			this->listBox1->Click += gcnew System::EventHandler(this, &Child::listBox1_Click);
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
			this->Name = L"Child";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Child";
			this->Load += gcnew System::EventHandler(this, &Child::Child_Load);
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
		A->loadDictionary("Переводы.txt");
		A->View(listBox1);
		////Вывод текста из файла
		//String^ File_Name;
		//File_Name = Directory::GetCurrentDirectory() + "//Переводы.txt";
		//StreamReader^ My_SR = File::OpenText(File_Name);
		//String^ My_Str = My_SR->ReadToEnd();

		////Вывод в richTextBox1
		//this->richTextBox1->Text = My_Str;
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (Wor->Text != "" && Def->Text != "")
	{
		B->Word_ = Convert::ToString(Wor->Text);
		B->Definition = Convert::ToString(Def->Text);
		A->add(B);
		A->View(listBox1);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (Wor->Text != "" && Def->Text != "")
	{
		B->Word_ = Convert::ToString(Wor->Text);
		B->Definition = Convert::ToString(Def->Text);
		A->del(B);
		A->View(listBox1);
	}
		//загрузка из текст бокса в массив элементов функция
		//обновлять каждый раз при нажатии

}


private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox2->Text != "")
	{
		A->find(richTextBox2->Text);
		listBox1->SelectedItem = richTextBox2->Text;
	}
}
private: System::Void listBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	richTextBox1->Text = A->find_def(listBox1);

}
};
};
