#pragma once

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <vector>
#include <map>

using namespace std;


class Block
{

	int _key;
	string _material;//матеріал блоків.


public:

	Block(int key, string material)
	{
		_key = key;
		_material = material;
	}

	int Get_key()
	{
		return this->_key;
	}

	void Get_material()
	{
		cout << this->_material << endl;
	}
};
class Factory
{

	typedef map< Block*,string > Blocks;
	Blocks blok;
	/*map<vector<int>,string> a;	
	vector<int> vect;*/
public:
	const Block& GetBlock(const int _key)
	{
		Block* b = NULL;


	}
	

};


