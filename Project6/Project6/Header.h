//#pragma once
//
//
//#include <iostream>
//#include <conio.h>
//#include <Windows.h>
//#include <ctime>
//#include <iomanip>
//#include <fstream>
//#include <string>
//#include <cmath>
//
//using namespace std;
//
////Завдання 1
////Створити клас Figure, що містить в собі :
////-назву фігури(char arr[]);
////-висоту(int);
////-ширину(int)
////- колір(int);
////-позицію х(int);
////-позицію y(int).
//
////Клас повинен також містити необхідний набір конструкторів, а також метод Show(), який виводить
////фігуру на екран певного типу, певної висоти, ширини, коліром та в координатах x, y на консолі
//
////Перевантажити оператори
////Figure + Figure
////Figure - Figure
////Figure += int
////Figure -= int
////Figure > Figure
////Figure < Figure
////Figure == Figure
////Figure = Figure
//
////в мейны створити три фігури, попросивши користувача ввести вхідні дані
////Figure f1, f2, f3;
////Вивести інформацію про ці фігури використовуючи перевантаження
////f1 > f2
////f1 == f3
////f2 < f3
//
////Здійснити наступні операції
////	додати f1 Та f2
////	выдняти f2 та f3
////	зкопіювати f1 = f2;
//
////після цього знов порівняти всі фігури між собою
////всі операції супроводити виводом фігур на консоль
//
////ЛОГІКУ продумати САМОМУ!!!
////(тобто Figure + int(це наприклад f1 + 5) - може збільшувати розмір фігури на 5, може зміщати координати фігури на 5 або щось інше, що вивважаєте буде логічним)
//
//
//class Figure
//{
//	char name[50];
//	int height;
//	int width;
//	int color;
//	int x;
//	int y;
//
//public:
//
//	Figure()
//	{
//
//	}
//
//	Figure(char name[50], int height, int width, int color, int x, int y)
//
//	{
//		strcpy(this->name, name),
//			this->height = height;
//		this->width = width;
//		this->x = x;
//		this->y = y;
//		this->color = color;
//
//	}
//
//	Figure(const Figure& obj)//конструктор копіювання.
//	{
//		strcpy(name, obj.name);
//		height = obj.height;
//		width = obj.width;
//		x = obj.x;
//		y = obj.y;
//		color = obj.color;
//	}
//
//	~Figure()
//	{
//
//	}
//
//
//	void Enter_rectangle();//вводимо дані для прямокутника.
//	void Enter_triangle();//вводимо дані для трикутника.
//	void Show_rectangle();//виводимо прямокутник.
//	void Show_triangle();//виводимо трикутник.
//	void Show_triangle_inverted();//виводимо переврнутий трикутник.
//	void Show_rectangle_res();
//
//
//	Figure operator + (Figure& a)
//	{
//		Figure fw;
//		strcpy(fw.name, name);
//		fw.height = this->height + a.height;
//		fw.width = this->width + a.width;
//		fw.color = 10;//результат буде салатовий завжди.Воно не дуже виходило в мене,то я вирішила з тим кольором не морочити голову собі.
//		fw.x = (int)(this->x + a.x) / 2;
//		fw.y = (int)(this->y + a.y) / 2;
//		return fw;
//	}
//
//
//	Figure operator - (Figure& a)
//	{
//		Figure fw;
//		strcpy(fw.name, name);
//		fw.height = abs(this->height - a.height);
//		fw.width = abs(this->width - a.width);
//		fw.color = 10;
//		fw.x = 0;
//		fw.y = 0;
//
//
//		return fw;
//	}
//
//
//	Figure& operator+=(int a)
//	{
//		Figure fw;
//		strcpy(fw.name, name);
//		height += a;
//		width += a;
//		color = 10;
//		x += a;
//		y += a;
//
//		return *this;
//	}
//
//	Figure operator -=(Figure& a)
//	{
//		Figure fw;
//		strcpy(fw.name, name);
//		fw.height -= a.height;
//		fw.width -= a.width;
//		fw.color = 10;
//		fw.x -= a.x;
//		fw.y -= a.y;
//
//		return fw;
//
//	}
//
//	Figure operator=(Figure& a)
//	{
//		Figure fw;
//		strcpy(fw.name, name);
//		if (&fw == &a)
//		{
//			return fw;
//		}
//		height = a.height;
//		width = a.width;
//		color = 10;
//		x = a.x;
//		y = a.y;
//
//		return fw;
//
//	}
//
//	bool operator== (Figure& a)
//	{
//		Figure fw;
//
//		return (strcpy(fw.name, name),
//			fw.height == a.height,
//			fw.width == a.width,
//			fw.color == 10,
//			fw.x == a.x,
//			fw.y == a.y);
//	}
//
//	bool operator!= (Figure& a)
//	{
//		Figure fw;
//		return !(fw == a);
//	}
//
//	bool operator> (Figure& a)
//	{
//		Figure fw;
//
//		return (strcpy(fw.name, name),
//			fw.height * fw.width > a.height * a.width);//повертаю площу.
//
//	}
//
//	bool operator< (Figure& a)
//	{
//		Figure fw;
//
//		return (strcpy(fw.name, name),
//			fw.height * fw.width < a.height * a.width);//повертаю площу.
//
//	}
//
//};
//
//
//
//void SetPos(int x, int y)
//{
//	COORD c;
//	c.X = x;
//	c.Y = y;
//
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
//}
//
//void  Figure::Show_rectangle()//виведення прямокутника.
//{
//
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//	SetPos(x, y);
//	cout << name;
//	cout << endl;
//	SetPos(x++, y++);
//	for (int i = 0; i < height; i++)
//	{
//
//		for (int j = 0; j < width; j++)
//		{
//			SetPos(x + i, y + j);
//			cout << "+";
//		}
//		cout << endl;
//	}
//
//}
//
//void  Figure::Show_rectangle_res()//виведення ромбом,який отримали від трикутника.
//{
//
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//
//	for (int i = 0; i < height; i++)
//	{
//		for (int j = 0; j < height; j++)
//		{
//			//нижня частина.
//			if (i < height / 2)
//			{
//				if (j < height / 2 - i || j > height / 2 + i)
//					cout << ' ';
//				else
//					cout << '+';
//				continue;
//			}
//			//верхня.
//			if (i > height / 2)
//			{
//				if (j < i - height / 2 || j > height - (i - height / 2) - 1)
//					cout << ' ';
//				else
//					cout << '+';
//				continue;
//			}
//
//			cout << '+';//серединка.
//		}
//		cout << endl;
//	}
//
//}
//
//
//void  Figure::Show_triangle()//виведення трикутника.
//{
//
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//	SetPos(x, y);
//	cout << name;
//	cout << endl;
//	SetPos(x++, y++);
//	for (int i = 0; i < height; i++)
//	{
//		SetPos(x - i + 2, y++);
//
//		for (int j = height - i * 2; j <= height; j++)
//		{
//			cout << "+";
//		}
//		cout << endl;
//	}
//
//}
//
//
//void  Figure::Show_triangle_inverted()//виведення трикутника перевернутого.
//{
//
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//	SetPos(x, y);
//	cout << name;
//	cout << endl;
//	SetPos(x++, y++);
//
//	for (int i = height - 1; i >= 0; i--)
//	{
//
//		SetPos(x++, y++);
//		for (int j = height - i * 2; j <= height; j++)
//		{
//
//			cout << "+";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//
//void Figure::Enter_rectangle()//вводимо прямокутник.
//{
//	cout << "Введіть назву фігури : " << endl;
//	cin >> name;
//	cout << "Введіть колір фігури : " << endl;
//	cin >> color;
//	cout << "Введіть висоту фігури : " << endl;
//	cin >> height;
//	cout << "Введіть довжину фігури : " << endl;
//	cin >> width;
//	cout << "Введіть координати точки Х :" << endl;
//	cin >> x;
//	cout << "Введіть координати точки Y :" << endl;
//	cin >> y;
//
//}
//
//void Figure::Enter_triangle()//вводимо трикутник.
//{
//	cout << "Введіть назву фігури : " << endl;
//	cin >> name;
//	cout << "Введіть колір фігури : " << endl;
//	cin >> color;
//	cout << "Введіть висоту фігури : " << endl;
//	cin >> height;
//	cout << "Введіть координати точки Х :" << endl;
//	cin >> x;
//	cout << "Введіть координати точки Y :" << endl;
//	cin >> y;
//
//}
//
//void Color(int color)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//}
//
//
//
//




