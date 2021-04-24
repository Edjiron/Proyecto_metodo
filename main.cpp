#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string>
#include<iomanip>
#include<stdlib.h>
#include <fstream>


using namespace std;

int n=0;
int bandera=0;
string ban;

struct clientes{
string nombre;

int id;
int total;


}arreglo[100];

int menu1(int menu,int i,int j);




int main()
{
  system("color 3");

   int i;
   int j;


   int menu;


    string nombre[100];
    int id[100];
    int total[100];
    int menu3;
   int mas=5;

    menu1( menu,i,j);

cout<<n<<endl;
system("pause");




      for(int f=0;f<n;f++){

   ofstream fichero_1;

    fichero_1.open("producto.txt",ios::app);





    fichero_1<<arreglo[f].nombre<<endl<<arreglo[f].id<<endl;

    fichero_1.close();}


    return 0;









   }







int menu1(int menu,int i,int j){

    string nombre[100];
    int id[100];
    int total[100];
    int menu3;
   int mas=5;

    do{









    cout<<"1) Anadir clientes"<<endl;
    cout<<"2) ver clientes"<<endl;
    cout<<"fuera de servicio) total"<<endl;
    cout<<"fuera de servici0) inventario"<<endl;
    cout<<"3)salir"<<endl;
    cin>>menu;


    switch(menu){
    case 1:

        system("cls");
        cout<<"ingrese el numero de clientes a agregar:";
        cin>>n;

    for(int i=0;i<n;i++){

        cout<<"ingrese el nombre:";
    cin>>arreglo[i].nombre;
    cout<<"ingrese el id:";
    cin>>arreglo[i].id;
    cout<<"ingrese el total:";
    cin>>arreglo[i].total;






    }
cout<<"ingrese 1 para volver a menu";
    cin>>menu3;

    break;


    case 2:for(i=0;i<n;i++){

        	cout<<"\nnombre"<<arreglo[i].nombre<<endl;

        	cout<<setprecision(0)<<fixed<<"\nNumero de ID de cliente: "<<arreglo[i].id<<endl;


    }
break;
      case 3: return 0;

    }



    }while(menu3==1);




}
