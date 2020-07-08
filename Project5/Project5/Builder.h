#pragma once

#include <iostream>
#include <Windows.h>
#include <string>
#include <conio.h>
using namespace std;



class House
{
	string order;
public:
	void AddOrder(string text)
	{
		order += (text + " ");
	}
	void BuildOrder()
	{
		cout << order << endl;
	}
};



class Builder
{
public:
	Builder()
	{
		house = new House();
	}
	House* house;
	virtual void AddColor() = 0;
	virtual void AddMaterial() = 0;
	virtual void AddFloor() = 0;
	virtual void AddWindow() = 0;
	House* GetHouse()
	{
		return house;
	}
};

class WoodBuilder : public Builder
{
public:
	void AddColor()
	{
	house->AddOrder("This is a white house");
	}
	void AddMaterial()
	{
		house->AddOrder("wood");
	}
	void AddFloor()
	{
		house->AddOrder("one-floor");
	}
	void AddWindow()
	{
		house->AddOrder("panoram window");
	}
};

class StoneBuilder : public Builder
{
	void AddColor() override
	{
		house->AddOrder("This is grey house ");
	}
	void AddMaterial() override
	{
		house->AddOrder("stone");
	}
	void AddFloor() override
	{
		house->AddOrder("three-floor");
	}
	void AddWindow() override
	{
		house->AddOrder("enormous windows");
	}
};


class ChefManager
{
public:
	void CreateBigVilla(Builder* builder)
	{
		builder->AddColor();
		builder->AddMaterial();
		builder->AddFloor();
		builder->AddWindow();
	}
	void CreateLittleHouse(Builder* builder)
	{
		builder->AddColor();
		builder->AddFloor();
		builder->AddMaterial();
		builder->AddWindow();
	}
};

