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
////Створити клас Vector, який має дві змінних-члени: 
////сам вектор(double*)
////його розмір. (int)
////1
//
////В класі реалізувати наступні методи :
////-Стандартний конструктор Vector() (створює пустий вектор нульового розміру);
////-Перевантажений конструктор Vector(int), який  задає розмір вектора
////(елементи вектора повинні ініціалізуватися нулями, хоча, якщо дуже хочеться, можна і рандомними значеннями);
////-Перевантажений конструктор Vector(double*, int), що дозволяє ініціалізувати вектор масивом;
////-Конструктор копій;
////-Деструктор;
////-Метод, що повертає розмір вектора(getSize());
//
//
////-Перевантажені оператори
//
////- Виведення вектора(<< );
////виводить усі елементи вектора через пропуск(' ')
//
////- Введення вектора(>> );
////спочатку запитує кількість елементів, тоді викликає operator >>, котрий і запитує значення кожного елемента
//
////- Інкремент: збільшення всіх елементів вектора на 1 (++) (постфікс та префікс).
////Причому перевантаження префіксного інкремента організувати поза межами класу;
//
////-Декремент: зменшення всіх елементів вектора на 1 (--) (постфікс та префікс).
////Причому перевантаження постфіксного декремента організувати поза межами класу;
//
////-Присвоювання вектора;
//
////-Індексування[], що дозволяє доступатись по індексу, для читання і запису значення відповідного елемента;
////передбачити перевірку індекса на відповідність(exit(EXIT_FAILURE))
//
////- Оператор виклику функції(); приймає 2 параметри(перше - індекс, а друге - значення);
//
////-Введення та виведення вектора(<< , >> );
////-Метод, що повертає розмірність вектора;
////-Методи, що дозволяють порівнювати два вектори(оператори порівняння та логічні оператори).
////- перевантажити оператор виклику функції, що дозволить обновляти об’єкт значеннями нового масиву(дана операторна функція повинна містити два параметри – масив типу double* та його розмір).
//
////Доповнити створений раніше клас Vector статичною змінною - членом класу, що буде підраховувати кількість векторів, та статичним методом класу, що дозволить отримати дані з статичної змінної.
//
//template <typename T>
//
//class Vector
//{
//private:
//	T* arr;
//	int size;
//	int CountVectors;//кількість векторів.
//
//public:
//		//конструктори.
//	Vector() :size(0)//"порожній" конструктор.
//	{
//		arr = new T[size];//порожній масив.	
//		arr[0] = 0;
//		CountVectors = 0;
//	}
//
//	
//	Vector(int size_) : size(size_)
//	{
//		CountVectors = 0;
//		arr = new T  [size];//перевиділили пам"ять.
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
//	Vector(const Vector& vec)//конструктор копій.
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
//	//Френди і методи,реалізовані всередині класу.
//	
//	   	 
//	friend ostream& operator <<(ostream& os, const Vector<T>& a);
//	friend istream& operator >> (istream& in, Vector<T>& a);
//	
//		
//
//	Vector<T> &operator++ ()//префікс.
//	 {
//		 int i;
//		 for (int i = 0; i <size; i++)
//		 {
//			arr[i]++;
//		 }
//		
//		return *this;
//	 }
//	 //Так і не вийшло в мене  організувати поза межами класу.Вибиває помилку "Ошибка линковщика 2019".
//	   //Я видно робила помилку в синтаксисі і сама не знала яку.
//	   //Був момент покинула шаблони і зробила без них.Все працювало.Але все ж вирішила залишити шаблон,наскільки це можливо... 
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
//	void Set_Elem();//заповнення рандом.
//	void Show(Vector<T> obj);	
//	int Get_Size();		//повертає розмір.
//	int Get_CountVectors();//повертає ількість елементів.
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
//		delete[] arr;// звільнити попередньо виділену пам'ять
//
//	arr = new T[a.size];// виділити пам'ять заново
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
