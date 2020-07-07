//#include<iostream>
//#include<Windows.h>
//#include<string>
//using namespace std;
//
//
//
//class Shooter//  ЧОРНОВИК ФОРТЕЦІ
//{
//protected:
//	int cam;//кількість каменів.
//	int str;//кількість стріл.
//public:
//	Shooter() :str(0), cam(0) {};//конструктор.
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
//		return cam;//повертає кількість каменів.
//	}
//	
//	int Getstr()
//	{
//		return str;//повертає кількість стріл.
//	}
//	void Shoot()//метод Постріл,віднімає просто кількість стріл.
//	{
//		this->str--;		
//		cout<<"У ArcherTower залишилось "<< str  << " стріл" <<endl;
//		
//	}
//	void Shootstones()
//	{
//		this->cam--;
//		cout<<"У Catapult залишилось "<< cam  << " каменів " <<endl; 
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
//		cout << "Archer здійснює постріл стрілами " << endl;
//		if (Shooter::Getstr() > 0)
//		{
//			Shooter::Getstr();
//			Shooter::Shoot();
//		}
//		else
//		{
//			cout << "Немає боєприпасів " << endl;
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
//		cout << "Ranger здійснює постріл стрілами" << endl;
//		if (Shooter::Getstr() > 0)
//		{
//			Shooter::Getstr();
//			Shooter::Shoot();
//		}
//		else
//		{
//			cout << "Немає боєприпасів " << endl;
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
//		cout << "Catapult стріляє каменями " << endl;
//		if (Shooter::Getcam() > 0)
//		{
//			Shooter::Getcam();
//			Shooter::Shootstones();
//		}
//		else
//		{
//			cout << "Немає каменів  " << endl;
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