//#include "Game.h"
//
//void main()
//{
//	srand(time(0));
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//	
//	int n;
//	cout << "Введіть розмір армії  :";
//	cin >> n;
//	system("cls");
//
//	Unit** players1 = new Unit * [n];
//	Army a(n);	
//	Army b(n);
//	cout << " Army #1 :\n";
//	cout << "========================" <<endl;
//	a.ShowA();	
//	cout << " Army #2 :\n";
//	cout << "========================" << endl;
//	b.ShowA();	
//	a.War(b);	
//	
//
//	delete[] players1;
//	
//
//
//}