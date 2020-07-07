//#pragma once
//
//#include<iostream>
//#include <conio.h>
//#include <Windows.h>
//#include<ctime>
//#include<string>
//
//using namespace std;
//
//class Unit
//{
//protected:
//	int health;//������"�.
//	int dmg;//�����������.
//	int dodge;//���� ���������.
//	string name;
//
//
//public:
//	Unit()
//	{
//
//	}
//
//	Unit(int health, int dmg, int dodge,string name)
//	{
//		this->health = health;
//		this->dmg = dmg;
//		this->dodge = dodge;
//		this->name = name;
//
//	}
//
//	int Get_health()
//	{
//		return health;
//	}
//
//	int Get_dmg()
//	{
//		return dmg;
//	}
//
//	int Get_dodge()
//	{
//		return dodge;
//	}
//
//	string Get_name()
//	{
//		return name;
//	}
//
//
//
//	void Set_health(int health)
//	{
//		this->health = health;
//	}
//
//	void Set_dmg(int dmg)
//	{
//		this->dmg = dmg;
//	}
//
//	void Set_dodge(int dodge)
//	{
//		this->dodge = dodge;
//	}
//
//	void Set_name(string name)
//	{
//		this->name = name;
//	}
//
//	bool IsDead()
//	{
//		
//		return Get_health() <= 0;
//	}
//
//	bool isAlive()
//	{
//		return Get_health() > 0;
//	}
//	
//	
//	void Show()
//	{
//
//		cout << "��� " << name << " �� ����� ������'� " << health << " ����������� ��� ����� " << dmg << " ���� ��������� " << dodge << endl;
//
//	}
//
//	void Attack(Unit* b)
//	{
//		
//		    if (b->Get_health() < 0)//����� ����� �� ���������,�� ��� 
//	     	{
//			return;
//		    }
//
//		 	int num;
//			num = rand() % 60 + 20;
//			if (b->Get_dodge() < num)
//			{
//				cout << "���  " << b->Get_name() << " ��� �������� " << endl;
//				b->Set_health(b->Get_health() - this->Get_dmg());		
//				b->Show();
//				if (b->IsDead())
//				{
//					cout << "��� �������...";
//					cout << endl;
//					
//				}
//
//			}
//			else
//			{
//				cout << "��� "<<Get_name()<< " ��������" << endl;
//			}
//		
//		
//	}
//	
//
//		
//};
//
//
//class Archer : public Unit	
//{
//public:
//	Archer() :Unit(12, 4, 40," Archer") {};
//	
//	
//};
//
//
//class Swordsman : public Unit
//{
//public:
//	Swordsman() :Unit(15, 5, 60,"Sworsman") {};
//	
//};
//
//
//class Mage : public Unit
//{
//public:
//	Mage() :Unit(8, 10, 30,"Mage") {};
//
//};
//
//
//class Army :public Unit
//{
//protected:
//	
//	Unit** units;
//	int size;
//	
//
//public:
//	
//
//	Army() :Unit() 
//	{
//		size = 0;
//		units = new Unit * [size];
//		units[0] = 0;
//		
//	}
//
//	enum class UnitClass
//	{
//		Swordsman, Archer, Mage
//
//	};
//
//	int Get_size()
//	{
//		return size;
//	}
//
//	void Set_size(int size)
//	{
//		this->size = size;
//	}
//
//		
//
//	Army (int size)
//	{
//		this->size = size;
//		units = new Unit*[size];
//		int i;
//		
//		for (i = 0; i < size; i++)
//		{
//			int a = rand() % 3;
//
//			if (a ==(int)UnitClass::Archer)
//			{
//				units[i]=new Archer();				
//				
//			}
//			if (a == (int)UnitClass::Mage)
//			{
//				units[i] = new Mage();
//				
//			}
//			if (a == (int)UnitClass::Swordsman)
//			{
//				units[i] = new Swordsman();
//				
//			}			
//			
//		}
//		
//	}
//
//    bool Alive()
//	{
//		for (int i = 0; i < size; i++)
//		{			
//
//			if (units[i]->Get_health()< 0)
//			{
//				return false;
//			}
//			else
//			{
//				return true;
//			}
//		}
//	}
//
//	
//
//
//
//	void ShowA()
//	{
//		int i;
//		
//		for (i = 0; i < size; i++)
//		{
//			cout << "���  " << units[i]->Get_name()<<"  �� ����� "<<i + 1<<endl;
//			cout << "������'� " << units[i]->Get_health()<<endl;
//			cout << "�����������  " << units[i]->Get_dmg()<<endl;
//			cout << "����  "<< units[i]->Get_dodge()<<endl;
//			cout << "------------------------" << endl;
//
//		}
//		cout << endl;
//	}
//	
//
//
//void Delete(int pos)
//{
//	Unit** temp = new Unit * [this->size-1];
//	
//	for (int i = 0; i < pos; i++)
//	{
//		
//		temp[i] = this->units[i];
//	}
//	for (int i = pos; i < size; i++)
//	{
//		temp[i] = this->units[i + 1];
//	}
//
//	this->size--;
//	delete[]this->units;
//	this->units = temp;
//
//	
//}
//
//
//
//
//	void War(Army& b)//� ����� ����� ����������� ����� 1 ���������� ��.
//	{
//
//
//		while (this->Alive() || b.Alive())
//		{
//
//			for (int i = 0; i < size; i++)
//			{
//				int counter = 0;
//				
//				if (cin.get() == '1')
//				{
//
//					if (this->Alive())
//					{
//						cout << "����� ���i� #1 " << endl;
//						cout << " ������ ������� �����   " << i << " � ��쳿 ����� 1" << endl;
//						cout << " ������ ������� �����   " << i << " � ��쳿 ����� 2" << endl;
//						cout << "-------------------------------------------------------------\n";
//						this->units[i]->Attack(b.units[i]);  //����� ����� ��쳿
//
//						if (b.Get_health()< 0)
//						{
//							b.Delete(i);
//							
//						}
//
//					}
//					else
//					{
//						cout << "���i� 2 ��������!" << endl;
//						return;
//					}		
//
//				
//				
//					if (b.Alive())
//					{
//						cout << "����� ���i� #2 " << endl;
//						cout << " ������ ������� �����   " << i << " � ��쳿 ����� 2" << endl;
//						cout << " ������ ������� �����   " << i << " � ��쳿 ����� 1" << endl;
//						cout << "-------------------------------------------------------------\n";
//						b.units[i]->Attack(this->units[i]);  //����� ����� ��쳿
//						if (this->Get_health() < 0) 
//						{
//							this->Delete(i);														
//						}
//
//					}
//					else
//					{
//						cout << "���i� 1 ��������!" << endl;
//						return;
//					}
//									   
//				}
//
//			}			
//
//		}
//	}
//	     	 					
//
//	
//	~Army()
//	{
//		if (units != nullptr)
//		{
//			delete[] units;
//		}
//	}
//
//};
//
//
//
//
//#include<iostream>
//#include<conio.h>
//#include<ctime>
//using namespace std;
//
//class Shooter
//{
//public:
//	string amuniz;
//	int size;
//
//	void Shoot()
//	{
//		cout << "-1 " << this->amuniz << endl;
//		this->size--;
//	}
//
//	void GiveAmunition(string amuniz, int size)
//	{
//		this->amuniz = amuniz;
//		this->size = size;
//	}
//
//	virtual ~Shooter()
//	{
//
//	}
//
//};
//
//class Archer : virtual protected Shooter
//{
//public:
//	void Shoot()
//	{
//		cout << "Archer shoot!!!" << endl;
//		Shooter::Shoot();
//	}
//};
//
//class Ranger : virtual protected Shooter
//{
//public:
//	void Shoot()
//	{
//		cout << "Ranger shoot!!!" << endl;
//		Shooter::Shoot();
//	}
//};
//
//class ArcherTower : public Archer, public Ranger
//{
//public:
//	ArcherTower()
//	{
//		cout << "ArcherTower" << endl;
//	}
//};
//
//class Catapult : public Shooter
//{
//public:
//	void Shoot()
//	{
//		cout << "Ranger shoot!!!" << endl;
//		Shooter::Shoot();
//	}
//};
//
//class Fortress : public ArcherTower, public Catapult
//{
//public:
//	Fortress()
//	{
//
//	}
//};
//
//
//void main()
//{
//	Fortress f;
//	f.ArcherTower::Ranger::Shoot();
//}
//� 2020 GitHub, Inc.