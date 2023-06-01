#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    int i=0;
    double pi=0;
    double resultado=0;

    for (i=0 ; i<=1999999 ; i++)
    {
        resultado = pow(-1,i)/(2*i+1);
        pi += resultado;
    }
    
    pi*=4;

    cout << " el valor de pi es: "<< setprecision(7) << pi << endl;

    return 0;
}