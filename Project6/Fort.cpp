//#include<iostream>
//#include<Windows.h>
//#include<string>
//using namespace std;
//
//
//
//class Shooter//  �������� �����ֲ
//{
//protected:
//	int cam;//������� ������.
//	int str;//������� ����.
//public:
//	Shooter() :str(0), cam(0) {};//�����������.
//
//	
//	void Setstr(int str)
//	{
//		this->str = str;
//	}	
//
//	void Setcam(int cam)
//	{
//		this->cam = cam;
//	}
//
//	int Getcam()
//	{
//		return cam;//������� ������� ������.
//	}
//	
//	int Getstr()
//	{
//		return str;//������� ������� ����.
//	}
//	void Shoot()//����� ������,����� ������ ������� ����.
//	{
//		this->str--;		
//		cout<<"� ArcherTower ���������� "<< str  << " ����" <<endl;
//		
//	}
//	void Shootstones()
//	{
//		this->cam--;
//		cout<<"� Catapult ���������� "<< cam  << " ������ " <<endl; 
//	}
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
//
//	void Shoot()
//	{
//		cout << "Archer ������� ������ ������� " << endl;
//		if (Shooter::Getstr() > 0)
//		{
//			Shooter::Getstr();
//			Shooter::Shoot();
//		}
//		else
//		{
//			cout << "���� ��������� " << endl;
//			return;
//			
//		}
//		cout << endl;
//	}
//	
//};
//
//class Ranger : virtual protected Shooter
//{
//public:
//	void Shoot()
//	{
//		cout << "Ranger ������� ������ �������" << endl;
//		if (Shooter::Getstr() > 0)
//		{
//			Shooter::Getstr();
//			Shooter::Shoot();
//		}
//		else
//		{
//			cout << "���� ��������� " << endl;
//			return;
//			
//		}
//		cout << endl;
//	}
//};
//
//class ArcherTower : public Archer, public Ranger
//{
//
//public:
//	 void Attack()
//	 {
//		cout << "ArcherTower" << endl;	
//		Shooter::Setstr(6);
//	 }
//	 
//	 
//};
//
//class Catapult : public Shooter
//{
//public:
//
//	void AttackStones()
//	{
//		cout << "Catapult machine " << endl;
//		Shooter::Setcam(4);
//
//	}
//	void Shootstones()
//	{
//		cout << "Catapult ������ �������� " << endl;
//		if (Shooter::Getcam() > 0)
//		{
//			Shooter::Getcam();
//			Shooter::Shootstones();
//		}
//		else
//		{
//			cout << "���� ������  " << endl;
//			return;
//		}
//		cout << endl;
//		
//	}
//};
//
//class Fortress : public ArcherTower, public Catapult
//{
//public:
//	Fortress() {};
//	
//};
//
//
//void main()
//{
//
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//	
//	Fortress f;
//	f.Attack();
//	f.ArcherTower::Archer::Shoot();
//	f.ArcherTower::Archer::Shoot();
//	f.ArcherTower::Ranger::Shoot();
//	cout << endl;
//	f.AttackStones();
//	f.Catapult::Shootstones();
//
//}