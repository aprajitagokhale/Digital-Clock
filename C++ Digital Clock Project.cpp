//Digital Clock Project
#include<iostream>
#include<Windows.h>  //contains Sleep keyword
using namespace std;

int main()
{
	int h, m, s;   //h-hours, m-minutes, s-seconds
	cout << "Set time in this format - 00:00:00" << endl;
	cin >> h >> m >> s;
	system("cls");   //clear screen
	if (h > 12 || m > 60 || s > 60) //here we can use "," also but "||" is more approprite
	{
		cout << "ERROR" << endl;
		exit(0);                  //to exit from the loop

	}
	while (1 > 0)
	{
		s++;        //second will keep increasing
		if (s > 59)
		{
			m++;
			s = 0;
		}
		if (m > 59)
		{
			h++;
			m = 0;
		}
		if (h > 12)
		{
			h = 1;
		}
		cout << "Clock:" << endl;
		cout << h << ":" << m << ":" << s << endl; //this prints our program like this- 00:00:00
		Sleep(1000); //slow down the loop by 1000ms speed
		system("cls");  //clear above screen after the end of one repetation of this loop
	}
	return 0;
}