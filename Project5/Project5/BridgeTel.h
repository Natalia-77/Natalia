#pragma once

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>

using namespace std;


class Pencil
{
protected:
	int color;

public:

	Pencil() :color(1) {};
	virtual void Draw() = 0;
};

class Simple : public Pencil
{
public:
	void Draw() override
	{

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);

	}
};

class Color : public Pencil
{
public:
	void Draw() override
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);

	}
};


class Cool : public Pencil
{
public:
	void Draw() override
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);

	}
};

class TelephoneBook
{
protected:

	string surname;
	string number;
public:
	Pencil* pencil;

	TelephoneBook()
	{
		this->pencil = nullptr;
	};

	void Changepencil(Pencil* penc)
	{
		if (pencil != nullptr) delete pencil;
		pencil = penc;
	}
	virtual void Addnew(string surname, string number) = 0;
	virtual void Add(string message, string info) = 0;
	virtual void Drawbook() = 0;

	~TelephoneBook()
	{
		if (pencil != nullptr) delete pencil;
	}
};

class LightBook : public TelephoneBook
{

public:

	LightBook() {};
	LightBook(string surname, string number)
	{
		this->surname = surname;
		this->number = number;
	}

	void Drawbook() override
	{
		pencil->Draw();
		cout << "Surname:  " << this->surname << endl;
		cout << "Number:  " << this->number << endl;
	}
	virtual void Add(string message, string info)
	{

	}
	virtual void Addnew(string surname, string number)
	{
		this->surname = surname;
		this->number = number;
	}


};

class HardBook :public TelephoneBook
{
	string message;
	string info;

public:
	HardBook() {};
	HardBook(string surname, string number)
	{
		this->surname = surname;
		this->number = number;

	}
	void Drawbook() override
	{
		pencil->Draw();
		cout << "Surname:  " << this->surname << endl;
		cout << "Number:  " << this->number << endl;
		cout << "Message:  " << this->message << endl;
		cout << "Info:  " << this->info << endl;
	}
	virtual void Addnew(string surname, string number)
	{
		this->surname = surname;
		this->number = number;
	}
	virtual void Add(string message, string info)
	{
		this->message = message;
		this->info = info;
	}


};


