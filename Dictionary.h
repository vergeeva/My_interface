#pragma once
using namespace System;
using namespace System::IO;

public ref class Word
{
public:
	Word();

protected:
	String^ word = gcnew String("");
	String^ definition = gcnew String("");
public:
	Word^ operator =(Word^ other)
	{
		this->Word_ = other->Word_;
		this->Definition = other->Definition;
		return this;
	}
	property String^ Word_
	{
		String^ get() {
			return word;
		}
		void set(String^ Word_) {
			word = gcnew String(Word_);
		}
	}
	property String^ Definition {
		String^ get() {
			return definition;
		}
		void set(String^ Definition) {
			definition = gcnew String(Definition);
		}
	};
};

public ref class my_dict
{
	array <Word^>^ my_di = gcnew array <Word^>(100);
	int len;
	bool Check()
	{
		return len >= 0;
	}
public:
	my_dict()
	{
		len = 0;
		for (int i = 0; i < 100; i++)
		{
			this->my_di[i] = gcnew Word();
		}
	}
	void View(System::Windows::Forms::ListBox^ LB);
	bool empty();
	bool full();
	bool del(Word^);
	bool add(Word^);
	void loadDictionary(String^ fileName);
	void dict_in_file(String^ fileName);
	int find(String^ name);
	property int Len {
		int get() {
			return len;
		}
		void set(int D) {
			len = D;
		}
	};
	String^ find_def(System::Windows::Forms::ListBox^ LB)
	{
		for (int i = 0; i < len; i++)
		{
			if (my_di[i]->Word_ == LB->SelectedItem)
			{
				return my_di[i]->Definition;
			}
		}
		return "Слово не выбрано";
	}
};



