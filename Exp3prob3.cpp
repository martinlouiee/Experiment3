#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
int main()
{
	
	int i, j;
	char temp;
	char str[] = {'e', 'n', 'g', '1', '9', '0', '7'};
	int size = sizeof(str)/sizeof(str[0]);
	
	cout << "eng1907" << endl;
	
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (str[j] > str[j+1])
			{
				temp = str[j];
				str[j] = str[j+1];
				str[j+1] = temp;
			}
			
		}
	}
	cout << "The output after sorting is : " << endl;
		for (i = 0; i < 8; i++)
		{
			cout << str[i];
		}
	cout << endl << "The size of the array is : " << size;
	
	
	
	
	
	
	
	_getch();
	return 0;
}
