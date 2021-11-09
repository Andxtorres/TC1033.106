#include <iostream>
using namespace std;

//Problema 1
void operaNumeros(){
    cout<<"Dame la opción deseada \n S) Mostrar la suma de dos numeros \n R) Mostrar la resta de dos numeros \n M) Mostrar la multiplicación de dos números E) Salida"<<endl;
    char opcion;
    cin>>opcion;
    int numero1;
    int numero2;
    cin>>numero1;
    cin>>numero2;
    int respuesta=0;
    switch(opcion){
        case 'S':
            respuesta=numero1+numero2;
            break;
        case 'R':
            respuesta=numero1-numero2;
            break;    
        case 'M':
            respuesta=numero1*numero2;
            break;        
        case 'E':
            return;
            break;
        default:
            cout<<"Opción incorrecta"<<endl;
            break;    
    }
    cout<<"El resultado de la operación es: "<<respuesta<<endl;

}

//Problema 2
void numeroImpar(){
    int numero;
    do{
        cout<<"Dame un número impar "<<endl;
        cin>>numero;
    }while(numero%2==0);
}

int main(){
    int opcion;
    do{
        cout<<"Dame la opción deseada \n 1) Problema 1 Opera números \n 2) Números impares \n 0) Salida"<<endl;
        cin>>opcion;
        switch(opcion){
            case 1:
                operaNumeros();
                break;   
            case 2:
                numeroImpar();
                break;  
            case 0:
                return 1;
                break;
            default:
                cout<<"Opción incorrecta"<<endl;
                break;    
        }
    }while(opcion!=0);
    return 0;
}
