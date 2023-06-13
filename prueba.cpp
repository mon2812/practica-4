#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main ()
{
	int pares[3][3], par2[3][3], rep[4][4], opcion, bandera=0, x, y, z, i, j, k, l, a, b;
	float res[4], prom;
	
	do
	{
	//no aceptar numeros iguales
	for (y=2; y>=0; y--)
	{
		for (x=0; x<3; x++)
		{
			pares[x][y]=-1;
		}
	}
	
	//llenar el arreglo	
	for (y=2; y>=0; y--)
	{
		for (x=0; x<3; x++)
		{
			error:
			cout<<"Ingresa un numero: ";
			cin>>z;
			
			//validar si es par
			while (z%2==1)
			{
				cout<<"ingresa un numero par: ";
				cin>>z;
			}
			
			//validar que no se repita
		
				for (j=2; j>=0; j--)
				{
					for (i=0; i<3; i++)
					{
										
						if (pares[i][j]==z)
						{
							bandera=1;
						}
					}
				
				}
			//asignar el valor a la matriz
				if (bandera==0){
					pares[x][y]=z;
						//mostrar matriz
						for (k=0; k<3; k++)
						{
							for (l=0; l<3; l++)
							{
								if (pares[k][l]==-1)
								{
									cout<<"0	";
								}else{
									cout<<pares[k][l]<<"	";
								}
								
							}
							cout<<"\n";
						}
				}else{
					cout<<"\nEste valor ya esta en la matriz ";
					bandera=0;
					goto error;
				}
		
				
			
			
			
			
			//validacion
			
			
		}
		cout<<"\n";
	}
	
	
	
	//mostrar matriz
	for (x=0; x<3; x++)
	{
		for (y=0; y<3; y++)
		{
			cout<<pares[x][y]<<"	";
		}
		cout<<"\n";
	}
	}while (true);
}
