// PESEL_PK3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Pesel.h"
#include "Checksum.h"
#include "Menu.h"
#include <iostream>
#include <fstream>
#include "Lists.h"

int main()
{
//	Menu m = Menu();	

	Pesel dominik2 = Pesel(95, 12,22, 517, 6);
	Pesel dominik = Pesel(95122205176);



	std::fstream plik;

	plik.open("pesel.txt", std::ios::in);

	Pesel proba;
	plik >> proba;
	Lists *lista1 = new Lists(&proba);

	for (int i = 0; i < 9; i++)
	{ 
		plik >> proba;
		//std::cout << proba;
		lista1->add(&proba);
		//std::cout << Lists::counter;
	}

	 
	for (int i = 0; i < 15; i++)
	{
		std::cout << lista1->pesel->getDay()<< lista1->pesel->getMonth()<< lista1->pesel->getYear() << std::endl;


		lista1 = lista1->nextElement();
	}

	plik.close();

	std::cout << dominik;
	Checksum c1 = Checksum(dominik); 

	dominik.year.SetOffset(1900);
	//dominik.month.SetOffset(-1);
	//dominik.day.SetOffset(1);
	 
	 

	std::cout << dominik.getDay();
	std::cout << dominik.getMonth(); 
	std::cout << dominik.getYear();


	system("pause");
	 
    return 0;
}
 
