//Busqueda_Secuencial.

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
	int e=32767;
   	int vector[100000]={0};
   	int vector1[100000]={0};

	crea_vector(vector);
	ordena_vector(vector,vector1);
	muestra_vector(vector1);
	
	
long inicio= obtenerTiempo();
// funcion time -inicio
 for(int i=0;i<100000;i++)

    {
		for(int j=0;j<100;j++)

    {
     if(e==vector1[i])
	{
		c=c+1;
	}
    }     
	}
long final = obtenerTiempo(); //funcion time -final
    if (c != 0){
	
       cout<<"elemento encontrado";
}
    else{
	
      cout<<"elemento no encontrado";
		}
   
    // fin de operación random
    
  
    tiempoEnMicrosegundos = final - inicio;
    
    tiempoEnSegundos = tiempoEnMicrosegundos * pow(10, -6);
    cout<<endl<<endl;
    
  
    cout<<"EL tiempo de ejecucion en segundos es: "<<tiempoEnSegundos<<endl;
    return 0;
}

