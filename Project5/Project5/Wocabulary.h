#pragma once


#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include<iomanip>
#include <windows.h>
#include <conio.h>
using namespace std;



class Student {
	string surname;
	string faculty;
	int age;

public:
	Student() {};
	Student(string s, string f, int a)
	{
		surname = s;
		faculty = f;
		age = a;
	}
};






//
//class Tree
//{
//	struct Node
//	{
//		string eng_key;//англ.слово(ключ).
//		string ukr_value;//укр.слово-переклад(значення)
//
//		Node* left;//ліва дитинка.
//		Node* right;//права дитинка.
//	};
//
//	Node* root;//вказівник на корінь.
//
//
//
//public:
//	Tree()
//	{
//
//		root == nullptr;
//	}
//
//	void Add(string eng_key, string ukr_val)
//	{
//		AddToTree(root, eng_key, ukr_val);
//	}
//
//	void Show()
//	{
//		ShowTree(root);
//	}
//
//	void Delete(string eng_key)
//	{
//		Del(root, eng_key);
//	}
//
//
//	bool Find(string wrd)
//	{
//		return Find(root, wrd);
//	}
//
//	void SetData(string english, string ukraine)
//	{
//
//		return Edit(root, english, ukraine);
//	}
//
//	void Delete()
//	{
//		return DeleteDictionary(root);
//	}
//
//
//	void AddFile(ofstream& fout)
//	{
//		AddToFile(root, fout);
//	}
//
//
//
//private:
//
//
//	void Setdata(Node*& root, string eng, string ukr)
//	{
//		root->eng_key = eng;
//		root->ukr_value = ukr;
//	}
//
//	void AddToTree(Node*& root, string eng, string ukr)
//	{
//
//		if (root == nullptr)
//		{
//			Node* newNode = new Node();
//			newNode->eng_key = eng;
//			newNode->ukr_value = ukr;
//			newNode->left = nullptr;
//			newNode->right = nullptr;
//			root = newNode;
//			return;
//		}
//		else if (eng > root->eng_key)
//			AddToTree(root->right, eng, ukr);
//		else if (eng < root->eng_key)
//			AddToTree(root->left, eng, ukr);
//		else if (eng == root->eng_key)
//		{
//			root->ukr_value = ukr;
//			return;
//		}
//
//	}
//
//	// try/catch.
//
//	void Del(Node*& root, string eng_key)
//	{
//		try
//		{
//			if (root == nullptr)
//				throw 1;
//		}
//		catch (int ex)
//		{
//			if (ex == 1)
//				cout << " Немає такого слова,щоб ви могли його видалити" << endl;
//			return;
//		}
//		if (root == nullptr) return;
//
//		if (eng_key < root->eng_key) Del(root->left, eng_key);
//
//		else if (eng_key > root->eng_key) Del(root->right, eng_key);
//
//		else if (root->eng_key == eng_key)
//		{
//
//			if (root->left == nullptr && root->right == nullptr)
//			{
//				delete root;
//				root = nullptr;
//				return;
//			}
//
//			else if (root->left == nullptr)
//			{
//				Node* del = root;
//				root = root->right;
//				delete del;
//			}
//			else if (root->right == nullptr)
//			{
//				Node* del = root;
//				root = root->left;
//				delete del;
//			}
//
//			else
//			{
//				Node* min = FindMin(root->right);
//				root->eng_key = min->eng_key;
//				root->ukr_value = min->ukr_value;
//				Del(root->right, min->eng_key);
//				return;
//			}
//		}
//
//
//
//	}
//
//	Node*& FindMin(Node*& root)
//	{
//		if (root == nullptr) return root;
//		if (root->left == nullptr)
//			return root;
//		FindMin(root->left);
//	}
//
//	bool Find(Node* root, string wrd)
//	{
//		if (root != NULL)
//		{
//
//			if (Find(root->left, wrd) == true)  return true;
//			if (Find(root->right, wrd) == true) return true;
//			if (wrd == root->eng_key)
//			{
//				//cout << "Переклад слова:  " << root->ukr_value << endl;
//				return true;
//			}
//			else
//				return false;
//
//		}
//		else return false;
//	}
//
//	void Edit(Node* root, string wrd, string newWrd)
//	{
//		if (root != NULL)
//		{
//			Edit(root->left, wrd, newWrd);
//			Edit(root->right, wrd, newWrd);
//			if (wrd == root->eng_key)
//			{
//				Setdata(root, wrd, newWrd);
//			}
//		}
//	}
//
//
//
//	void ShowTree(Node* root)
//	{
//		if (root == nullptr) return;
//		ShowTree(root->left);
//		cout << setw(10) << right << root->eng_key << setw(5) << "-" << setw(15) << right << root->ukr_value << endl;
//		ShowTree(root->right);
//	}
//
//	void DeleteDictionary(Node* root)
//	{
//		if (root != NULL)
//		{
//			DeleteDictionary(root->left);
//			DeleteDictionary(root->right);
//			delete root;
//		}
//	}
//
//
//
//	void AddToFile(Node* root, ofstream& fout)
//	{
//		if (root == nullptr) return;
//		fout << root->eng_key << " " << root->ukr_value << endl;
//		AddToFile(root->left, fout);
//		AddToFile(root->right, fout);
//	}
//
//
//};
//
//void Color(int color)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//}
//
//
