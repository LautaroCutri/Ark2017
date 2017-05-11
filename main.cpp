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
    return;
}

void Clock_deco(int delayClock){ //clock decoration

        for (;delayClock<10; delayClock++)
        {
            cout << " |";cout.flush();bs(7);
            cout << '\b' << '\b';
            cout << " /";cout.flush();bs(7);
            cout << '\b' << '\b';
            cout << " \\";cout.flush();bs(7);
            cout << '\b' << '\b';
        }
        return;
}

int Temperatura(void){
float temperaturaF, temperaturaC;
    cin >> temperaturaF;
    temperaturaC = 5.0/9 * (temperaturaF - 32);
    return temperaturaC;
}

int main()
{
    int programa;
    string fecha;
    string compare;
    string nombre;
    string toCode;
    string::size_type desfasaje;
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
    while(true){
        cout << "Exit: 0" << endl << "Nombre: 1" << endl << "Temperatura: 2" << endl << "Distancia: 3" << endl << "+/-: 4" << endl << "Interseccion: 5" << endl << "Mayor: 7" << endl << "Desfasaje: 8" << endl;
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
Clock_deco(8);
cout << "H";cout.flush();bs(3.5);
cout << "e";cout.flush();bs(3.5);
cout << "l";cout.flush();bs(3.5);
cout << "l";cout.flush();bs(3.5);
cout << "o";cout.flush();bs(3.5);
cout << ",";cout.flush();bs(3.5);
cout << " ";cout.flush();bs(3.5);
for(string::size_type i2 = 0;nombre.length() > i2;i2++){
    cout << nombre[i2];cout.flush();bs(3.5);
}

cout << endl;
break;
}
//Temperatura
{
case 2:
    cout << "Por favor ingrese la temperatura en fahrenheit" << endl;
    int temperatura;
    temperatura = Temperatura();
Clock_deco(8);
    cout << "La temperatura en grados celsios es: Cº " << temperatura << endl;
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
Clock_deco(8);
    cout << "Distancia recorrida: " << tiempo / 60 * KMH << " KM" << endl;

break;
}
//Programa +/-
{
case 4:
    int numero;
    cout << "Ingrese un numero" << endl;
    cin >> numero;
Clock_deco(8);
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
Clock_deco(8);
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
        cout << "Escriva una fecha" << endl;

              cin.clear();cin.ignore(1);
              getline (cin, fecha);
                cin >> compare;
                if(fecha[0] == compare[0]){
                    fecha="AAAAA";
                }

                cout << fecha << compare << endl;
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
//Programa cifrado Cesar! Discreta
{
case 8:
    cout << "Bienvenido al programa encriptador v0.1" << endl << "Por favor, ingrese el desfasaje de caracteres" << endl;
    cin >> desfasaje;
    cout << "Por favor, ingrese el mensaje a cifrar" << endl;
    cin.ignore();getline (cin, toCode);
    for(;desfasaje > 26; desfasaje-=26);
Clock_deco(8);
cout << " ";
for(string::size_type i3 = 0;toCode.length() > i3;i3++){
    if (toCode[i3] <= 90 && toCode[i3] >= 65){
         toCode[i3] += desfasaje;
         if (toCode[i3] > 90){
             toCode[i3]+=(-26);
         }else{
             if (toCode[i3] < 65){
                 toCode[i3]+=26;
             }
         }
    }
    else{
        if (toCode[i3] <= 122 && toCode[i3] >= 97){
            toCode[i3] += desfasaje;
            if (toCode[i3] > 122){
                toCode[i3]+=(-26);
            }else{
                if (toCode[i3] < 97){
                    toCode[i3]+=26;
                }
            }
        }
       }
    cout << toCode[i3];cout.flush();bs(3.5);
}
cout << endl;
break;
}

    }
                     }
    return 0;
}
