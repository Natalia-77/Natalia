 #include "Automat.h"


	void main()
	{

			SetConsoleCP(1251);
			SetConsoleOutputCP(1251);
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			srand(time(NULL));


			Patron pat[30];
			Magazine mag;
			for (int i = 0; i < 30; i++)
			{
				mag.Push(pat[i]);
			}

			Automat a;
			a.Put_Magazine();
			a.FinalShoot(mag);

	}