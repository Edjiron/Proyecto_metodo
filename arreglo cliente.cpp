#include <iostream>
using namespace std;

struct clientes{
char nombre[30];
int id;
int total;


}arreglo[100];



int main()
{
   int i;
   int j;
   int n;

   cout<<"ingrese la cantidad del arreglo:";
   cin>>n;



   for(i=0;i<n;i++){

    cout<<"ingrese el nombre:";
    cin>>arreglo[i].nombre;
    cout<<"ingrese el id:";
    cin>>arreglo[i].id;
    cout<<"ingrese el total:";
    cin>>arreglo[i].total;

    cout << "\nNombre: " << arreglo[i].nombre;
    cout<<"\nid: " << arreglo[i].id;
     cout<<"\ntotal: " << arreglo[i].total<<endl;

   }






}
