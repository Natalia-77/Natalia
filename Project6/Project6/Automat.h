#pragma once

#include<iostream>
#include <conio.h>
#include <Windows.h>
#include<string>
#include<ctime>

using namespace std;

class Patron//клас патрон.
{
private:
	int number;//порядковий номер патрона.
	int hit_probability;//ймовірність попадання.

public:

	Patron() :number(0), hit_probability(70) {};

	//контруктор.задаю ймовірність попадання 70 з ТЗ.

	void Shoot(int& number)//метод "вистрілювання".
	{
		cout << "Здійснюється постріл патроном номер " << number << endl;
		number++;
	}
	bool Hit()//перевірка,чи влучає,згідно відсотка ймовірності влучання.
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
class Magazine//клас магазин автомата.
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
			cout << "Нема патронів і немає чим стріляти.Соррі.... " << endl;
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
				cout << "Влучиний постріл " << endl;
			}
			else
			{
				cout << "Так собі...Промахнувся..." << endl;
			}
			Sleep(1000);
		}

	}

};