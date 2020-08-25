#include <iostream>
#include <vector>
#include <initializer_list>
#include <iterator>
#include <algorithm>
#include <iomanip>

using namespace std;

class Human
{
public:
	string name;
	string surname;
	int age;
	

public:
	vector<Human> v;
	Human() {};

	Human(string name, string surname, int age)
	{
		this->name = name;
		this->surname = surname;
		this->age = age;
	}

	Human(initializer_list<Human>li)
	{
		std::cout << "Constructed with a " << li.size() << " elements list  ";
		cout << endl;

	    initializer_list<Human>::iterator it;
		for (it = li.begin(); it != li.end(); ++it)
		//v = li;		
		v.push_back(*it);
	}
	
 
	friend ostream& operator<< (ostream& out, const Human& c);
	
};
ostream& operator<< (ostream& out, const Human& c)
{

	out << c.name <<"  "<< c.surname <<"  "<< c.age << endl;

	return out;
}
bool compare(const Human& stl, const Human& str)
	{
		return stl.age < str.age;
	}

bool compare_name(const Human& stl, const Human& str)
{
	return stl.name < str.name;
}
   
bool compare_surname(const Human& stl, const Human& str)
{
	return stl.surname < str.surname;
}


void main()
{
	vector<Human>vec;
	vector<Human>::iterator t;
	using Human = vector<Human>;
	Human s = { {"Petra","Ivanova",2},{"Olga","Retra",25},{"Natalia","Mart",22} };
	cout << "Constructed with a " << s.size() << " elements list  " << endl;
	cout << "=======================\n";
	

	for (t = s.begin(); t != s.end(); t++)
	{
		std::cout << (*t).name<<" "<<(*t).surname<< " "<<(*t).age ;
		cout << endl;
	}
	cout << "=======================\n";
	
	cout << " Sort by age" << endl;
	sort(s.begin(), s.end(),compare);

	for (t = s.begin(); t != s.end(); t++)
	{
		std::cout << (*t).name << " " << (*t).surname << " " << (*t).age;
		cout << endl;
	}
	cout << "=======================\n";

	cout << " Sort by name" << endl;
	sort(s.begin(), s.end(), compare_name);

	for (t = s.begin(); t != s.end(); t++)
	{
		std::cout << (*t).name << " " << (*t).surname << " " << (*t).age;
		cout << endl;
	}
	cout << "=======================\n";

	cout << " Sort by surname" << endl;
	sort(s.begin(), s.end(), compare_surname);

	for (t = s.begin(); t != s.end(); t++)
	{
		std::cout << (*t).name << " " << (*t).surname << " " << (*t).age;
		cout << endl;
	}
	cout << endl;
	cout << "Add new human" << endl;
	s.push_back({ "Sergey", "Abroskin", 5 });//add new human.
	cout << "Now we have " << s.size() << " elelments list " << endl;
	cout << "=======================\n";
	for (t = s.begin(); t != s.end(); t++)
	{
		std::cout << (*t).name << " " << (*t).surname << " " << (*t).age;
		cout << endl;
	}

	cout << "=======================\n";
	cout << " Sort by age" << endl;
	sort(s.begin(), s.end(), compare);

	for (t = s.begin(); t != s.end(); t++)
	{
		std::cout << (*t).name << " " << (*t).surname << " " << (*t).age;
		cout << endl;
	}
	cout << "=======================\n";

	cout << " Sort by name" << endl;
	sort(s.begin(), s.end(), compare_name);

	for (t = s.begin(); t != s.end(); t++)
	{
		std::cout << (*t).name << " " << (*t).surname << " " << (*t).age;
		cout << endl;
	}
	cout << "=======================\n";

	cout << " Sort by surname" << endl;
	sort(s.begin(), s.end(), compare_surname);

	for (t = s.begin(); t != s.end(); t++)
	{
		std::cout << (*t).name << " " << (*t).surname << " " << (*t).age;
		cout << endl;
	}




}

	
	