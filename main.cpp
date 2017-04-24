#include <iostream>
#include <math.h> //no se usa por ahora
#include <time.h>
/*
 * define <texto_a_reemplazar> <palabras reemplazadas>
 * funciones empiezan con mayuscula

*/
#define bs Busysleep

using namespace std;

void Busysleep(int decisegundos){ // cross-platform busy-sleep function

    clock_t time_end;
    time_end = clock() + decisegundos * CLOCKS_PER_SEC/10;
    while (clock() < time_end)
    {
    }
}

void Clock_deco(){ //clock decoration

        for (int ru=0; ru<2; ru++)
        {
            cout << " |";cout.flush();bs(7);
            cout << '\b' << '\b';
            cout << " /";cout.flush();bs(7);
            cout << '\b' << '\b';
            cout << " \\";cout.flush();bs(7);
            cout << '\b' << '\b';
        }
}

int main()
{
    int programa;
    string nombre;
//Just a cool welcome effect
{
    cout << "H";cout.flush();bs(3.5);
    cout << "e";cout.flush();bs(3.5);
    cout << "l";cout.flush();bs(3.5);
    cout << "l";cout.flush();bs(3.5);
    cout << "o";cout.flush();bs(3.5);
    cout << ".";cout.flush();bs(3.5);
    cout << ".";cout.flush();bs(3.5);
    cout << ".";cout.flush();bs(3.5);
    cout << endl;
}
Clock_deco();
    while(true){
        cout << "Exit: 0" << endl << "Nombre: 1" << endl << "Temperatura: 2" << endl << "Distancia: 3" << endl << "+/-: 4" << endl << "Interseccion: 5" << endl << "Mayor: 7" << endl;
        cin >> programa;
switch(programa){
case 0:
    return 0;
break;

//Programa Nombre
{
case 1:
    cout << "Por favor ingrese su nombre" << endl;
    cin >> nombre;
Clock_deco();
    cout << "Hola, " << nombre << endl;
break;
}
//Programa Temperatura
{
case 2:
    cout << "Por favor ingrese la temperatura en fahrenheit" << endl;
float temperaturaF, temperaturaC;
    cin >> temperaturaF;
    temperaturaC = 5.0/9 * (temperaturaF - 32);
Clock_deco();
    cout << "La temperatura en grados celsios es: Cº " << temperaturaC << endl;
break;
}
//Programa Distancia
{
case 3:
    float KMH, tiempo;
    cout << "Por favor ingrese la velocidad del misil en KMH" << endl;
    cin >> KMH;
    cout << "Por favor ingrese el tiempo desde el lanzamiento en minutos" << endl;
    cin >> tiempo;
Clock_deco();
    cout << "Distancia recorrida: " << tiempo / 60 * KMH << " KM" << endl;

break;
}
//Programa +/-
{
case 4:
    int numero;
    cout << "Ingrese un numero" << endl;
    cin >> numero;
Clock_deco();
    if (numero>0){
        cout << "El numero " << numero << " es positivo" << endl;
    }
                else{
        if (numero==0){
            cout << "El numero " << numero << " es cero" << endl;
            break;
        }
                cout << "El numero " << numero << " es negativo" << endl;
    }
break;
}
//Programa interseccion
{
case 5:
        float pendiente1, pendiente2, ordenada1, ordenada2;
    cout << "Ingrese la pendiente de la primer recta seguido de la segunda" << endl;
    cin >> pendiente1 >> pendiente2;
    cout << "Ingrese la ordenada de la primer recta seguido de la segunda" << endl;
    cin >> ordenada1 >> ordenada2;
Clock_deco();
    if (pendiente1==pendiente2){
        if (ordenada1==ordenada2){
            cout << "La solucion es toda la recta" << endl;
            break;
        }
        cout << "No existe interseccion" << endl;
                 }else{
        float interseccionX, interseccionY;
       interseccionX = (ordenada2-ordenada1)/(pendiente1-pendiente2);
       interseccionY = pendiente1*interseccionX+ordenada1;
       cout << "La interseccion es (" << interseccionX << ";" << interseccionY << ")" << endl;
    }
break;
}
//Programa fecha
{
case 6:
break;
}
//Programa mayor valor
{
case 7:
    cout << "Ingrese un numero seguido de enter hasta ingresar 0" << endl;
    float promedio = 0;
    int mayorvalor, numeroDeEntrada;
    cin >>numeroDeEntrada;
    int i;
    mayorvalor = numeroDeEntrada;
    while(numeroDeEntrada!=0){
          promedio += numeroDeEntrada;
    if(mayorvalor<numeroDeEntrada){
    mayorvalor=numeroDeEntrada;
    }
        cin >> numeroDeEntrada;
        i++;
    }
    if(numeroDeEntrada==0){
        cout << "No se ingresaron valores" << endl;
    }else{
         cout << "Mayor valor: " << mayorvalor << endl << "Promedio: " << promedio/i << endl;
    }
}

    }
                     }
    return 0;
}
