#include "Dictionary.h"
using namespace System;

Word::Word()
{
	word = gcnew String("");
	definition = gcnew String("");
}

void my_dict::View(System::Windows::Forms::ListBox^ LB)
{
	LB->Items->Clear();
	if(len!=0)
	{
		for (int i = 0; i < len; i++)
		{
			LB->Items->Add(my_di[i]->Word_);
		}
	}
}

bool my_dict::empty()
{
	return len == 0;
}

bool my_dict::full()
{
	return len == 100;
}

bool my_dict::del(Word^ value)
{

	if (!empty())
	{
		for (int i = 0; i < len; i++)
		{
			if (this->my_di[i]->Word_ == value->Word_ && this->my_di[i]->Definition == value->Definition)
			{
				for (int k = i; k < len; k++)
				{
					my_di[k] = my_di[k + 1];
				}
				len--;
				return 1;
			}
		}
	}
	return 0;
}

bool my_dict::add(Word^ object)
{
	if (!full())
	{
		this->my_di[this->len]->operator=(object);
		this->len++;
		return 1;
	}
	else return 0;
}
void my_dict::loadDictionary(String^ fileName)
{
	StreamReader^ SR = gcnew StreamReader(fileName);
	String^ str = gcnew String("");
	while (str = SR->ReadLine()) {
		Word^ p = gcnew Word();
		p->Word_ = str->Substring(0, str->IndexOf("$"));
		p->Definition = str->Substring(str->IndexOf("$") + 1);
		this->add(p);
	}
}
void my_dict::dict_in_file(String^ fileName)
{
	//Вывод в файл
	StreamWriter^ My_SW = gcnew StreamWriter(fileName); // Запись всего текста.
	for (int i = 0; i < len; i++)
	{
		String^ Line = gcnew String("");
		Line = my_di[i]->Word_ + "$"+ my_di[i]->Definition+"\n";
		My_SW->Write(Line);
	}
	My_SW->Close();
}

int my_dict::find(String^ name)
{
	String^ S = gcnew String("");
	for (int i = 0; i < len; i++)
	{
		S = my_di[i]->Word_;
		int index = String::Compare(S, name, true);
		if (index == 1) return i;
	}
	return -1;
}
