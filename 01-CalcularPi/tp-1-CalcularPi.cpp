#include <iostream>
#include <iomanip>
 

using namespace std;

int main()
{
    double pi=0;                    /*almacenas el resultado total de todas las iteraciones*/
    double error = 0.0000001/4;     /*para que se detenga las iteraciones al llegar Aa los 7 decimales*/
    double termino =0;              /*el resultado cada vez que hace la iteracion*/
    double signo = 1;               /*para poder hacer los calculos cuando los resaldos sean negativos o positivos*/
    int n=0;
   
    while (abs(termino) >= error || n==0) /*detenerse cuando llegue al numero de decimales que quiero y que aun que n=0 continue iterando*/
    {
        
        termino=signo/(2 * n + 1);      /*los calculos de cada iteracion usando la serie de Liebniz*/
        pi += termino;                  /*pi va almacenendo los resultados de cada iteracion*/

        signo *=(-1);                   /*para tener en cuenta si es negatiuvo o positivo*/
        n++;                            
    }  
    pi *= 4;
    
    
    cout<< setprecision(7)<<fixed <<"El valor de pi es: "<< pi << endl;
    /*el resultado esta con 7 decimales porque al usar el setprecision 
    con 6 decimales lo redondea*/


    return 0;
}