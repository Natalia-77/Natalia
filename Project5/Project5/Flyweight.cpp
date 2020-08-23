//#include "Flyweight.h"
//
//int main()
//{
//	vector<Block>::iterator it;
//
//	FlyweightFactory* f = new FlyweightFactory;
//	string str = "pryw";
//	const char* id = str.c_str();
//
//	for (int i = 1; i < str.length(); i++)
//	{
//		Block* block = f->getBlock(id[i]);
//		block->showDetails();
//	}
//
//	
//	const int size = 5;
//	Block u[size];
//	vector<Block> p1;
//	cout << "===================================================" << endl;
//	cout << "===================================================" << endl;
//	cout << "Add new block" << endl;
//
//	u->name = "BlackBlock";
//	u->color = "Black";
//	u->material = "Beton";
//	u->height = 1000;
//	u->weight = 2000;
//	p1.push_back(*u);
//
//
//	u->name = "GreyBlock";
//	u->color = "Grey";
//	u->material = "Plastic";
//	u->height = 20;
//	u->weight = 20;
//	p1.push_back(*u);
//
//
//	u->name = "OrangeBlock";
//	u->color = "Orange";
//	u->material = "Skin";
//	u->height = 200;
//	u->weight = 20;
//	p1.push_back(*u);
//
//	for (it = p1.begin(); it < p1.end(); ++it)
//	{
//		cout << *it << endl;//out to console vector
//	}
//	cout << endl;
//
//	cout << "===================================================" << endl;
//	cout << "Delete block.where height=20" << endl;
//	cout << "===================================================" << endl;
//	p1.erase(remove_if(begin(p1), end(p1), [](const Block& current)
//		{
//			return current.height== 20;
//		}), end(p1));
//
//
//	
//	for (auto it = begin(p1); it != end(p1); )
//	{
//		if (it->height==20)
//		{
//			it = p1.erase(it);
//		}
//		else
//		{
//			++it;
//		}
//	}
//	cout << "===================================================" << endl;
//	cout << "Vector after delete" << endl;
//	for (it = p1.begin(); it < p1.end(); ++it)
//	{
//		cout << *it << endl;//out to console vector
//	}
//	cout << endl;
//
//}