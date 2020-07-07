#pragma once

#include<iostream>
#include <conio.h>
#include <Windows.h>
#include<string>
#include<ctime>

using namespace std;

class Patron//���� ������.
{
private:
	int number;//���������� ����� �������.
	int hit_probability;//��������� ���������.

public:

	Patron() :number(0), hit_probability(70) {};

	//����������.����� ��������� ��������� 70 � ��.

	void Shoot(int& number)//����� "������������".
	{
		cout << "����������� ������ �������� ����� " << number << endl;
		number++;
	}
	bool Hit()//��������,�� �����,����� ������� ��������� ��������.
	{
		int val;
		val = rand() % 100;
		if (val > 0 && val < hit_probability)
		{
			return true;
		}
		else
		{
			return false;
		}

	}
};
class Magazine//���� ������� ��������.
{
	struct Node
	{
		Patron pat;
		Node* next;
	};
	Node* phead;
	int size;

public:

	Magazine() :phead(nullptr), size(30) {};


	void Push(Patron p)
	{
		Node* pnew = new Node();
		pnew->pat = p;

		if (phead == nullptr)
			pnew->next = nullptr;
		else
			pnew->next = phead;

		phead = pnew;
		size++;
	}

	Patron Pop()
	{
		if (phead == nullptr)
		{
			cout << "���� ������� � ���� ��� �������.����.... " << endl;
		}

		Patron val = phead->pat;
		Node* pdel = phead;
		phead = phead->next;
		delete pdel;
		size--;
		return val;
	}

	void Set_size(int size)
	{
		this->size = size;
	}

	int Get_size()
	{
		return size;
	}

	void Clear()
	{
		if (phead != nullptr)
		{
			Node* del = phead;
			while (del != nullptr)
			{
				phead = phead->next;
				delete del;
				del = phead;
			}
		}
	}

	~Magazine()
	{
		Clear();
	}

};

class Automat :Magazine
{
public:


	void Put_Magazine()
	{
		cout << "The machine automat puts a magazine" << endl;
	}

	Patron pat[30];
	int numb = rand() % 120 + 1;
	void One_patron(Patron pat)
	{
		pat.Shoot(numb);
	}



	void FinalShoot(Magazine mag)
	{
		while (Get_size() != 0)
		{
			One_patron(mag.Pop());
			if (pat->Hit())
			{
				cout << "�������� ������ " << endl;
			}
			else
			{
				cout << "��� ���...�����������..." << endl;
			}
			Sleep(1000);
		}

	}

};