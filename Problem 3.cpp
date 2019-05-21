#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	
	int i;
	int j;
	int arrsize;
	char arrinput[15];

	cout << "Enter Array Elements: "; cin >> arrinput;

	for (i = 0; arrinput[i] != '\0'; i++)
	{
		arrsize = i;
	}

	j = i - 1;
	i = 0;

	while (arrinput[i] > arrinput[j])
	{
		char temp = arrinput[i];
		arrinput[i] = arrinput[j];
		arrinput[j] = temp;
		i++;
		j--;
	}

	cout << "Reversed Elements: ";
	for (i = 0; i <= arrsize; i++)
	{
		cout << arrinput[i];
	}

	cout << " " << endl;
	cout << "Array Size: " << arrsize + 1;

	_getch();
	return 0;
}