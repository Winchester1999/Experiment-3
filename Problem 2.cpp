#include <iostream>
#include <conio.h>

 using namespace std;
 
 int main()
 {
    int i;
    int n;
	double a [7];
    double b [7];
    double c [7];
	 
	 cout << "Enter the daily temperature for a week in Province A, Province B and Province C." << endl;
	 
	 for (i = 1; i <= 7; i++)
	 
	 {
	 cout << "Province A, Day " << i << ": "; cin >> a [i];
	 }
	 
	 cout << " " << endl;

	 for (i = 1; i <= 7; i++)
	 
	 {
	 cout << "Province B, Day " << i << ": "; cin >> b [i];
	 }
	 
	 cout << " " << endl;

	 for (i = 1; i <= 7; i++)
	 
	 {
	 cout << "Province C, Day " << i << ": "; cin >> c [i];
	 }
	 
	cout << endl;

	 cout << "Displaying Values:" << endl;

	 for (i = 1; i <= 7; i++)
	 
	 {
	 cout << "Province A, Day " << i << "= ";
	 cout << a [i] << endl;
	 }

	 cout << endl;

	 for (i = 1; i <= 7; i++)
	 {
	 cout << "Province B, Day " << i << "= ";
	 cout << b [i] << endl;
	 }

	 cout << endl;

	 for (i = 1; i <= 7; i++)
	 {
	 cout << "Province C, Day " << i << "= ";
	 cout << c [i] << endl;
	 
	 }


 getch ();
	 return 0;
 }