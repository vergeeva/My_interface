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
	/// Ñâîäêà äëÿ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
			File_name = gcnew String("Noname.rtf");
			Child_Form = gcnew Child;
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
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
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîçäàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îòêğûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ïğàâêàToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ âûğåçàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êîïèğîâàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âñòàâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûäåëèòüÂñåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüÈÂûéòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûéòèÁåçÑîõğàíåíèÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ ñîçäàòüToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ îòêğûòüToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ ñîõğàíèòüToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^ âûğåçàòüToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ êîïèğîâàòüToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ âñòàâêàToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîçäàòüToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ îòêğûòüToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğàâêàToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ âûğåçàòüToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ êîïèğîâàòüToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ âñòàâèòüToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ âûäåëèòüÂñåToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüÊàêToolStripMenuItem;
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
	private: System::Windows::Forms::ToolStripMenuItem^ ñëîâàğüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äîáàâèòüÂÑëîâàğüToolStripMenuItem;




	private: System::ComponentModel::IContainer^ components;



	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîçäàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüÊàêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûğåçàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîïèğîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñòàâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûäåëèòüÂñåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüÈÂûéòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûéòèÁåçÑîõğàíåíèÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->ñîçäàòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->îòêğûòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->ñîõğàíèòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->âûğåçàòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->êîïèğîâàòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->âñòàâêàToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
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
			this->ôàéëToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîçäàòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêğûòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğàâêàToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûğåçàòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîïèğîâàòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñòàâèòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûäåëèòüÂñåToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñëîâàğüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîáàâèòüÂÑëîâàğüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->ôàéëToolStripMenuItem,
					this->ïğàâêàToolStripMenuItem, this->toolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(675, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ñîçäàòüToolStripMenuItem,
					this->îòêğûòüToolStripMenuItem, this->ñîõğàíèòüToolStripMenuItem, this->ñîõğàíèòüÊàêToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// ñîçäàòüToolStripMenuItem
			// 
			this->ñîçäàòüToolStripMenuItem->Name = L"ñîçäàòüToolStripMenuItem";
			this->ñîçäàòüToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->ñîçäàòüToolStripMenuItem->Text = L"Ñîçäàòü";
			this->ñîçäàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ñîçäàòüToolStripMenuItem_Click);
			// 
			// îòêğûòüToolStripMenuItem
			// 
			this->îòêğûòüToolStripMenuItem->Name = L"îòêğûòüToolStripMenuItem";
			this->îòêğûòüToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->îòêğûòüToolStripMenuItem->Text = L"Îòêğûòü";
			this->îòêğûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::îòêğûòüToolStripMenuItem_Click);
			// 
			// ñîõğàíèòüToolStripMenuItem
			// 
			this->ñîõğàíèòüToolStripMenuItem->Name = L"ñîõğàíèòüToolStripMenuItem";
			this->ñîõğàíèòüToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->ñîõğàíèòüToolStripMenuItem->Text = L"Ñîõğàíèòü";
			this->ñîõğàíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ñîõğàíèòüToolStripMenuItem_Click);
			// 
			// ñîõğàíèòüÊàêToolStripMenuItem
			// 
			this->ñîõğàíèòüÊàêToolStripMenuItem->Name = L"ñîõğàíèòüÊàêToolStripMenuItem";
			this->ñîõğàíèòüÊàêToolStripMenuItem->Size = System::Drawing::Size(192, 26);
			this->ñîõğàíèòüÊàêToolStripMenuItem->Text = L"Ñîõğàíèòü êàê";
			this->ñîõğàíèòüÊàêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ñîõğàíèòüÊàêToolStripMenuItem_Click);
			// 
			// ïğàâêàToolStripMenuItem
			// 
			this->ïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->âûğåçàòüToolStripMenuItem,
					this->êîïèğîâàòüToolStripMenuItem, this->âñòàâèòüToolStripMenuItem, this->âûäåëèòüÂñåToolStripMenuItem
			});
			this->ïğàâêàToolStripMenuItem->Name = L"ïğàâêàToolStripMenuItem";
			this->ïğàâêàToolStripMenuItem->Size = System::Drawing::Size(74, 24);
			this->ïğàâêàToolStripMenuItem->Text = L"Ïğàâêà";
			// 
			// âûğåçàòüToolStripMenuItem
			// 
			this->âûğåçàòüToolStripMenuItem->Name = L"âûğåçàòüToolStripMenuItem";
			this->âûğåçàòüToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->âûğåçàòüToolStripMenuItem->Text = L"Âûğåçàòü";
			this->âûğåçàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::âûğåçàòüToolStripMenuItem_Click);
			// 
			// êîïèğîâàòüToolStripMenuItem
			// 
			this->êîïèğîâàòüToolStripMenuItem->Name = L"êîïèğîâàòüToolStripMenuItem";
			this->êîïèğîâàòüToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->êîïèğîâàòüToolStripMenuItem->Text = L"Êîïèğîâàòü";
			this->êîïèğîâàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::êîïèğîâàòüToolStripMenuItem_Click);
			// 
			// âñòàâèòüToolStripMenuItem
			// 
			this->âñòàâèòüToolStripMenuItem->Name = L"âñòàâèòüToolStripMenuItem";
			this->âñòàâèòüToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->âñòàâèòüToolStripMenuItem->Text = L"Âñòàâèòü";
			this->âñòàâèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::âñòàâèòüToolStripMenuItem_Click);
			// 
			// âûäåëèòüÂñåToolStripMenuItem
			// 
			this->âûäåëèòüÂñåToolStripMenuItem->Name = L"âûäåëèòüÂñåToolStripMenuItem";
			this->âûäåëèòüÂñåToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->âûäåëèòüÂñåToolStripMenuItem->Text = L"Âûäåëèòü âñå";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(67, 24);
			this->toolStripMenuItem1->Text = L"Âûõîä";
			// 
			// ñîõğàíèòüÈÂûéòèToolStripMenuItem
			// 
			this->ñîõğàíèòüÈÂûéòèToolStripMenuItem->Name = L"ñîõğàíèòüÈÂûéòèToolStripMenuItem";
			this->ñîõğàíèòüÈÂûéòèToolStripMenuItem->Size = System::Drawing::Size(251, 26);
			this->ñîõğàíèòüÈÂûéòèToolStripMenuItem->Text = L"Ñîõğàíèòü è âûéòè";
			// 
			// âûéòèÁåçÑîõğàíåíèÿToolStripMenuItem
			// 
			this->âûéòèÁåçÑîõğàíåíèÿToolStripMenuItem->Name = L"âûéòèÁåçÑîõğàíåíèÿToolStripMenuItem";
			this->âûéòèÁåçÑîõğàíåíèÿToolStripMenuItem->Size = System::Drawing::Size(251, 26);
			this->âûéòèÁåçÑîõğàíåíèÿToolStripMenuItem->Text = L"Âûéòè áåç ñîõğàíåíèÿ";
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(15) {
				this->ñîçäàòüToolStripButton,
					this->îòêğûòüToolStripButton, this->ñîõğàíèòüToolStripButton, this->toolStripSeparator, this->âûğåçàòüToolStripButton, this->êîïèğîâàòüToolStripButton,
					this->âñòàâêàToolStripButton, this->toolStripSeparator1, this->toolStripButton1, this->toolStripButton2, this->toolStripSeparator2,
					this->toolStripTextBox1, this->toolStripButton3, this->toolStripSeparator3, this->toolStripLabel1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(675, 27);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MainForm::toolStrip1_ItemClicked);
			// 
			// ñîçäàòüToolStripButton
			// 
			this->ñîçäàòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ñîçäàòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñîçäàòüToolStripButton.Image")));
			this->ñîçäàòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ñîçäàòüToolStripButton->Name = L"ñîçäàòüToolStripButton";
			this->ñîçäàòüToolStripButton->Size = System::Drawing::Size(29, 24);
			this->ñîçäàòüToolStripButton->Text = L"&Ñîçäàòü";
			// 
			// îòêğûòüToolStripButton
			// 
			this->îòêğûòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->îòêğûòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"îòêğûòüToolStripButton.Image")));
			this->îòêğûòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->îòêğûòüToolStripButton->Name = L"îòêğûòüToolStripButton";
			this->îòêğûòüToolStripButton->Size = System::Drawing::Size(29, 24);
			this->îòêğûòüToolStripButton->Text = L"&Îòêğûòü";
			// 
			// ñîõğàíèòüToolStripButton
			// 
			this->ñîõğàíèòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ñîõğàíèòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñîõğàíèòüToolStripButton.Image")));
			this->ñîõğàíèòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ñîõğàíèòüToolStripButton->Name = L"ñîõğàíèòüToolStripButton";
			this->ñîõğàíèòüToolStripButton->Size = System::Drawing::Size(29, 24);
			this->ñîõğàíèòüToolStripButton->Text = L"&Ñîõğàíèòü";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 27);
			// 
			// âûğåçàòüToolStripButton
			// 
			this->âûğåçàòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->âûğåçàòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"âûğåçàòüToolStripButton.Image")));
			this->âûğåçàòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->âûğåçàòüToolStripButton->Name = L"âûğåçàòüToolStripButton";
			this->âûğåçàòüToolStripButton->Size = System::Drawing::Size(29, 24);
			this->âûğåçàòüToolStripButton->Text = L"Â&ûğåçàòü";
			// 
			// êîïèğîâàòüToolStripButton
			// 
			this->êîïèğîâàòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->êîïèğîâàòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"êîïèğîâàòüToolStripButton.Image")));
			this->êîïèğîâàòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->êîïèğîâàòüToolStripButton->Name = L"êîïèğîâàòüToolStripButton";
			this->êîïèğîâàòüToolStripButton->Size = System::Drawing::Size(29, 24);
			this->êîïèğîâàòüToolStripButton->Text = L"&Êîïèğîâàòü";
			// 
			// âñòàâêàToolStripButton
			// 
			this->âñòàâêàToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->âñòàâêàToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"âñòàâêàToolStripButton.Image")));
			this->âñòàâêàToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->âñòàâêàToolStripButton->Name = L"âñòàâêàToolStripButton";
			this->âñòàâêàToolStripButton->Size = System::Drawing::Size(29, 24);
			this->âñòàâêàToolStripButton->Text = L"Âñò&àâêà";
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
			this->toolStripButton1->ToolTipText = L"Âûáåğèòå öâåò";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MainForm::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(67, 24);
			this->toolStripButton2->Text = L"Ôîğìàò";
			this->toolStripButton2->ToolTipText = L"Âûáåğèòå ôîğìàò";
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
			this->toolStripButton3->Text = L"Íàéòè";
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
			this->toolStripLabel1->Text = L"Ñëîâàğü";
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
				this->ôàéëToolStripMenuItem1,
					this->ïğàâêàToolStripMenuItem1, this->âûõîäToolStripMenuItem, this->ñëîâàğüToolStripMenuItem, this->äîáàâèòüÂÑëîâàğüToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(219, 152);
			// 
			// ôàéëToolStripMenuItem1
			// 
			this->ôàéëToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ñîçäàòüToolStripMenuItem1,
					this->îòêğûòüToolStripMenuItem1, this->ñîõğàíèòüToolStripMenuItem1
			});
			this->ôàéëToolStripMenuItem1->Name = L"ôàéëToolStripMenuItem1";
			this->ôàéëToolStripMenuItem1->Size = System::Drawing::Size(218, 24);
			this->ôàéëToolStripMenuItem1->Text = L"Ôàéë";
			// 
			// ñîçäàòüToolStripMenuItem1
			// 
			this->ñîçäàòüToolStripMenuItem1->Name = L"ñîçäàòüToolStripMenuItem1";
			this->ñîçäàòüToolStripMenuItem1->Size = System::Drawing::Size(166, 26);
			this->ñîçäàòüToolStripMenuItem1->Text = L"Ñîçäàòü";
			this->ñîçäàòüToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::ñîçäàòüToolStripMenuItem1_Click);
			// 
			// îòêğûòüToolStripMenuItem1
			// 
			this->îòêğûòüToolStripMenuItem1->Name = L"îòêğûòüToolStripMenuItem1";
			this->îòêğûòüToolStripMenuItem1->Size = System::Drawing::Size(166, 26);
			this->îòêğûòüToolStripMenuItem1->Text = L"Îòêğûòü";
			this->îòêğûòüToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::îòêğûòüToolStripMenuItem1_Click);
			// 
			// ñîõğàíèòüToolStripMenuItem1
			// 
			this->ñîõğàíèòüToolStripMenuItem1->Name = L"ñîõğàíèòüToolStripMenuItem1";
			this->ñîõğàíèòüToolStripMenuItem1->Size = System::Drawing::Size(166, 26);
			this->ñîõğàíèòüToolStripMenuItem1->Text = L"Ñîõğàíèòü";
			this->ñîõğàíèòüToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::ñîõğàíèòüToolStripMenuItem1_Click);
			// 
			// ïğàâêàToolStripMenuItem1
			// 
			this->ïğàâêàToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->âûğåçàòüToolStripMenuItem1,
					this->êîïèğîâàòüToolStripMenuItem1, this->âñòàâèòüToolStripMenuItem1, this->âûäåëèòüÂñåToolStripMenuItem1
			});
			this->ïğàâêàToolStripMenuItem1->Name = L"ïğàâêàToolStripMenuItem1";
			this->ïğàâêàToolStripMenuItem1->Size = System::Drawing::Size(218, 24);
			this->ïğàâêàToolStripMenuItem1->Text = L"Ïğàâêà";
			// 
			// âûğåçàòüToolStripMenuItem1
			// 
			this->âûğåçàòüToolStripMenuItem1->Name = L"âûğåçàòüToolStripMenuItem1";
			this->âûğåçàòüToolStripMenuItem1->Size = System::Drawing::Size(186, 26);
			this->âûğåçàòüToolStripMenuItem1->Text = L"Âûğåçàòü";
			this->âûğåçàòüToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::âûğåçàòüToolStripMenuItem1_Click);
			// 
			// êîïèğîâàòüToolStripMenuItem1
			// 
			this->êîïèğîâàòüToolStripMenuItem1->Name = L"êîïèğîâàòüToolStripMenuItem1";
			this->êîïèğîâàòüToolStripMenuItem1->Size = System::Drawing::Size(186, 26);
			this->êîïèğîâàòüToolStripMenuItem1->Text = L"Êîïèğîâàòü";
			this->êîïèğîâàòüToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::êîïèğîâàòüToolStripMenuItem1_Click);
			// 
			// âñòàâèòüToolStripMenuItem1
			// 
			this->âñòàâèòüToolStripMenuItem1->Name = L"âñòàâèòüToolStripMenuItem1";
			this->âñòàâèòüToolStripMenuItem1->Size = System::Drawing::Size(186, 26);
			this->âñòàâèòüToolStripMenuItem1->Text = L"Âñòàâèòü";
			this->âñòàâèòüToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::âñòàâèòüToolStripMenuItem1_Click);
			// 
			// âûäåëèòüÂñåToolStripMenuItem1
			// 
			this->âûäåëèòüÂñåToolStripMenuItem1->Name = L"âûäåëèòüÂñåToolStripMenuItem1";
			this->âûäåëèòüÂñåToolStripMenuItem1->Size = System::Drawing::Size(186, 26);
			this->âûäåëèòüÂñåToolStripMenuItem1->Text = L"Âûäåëèòü âñå";
			this->âûäåëèòüÂñåToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::âûäåëèòüÂñåToolStripMenuItem1_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(218, 24);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			// 
			// ñëîâàğüToolStripMenuItem
			// 
			this->ñëîâàğüToolStripMenuItem->Name = L"ñëîâàğüToolStripMenuItem";
			this->ñëîâàğüToolStripMenuItem->Size = System::Drawing::Size(218, 24);
			this->ñëîâàğüToolStripMenuItem->Text = L"Ñèíîíèìû";
			// 
			// äîáàâèòüÂÑëîâàğüToolStripMenuItem
			// 
			this->äîáàâèòüÂÑëîâàğüToolStripMenuItem->Name = L"äîáàâèòüÂÑëîâàğüToolStripMenuItem";
			this->äîáàâèòüÂÑëîâàğüToolStripMenuItem->Size = System::Drawing::Size(218, 24);
			this->äîáàâèòüÂÑëîâàğüToolStripMenuItem->Text = L"Äîáàâèòü â ñëîâàğü";
			//this->äîáàâèòüÂÑëîâàğüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::äîáàâèòüÂÑëîâàğüToolStripMenuItem_Click);
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

	private: System::Void ñîçäàòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->richTextBox1->Text != "")
		{
			File_name = this->richTextBox1->Text;
			ñîõğàíèòüÊàêToolStripMenuItem_Click(sender, e);
		}
		else
		{
			MessageBox::Show("Ôàéë ñîçäàí","Ïğåäóïğåæäåíèå");
			this->richTextBox1->Text = "";
			File_name = "Noname.rtf";
		}
	}

	private: System::Void îòêğûòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->FileName = "";
		this->openFileDialog1->InitialDirectory =
			System::IO::Directory::GetCurrentDirectory();
		this->openFileDialog1->Filter = "Rtf ôàéëû (*.rtf)|*.rtf|Âñå ôàéëû (*.*) | *.*";
		// Èìÿ ôàéëà â ïîëå ââîäà èìåíè.
		this->openFileDialog1->FileName = File_name;
		// Ïîêàçàòü äèàëîã è æäàòü ÎÊ.
		if (this->openFileDialog1->ShowDialog() ==
			System::Windows::Forms::DialogResult::OK)
		{
			File_name = openFileDialog1->FileName;
			this->richTextBox1->LoadFile
			(File_name, RichTextBoxStreamType::RichText);
		}
		else // Íå ÎÊ èëè åùå ÷òî-òî.
			if (richTextBox1->Text == "")
			{
				âûäåëèòüÂñåToolStripMenuItem1->Enabled = false;
				âûğåçàòüToolStripMenuItem1->Enabled = false;
				êîïèğîâàòüToolStripMenuItem1->Enabled = false;
			}
			else
			{
					âûäåëèòüÂñåToolStripMenuItem1->Enabled = true;
					âûğåçàòüToolStripMenuItem1->Enabled = true;
					êîïèğîâàòüToolStripMenuItem1->Enabled = true;

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
			âûäåëèòüÂñåToolStripMenuItem1->Enabled = true;
			âûğåçàòüToolStripMenuItem1->Enabled = true;
			êîïèğîâàòüToolStripMenuItem1->Enabled = true;
		}
		else
		{
			âûäåëèòüÂñåToolStripMenuItem1->Enabled = false;
			âûğåçàòüToolStripMenuItem1->Enabled = false;
			êîïèğîâàòüToolStripMenuItem1->Enabled = false;
		}
	}
	private: System::Void ñîõğàíèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Îòñëåäèòü ïåğâîíà÷àëüíîå ñîõğàíåíèå.
		if (File_name == "Noname.rtf")
			// Âûçâàòü ïóíêò ìåíş "Ñîõğàíèòü êàê".
			// Ìîæíî ïğåäâàğèòåëüíî ñîîáùèòü – MessageBox.
		{
			ñîõğàíèòüÊàêToolStripMenuItem_Click(sender, e);
			this->statusStrip1->Items[0]->Text = File_name;
		}
		else
			// Ñîõğàíèòü òåêñò â ôàéëå.
			this->richTextBox1->SaveFile
			(File_name, RichTextBoxStreamType::RichText);
		this->statusStrip1->Items[0]->Text = File_name;
	}
	private: System::Void ñîõğàíèòüÊàêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->saveFileDialog1->
			InitialDirectory = System::IO::Directory::GetCurrentDirectory();
		this->saveFileDialog1->Filter = "Rtf ôàéëû (*.rtf)|*.rtf|Âñå ôàéëû (*.*) | *.*";
		// Èìÿ ôàéëà â ïîëå ââîäà èìåíè.
		this->saveFileDialog1->FileName = File_name;
		// Ïîêàçàòü äèàëîã è æäàòü ÎÊ.
		// Íå ïğîñòî this->saveFileDialog1->ShowDialog();
		if (this->saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			File_name = saveFileDialog1->FileName;
			this->richTextBox1->SaveFile
			(File_name, RichTextBoxStreamType::RichText);
			this->statusStrip1->Items[0]->Text = File_name;
		}
		else
			// Íå ÎÊ èëè åùå ÷òî-òî.
			;

	}
	private: System::Void toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {

		switch (this->toolStrip1->Items->IndexOf(e->ClickedItem))
		{
		case 0: {/*Ñîçäàòü*/ ñîçäàòüToolStripMenuItem_Click(sender, e); break; }
		case 1: {/*Îòêğûòü*/ îòêğûòüToolStripMenuItem_Click(sender, e); break; }
		case 2: {/*Ñîõğàíèòü*/ ñîõğàíèòüToolStripMenuItem_Click(sender, e); break; }
		case 4: { âûğåçàòüToolStripMenuItem_Click(sender, e); break; }
		case 5: { êîïèğîâàòüToolStripMenuItem_Click(sender, e); break; }
		case 6: { âñòàâèòüToolStripMenuItem_Click(sender, e); break; }

		};

	}
	private: System::Void êîïèğîâàòüToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Ïîëó÷èòü ôîğìàò ïğåäñòàâëåíèÿ òåêñòà â áóôåğå êàê Rtf ôîğìàò.
		DataFormats::Format^ myFormat = DataFormats::GetFormat(DataFormats::Rtf);
		// Ïğîâåğèòü, åñòü ëè âûäåëåíèå.
		if (this->richTextBox1->SelectionLength > 0)
		{
			Clipboard::SetData(myFormat->Name, this->richTextBox1->SelectedRtf);
		}
	}
	private: System::Void êîïèğîâàòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Ïîëó÷èòü ôîğìàò ïğåäñòàâëåíèÿ òåêñòà â áóôåğå êàê Rtf ôîğìàò.
		DataFormats::Format^ myFormat = DataFormats::GetFormat(DataFormats::Rtf);
		// Ïğîâåğèòü, åñòü ëè âûäåëåíèå.
		if (this->richTextBox1->SelectionLength > 0)
		{
			Clipboard::SetData(myFormat->Name, this->richTextBox1->SelectedRtf);
		}
	}
	private: System::Void âûğåçàòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Îòêğûòü DataFormats::Format äëÿ Rtf.
		DataFormats::Format^ myFormat = DataFormats::GetFormat(DataFormats::Rtf);
		if (this->richTextBox1->SelectionLength > 0)
		{
			Clipboard::SetData(myFormat->Name, this->richTextBox1->SelectedRtf);
			this->richTextBox1->SelectedRtf = ""; //->Remove(1);
		}
	}

	private: System::Void âûğåçàòüToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Îòêğûòü DataFormats::Format äëÿ Rtf.
		DataFormats::Format^ myFormat = DataFormats::GetFormat(DataFormats::Rtf);
		if (this->richTextBox1->SelectionLength > 0)
		{
			Clipboard::SetData(myFormat->Name, this->richTextBox1->SelectedRtf);
			this->richTextBox1->SelectedRtf = ""; //->Remove(1);
		}
	}
	private: System::Void âñòàâèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Îòêğûòü DataFormats::Format äëÿ Rtf.
		DataFormats::Format^ myFormat = DataFormats::GetFormat(DataFormats::Rtf);
		// Åñòü ëè äàííûå
		if (Clipboard::ContainsData(myFormat->Name) == true)
			// èëè if (Clipboard::GetDataObject()->GetDataPresent(DataFormats::Rtf)==true)
		{
			this->richTextBox1->Paste(myFormat);
			this->richTextBox1->Refresh();
		}

	}
	private: System::Void âñòàâèòüToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Îòêğûòü DataFormats::Format äëÿ Rtf.
		DataFormats::Format^ myFormat = DataFormats::GetFormat(DataFormats::Rtf);
		// Åñòü ëè äàííûå
		if (Clipboard::ContainsData(myFormat->Name) == true)
			// èëè if (Clipboard::GetDataObject()->GetDataPresent(DataFormats::Rtf)==true)
		{
			this->richTextBox1->Paste(myFormat);
			this->richTextBox1->Refresh();
		}
	}
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e)
	{ // Ñîçäàòü îáúåêò ColorDialog, ìèíóÿ êîíñòğóêòîğ.
		ColorDialog^ MyDialog = gcnew ColorDialog;
		// Öâåò, àêòèâíûé â äèàëîãå, ğàâåí òåêóùåìó öâåòó ıëåìåíòà.
		MyDialog->Color = this->richTextBox1->ForeColor;
		// Ïîêàçàòü îêíî äèàëîãà.
		if (MyDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			// Ïğèìåíèòü ê âûäåëåííîìó òåêñòó.
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
		// Ãäå - â òåêñòå richTextBox1.
		String^ Where = gcnew String("");
		Where = this->richTextBox1->Text;
		// ×òî - èç òåêñòîâîãî ïîëÿ ïàíåëè èíñòğóìåíòîâ.
		String^ What = gcnew String("");
		What = this->toolStripTextBox1->Text;
		// Ğàçäåëèòü òåêñò íà ñëîâà.
		array<Char>^ chars = { ' ', ',', '.', ':' };
		array <String^>^ My_Split = Where->Split(chars);
		// Íà÷àëî ïîèñêà: ìåñòîïîëîæåíèå Wo_Start.
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
//private: System::Void äîáàâèòüÂÑëîâàğüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
//	Form^ Frm;
//	Frm = gcnew Child(richTextBox1->SelectedText);
//	Frm->ShowDialog();
	//if (this->richTextBox1->SelectionLength > 0)
	//{

	//	Child_Form-> = this->richTextBox1->SelectedRtf;
	//}
//}

private: System::Void ñîçäàòüToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->richTextBox1->Text != "")
	{
		File_name = this->richTextBox1->Text;
		ñîõğàíèòüÊàêToolStripMenuItem_Click(sender, e);
	}
	else
	{
		MessageBox::Show("Ôàéë ñîçäàí", "Ïğåäóïğåæäåíèå");
		this->richTextBox1->Text = "";
		File_name = "Noname.rtf";
	}
}
private: System::Void îòêğûòüToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->FileName = "";
	this->openFileDialog1->InitialDirectory =
		System::IO::Directory::GetCurrentDirectory();
	this->openFileDialog1->Filter = "Rtf ôàéëû (*.rtf)|*.rtf|Âñå ôàéëû (*.*) | *.*";
	// Èìÿ ôàéëà â ïîëå ââîäà èìåíè.
	this->openFileDialog1->FileName = File_name;
	// Ïîêàçàòü äèàëîã è æäàòü ÎÊ.
	if (this->openFileDialog1->ShowDialog() ==
		System::Windows::Forms::DialogResult::OK)
	{
		File_name = openFileDialog1->FileName;
		this->richTextBox1->LoadFile
		(File_name, RichTextBoxStreamType::RichText);
	}
	else // Íå ÎÊ èëè åùå ÷òî-òî.
		;
}
private: System::Void ñîõğàíèòüToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Îòñëåäèòü ïåğâîíà÷àëüíîå ñîõğàíåíèå.
	if (File_name == "Noname.rtf")
		// Âûçâàòü ïóíêò ìåíş "Ñîõğàíèòü êàê".
		// Ìîæíî ïğåäâàğèòåëüíî ñîîáùèòü – MessageBox.
	{
		ñîõğàíèòüÊàêToolStripMenuItem_Click(sender, e);
		this->statusStrip1->Items[0]->Text = File_name;
	}
	else
		// Ñîõğàíèòü òåêñò â ôàéëå.
		this->richTextBox1->SaveFile
		(File_name, RichTextBoxStreamType::RichText);
	this->statusStrip1->Items[0]->Text = File_name;
}
private: System::Void âûäåëèòüÂñåToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (richTextBox1->Text != "")
	{
		this->richTextBox1->SelectionLength = richTextBox1->TextLength;
	}
}

private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Text != "")
	{
		âûäåëèòüÂñåToolStripMenuItem1->Enabled = true;
		âûğåçàòüToolStripMenuItem1->Enabled = true;
		êîïèğîâàòüToolStripMenuItem1->Enabled = true;
	}
	else
	{
		âûäåëèòüÂñåToolStripMenuItem1->Enabled = false;
		âûğåçàòüToolStripMenuItem1->Enabled = false;
		êîïèğîâàòüToolStripMenuItem1->Enabled = false;
	}
}

};
};



