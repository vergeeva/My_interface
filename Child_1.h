#pragma once
#include "Dictionary.h"

namespace Myinterface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Child_1
	/// </summary>
	public ref class Child_1 : public System::Windows::Forms::Form
	{
		my_dict^ A;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;
		   Word^ B;
		   String^ w;
	public:
		Child_1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			A = gcnew my_dict();
			B = gcnew Word();
		}
		Child_1(String ^my_word)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			w = gcnew String(my_word);
			A = gcnew my_dict();
			B = gcnew Word();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Child_1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Button^ button1;
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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Location = System::Drawing::Point(14, 44);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(253, 292);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Child_1::listBox1_SelectedIndexChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(288, 45);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(268, 135);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(293, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Определение:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Список слов:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 345);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Поиск:";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(72, 342);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(195, 26);
			this->richTextBox2->TabIndex = 5;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &Child_1::richTextBox2_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(348, 205);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(173, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Удалить/Добавить слово";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(340, 234);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(267, 25);
			this->richTextBox3->TabIndex = 7;
			this->richTextBox3->Text = L"";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LavenderBlush;
			this->button1->ForeColor = System::Drawing::Color::Crimson;
			this->button1->Location = System::Drawing::Point(285, 368);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 32);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Удалить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Child_1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LavenderBlush;
			this->button2->ForeColor = System::Drawing::Color::ForestGreen;
			this->button2->Location = System::Drawing::Point(491, 368);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 32);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Добавить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Child_1::button2_Click);
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(285, 289);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(322, 73);
			this->richTextBox4->TabIndex = 10;
			this->richTextBox4->Text = L"";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(282, 234);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Слово:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(282, 269);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(103, 17);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Определение:";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LemonChiffon;
			this->button3->Location = System::Drawing::Point(466, 439);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(160, 29);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Закрыть";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Child_1::button3_Click);
			// 
			// Child_1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::OldLace;
			this->ClientSize = System::Drawing::Size(626, 469);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->richTextBox4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->listBox1);
			this->Name = L"Child_1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Child_1";
			this->Load += gcnew System::EventHandler(this, &Child_1::Child_1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text = A->find_def(listBox1);
	}

	private: System::Void Child_1_Load(System::Object^ sender, System::EventArgs^ e) {
		A->loadDictionary("Переводы.txt");
		A->View(listBox1);
		this->richTextBox2->Text = w;

	}
	private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (A->find(richTextBox2->Text) != -1)
		{
			this->listBox1->SelectedItem = richTextBox2->Text;
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox3->Text != "" && richTextBox4->Text != "")
	{
		B->Word_ = Convert::ToString(richTextBox3->Text);
		B->Definition = Convert::ToString(richTextBox4->Text);
		A->add(B);
		A->View(listBox1);
		MessageBox::Show("Слово добавлено успешно", "Предупреждение");
		A->dict_in_file("Переводы.txt");
	}
	else
	{
		MessageBox::Show("Заполните необходимые поля", "Предупреждение");
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox3->Text != "" && richTextBox4->Text != "")
	{
		B->Word_ = Convert::ToString(richTextBox3->Text);
		B->Definition = Convert::ToString(richTextBox4->Text);
		A->del(B);
		A->View(listBox1);
		MessageBox::Show("Слово удалено успешно", "Предупреждение");
		A->dict_in_file("Переводы.txt");
	}
	else
	{
		MessageBox::Show("Заполните необходимые поля", "Предупреждение");
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
