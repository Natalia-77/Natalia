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
//class CarFabric//абстрактний базовий клас "Фабрика машин".
//{
//public:
//	virtual void ShowFabric() = 0;
//
//};
//
//
//
//class BMW : public CarFabric//клас "Фабрика БМВ" наслідник класу "Фабрика машин"
//{
//public:
//	void ShowFabric() override
//	{
//		cout << "Fabric of BMW" << endl;
//	}
//};
//class LADA : public CarFabric//клас "Фабрика LADA" наслідник класу "Фабрика машин"
//{
//public:
//	void ShowFabric()override
//	{
//		cout << "Fabric of LADA" << endl;
//	}
//};
//
//
//
//
//class Engine//абстрактний клас "Двигун"
//{
//public:
//	Engine() {};
//	virtual void ShowEngine() = 0;
//};
//
//
//class BMWEngine : public Engine
//{
//private:
//	int power;
//
//public:
//
//	BMWEngine() :Engine() {};
//
//	void Set_power(int power)
//	{
//		this->power = power;
//	}
//	int Get_power()
//	{
//		return power;
//	}
//	void ShowEngine() override
//	{
//		Set_power(70);
//		cout << "Engine of BMW " << Get_power() << endl;
//	}
//
//
//
//};
//
//class LADAEngine : public Engine
//{
//private:
//	int power;
//
//public:
//	LADAEngine() :Engine() {};
//
//	void Set_power(int power)
//	{
//		this->power = power;
//	}
//	int Get_power()
//	{
//		return power;
//	}
//
//	void ShowEngine() override
//	{
//		Set_power(120);
//		cout << "Engine of LADA " << Get_power() << endl;
//	}
//};
//
//
//
//class Body//клас кузов машини.
//{
//
//public:
//	Body() {};
//	virtual void Showbody() = 0;
//};
//
//class BMWBody : public Body
//{
//private:
//	char name[50];
//
//public:
//	BMWBody() :Body() {};
//
//	void Showbody() override
//	{
//
//		cout << "BMW  is sedan" << endl;
//	}
//};
//class LADABody : public Body
//{
//private:
//	char name[50];
//
//public:
//	LADABody() :Body() {};
//
//
//	void Showbody() override
//	{
//		cout << "LADA  is sedan" << endl;
//	}
//};
//
//class MachineFabric
//{
//public:
//	virtual CarFabric* CreateCar() = 0;
//	virtual Engine* CreateEngine() = 0;
//	virtual Body* CreateBody() = 0;
//};
//class BMWFabric : public MachineFabric
//{
//public:
//	CarFabric* CreateCar()
//	{
//		return new BMW();
//	}
//	Engine* CreateEngine()
//	{
//		return new BMWEngine();
//	}
//	Body* CreateBody()
//	{
//		return new BMWBody();
//	}
//};
//class LADAFabric : public MachineFabric
//{
//public:
//	CarFabric* CreateCar() override
//	{
//		return new LADA();
//	}
//	Engine* CreateEngine() override
//	{
//		return new LADAEngine();
//	}
//	Body* CreateBody() override
//	{
//		return new LADABody();
//	}
//};
