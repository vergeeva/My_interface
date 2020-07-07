#pragma once
using namespace System::IO;
#include "Child.h"

namespace Myinterface {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			File_name = gcnew String("Noname.rtf");
			Child_Form = gcnew Child;
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
		String^ File_name;
		Form ^Child_Form;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ �������ToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ �������ToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ ���������ToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^ ��������ToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ ����������ToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ �������ToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripButton^ toolStripLabel1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������ToolStripMenuItem;




	private: System::ComponentModel::IContainer^ components;



	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->�������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->�������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->���������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->��������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->����������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->�������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->����ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����ToolStripMenuItem,
					this->������ToolStripMenuItem, this->toolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(675, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->�������ToolStripMenuItem,
					this->�������ToolStripMenuItem, this->���������ToolStripMenuItem, this->������������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::���������ToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->������������ToolStripMenuItem->Text = L"��������� ���";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::������������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->��������ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->��������ToolStripMenuItem, this->�����������ToolStripMenuItem
			});
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(74, 24);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::��������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::����������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::��������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->�����������ToolStripMenuItem->Text = L"�������� ���";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(67, 24);
			this->toolStripMenuItem1->Text = L"�����";
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(251, 26);
			this->���������������ToolStripMenuItem->Text = L"��������� � �����";
			// 
			// ������������������ToolStripMenuItem
			// 
			this->������������������ToolStripMenuItem->Name = L"������������������ToolStripMenuItem";
			this->������������������ToolStripMenuItem->Size = System::Drawing::Size(251, 26);
			this->������������������ToolStripMenuItem->Text = L"����� ��� ����������";
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(15) {
				this->�������ToolStripButton,
					this->�������ToolStripButton, this->���������ToolStripButton, this->toolStripSeparator, this->��������ToolStripButton, this->����������ToolStripButton,
					this->�������ToolStripButton, this->toolStripSeparator1, this->toolStripButton1, this->toolStripButton2, this->toolStripSeparator2,
					this->toolStripTextBox1, this->toolStripButton3, this->toolStripSeparator3, this->toolStripLabel1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(675, 27);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MainForm::toolStrip1_ItemClicked);
			// 
			// �������ToolStripButton
			// 
			this->�������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->�������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�������ToolStripButton.Image")));
			this->�������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�������ToolStripButton->Name = L"�������ToolStripButton";
			this->�������ToolStripButton->Size = System::Drawing::Size(29, 24);
			this->�������ToolStripButton->Text = L"&�������";
			// 
			// �������ToolStripButton
			// 
			this->�������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->�������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�������ToolStripButton.Image")));
			this->�������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�������ToolStripButton->Name = L"�������ToolStripButton";
			this->�������ToolStripButton->Size = System::Drawing::Size(29, 24);
			this->�������ToolStripButton->Text = L"&�������";
			// 
			// ���������ToolStripButton
			// 
			this->���������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->���������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"���������ToolStripButton.Image")));
			this->���������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->���������ToolStripButton->Name = L"���������ToolStripButton";
			this->���������ToolStripButton->Size = System::Drawing::Size(29, 24);
			this->���������ToolStripButton->Text = L"&���������";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 27);
			// 
			// ��������ToolStripButton
			// 
			this->��������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->��������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������ToolStripButton.Image")));
			this->��������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��������ToolStripButton->Name = L"��������ToolStripButton";
			this->��������ToolStripButton->Size = System::Drawing::Size(29, 24);
			this->��������ToolStripButton->Text = L"�&�������";
			// 
			// ����������ToolStripButton
			// 
			this->����������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->����������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����������ToolStripButton.Image")));
			this->����������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����������ToolStripButton->Name = L"����������ToolStripButton";
			this->����������ToolStripButton->Size = System::Drawing::Size(29, 24);
			this->����������ToolStripButton->Text = L"&����������";
			// 
			// �������ToolStripButton
			// 
			this->�������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->�������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�������ToolStripButton.Image")));
			this->�������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�������ToolStripButton->Name = L"�������ToolStripButton";
			this->�������ToolStripButton->Size = System::Drawing::Size(29, 24);
			this->�������ToolStripButton->Text = L"���&����";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 27);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(49, 24);
			this->toolStripButton1->Text = L"Color";
			this->toolStripButton1->ToolTipText = L"�������� ����";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MainForm::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(67, 24);
			this->toolStripButton2->Text = L"������";
			this->toolStripButton2->ToolTipText = L"�������� ������";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MainForm::toolStripButton2_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 27);
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(100, 27);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(56, 24);
			this->toolStripButton3->Text = L"�����";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &MainForm::toolStripButton3_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 27);
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripLabel1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripLabel1.Image")));
			this->toolStripLabel1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripLabel1->Name = L"toolStripLabel1";
			this->toolStripLabel1->Size = System::Drawing::Size(72, 24);
			this->toolStripLabel1->Text = L"�������";
			this->toolStripLabel1->Click += gcnew System::EventHandler(this, &MainForm::toolStripLabel1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->AutoWordSelection = true;
			this->richTextBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 55);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(675, 348);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::richTextBox1_TextChanged);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->����ToolStripMenuItem1,
					this->������ToolStripMenuItem1, this->�����ToolStripMenuItem, this->�������ToolStripMenuItem, this->����������������ToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(219, 152);
			// 
			// ����ToolStripMenuItem1
			// 
			this->����ToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������ToolStripMenuItem1,
					this->�������ToolStripMenuItem1, this->���������ToolStripMenuItem1
			});
			this->����ToolStripMenuItem1->Name = L"����ToolStripMenuItem1";
			this->����ToolStripMenuItem1->Size = System::Drawing::Size(218, 24);
			this->����ToolStripMenuItem1->Text = L"����";
			// 
			// �������ToolStripMenuItem1
			// 
			this->�������ToolStripMenuItem1->Name = L"�������ToolStripMenuItem1";
			this->�������ToolStripMenuItem1->Size = System::Drawing::Size(166, 26);
			this->�������ToolStripMenuItem1->Text = L"�������";
			this->�������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::�������ToolStripMenuItem1_Click);
			// 
			// �������ToolStripMenuItem1
			// 
			this->�������ToolStripMenuItem1->Name = L"�������ToolStripMenuItem1";
			this->�������ToolStripMenuItem1->Size = System::Drawing::Size(166, 26);
			this->�������ToolStripMenuItem1->Text = L"�������";
			this->�������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::�������ToolStripMenuItem1_Click);
			// 
			// ���������ToolStripMenuItem1
			// 
			this->���������ToolStripMenuItem1->Name = L"���������ToolStripMenuItem1";
			this->���������ToolStripMenuItem1->Size = System::Drawing::Size(166, 26);
			this->���������ToolStripMenuItem1->Text = L"���������";
			this->���������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::���������ToolStripMenuItem1_Click);
			// 
			// ������ToolStripMenuItem1
			// 
			this->������ToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->��������ToolStripMenuItem1,
					this->����������ToolStripMenuItem1, this->��������ToolStripMenuItem1, this->�����������ToolStripMenuItem1
			});
			this->������ToolStripMenuItem1->Name = L"������ToolStripMenuItem1";
			this->������ToolStripMenuItem1->Size = System::Drawing::Size(218, 24);
			this->������ToolStripMenuItem1->Text = L"������";
			// 
			// ��������ToolStripMenuItem1
			// 
			this->��������ToolStripMenuItem1->Name = L"��������ToolStripMenuItem1";
			this->��������ToolStripMenuItem1->Size = System::Drawing::Size(186, 26);
			this->��������ToolStripMenuItem1->Text = L"��������";
			this->��������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::��������ToolStripMenuItem1_Click);
			// 
			// ����������ToolStripMenuItem1
			// 
			this->����������ToolStripMenuItem1->Name = L"����������ToolStripMenuItem1";
			this->����������ToolStripMenuItem1->Size = System::Drawing::Size(186, 26);
			this->����������ToolStripMenuItem1->Text = L"����������";
			this->����������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::����������ToolStripMenuItem1_Click);
			// 
			// ��������ToolStripMenuItem1
			// 
			this->��������ToolStripMenuItem1->Name = L"��������ToolStripMenuItem1";
			this->��������ToolStripMenuItem1->Size = System::Drawing::Size(186, 26);
			this->��������ToolStripMenuItem1->Text = L"��������";
			this->��������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::��������ToolStripMenuItem1_Click);
			// 
			// �����������ToolStripMenuItem1
			// 
			this->�����������ToolStripMenuItem1->Name = L"�����������ToolStripMenuItem1";
			this->�����������ToolStripMenuItem1->Size = System::Drawing::Size(186, 26);
			this->�����������ToolStripMenuItem1->Text = L"�������� ���";
			this->�����������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::�����������ToolStripMenuItem1_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(218, 24);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(218, 24);
			this->�������ToolStripMenuItem->Text = L"��������";
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(218, 24);
			this->����������������ToolStripMenuItem->Text = L"�������� � �������";
			//this->����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::����������������ToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MainForm::openFileDialog1_FileOk);
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 377);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(675, 26);
			this->statusStrip1->TabIndex = 3;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(151, 20);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(151, 20);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(675, 403);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->richTextBox1->Text != "")
		{
			File_name = this->richTextBox1->Text;
			������������ToolStripMenuItem_Click(sender, e);
		}
		else
		{
			MessageBox::Show("���� ������","��������������");
			this->richTextBox1->Text = "";
			File_name = "Noname.rtf";
		}
	}

	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->FileName = "";
		this->openFileDialog1->InitialDirectory =
			System::IO::Directory::GetCurrentDirectory();
		this->openFileDialog1->Filter = "Rtf ����� (*.rtf)|*.rtf|��� ����� (*.*) | *.*";
		// ��� ����� � ���� ����� �����.
		this->openFileDialog1->FileName = File_name;
		// �������� ������ � ����� ��.
		if (this->openFileDialog1->ShowDialog() ==
			System::Windows::Forms::DialogResult::OK)
		{
			File_name = openFileDialog1->FileName;
			this->richTextBox1->LoadFile
			(File_name, RichTextBoxStreamType::RichText);
		}
		else // �� �� ��� ��� ���-��.
			if (richTextBox1->Text == "")
			{
				�����������ToolStripMenuItem1->Enabled = false;
				��������ToolStripMenuItem1->Enabled = false;
				����������ToolStripMenuItem1->Enabled = false;
			}
			else
			{
					�����������ToolStripMenuItem1->Enabled = true;
					��������ToolStripMenuItem1->Enabled = true;
					����������ToolStripMenuItem1->Enabled = true;

			}
	}

	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->FileName = "";
		this->statusStrip1->Items[0]->Text = File_name;
		this->statusStrip1->Items[1]->Text = DateTime::Now.ToShortDateString();
		if (richTextBox1->Text != "" && this->richTextBox1->SelectionLength > 0)
		{
			�����������ToolStripMenuItem1->Enabled = true;
			��������ToolStripMenuItem1->Enabled = true;
			����������ToolStripMenuItem1->Enabled = true;
		}
		else
		{
			�����������ToolStripMenuItem1->Enabled = false;
			��������ToolStripMenuItem1->Enabled = false;
			����������ToolStripMenuItem1->Enabled = false;
		}
	}
	private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// ��������� �������������� ����������.
		if (File_name == "Noname.rtf")
			// ������� ����� ���� "��������� ���".
			// ����� �������������� �������� � MessageBox.
		{
			������������ToolStripMenuItem_Click(sender, e);
			this->statusStrip1->Items[0]->Text = File_name;
		}
		else
			// ��������� ����� � �����.
			this->richTextBox1->SaveFile
			(File_name, RichTextBoxStreamType::RichText);
		this->statusStrip1->Items[0]->Text = File_name;
	}
	private: System::Void ������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->saveFileDialog1->
			InitialDirectory = System::IO::Directory::GetCurrentDirectory();
		this->saveFileDialog1->Filter = "Rtf ����� (*.rtf)|*.rtf|��� ����� (*.*) | *.*";
		// ��� ����� � ���� ����� �����.
		this->saveFileDialog1->FileName = File_name;
		// �������� ������ � ����� ��.
		// �� ������ this->saveFileDialog1->ShowDialog();
		if (this->saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			File_name = saveFileDialog1->FileName;
			this->richTextBox1->SaveFile
			(File_name, RichTextBoxStreamType::RichText);
			this->statusStrip1->Items[0]->Text = File_name;
		}
		else
			// �� �� ��� ��� ���-��.
			;

	}
	private: System::Void toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {

		switch (this->toolStrip1->Items->IndexOf(e->ClickedItem))
		{
		case 0: {/*�������*/ �������ToolStripMenuItem_Click(sender, e); break; }
		case 1: {/*�������*/ �������ToolStripMenuItem_Click(sender, e); break; }
		case 2: {/*���������*/ ���������ToolStripMenuItem_Click(sender, e); break; }
		case 4: { ��������ToolStripMenuItem_Click(sender, e); break; }
		case 5: { ����������ToolStripMenuItem_Click(sender, e); break; }
		case 6: { ��������ToolStripMenuItem_Click(sender, e); break; }

		};

	}
	private: System::Void ����������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		// �������� ������ ������������� ������ � ������ ��� Rtf ������.
		DataFormats::Format^ myFormat = DataFormats::GetFormat(DataFormats::Rtf);
		// ���������, ���� �� ���������.
		if (this->richTextBox1->SelectionLength > 0)
		{
			Clipboard::SetData(myFormat->Name, this->richTextBox1->SelectedRtf);
		}
	}
	private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// �������� ������ ������������� ������ � ������ ��� Rtf ������.
		DataFormats::Format^ myFormat = DataFormats::GetFormat(DataFormats::Rtf);
		// ���������, ���� �� ���������.
		if (this->richTextBox1->SelectionLength > 0)
		{
			Clipboard::SetData(myFormat->Name, this->richTextBox1->SelectedRtf);
		}
	}
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// ������� DataFormats::Format ��� Rtf.
		DataFormats::Format^ myFormat = DataFormats::GetFormat(DataFormats::Rtf);
		if (this->richTextBox1->SelectionLength > 0)
		{
			Clipboard::SetData(myFormat->Name, this->richTextBox1->SelectedRtf);
			this->richTextBox1->SelectedRtf = ""; //->Remove(1);
		}
	}

	private: System::Void ��������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		// ������� DataFormats::Format ��� Rtf.
		DataFormats::Format^ myFormat = DataFormats::GetFormat(DataFormats::Rtf);
		if (this->richTextBox1->SelectionLength > 0)
		{
			Clipboard::SetData(myFormat->Name, this->richTextBox1->SelectedRtf);
			this->richTextBox1->SelectedRtf = ""; //->Remove(1);
		}
	}
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// ������� DataFormats::Format ��� Rtf.
		DataFormats::Format^ myFormat = DataFormats::GetFormat(DataFormats::Rtf);
		// ���� �� ������
		if (Clipboard::ContainsData(myFormat->Name) == true)
			// ��� if (Clipboard::GetDataObject()->GetDataPresent(DataFormats::Rtf)==true)
		{
			this->richTextBox1->Paste(myFormat);
			this->richTextBox1->Refresh();
		}

	}
	private: System::Void ��������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		// ������� DataFormats::Format ��� Rtf.
		DataFormats::Format^ myFormat = DataFormats::GetFormat(DataFormats::Rtf);
		// ���� �� ������
		if (Clipboard::ContainsData(myFormat->Name) == true)
			// ��� if (Clipboard::GetDataObject()->GetDataPresent(DataFormats::Rtf)==true)
		{
			this->richTextBox1->Paste(myFormat);
			this->richTextBox1->Refresh();
		}
	}
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e)
	{ // ������� ������ ColorDialog, ����� �����������.
		ColorDialog^ MyDialog = gcnew ColorDialog;
		// ����, �������� � �������, ����� �������� ����� ��������.
		MyDialog->Color = this->richTextBox1->ForeColor;
		// �������� ���� �������.
		if (MyDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			// ��������� � ����������� ������.
			this->richTextBox1->SelectionColor = MyDialog->Color;
	}
	private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->fontDialog1->Font = this->richTextBox1->Font;
		if (fontDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			this->richTextBox1->SelectionFont = fontDialog1->Font;
			if (fontDialog1->ShowColor == true)
			{
				this->richTextBox1->ForeColor = fontDialog1->Color;
			}

		}
	}


	private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// ��� - � ������ richTextBox1.
		String^ Where = gcnew String("");
		Where = this->richTextBox1->Text;
		// ��� - �� ���������� ���� ������ ������������.
		String^ What = gcnew String("");
		What = this->toolStripTextBox1->Text;
		// ��������� ����� �� �����.
		array<Char>^ chars = { ' ', ',', '.', ':' };
		array <String^>^ My_Split = Where->Split(chars);
		// ������ ������: �������������� Wo_Start.
		String^ Wo = gcnew String("");
		int Wo_Start = 0;
		for each (Wo in My_Split)
		{
			if (Wo->Trim() != "" && Wo->Trim() == What) // Compare
			{
				Wo_Start = this->richTextBox1->Text->IndexOf(What, Wo_Start);
				this->richTextBox1->Select(Wo_Start, What->Length);
				this->richTextBox1->SelectionBackColor =
					System::Drawing::Color::Aqua;
				Wo_Start = Wo_Start + What->Length;
			}
		}
	}
	private: System::Void toolStripLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
		Child_Form->ShowDialog();

	}
