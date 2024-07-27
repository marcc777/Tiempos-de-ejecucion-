#include <iostream>
#include <chrono>

int fibo(int n);   // declaracion de la funcion

using namespace std;
using namespace std::chrono;

int main()
{
    // Inicia la medicion del tiempo
    auto a = high_resolution_clock::now();

    cout << fibo(40) << " ";

    // Finaliza la medicion del tiempo
    auto b = high_resolution_clock::now();


    // Calcula la duracion
    duration<double> duration = b - a;
    cout << endl << "Tiempo de ejecucion: " << duration.count() << " segundos" << endl;

    return 0;
}

// definicion de la funcion:
int fibo(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }
    
    else 
    {
        return fibo(n - 1) + fibo(n - 2);   
    }
}
