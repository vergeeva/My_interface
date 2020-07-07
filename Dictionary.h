#pragma once
using namespace System;
using namespace System::IO;

public ref class Word
{
public:
	Word();

protected:
	String^ word;
	String^ definition;
public:
	Word^ from_file_in( String^ File_name)
	{
		StreamReader^ My_SR = File::OpenText(File_name);
		String^ My_Str = My_SR->ReadLine();
		for (int i = 0; i < My_Str->Length; i++)
		{
			while (My_Str[i] != Convert::ToChar("-"))
			{
				this->word += My_Str[i];
			}
			if (My_Str[i] == Convert::ToChar("-"))
			{
				this->definition += My_Str[i];
			}
		}
		return this;
	}
	property String^ Word_
	{
		String^ get() {
			return word;
		}
		void set(String^ Word_) {
			word = Word_;
		}
	}
	property String^ Definition {
		String^ get() {
			return definition;
		}
		void set(String^ Definition) {
			definition = Definition;
		}
	}
};



