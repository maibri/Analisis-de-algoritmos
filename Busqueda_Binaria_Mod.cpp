//Busqueda_Binaria modificada.

#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <sys/time.h>

using namespace std;


void muestra_vector(int vector[100000])
{
	for(int i=0;i<100000;i++)
	{
	cout<<vector [i]<<"\n";
	}	
	
}

void busqueda(int vector2[100])
{
	int	vector[100]={274780 , 218802 , 1875708 , 1334752 , 141792 , 953592 , 844645 , 649788 , 1960700 , 1216431 , 273062 , 1195057 , 1245162 , 273064 , 765939 , 1363533 , 1527569 , 601385 , 1574205 , 1986756 , 1664956 , 1598892 , 91483 , 226506 , 448954 , 787042 , 869664 , 1296005 , 454690 , 304425 , 1589168 , 355693 , 1019086 , 26348 , 1595931 , 52169 , 1380178 , 1741444 , 857648 , 1917429 , 1728892 , 1108717 , 197538 , 876264 , 992782 , 1685718 , 519995 , 906035 , 868866 , 963108 , 555409 , 1847296 , 438247 , 1255465 , 115437 , 776412 , 1102059 , 840369 , 720430 , 1983127 , 378403 , 1611647 , 234880 , 501751 , 1371557 , 400898 , 1347724 , 1766289 , 609450 , 179013 , 1287840 , 672542 , 955550 , 338854 , 905725 , 1654367 , 451629 , 1288164 , 770715 , 1161693 , 1712630 , 1710931 , 1372252 , 870866 , 1072206 , 1120370 , 1485793 , 1387129 , 1278638 ,
	 174985 , 869029 , 1475018 , 673963 , 1364146 , 680639 , 629536 , 138729 , 908627 , 1727883 , 1399385};
vector2=vector;	
	
}
void crea_vector(int vector[100000])
{		//-----------------Creando el vector ---------------------------------------------------------------

	for(int i=0;i<100000;i++)
	{
		vector [i]=0+rand()%(20000000-0);
	}	
}
void ordena_vector(int vector[100000],int vector1[100000])
{
	
		int pos=0,aux=0;
for(int i=0;i<100000;i++){
		pos = i; 
		aux = vector[i];
		
		while((pos>0) && (vector1[pos-1] > aux)){
			vector1[pos] = vector1[pos-1];
			pos--;
		}
		vector1[pos] = aux;
}
}

long obtenerTiempo(){
    struct timeval inicio;
    // gettimeofdat devuelve el tiempo del reloj de la computadora
    gettimeofday(&inicio, NULL);
    // Retornamos el tiempo en segundo multiplicado por un millon que será 00:00:00 + el tiempo en microsegundos
    return inicio.tv_sec*1000000+inicio.tv_usec;
}

int main(){
   
    double tiempoEnSegundos;
    long tiempoEnMicrosegundos;
    int mitad=0,c=0;
    int primero = 0;
    int ultimo = 100000;
	int e=8702;
   	int vector[100000]={0};
   	int vector1[100000]={0};
   	int vector2[100]={0};
	crea_vector(vector);
	ordena_vector(vector,vector1);
	muestra_vector(vector1);
	busqueda(vector2);
	
		long inicio;
// funcion time -inicio
 for(int i=0;i<100000;i++)

    {
		for(int j=0;j<100;j++)

    {
    	inicio = obtenerTiempo(); 
        mitad = (primero + ultimo) / 2;

        if (vector2[j] == vector1[mitad])
            c = 1;
        if (vector2[j] < vector1[mitad])
            ultimo = mitad -1;
        if (vector2[j] > vector1[mitad])

            primero = mitad + 1;
    }    
	}

    if (c != 0){
	
       cout<<"elementos encontrados";
}
    else{
	
      cout<<"elementos no encontrados";
		}
   
  
    long final = obtenerTiempo(); //funcion time -final
  
    tiempoEnMicrosegundos = final - inicio;
    
    tiempoEnSegundos = tiempoEnMicrosegundos * pow(10, -6);
    cout<<endl<<endl;
    
  
    cout<<"EL tiempo de ejecucion en segundos es: "<<tiempoEnSegundos<<endl;
    return 0;
}

