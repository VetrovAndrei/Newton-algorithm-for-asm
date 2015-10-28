#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <locale>
#include <iostream>
using namespace std;

extern "C" 
{
        int newton(float e, float*y);
}

void main()
{
		//ofstream FILE("file.txt");
        setlocale (LC_CTYPE, "Russian");
        float eps;
        float x;
        int iteration;
        cout << "Программа начала работу" << endl;
        cin >> eps;
		iteration = newton(eps, &x);
		cout.precision(8);	
		cout  << x << " \t " << iteration << endl;
		system("pause");
}
