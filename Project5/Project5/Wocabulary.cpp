#include "Wocabulary.h"

void main()
{



}


//
//void main()
//{
//	setlocale(LC_CTYPE, "ukr");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//	
//	Tree tree;
//		
//	ifstream file("filename.txt");
//
//	if (file.is_open())
//	{
//		cout << "Файл відкрито успішно" << endl;
//
//		string line;//Строчка текста.					
//
//		while (getline(file, line))
//		{
//			
//			string eng, ukr;
//			istringstream iss(line);			
//			iss >> eng >> ukr;			
//			tree.Add(eng, ukr);
//			
//		}
//		
//	}
//	
//	string stoka, ukr;
//	char key = ' ';
//	char mainMenu = '1';
//	while (mainMenu != '6')
//	{
//		char m = '1';
//		while (m != 13)
//		{
//			if (m == '1')
//			{
//				Color(10);	cout << "==>";
//			}
//			else
//			{
//				Color(7); cout << "  ";
//			}
//			cout << "1. Перегляд словничка\n";
//			if (m == '2')
//			{
//				Color(10); cout << "==>";
//			}
//			else
//			{
//				Color(7); cout << "  ";
//			}
//			cout << "2. Пошук перекладу \n";
//			if (m == '3')
//			{
//				Color(10); cout << "==>";
//			}
//			else
//			{
//				Color(7); cout << "  ";
//			}
//			cout << "3. Додавання слова у словничок \n";
//			if (m == '4')
//			{
//				Color(10);	cout << "==>";
//			}
//			else
//			{
//				Color(7);	cout << "  ";
//			}
//			cout << "4. Видалення слова зі словничка\n";
//			
//			if (m == '5')
//			{
//				Color(10);	cout << "==>";
//			}
//			else
//			{
//				Color(7); cout << "  ";
//			}
//			cout << "5. Редагування даних словничка\n";
//
//			if (m == '6')
//			{
//				Color(10);	cout << "==>";
//			}
//			else
//			{
//				Color(7); cout << "  ";
//			}
//			cout << "6. Запис у файл і вихід зі словничка\n";
//			Color(10);
//			cout << "--------------------------------------------" << endl;
//
//			m = _getch();
//			if (m != 13)
//			{
//				mainMenu = m;
//			}
//			system("cls");
//			Color(7);
//		}
//
//		switch (mainMenu)
//		{
//				case '1':
//				{			
//					tree.Show();
//					_getch();
//					break;
//				}
//
//				case '2'://try/catch
//				{
//					cout << "Введіть англійське слово і дізнаєтесь його український переклад :" << endl;
//					getline(cin, stoka);
//
//					try
//					{
//						if (tree.Find(stoka) == 0)
//							throw 1;
//
//					}
//					catch(int ex)
//					{
//						if (ex == 1)
//						cout << "Таке слово відсутнє ";
//					}
//					
//					cout << "Введіть переклад цього слова і воно буде в нашому словнику: " << endl;
//					getline(cin, ukr);
//					tree.Add(stoka, ukr);
//					tree.Show();
//
//					if(tree.Find(stoka) == 1);
//					cout << "Переклад слова: " << endl;
//
//					
//					_getch();
//					system("cls");
//					break;
//				}
//				case '3':
//				{
//					string slovo,ukrslovo;
//					cout << " Введіть нове англійське слово :" << endl;
//					getline(cin, slovo);
//					cout << " Введіть переклад слова : " << endl;
//					getline(cin, ukrslovo);
//					
//					tree.Add(slovo, ukrslovo);
//					tree.Show();
//					system("cls");
//					break;
//				}
//				case '4':
//				{
//					string delslovo;
//					cout << "Введіть слово,яке видалити зі словничка: " << endl;
//					getline(cin, delslovo);
//					tree.Delete(delslovo);
//					tree.Show();
//					_getch();
//					//system("cls");
//					break;
//				}
//				case '5':
//				{
//					string engredact, ukrredact;
//					cout << "Введіть англійське слово для редагування" << endl;
//					getline(cin, engredact);
//					cout << " Введіть переклад цього слова" << endl;
//					getline(cin, ukrredact);
//					tree.SetData(engredact, ukrredact);
//					tree.Show(); 
//					_getch();
//					break;
//				}
//				case '6':
//				{
//
//					Color(12);
//					cout << "===================================================" << endl;
//					cout << "Дякуємо,що скористались послугами нашого словника!\n";
//					cout << "===================================================" << endl;
//					Color(7);
//
//					ofstream fout("filename.txt", ios_base::trunc);
//					tree.AddFile(fout);
//					fout.close(); 
//
//					_getch();
//					break;
//				}			
//				default:
//				{
//					cout << "Перевірте правильність введених вами даних\n";
//					break;
//				}
//
//		}
//		if (m == '6') break;
//		system("cls");
//		
//	}
//		
//}
