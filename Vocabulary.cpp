#include "Vocabulary.h"



void Vocabulary:: Show_All()
{
	map <string, list<string>> ::iterator it = dic.begin();

	for (int i = 0; it != dic.end(); it++, i++)
	{
		cout << "Word: " << it->first << endl;
		cout << "Translate: " << endl;
		int l = 1;
		for (auto j = (it->second).begin(); j != (it->second).end(); j++, l++)
		{
			cout << l << ")" << *(j) << endl;
		}
		cout << endl;
	}
}

void Vocabulary:: Word_search()
{
	string input = "";
	cout << "Enter word to translate" << endl;
	cout << "->";
	cin >> input;

	if (dic.find(input) == dic.end())
		cout << "Translate not found!" << endl;
	else
	{
		cout << "Means" << endl;;
		for (string elem : dic[input])
		{
			cout << "Means: " << elem << endl;
		}
	}
	cout << endl;
}

void Vocabulary:: AddTranslateToWord()
{
	string input = "";
	cout << "Enter word to add translate" << endl;
	cout << "->";
	cin >> input;

	if (dic.find(input) == dic.end())
		cout << "Translate not found!" << endl;
	else
	{
		string translate = "";
		int counter;
		cout << "Enter count of translates, which you want to add: ";
		cin >> counter;
		for (int i = 0; i < counter; i++)
		{
			cout << "Enter translate" << endl;
			cout << "->";
			cin >> translate;
			dic[input].push_back(translate);
		}
	}
}

void Vocabulary:: AddWordToVocebulary()
{
	string word;
	cin.ignore();
	cout << "Enter word to add to vocabulary" << endl;
	cout << "->";
	cin >> word;
	list<string> temp;
	string translate;
	int count;
	cout << "Enter count of translates" << endl;
	cout << "->";
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cout << "Enter translate" << endl;
		cout << "->";
		cin >> translate;
		temp.push_back(translate);
	}

	dic.insert(make_pair(word, temp));
}

void Vocabulary:: DeleteWordFromVocabulary()
{
	string input = "";
	cout << "Enter word to delete" << endl;
	cout << "->";
	cin >> input;

	if (dic.find(input) == dic.end())
		cout << "Word not found!" << endl;
	else
	{
		dic.erase(input);
	}
}


ofstream& operator<<(ofstream& fout, Vocabulary& vk)
{
	for (map<string, list<string>>::iterator i = vk.dic.begin(); i != vk.dic.end(); i++)
	{
		fout << i->first << endl;
		fout << vk.dic[i->first].size() << endl;
		for (string elem : vk.dic[i->first])
		{
			fout << elem << endl;
		}
	}
	return fout;
}

ifstream& operator>>(ifstream& fin, Vocabulary& vk)
{
	string key, word;
	int number;
	list<string>tmp;
	while (!fin.eof())
	{
		if (!fin.eof())
		{
			fin >> key;
			fin >> number;
			for (int i = 0; i < number; i++)
			{
				fin >> word;
				tmp.push_back(word);
			}
			vk.dic.insert(make_pair(key, tmp));
			tmp.clear();
		}
	}
	return fin;
}
