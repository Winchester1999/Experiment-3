#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main ()
{
	
	int arrinput[10];
	int i;
	int j;
	int o;
	int total;
	int temp;

	cout << "Enter 10 Numbers: "<< endl;

	for (i = 0; i <10; i++)
	{
		cin >> arrinput[i] >> setprecision (2) >> fixed;
	}

	for (i=0; i< 10; i++)
	{
		for (j=i +1; j<10; j++)
		{
			if (arrinput[i] > arrinput [j])
			{
				temp = arrinput [i];
				arrinput[i] = arrinput[j];
				arrinput[j] = temp;
			}
		}
	}
	o = arrinput[0];
	total=0;
	for (i=0; i < 10 ; i++)
	{ 
		if (o > arrinput[i])
			o = arrinput[i];
			total += arrinput[i];
	}
	
	cout << "Smallest integer: " << o << setprecision (2) << fixed << endl;
	
	cout << "Largest integer: " << temp << setprecision (2) << fixed << endl;
	
	cout << "Total: " << total << setprecision (2) << fixed << endl;
	
	cout << "Average: " << total / 10 << setprecision (2) << fixed << endl;

_getch();
return 0;
}