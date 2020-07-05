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
////�������� 1
////�������� ���� Figure, �� ������ � ��� :
////-����� ������(char arr[]);
////-������(int);
////-������(int)
////- ����(int);
////-������� �(int);
////-������� y(int).
//
////���� ������� ����� ������ ���������� ���� ������������, � ����� ����� Show(), ���� ��������
////������ �� ����� ������� ����, ����� ������, ������, ������ �� � ����������� x, y �� ������
//
////������������� ���������
////Figure + Figure
////Figure - Figure
////Figure += int
////Figure -= int
////Figure > Figure
////Figure < Figure
////Figure == Figure
////Figure = Figure
//
////� ����� �������� ��� ������, ���������� ����������� ������ ����� ���
////Figure f1, f2, f3;
////������� ���������� ��� �� ������ �������������� ��������������
////f1 > f2
////f1 == f3
////f2 < f3
//
////�������� ������� ��������
////	������ f1 �� f2
////	������� f2 �� f3
////	��������� f1 = f2;
//
////���� ����� ���� �������� �� ������ �� �����
////�� �������� ����������� ������� ����� �� �������
//
////��ò�� ��������� ������!!!
////(����� Figure + int(�� ��������� f1 + 5) - ���� ���������� ����� ������ �� 5, ���� ������ ���������� ������ �� 5 ��� ���� ����, �� ��������� ���� �������)
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
//	Figure(const Figure& obj)//����������� ���������.
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
//	void Enter_rectangle();//������� ��� ��� ������������.
//	void Enter_triangle();//������� ��� ��� ����������.
//	void Show_rectangle();//�������� �����������.
//	void Show_triangle();//�������� ���������.
//	void Show_triangle_inverted();//�������� ����������� ���������.
//	void Show_rectangle_res();
//
//
//	Figure operator + (Figure& a)
//	{
//		Figure fw;
//		strcpy(fw.name, name);
//		fw.height = this->height + a.height;
//		fw.width = this->width + a.width;
//		fw.color = 10;//��������� ���� ��������� ������.���� �� ���� �������� � ����,�� � ������� � ��� �������� �� �������� ������ ���.
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
//			fw.height * fw.width > a.height * a.width);//�������� �����.
//
//	}
//
//	bool operator< (Figure& a)
//	{
//		Figure fw;
//
//		return (strcpy(fw.name, name),
//			fw.height * fw.width < a.height * a.width);//�������� �����.
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
//void  Figure::Show_rectangle()//��������� ������������.
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
//void  Figure::Show_rectangle_res()//��������� ������,���� �������� �� ����������.
//{
//
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//
//	for (int i = 0; i < height; i++)
//	{
//		for (int j = 0; j < height; j++)
//		{
//			//����� �������.
//			if (i < height / 2)
//			{
//				if (j < height / 2 - i || j > height / 2 + i)
//					cout << ' ';
//				else
//					cout << '+';
//				continue;
//			}
//			//������.
//			if (i > height / 2)
//			{
//				if (j < i - height / 2 || j > height - (i - height / 2) - 1)
//					cout << ' ';
//				else
//					cout << '+';
//				continue;
//			}
//
//			cout << '+';//���������.
//		}
//		cout << endl;
//	}
//
//}
//
//
//void  Figure::Show_triangle()//��������� ����������.
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
//void  Figure::Show_triangle_inverted()//��������� ���������� �������������.
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
//void Figure::Enter_rectangle()//������� �����������.
//{
//	cout << "������ ����� ������ : " << endl;
//	cin >> name;
//	cout << "������ ���� ������ : " << endl;
//	cin >> color;
//	cout << "������ ������ ������ : " << endl;
//	cin >> height;
//	cout << "������ ������� ������ : " << endl;
//	cin >> width;
//	cout << "������ ���������� ����� � :" << endl;
//	cin >> x;
//	cout << "������ ���������� ����� Y :" << endl;
//	cin >> y;
//
//}
//
//void Figure::Enter_triangle()//������� ���������.
//{
//	cout << "������ ����� ������ : " << endl;
//	cin >> name;
//	cout << "������ ���� ������ : " << endl;
//	cin >> color;
//	cout << "������ ������ ������ : " << endl;
//	cin >> height;
//	cout << "������ ���������� ����� � :" << endl;
//	cin >> x;
//	cout << "������ ���������� ����� Y :" << endl;
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




