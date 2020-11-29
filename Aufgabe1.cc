#include <iostream>
#include <cmath>

double a,b,c; //Koeffizienten
double x,y; //Nullstellen (Es gibt maximal 2)

void abfragen()
{
	std::cout << "Geben sie die Koeffizienten der Gleichung ax^2+bx+c ein" << std::endl; // Koeffizienten werden abgefragt
	std::cout << "a: "<< std::endl; // a wird abgefragt
	std::cin >> a;
	std::cout << "b: "<< std::endl; // b wird abgefragt
	std::cin >> b;
	std::cout << "c: "<< std::endl; // c wird abgefragt
	std::cin >> c;
}

void berechnen(){
	if(a==0 && b==0 && c==0)//Spaß
	{
		std::cout << "Bist du zu dumm was gescheites einzugeben!?" << std::endl;	
	}
	
	else if(a==0 && b==0)//Wenn die Funktion konstant ist, und c nicht 0 ist.
	{
		std::cout << "Es gibt keine Nullstellen" << std::endl;
	}
	
	else if(a==0)//Falls a == 0 ist, würde man bei der Mitternachtsformel durch 0 teilen, deswegen Sonderfall
	{
		x = -c/b;
		std::cout << "Die Nullstelle ist: " << x << std::endl;
	}
	
	else //In allen anderen Fällen kann die Mitternachtsformel angewendet werden.
	{
		double wurzelinhalt = (b*b)-(4*a*c);
		
		if (wurzelinhalt < 0)//Falls der Wurzelinhalt negativ wäre, wäre die Wurzel komplex.
		{
			std::cout << "Die Wurzel in der Mitternachtsformel ist negativ. " << a << "x^2+" << b << "x+" << c << " hat keine Nullstellen" << std::endl;
		}
		
		else
		{
			x = (-b+sqrt(wurzelinhalt))/(2*a); //Nullstelle 1
			y = (-b-sqrt(wurzelinhalt))/(2*a); //Nullstelle 2
			
			if(x == -y && x == 0)//Falls x und y gleich Null sind, gibt es nur eine Nullstelle
			{
				std::cout << "Die Nullstelle ist: " << x << std::endl;
			}		
			
			else
			{
				std::cout << "Die Nullstellen sind " << x << " und " << y <<" !" << std::endl;
			}
		}
	}
}
int main(){
	abfragen();
	berechnen();
}