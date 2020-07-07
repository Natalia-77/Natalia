//#pragma once
//
//#include <iostream>
//#include <conio.h>
//#include <Windows.h>
//#include <ctime>
////#include <cmath>
//#include <cstdlib>
//
//
//
//using namespace std;
//
//
////�������� ���� Vector, ���� �� �� ������-�����: 
////��� ������(double*)
////���� �����. (int)
////1
//
////� ���� ���������� ������� ������ :
////-����������� ����������� Vector() (������� ������ ������ ��������� ������);
////-�������������� ����������� Vector(int), ����  ���� ����� �������
////(�������� ������� ������ �������������� ������, ����, ���� ���� ��������, ����� � ���������� ����������);
////-�������������� ����������� Vector(double*, int), �� �������� ������������ ������ �������;
////-����������� ����;
////-����������;
////-�����, �� ������� ����� �������(getSize());
//
//
////-������������ ���������
//
////- ��������� �������(<< );
////�������� �� �������� ������� ����� �������(' ')
//
////- �������� �������(>> );
////�������� ������ ������� ��������, ��� ������� operator >>, ������ � ������ �������� ������� ��������
//
////- ���������: ��������� ��� �������� ������� �� 1 (++) (�������� �� �������).
////������� �������������� ����������� ���������� ����������� ���� ������ �����;
//
////-���������: ��������� ��� �������� ������� �� 1 (--) (�������� �� �������).
////������� �������������� ������������ ���������� ����������� ���� ������ �����;
//
////-������������ �������;
//
////-������������[], �� �������� ����������� �� �������, ��� ������� � ������ �������� ���������� ��������;
////����������� �������� ������� �� ����������(exit(EXIT_FAILURE))
//
////- �������� ������� �������(); ������ 2 ���������(����� - ������, � ����� - ��������);
//
////-�������� �� ��������� �������(<< , >> );
////-�����, �� ������� ��������� �������;
////-������, �� ���������� ���������� ��� �������(��������� ��������� �� ����� ���������).
////- ������������� �������� ������� �������, �� ��������� ��������� �ᒺ�� ���������� ������ ������(���� ���������� ������� ������� ������ ��� ��������� � ����� ���� double* �� ���� �����).
//
////��������� ��������� ����� ���� Vector ��������� ������ - ������ �����, �� ���� ������������ ������� �������, �� ��������� ������� �����, �� ��������� �������� ��� � �������� �����.
//
//template <typename T>
//
//class Vector
//{
//private:
//	T* arr;
//	int size;
//	int CountVectors;//������� �������.
//
//public:
//		//������������.
//	Vector() :size(0)//"�������" �����������.
//	{
//		arr = new T[size];//������� �����.	
//		arr[0] = 0;
//		CountVectors = 0;
//	}
//
//	
//	Vector(int size_) : size(size_)
//	{
//		CountVectors = 0;
//		arr = new T  [size];//����������� ���"���.
//		for (int i = 0; i < size; i++)
//		{
//			arr[i] =0;
//		}	
//		
//	}
//
//
//	Vector(int size_, T* arr_,int CountVectors_)
//	{
//		CountVectors = CountVectors_;
//		size = size_;
//		arr = new T[size_];
//		for (int i = 0; i < size; i++)
//		{
//			arr[i] = arr_[i];
//			
//		}
//
//	}
//	
//	Vector(const Vector& vec)//����������� ����.
//	{
//		CountVectors = vec.CountVectors;
//		size = vec.size;
//		arr = new T[vec.size];
//		for (int i = 0; i < size; i++)
//		{
//			arr[i] = vec.arr[i];
//			
//		}
//	}
//	
//	~Vector()
//	{		
//		delete[] arr;
//		
//	}
//
//
//	//������ � ������,��������� �������� �����.
//	
//	   	 
//	friend ostream& operator <<(ostream& os, const Vector<T>& a);
//	friend istream& operator >> (istream& in, Vector<T>& a);
//	
//		
//
//	Vector<T> &operator++ ()//�������.
//	 {
//		 int i;
//		 for (int i = 0; i <size; i++)
//		 {
//			arr[i]++;
//		 }
//		
//		return *this;
//	 }
//	 //��� � �� ������ � ����  ����������� ���� ������ �����.������ ������� "������ ���������� 2019".
//	   //� ����� ������ ������� � ��������� � ���� �� ����� ���.
//	   //��� ������ �������� ������� � ������� ��� ���.��� ���������.��� ��� � ������� �������� ������,�������� �� �������... 
//
//	Vector<T>& operator-- ()
//	{
//		int i;
//		for (int i = 0; i < size; i++)
//		{
//			arr[i]--;
//		}
//
//		return *this;
//	}
//
//    const Vector& operator++(int)
//	 {
//		 ++(* this);
//		 return *this;
//	 }		
//		
//
//	const Vector& operator--(int)
//	{
//		--(*this);
//		return *this;
//	}
//
//	
//	void Set_Elem();//���������� ������.
//	void Show(Vector<T> obj);	
//	int Get_Size();		//������� �����.
//	int Get_CountVectors();//������� ������� ��������.
//	bool operator ==(const Vector<T>& a);
//	bool operator !=(const Vector<T>& a);
//	bool operator >( Vector<T>& a)
//	{
//		
//		return Get_CountVectors() > a.Get_CountVectors() ;
//	}
//	bool operator <( Vector<T>& a)
//	{
//		
//		return  Get_CountVectors() < a.Get_CountVectors() ;
//
//	}
//	int& operator[] (int index);
//	Vector <T>& operator = (const Vector <T>& a);
//	int& operator () (int index, int value)
//	{
//		if(index>=0||index<size)
//		 arr[index]=value;
//		return arr[index];
//	}
//
//};
//
//
//
//template <typename T>
//void Vector<T>:: Show(Vector<T> obj)
//{
//	int i;
//	for (i = 0; i < obj.Get_Size(); i++)
//	{
//		cout << obj.arr[i] << " ";
//
//	}
//	cout << endl;
//}
//
//
//template <typename T>
//void Vector<T>::Set_Elem()
//{
//	int i;
//	for (i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 20 + 1;
//		CountVectors++;
//	}
//
//}
//
//
//template <typename T>
//ostream& operator <<(ostream& os, const Vector<T>& a)
//{
//
//	int i;
//	for (int i = 0; i < a.size; i++)
//	{
//		os << a.arr[i];
//	}
//	return os;
//};
//
//
//template <typename T>
//istream& operator >> (istream& in, Vector<T>& a)
//{
//
//	int i;
//	for (i = 0; i < a.size; i++)
//	{
//		in >> a.arr[i];
//	}
//
//	return in;
//}
//
//template <class T>
//bool Vector<T>::operator== (const Vector <T>& a)
//{
//	if (size != a.size)
//		return false;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] != a.arr[i])
//			return false;
//	}
//	return true;
//
//
//}
//
//
//template <class T>
//bool Vector<T>::operator!= (const Vector <T>& a)
//{
//	if (size != a.size)
//		return true;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] != a.arr[i])
//			return true;
//	}
//	return false;
//
//}
//
//template<class T>
//int& Vector<T>::operator[](int index)
//{
//	if ((index < 0) || (index >size))
//	{
//		exit(0);
//	}
//	return arr[index];
//}
//
//
//template<class T>
//int Vector<T>::Get_Size()
//{
//	return size;
//}
//
//
//template<class T>
//Vector<T>& Vector<T>::operator=(const Vector <T>& a)
//{
//	    if (size > 0)
//		delete[] arr;// �������� ���������� ������� ���'���
//
//	arr = new T[a.size];// ������� ���'��� ������
//	size = a.size;
//	CountVectors = a.CountVectors;
//
//	for (int i = 0; i < size; i++)
//		arr[i] = a.arr[i];
//
//	return *this;
//}
//
//template<class T>
//int Vector<T>::Get_CountVectors()
//{
//	return CountVectors;
//}
//
//
// void Color(int color)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//}
//
//
//
//
//
//
//
//
