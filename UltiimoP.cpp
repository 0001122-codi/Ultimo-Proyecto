#include <iostream>
#include <stdlib.h>
using namespace std;

struct costoPorArticulo
{
    char nombreArticul[21];
    int cantidad;
    float precio, costoPorArticulo;
}ProducCompra[100];

int main()
{
    int numero;

    cout <<"<<<PROGRAMA PARA PROCESAMIENTO DE FACTURAS>>>\n";
    cout <<"Por favor, digite el numero de articulos que desea comprar\n";
    cin >> numero;

    for (int i = 0; i < numero; i++)
    {
        fflush(stdin);

        cout <<"\nDigite el nombre del articulo:"<< endl;
        cin.getline(ProducCompra[i].nombreArticul, 21,'\n');

        cout <<"Digite la cantidad de unidades compradas del articulo:"<< endl;
        cin >> ProducCompra[i].cantidad,'\n';

        cout <<"Ingrese el precio que tiene la unidad del articulo:"<< endl;
        cin >> ProducCompra[i].precio, '\n';

    }
    for (int i = 0; i < numero; i++)
    {
        ProducCompra[i].costoPorArticulo = ProducCompra[i].cantidad * ProducCompra[i].precio;
        cout <<"\nEl nombre del articulo es: "<<ProducCompra[i].nombreArticul<< endl;
        cout <<"La cantidad de unidades que compro, fueron: "<<ProducCompra[i].cantidad<< endl;
        cout <<"El precio de la unidad del articulo coprado es: "<<ProducCompra[i].precio<< endl;
        cout <<"SU TOTAL A PAGAR ES: "<<ProducCompra[i].costoPorArticulo<< endl;
    }
    

    system ("pause");
    return 0;

}

    

   





 