#include <iostream>
using namespace std;

struct producto
{
   string descripcion;
   int ctdad_vendida;
   float costo_del_producto;
};

struct fecha
{
   int dia;
   int mes;
   int anio;
};

struct factura
{
   int numero;
   string tipo_factura; // A, B, C
   struct fecha fecha_factura;
   struct producto productos_vendidos[3];
   float monto_total;
};


void cargarDatos(factura (&tamano)[1]){ 
   for (int i = 0; i < 1; i++)
   {
      cout << "numero de factura" << endl;
      cin >> tamano[i].numero;
      cout << "tipo de factura" << endl;
      cin >> tamano[i].tipo_factura;
      cout << "dia de factura" << endl;
      cin >> tamano[i].fecha_factura.dia;
      cout << "mes de factura" << endl;
      cin >> tamano[i].fecha_factura.mes;
      cout << "año de factura" << endl;
      cin >> tamano[i].fecha_factura.anio;
      cout << "productos vendidos" << endl;
      cin >> tamano[i].productos_vendidos->descripcion;
      cout << "cantidad de  vendidos" << endl;
      cin >> tamano[i].productos_vendidos->ctdad_vendida;
      cout << "costo de  vendidos" << endl;
      cin >> tamano[i].productos_vendidos->costo_del_producto;
      cout << "monto total" << endl;
      cin >> tamano[i].monto_total;
   };

   
};

int main(){

   factura array[1];
   
   cargarDatos(array);

   cout << "TIPO DE FACTURA : " << array[0].tipo_factura << endl;
   cout << "NUMERO DE LA FACTURA : " << array[0].numero << endl;
   cout << " MONTO TOTAL : " << array[0].monto_total << endl;
   return 0;
}