//private: System::Void ����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
//	Form^ Frm;
//	Frm = gcnew Child(richTextBox1->SelectedText);
//	Frm->ShowDialog();
	//if (this->richTextBox1->SelectionLength > 0)
	//{

	//	Child_Form-> = this->richTextBox1->SelectedRtf;
	//}
//}

private: System::Void �������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->richTextBox1->Text != "")
	{
		File_name = this->richTextBox1->Text;
		������������ToolStripMenuItem_Click(sender, e);
	}
	else
	{
		MessageBox::Show("���� ������", "��������������");
		this->richTextBox1->Text = "";
		File_name = "Noname.rtf";
	}
}
private: System::Void �������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->FileName = "";
	this->openFileDialog1->InitialDirectory =
		System::IO::Directory::GetCurrentDirectory();
	this->openFileDialog1->Filter = "Rtf ����� (*.rtf)|*.rtf|��� ����� (*.*) | *.*";
	// ��� ����� � ���� ����� �����.
	this->openFileDialog1->FileName = File_name;
	// �������� ������ � ����� ��.
	if (this->openFileDialog1->ShowDialog() ==
		System::Windows::Forms::DialogResult::OK)
	{
		File_name = openFileDialog1->FileName;
		this->richTextBox1->LoadFile
		(File_name, RichTextBoxStreamType::RichText);
	}
	else // �� �� ��� ��� ���-��.
		;
}
private: System::Void ���������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	// ��������� �������������� ����������.
	if (File_name == "Noname.rtf")
		// ������� ����� ���� "��������� ���".
		// ����� �������������� �������� � MessageBox.
	{
		������������ToolStripMenuItem_Click(sender, e);
		this->statusStrip1->Items[0]->Text = File_name;
	}
	else
		// ��������� ����� � �����.
		this->richTextBox1->SaveFile
		(File_name, RichTextBoxStreamType::RichText);
	this->statusStrip1->Items[0]->Text = File_name;
}
private: System::Void �����������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (richTextBox1->Text != "")
	{
		this->richTextBox1->SelectionLength = richTextBox1->TextLength;
	}
}

private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Text != "")
	{
		�����������ToolStripMenuItem1->Enabled = true;
		��������ToolStripMenuItem1->Enabled = true;
		����������ToolStripMenuItem1->Enabled = true;
	}
	else
	{
		�����������ToolStripMenuItem1->Enabled = false;
		��������ToolStripMenuItem1->Enabled = false;
		����������ToolStripMenuItem1->Enabled = false;
	}
}

};
};



