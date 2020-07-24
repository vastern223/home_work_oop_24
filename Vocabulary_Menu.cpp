#include "Vocabulary_Menu.h"


void Vocabulary_Menu:: Menu()
{
	int chois = 0;
	do
	{
		cout << "Select vocabulary: " << endl;
		cout << "1 - English to Russian" << endl;
		cout << "2 - Russian to English" << endl;
		cout << "0 - exit" << endl;
		cout << "-> ";
		cin >> chois;
		switch (chois)
		{
		case 1:
		{ CLEAR
			English_to_Russian e_t_r;
		Menu_functional(e_t_r);
		}
		break;
		case 2:
		{ CLEAR
			Russian_to_English r_t_e;
		Menu_functional(r_t_e);
		}
		break;
		}
	} while (chois != 0);

}


void Vocabulary_Menu:: Menu_functional(English_to_Russian& vk)
{
	int chois;
	do
	{
		cout << " English to Russian" << endl;
		cout << " 1 - Add word to vocabulary" << endl;
		cout << " 2 - Delete word from vocabulary" << endl;
		cout << " 3 - Add translate word" << endl;
		cout << " 4 - Search word" << endl;
		cout << " 5 - Show all words from vocabulary" << endl;
		cout << " 6 - Save vocabulary to file" << endl;
		cout << " 7 - Load vocabulary from file" << endl;
		cout << " 0 - exit" << endl;
		cout << "--> ";
		cin >> chois;
		switch (chois)
		{
			CLEAR
		case 1:
			{
				vk.AddWordToVocebulary();
				PAUSE
					CLEAR
			}
			break;
		case 2:
		{
			vk.DeleteWordFromVocabulary();
			PAUSE
				CLEAR
		}
		break;
		case 3:
		{
			vk.AddTranslateToWord();
			PAUSE
				CLEAR
		}
		break;
		case 4:
		{
			vk.Word_search();
			PAUSE
				CLEAR
		}
		break;
		case 5:
		{
			vk.Show_All();
			PAUSE
				CLEAR
		}
		break;
		case 6:
		{
			ofstream fout(vk.Get_name_file());

			fout << vk;

			fout.close();
			CLEAR
		}
		break;
		case 7:
		{
			ifstream fin(vk.Get_name_file());

			fin >> vk;

			fin.close();
			CLEAR
		}
		break;
		}
	} while (chois != 0);

}


void Vocabulary_Menu:: Menu_functional(Russian_to_English& vk)
{
	int chois;
	do
	{

		cout << " Russian to English" << endl;
		cout << " 1 - Add word to vocabulary" << endl;
		cout << " 2 - Delete word from vocabulary" << endl;
		cout << " 3 - Add translate word" << endl;
		cout << " 4 - Search word" << endl;
		cout << " 5 - Show all words from vocabulary" << endl;
		cout << " 6 - Save vocabulary to file" << endl;
		cout << " 7 - Load vocabulary from file" << endl;
		cout << " 0 - exit" << endl;
		cout << "--> ";
		cin >> chois;
		switch (chois)
		{
			CLEAR
		case 1:
			{
				vk.AddWordToVocebulary();
				PAUSE
					CLEAR
			}
			break;
		case 2:
		{
			vk.DeleteWordFromVocabulary();
			PAUSE
				CLEAR
		}
		break;
		case 3:
		{
			vk.AddTranslateToWord();
			PAUSE
				CLEAR
		}
		break;
		case 4:
		{
			vk.Word_search();
			PAUSE
				CLEAR
		}
		break;
		case 5:
		{
			vk.Show_All();
			PAUSE
				CLEAR
		}
		break;
		case 6:
		{
			ofstream fout(vk.Get_name_file());

			fout << vk;

			fout.close();
			CLEAR
		}
		break;
		case 7:
		{
			ifstream fin(vk.Get_name_file());

			fin >> vk;

			fin.close();
			CLEAR
		}
		break;
		}
	} while (chois != 0);


}