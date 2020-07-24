#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <map>
#include <Windows.h>
using namespace std;

#define PAUSE system("pause");
#define CLEAR system("cls");

class Vocabulary
{
private:

	map<string, list<string>> dic;

public:

	void Show_All();
	
	void Word_search();
	
	void AddTranslateToWord();
	
	void AddWordToVocebulary();
	
	void DeleteWordFromVocabulary();


	friend ofstream& operator<<(ofstream& out, Vocabulary& vk);
	friend ifstream& operator>>(ifstream& in, Vocabulary& vk);
};





class English_to_Russian : public Vocabulary
{
private:
	string Name_file_Vocabulary;
public:
	English_to_Russian() :Name_file_Vocabulary("file1.txt") { }
	string Get_name_file()
	{
		return Name_file_Vocabulary;
	}
};

class Russian_to_English : public Vocabulary
{
private:
	string Name_file_Vocabulary;
public:
	Russian_to_English() :Name_file_Vocabulary("file2.txt") { }

	string Get_name_file()
	{
		return Name_file_Vocabulary;
	}
};



