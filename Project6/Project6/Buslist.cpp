#include<iostream>
#include<Windows.h>
#include<string>
#include<conio.h>
using namespace std;

struct Bus
{
	Bus* next;//вказівник на наступний елемент.
	int nomer_marsh;
	int nomer_bus;
	string name;
	bool in_road;//1-в парку;0-на маршруті;Нічого краще не придумала,як просто булом...
};

class BusList
{	
protected:


	Bus* phead;

public:

	BusList() :phead(nullptr) {};

	void Clear()
	{
		while (phead != nullptr)
		{
			Bus* temp = phead->next;
			delete phead;
			phead = temp;
		}
	}
	~BusList()
	{
		Clear();
	}

};
class AutoPark:protected BusList
{
public:
	void Add(Bus& bus)
	{
		Bus* temp = new Bus;
		temp->next = phead;
		temp->name = bus.name;
		temp->nomer_marsh = bus.nomer_marsh;
		temp->nomer_bus = bus.nomer_bus;		
		temp->in_road = bus.in_road;
		phead = temp;
	}




};