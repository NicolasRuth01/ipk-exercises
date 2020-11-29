#include <iostream>
#include <math.h>

void collatz(int number){
	while(true) //Schleife wird immer weiter ausgeführt
	{
	
		std::cout << number << std::endl; //number wird ausgegeben
	
		if(number % 2 == 0) //Wenn number gerade ist,...
		{
			number = number/2; //...wird durch 2 geteilt
		}
		else //Ansonsten...
		{
			number = number*3+1; //Wird number mit 3 multpliziert und es wird 1 addiert
		}
		
		
		//Wenn einer dieser Fälle eintritt, wird abgebrochen
		if(number == 1){
			break;
		}
		if(number == 0){
			break;
		}
		if(number == -1){
			break;
		}
		if(number == -5){
			break;
		}
		if(number == -17){
			break;
		}
		
	}
	std::cout << number << std::endl; //Am Ende wird die letze number ausgegeben
}

int main(){
	
	int number; //Nummer wird deklariert
	std::cout << "Gib eine beliebige Zahl ein: " << std::endl; //Eingabe
	std::cin >> number;
	collatz(number); //Funktion wird ausgeführt
}