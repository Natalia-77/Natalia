//#include "Queue.h"
//
//
//
//void main()
//
//{
//
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	cout << "��� ������� ����� ����� � ���������,� ��������� �� ��������� ������ ���������" << endl;
//	cout << "�������� �������� �� president,��� � ������� �������� ministry,senator,assistant" << endl;
//	int i;
//	for (i = 0; i < 83; i++)
//	{
//		cout << "=";
//	}
//	cout << endl;
//
//	Spooler st;
//
//
//	char key = ' ';
//	char mainMenu = '1';
//	while (mainMenu != '2')
//	{
//		char m = '1';
//		while (m != 13)
//		{
//			if (m == '1')
//			{
//				Color(13);	cout << "==>";
//			}
//			else
//			{
//				Color(7); cout << "  ";
//			}
//			cout << "1. ���� ����� ���������\n";
//			if (m == '2')
//			{
//				Color(13);	cout << "==>";
//			}
//			else
//			{
//				Color(7); cout << "  ";
//			}
//			cout << "2. ����� � ����.���,�� ��������� ����������� ���)))\n";
//			Color(13);
//			cout << "--------------------------------------------------------------------------------" << endl;
//
//			m = _getch();
//			if (m != 13)
//			{
//				mainMenu = m;
//			}
//			system("cls");
//			Color(7);
//		}
//
//		switch (mainMenu)
//		{
//		 case '1':
//		  {
//			key = ' ';
//
//
//			while (key != '3')
//			{
//				Color(11);
//				cout << " ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
//				cout << " ���� ����� ��������� � ������� ���������-�������� ������ 1. ��� ����� ������� ���������� ��������� �������� Enter" << endl;
//				cout << " ���� ������ ������ ������� ��� ����� �������� ������                                                               2" << endl;
//				cout << " ��� ������ �������� ������                                                                                         3" << endl;
//				cout << " ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
//				Color(7);
//				key = _getch();
//				system("cls");
//
//				if (key == '1')
//				{
//					
//
//					st.push(new Document("����������.doc", 500), Prioritets::assistant);
//					st.push(new Document("��������.doc", 820), Prioritets::ministry);
//					st.push(new Document("�������.doc", 420), Prioritets::president);
//					st.push(new Document("������.doc", 215), Prioritets::assistant);
//					st.push(new Document("�������.doc", 300), Prioritets::senator);
//					st.push(new Document("����.doc", 321), Prioritets::senator);
//					st.push(new Document("�������������.doc", 175), Prioritets::ministry);
//					st.push(new Document("�������.doc", 232), Prioritets::assistant);
//							
//						int lenght = st.size(); 
//						Document** doc;
//						doc= new Document * [lenght];
//						
//						for (int i = 0; i < lenght; i++)
//						{		
//							doc[i]=st.pop();
//							Printer p;
//							p.Show_print(doc[i]);
//					
//							delete doc[i];
//							
//						}
//						
//				}
//				if (key == '2')
//				{
//					
//
//					string res;
//					int num;
//					cout << "������ ���� ���������" << endl;
//					cin >> res;
//					cin.ignore(32767, '\n');
//					cout << "������ ����� ���������";
//					cin >> num;
//					st.push(new Document(res, num), Prioritets::ministry);
//
//				}	
//				_getch();
//				break;
//				
//			}
//			break;
//		  }
//		  		 
//		 case '2':
//			 {
//			 	Color(12);
//			 	cout << " �� ���������! " << endl;
//			 	Color(7);
//			 	_getch();
//			 	break;
//			 }
//		 default:
//			 {
//			 	Color(12);
//			 	cout << "�������� ����������� �������� ���� �����\n";
//			 	break;
//			 	Color(7);
//			 }
//		}
//			 		if (m == '2') break;
//			 		system("cls");	
//
//
//	}
//}
//
//
//



	//int n, m, val;
	//Stack s1, s2, s3,s4;
	//cout << "Enter the 1-st array size:\n";
	//cout << "n = ";
	//cin >> n;
	//cout << "Enter the 1-st array:\n";
	//for (int i = 0; i < n; i++) {
	//	cin >> val;
	//	s1.push(val); //��������� �������� � ������ ����
	//}
	//cout << "Enter the 2-nd array size:\n";
	//cout << "m = ";
	//cin >> m;
	//cout << "Enter the 2-nd array:\n";
	//for (int i = 0; i < m; i++) {
	//	cin >> val;
	//	s2.push(val); //��������� �������� �� ������ ����
	//}
	////������� ���� ������ � ����
	//while ((s1.size() > 0) || (s2.size() > 0)) {
	//	if ((s1.size() > 0) && (s2.size() > 0)) {
	//		if (s1.top()%2==0) {
	//			s3.push(s1.top());
	//			s1.pop();
	//		}
	//		else {
	//			s4.push(s1.top());
	//			s1.pop();
	//		}
	//	}
	//	else if (s2.top()%2== 0) {
	//		s3.push(s2.top());
	//		s2.pop();
	//	}
	//	else {
	//		s4.push(s2.top());
	//		s2.pop();
	//	}
	//}
	//cout << "Output of the program:\n";
	//while (s3.size()) {
	//	cout << s3.top() << " "; //����� ����������� �������� ����� �� ����� 
	//	s3.pop();
	//}
	//cout << endl;
	//cout << "-----------------" << endl;
	//while (s4.size()) {
	//	cout << s4.top() << " "; //����� ����������� �������� ����� �� ����� 
	//	s4.pop();
	//}




	//while ((st3.size() > 0) || (st4.size() > 0))
	//{
	//	if ((st3.size() > 0) && (st4.size() > 0)) 
	//	{
	//		if (st3.top() % 2 == 0)//���� ������ ������� �������� �����
	//		{
	//			st1.push(st3.top());//�� ������� � ������ ����
	//			st3.pop();
	//		}
	//		else
	//		{
	//			st2.push(st3.top());//���� �������� ������� �������� �����,�� ��������- ������ ����.
	//			st3.pop();
	//		}
	//	}
	//	else if (st4.top() % 2 == 0)//���� ������ ������� ���������� �����.
	//	{
	//		st1.push(st4.top());//����� � ������ ����.
	//		st4.pop();
	//	}
	//	else 
	//	{
	//		st2.push(st4.top());//���� �������� ������� ���������� �����,�� �������� - � ������ ����.
	//		st4.pop();
	//	}
	//}