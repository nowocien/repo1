// PESEL_PK3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Pesel.h"
#include "Checksum.h"

#include <iostream>

int main()
{

	Pesel dominik = Pesel(95, 12,22, 517, 6); 

	std::cout << dominik;
	Checksum c1 = Checksum(dominik); 

	//dominik.year.SetOffset(1900);
	dominik.month.SetOffset(-1);
	//dominik.day.SetOffset(1);
	(Date)(dominik.day) += 20;

	std::cout << dominik.getDay();
	std::cout << dominik.getMonth(); 
	std::cout << dominik.getYear();

	 
    return 0;
}
 
