#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char i = 'A';
	
	int j;
	int temperature[i][j];
	
	for (char i = 'A'; i <= 'C'; i++)
	{
		for (int j = 0; j < 7; j++)
		{
		cout << "Province " << i;
		cout << " Day " << j + 1 << " : ";
		cin >> temperature[i][j];
		}
		
	}
	for (char i = 'A'; i <= 'C'; i++){
		for (int j = 0; j < 7; j++)
		{
	cout << "Province"  << i << ", Day " << j + 1 << " : " << temperature[i][j] << endl;
		}
	}

	
	_getch();
	return 0;
}
