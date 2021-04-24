#include<iostream>
#include <stdlib.h>
#include<fstream>
#include<string>

using namespace std;


int producto;
int bandera,bandera2;
char nombre;
int cond;
int n;
int menu;
string imp;




struct granos_basicos{
  char nombre_g[25];
  float preciog;
  int cantidad;
}granos[30];

void granos_basic();

int main(){

system("color b");

    do{
system("cls");
cout<<"Juegos de tronos"<<endl;

    cout<<"\nGranos basicos";
    cout<<"\nGuardar y vista previa";
    cout<<"\nVer inventario";
    cout<<"\n fuera de serevicio))carnes";


    cout<<"\nsalir y guardar";



       cin>>menu;

       switch(menu){

       case 1:{
           system("cls");
           cout<<"\nGRANOS BASICOS";


       cout<<"\ningrese la cantidad de productos a agregar:";
     cin>>n;

     for(int i=0;i<n;i++){

cout<<"\ningrese el nombre del producto:";
    cin>>granos[i].nombre_g;

    cout<<"\ningrese la cantidad de productps:";
    cin>>granos[i].cantidad;

    cout<<"\ningrese el precio del producto:";
    cin>>granos[i].preciog;



     }

cout<<"ingrese 1 para regresar al menu:"<<endl;
    cin>>bandera2;break;}

      case 2: {
          system("cls");

          cout<<"VER INVENTARIO";

      for(int p=0;p<n;p++){

      cout<<"Producto:"<<granos[p].nombre_g<<endl;
       cout<<"Cantidad:"<<granos[p].cantidad<<endl;
       granos[p].preciog=granos[p].cantidad*granos[p].preciog;


        cout<<"Total:"<<granos[p].preciog<<endl;


        ofstream Inventario;
        Inventario.open("Inventario de products.txt",ios::app);

        Inventario<<"Producto:"<<granos[p].nombre_g<<endl;
       Inventario<<"Cantidad:"<<granos[p].cantidad<<endl;
       Inventario<<"Total:"<<granos[p].preciog;


        Inventario.close();






}
 cout<<"ingrese 1 para regresar al menu:"<<endl;
    cin>>bandera2;break;}

      case 3:{


          system("cls");
          ifstream inventarioprint;

          inventarioprint.open("Inventario de products.txt",ios::in);

          while(!inventarioprint.eof()){
            getline(inventarioprint,imp);


            cout<<imp<<endl;


          }
   system("pause");

            bandera2=1;break;}


            case 4:{
            return 0;

            }








}






    }while(bandera2==1);






















}

