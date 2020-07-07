//#include<iostream>
//#include<Windows.h>
//#include<string>
//using namespace std;
//
//
//class Shooter
//{
//protected:
//	int cam;
//	int str;
//public:
//	Shooter() :str(0), cam(0) {};
//	void Setstr(int str)
//	{
//		this->str = str;
//	}
//	Shooter(int str)
//	{
//		this->str = str;
//	}
//	void Setcam(int cam)
//	{
//		this->cam = cam;
//	}
//	int Getcam()
//	{
//		return cam;
//	}
//
//	int Getstr()
//	{
//		return str;
//	}
//	void Shoot()
//	{
//		this->str--;
//		this->cam--;
//		cout << str << "stril" << endl;
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
//		cout << "Archer shoot!!!" << endl;
//		//Shooter::Setstr(str);
//		Shooter::Getstr();
//		Shooter::Shoot();
//	}
//
//};
//
//class Ranger : virtual protected Shooter
//{
//public:
//	void Shoot()
//	{
//		cout << "Ranger shoot!!!" << endl;
//		Shooter::Getcam();
//		Shooter::Shoot();
//	}
//};
//
//class ArcherTower : public Archer, public Ranger
//{
//
//public:
//	void Attack()
//	{
//		cout << "ArcherTower" << endl;
//		Shooter::Setstr(4);
//	}
//
//
//
//};
//
//class Catapult : public Shooter
//{
//public:
//	void Shoot()
//	{
//		cout << "Ranger shoot in catapult!!!" << endl;
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
//
//
//
//};
//
//
//void main()
//{
//	Fortress f;
//	f.Attack();
//	f.ArcherTower::Archer::Shoot();
//	f.ArcherTower::Archer::Shoot();
//	//f.Archer::Shoot();
//	//f.Archer::Shoot();
//	//Fortress f(2,5);	
//	//f.ArcherTower::
//	//f.ArcherTower::Ranger::Shoot();
//}