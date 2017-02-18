// Day1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>      // std::setprecision

int main()
{
	char m, n;              // m - char zwracany przez uzytkownika, n - char do do while
	float ik, us, rk, prk; // dane do obliczen

	do
	{
		std::cout << "Kalkulator rezystora autobias'u" << std::endl
				  <<"Prad Katodowy [mA]: ";
		std::cin  >> ik ;
		std::cout << "Ujemne napiecie siatki [V]: ";
		std::cin  >> us ;

		std::system("cls");

		rk = us/ik ;
		prk = us*(ik/1000) ;

		std::cout << "ik: " << ik << "[mA]" << std::endl
				  << "us:-" << us << "[V]" << std::endl
				  << std::setprecision(3) << "Rk: " <<  rk << "[k]" << std::endl
				  << "P: " << prk << "[W]" << std::endl;
	
		int x;   // do do while

		do
		{
			std::cout << '\n' << "Powtorzyc? (T/N) : ";
			std::cin >> m;

			if ((m == 'n' || m == 'N') || (m == 't' || m == 'T'))
			{
				x = 0;

				if( !(m == 'n' || m == 'N'))
				{
					n = 1;
				}
				else n = 0 ;
			}
			else x=1;
			
		}while(x);
		
	} while(n);

	std::getchar();
	std::getchar();
	return 0;
}

