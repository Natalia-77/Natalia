//#pragma once
//
//#include"Header1.h"
//
//class User
//{
//	string name;
//public:
//	User()
//	{
//
//	}
//	User(string n)
//	{
//		name = n;
//	}
//	void Show()
//	{
//		cout << name << endl;
//	}
//};
//
//enum Departament { production, account, managment };
//
//
//class PriorityQueueWithClass
//{
//	int cur_size;
//	int MAX_SIZE = 100;
//	User** arr;
//	Departament* prioritets;
//public:
//	PriorityQueueWithClass()
//	{
//		cur_size = 0;
//		arr = new User * [MAX_SIZE];
//		prioritets = new Departament[MAX_SIZE];
//	}
//	void push(User* val, Departament p)
//	{
//		if (cur_size == MAX_SIZE)
//		{
//			cout << "NO place\n";
//		}
//		else
//		{
//			arr[cur_size] = val;
//			prioritets[cur_size] = (Departament)p;
//			cur_size++;
//		}
//	}
//	User* pop()
//	{
//		if (!empty())
//		{
//			int ind = 0;
//			int maxPrior = prioritets[0];
//			// serach max prioritet index
//			for (int i = 0; i < cur_size; i++)
//			{
//				if (prioritets[i] > maxPrior)
//				{
//					maxPrior = prioritets[i];
//					ind = i;
//				}
//			}
//			//ind - index where max priority element exist
//			User* elementForReturn = arr[ind];
//			//----delete with element--
//			for (int i = ind; i < cur_size - 1; i++)
//			{
//				arr[i] = arr[i + 1];
//				prioritets[i] = prioritets[i + 1];
//			}
//			cur_size--;
//			//---arr[ind] - element with max priority
//			return elementForReturn;
//		}
//		cout << "empty\n";
//		return nullptr;
//	}
//
//	bool empty()
//	{
//		return cur_size == 0;
//	}
//	int size()
//	{
//		return cur_size;
//	}
//
//	~PriorityQueueWithClass()
//	{
//		if (arr != nullptr)
//		{
//			for (int i = 0; i < cur_size; i++)
//			{
//				delete arr[i];
//			}
//			delete[] arr;
//		}
//		if (prioritets != nullptr)
//		{
//			delete[] prioritets;
//		}
//	}
//};
