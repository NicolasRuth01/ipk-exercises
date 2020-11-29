#include <iostream>

void fibonacci(int number){
	unsigned long fibonaccizahl = 1; //Die zuletzt berechnete Fibonaccizahl
	unsigned long vorherigeFib = 0; // Die zu "vorletzt" berechnete Fibonaccizahl
	unsigned long zwischenspeicher; // Hier wird die zuletzt berechnete Fibonaccizahl zwischengespeichert
	
	if(number < 0) //Falls die Eingabe negativ ist, kommt ein Fehler
	{
		std::cout << "Bitte gebe eine positive Zahl ein!" << std::endl;
	}
	
	//Die Fibonaccizahlen an den Stellen 1(0) und 2(1) können nicht berechnet werden und müssen deshalb seperat ausgegeben werden
	else if(number == 1)
	{
		std::cout << "Die Fibonaccizahl an Stelle 1 ist: 0" << std::endl;
	}
	else if(number == 2)
	{
		std::cout << "Die Fibonaccizahl an Stelle 1 ist: 0" << std::endl; //Es sollen alle Fibonaccizahlen bis N ausgegeben werden
		std::cout << "Die Fibonaccizahl an Stelle 2 ist: 1" << std::endl;
	}
	else
	{
		std::cout << "Die Fibonaccizahl an Stelle 1 ist: 0" << std::endl; //Es sollen alle Fibonaccizahlen bis N ausgegeben werden
		std::cout << "Die Fibonaccizahl an Stelle 2 ist: 1" << std::endl;
		
		for(int i = 2; i < number; i++) // i beginnt bei 2, da die ersten beiden Fibonaccizahlen schon ausgegeben wurden. i < number, da i erst nach dem ersten Schleifendurchlauf erhöht wird.
			{	
			zwischenspeicher = fibonaccizahl; //Die zuletzt berechnete Fibonaccizahl wird zwischengespeichert.
			fibonaccizahl = fibonaccizahl + vorherigeFib; //Die letzte und die vorletzte Fibonaccizahlen werden addiert
			vorherigeFib = zwischenspeicher; //Der vorlezten Fibonaccizahl wird die zwischengespeicherte letzte Fibonaccizahl zugeordnet
			std::cout << "Die Fibonaccizahl an Stelle " << i+1 << " ist: "<< fibonaccizahl << std::endl; //Die Fibonaccizahl wird mit der Stelle ausgegeben
		}
	}
	
}

int main(){
	int number;
	std::cout << "Gebe die Stelle der Fibonaccizahl ein, die du haben moechtest" << std::endl; //Stelle der Fibonaccizahl wird abgefragt
	std::cin >> number;
	fibonacci(number); //Die Funktion fibonacci wird aufgerufen
}