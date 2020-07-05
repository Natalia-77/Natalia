//#pragma once
//#include<iostream>
//#include<string>
//#include <conio.h>
//#include <Windows.h>
//
//
//
//using namespace std;
//
//
//enum Prioritets {president=4,ministry=3,senator=2,assistant=1};//������ �������� �� ��������� �� ���������� �� ���������.
//
//class Document
//{
//private:
//	string name;//����� ���������.
//	int size;//����� ���������.
//
//public:	
//
//
//Document() :size(0) {}
//
//Document(string name, int size)
//{
//	this->name = name;
//	this->size = size;
//}
//
//~Document() {}
//
//void Show()
//{
//	cout << "����� ���������  " << this->name << " ����� ���������  " << this->size;
//}
//
//void Setname(string name)
//{
//	this->name = name;
//}
//
//string Getname()
//{
//	return this->name;
//}
//
//void Setsize(int size)
//{
//	this->size = size;
//}
//
//int Get_size()
//{
//	 this->size=size;
//	 return size;
//}
//
//
//};
//
//
//class Spooler
//{
//private:
//	int size_val;//����� �����.
//	int max_size = 30;
//	Document** doc;
//	Prioritets* prior;
//	
//
//public:
//	Spooler()
//	{
//		size_val = 0;
//
//		doc = new Document * [max_size];
//		prior = new Prioritets[max_size];
//		
//	}
//	~Spooler()
//	{
//
//		if (doc != nullptr)
//		{
//			delete[] doc;
//		}
//		if (prior != nullptr)
//		{
//			delete[] prior;
//		}
//
//	}
//	void push( Document* d, Prioritets p)
//	{
//
//		if (size_val == max_size)
//		{
//			cout << "���� ���� � ����! " << endl;
//		}
//		else
//		{
//
//			doc[size_val] = d;
//			prior[size_val] = p;			
//			size_val++;
//		}
//	}
//
//	Document* pop()
//	{
//		if (!empty())
//		{
//			int ind = 0;
//			int max_prior = prior[0];
//			
//			for (int i = 0; i < size_val; i++)
//			{
//				if (prior[i] > max_prior)
//				{
//					max_prior = prior[i];
//					ind = i;
//				}
//			}
//			
//			Document* elementForReturn = doc[ind];
//			
//			for (int i = ind; i < size_val - 1; i++)
//			{
//				doc[i] = doc[i + 1];
//				prior[i] = prior[i + 1];
//			}
//			size_val--;
//			
//			return elementForReturn;
//		}
//		cout << "����� ��������� \n";
//		return nullptr;
//
//
//	}
//
//	
//	bool empty()
//	{
//		return size_val == 0;//�� ��������� �����.
//	}
//	int size()
//	{
//		return size_val;//������� �����.
//	}
//	   	 
//
//
//};
//
//
//class Printer
//{
//private:
//	Document** mas;
//	
//public:
//	
//	void Show_print(Document* doc)
//	{	
//		cout << " ����� ��������� �������� � ������ : " << doc->Getname() << endl;
//		cout << " ����� ������ ��������� ������ : " << doc->Get_size() << endl;
//		int speed = 0;
//
//		if (doc->Get_size() > 0 && doc->Get_size() <= 500)//�� ������ �������� �������� ������ � �������.
//		{
//			speed = 150;
//		}
//		if (doc->Get_size() >500 && doc->Get_size() < 900)
//		{
//			speed = 100;
//		}
//		if (doc->Get_size() > 900)
//		{
//			speed = 50;
//		}
//
//
//		for (int i = 0; i<doc->Get_size()*0.03 ; i++)//��� �� ��������� ������ ����.
//		{
//			cout << "*";
//			Sleep(speed);
//		}
//		cout << endl;
//		_getch();
//
//	}
//
//
//};
//
//void Color(int color)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//}