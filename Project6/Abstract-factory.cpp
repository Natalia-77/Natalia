//#include "Abstract-factory.h"
//
//
//#include<iostream>
//#include <conio.h>
//#include <Windows.h>
//#include<ctime>
//#include<string>
//
//using namespace std;
//
//
//void main()
//{
//	MachineFabric* fab = new BMWFabric();
//	MachineFabric* fa = new LADAFabric();
//
//	CarFabric* f = fab->CreateCar();
//	Engine* en = fab->CreateEngine();
//	Body* b = fab->CreateBody();
//
//	CarFabric* fo = fa->CreateCar();
//	Engine* enf = fa->CreateEngine();
//	Body* fb = fa->CreateBody();
//
//	
//	f->ShowFabric();	
//	en->ShowEngine();
//	b->Showbody();
//	cout << "-------------------------" << endl;
//
//	fo->ShowFabric();
//	enf->ShowEngine();
//	fb->Showbody();
//
//	delete f;
//	delete en;
//	delete b;
//	delete fab;
//
//
//	delete fa;
//	delete enf;
//	delete fb;
//	delete fo;
//
//}
//
//
