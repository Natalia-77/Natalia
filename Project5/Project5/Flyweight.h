//#pragma once
//
//#include <iostream>
//#include <Windows.h>
//#include <conio.h>
//#include <string>
//#include<vector>
//#include <iterator>
//#include <algorithm>
//
//using namespace std;
//
//class Block
//{
//public:
//	string name;//name block
//	string color;//color block
//	string material;//material block
//	int height;
//	int weight;	
//	
//
//public:
//	virtual void showDetails()
//	{
//		cout <<"Name : " << name << endl;
//		cout <<"Color : " << color << endl;
//		cout <<"Material :" << material << endl;
//		cout <<"Height : " << height << endl;
//		cout <<"Weight : " << weight << endl;
//		cout << "----------------------------------------------" << endl;
//	}
//	Block(string name, string color, string material,  int height, int weight)
//	{
//		this->name=name;
//		this->color = color;
//		this->material = material;
//		this->height = height;
//		this->weight = weight;
//	}
//	Block() {};
//};
//
//ostream& operator << (ostream& out, Block& obj)
//{
//	out << "Name : " << obj.name << endl;
//	out << "Color : " << obj.color << endl;
//	out << "Material :" << obj.material << endl;
//	out << "Height : " << obj.height << endl;
//	out << "Weight : " << obj.weight << endl;
//	out << "----------------------------------------------" << endl;
//
//	
//	return out;
//}
//
//class RedBlock : public Block
//{
//public:
//	RedBlock() :Block("RedBlock","Red","Wood", 20, 30) {}
//};
//
//
//class YellowBlock : public Block
//{
//public:
//	YellowBlock() :Block("YellowBlock","Yellow","Glass",10, 10) {}
//};
//
//
//class WhiteBlock : public Block
//{
//public:
//	WhiteBlock() :Block("WhireBlock","White","Metal", 120, 500) {}
//};
//class FlyweightFactory
//{
//private:
//	static RedBlock* red;
//	static YellowBlock* yellow;
//	static WhiteBlock* white;
//
//public:
//	static Block* getBlock(char type)
//	{
//		switch (type)
//		{
//		case'r':
//			if (!red)
//			{
//				red = new RedBlock();
//			}
//			return red;
//
//		case 'y':
//			if (!yellow)
//			{
//				yellow = new YellowBlock();
//			}
//			return yellow;
//
//		case 'w':
//			if (!white)
//			{
//				white = new WhiteBlock();
//			}
//			return white;
//
//		default:
//			cout << "That no type" << endl;
//			return NULL ;
//		}
//	}
//};
//
//RedBlock* FlyweightFactory::red;
//YellowBlock* FlyweightFactory::yellow;
//WhiteBlock* FlyweightFactory::white;

