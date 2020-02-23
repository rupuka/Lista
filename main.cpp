//Roberto Aguirre Coyotzi
//Yael Atletl Bueno Rojas
//Angel Sanchez Cabrera
//Leonardo Emmanuel Perez Ocampo

#include <stdio.h>
#include "Lista.h"




int main(int argc, char** argv) {
int x, y, opc=0;
Lista lista;
Cola cola;
Pila pila;
do {
	printf("Ingrese donde quiere realizar operaciones \n1.- Lista\n2.- Cola\n3.- Pila\n");
	scanf("%d", &opc);
	switch (opc) {
		case 1:{
			printf("Ingrese la accion a realizar sobre la lista:\n1) Insercion al inicio\n2) Insercion al final\n3) Suprimir al inicio\n4) Suprimir al final\n5) Eliminar repetidos\n6) Encotrar x\n7) Recuperar primero\n8) Recuperar ultimo\n9) Recuperar sucesor\n10) Recuperar predecesor\n11) Mostrar lista\n12) Salir  \n");
			scanf("%d", &opc);
			switch(opc) {

	case 1: {
		printf("Dame un numero a insertar\n");
		scanf("%d", &x);

		lista.insertar_inicio(x);
		getchar();
		break;
	}

	case 2:{
		printf("Dame un numero a insertar\n");
		scanf("%d", &x);

		lista.insertar_final(x);
		getchar();
		break;
	}
	case 3:{
		x = lista.suprimir_primero();
		if (x!=-1) printf("Se ha eliminado el numero %d \n", x );
		break;
	}

	case 4:{
		x = lista.suprimir_ultimo();
		if(x!=-1) printf("Se ha eliminado el numero %d \n", x );
		break;
	}
	case 5: {
		lista.eliminar_duplicados();
		break;
	}

	case 6:
	{
		printf("Dame un numero a buscar\n");
		scanf("%d", &x);
		y = lista.recuperar_pos_elemento(x);
		if (y == -1) printf("Elemento no encontrado\n");
		else	printf("La posicion del elemento %d es %d \n", x, y);
		getchar();
		break;
	}
	case 7: {
		y = lista.recuperar_primero();
		if (y==-1) printf("No es posible recuperar primero\n");
		else printf("El elemento de la posicion inicial es %d \n", y );
		break;
	}
	case 8: {
		y = lista.recuperar_ultimo();
		if (y==-1) printf("No es posible recuperar ultimo\n");
		else printf("El elemento de la posicion final es %d \n", y );
		break;
	}
	case 9: {
		printf("Dame un numero a buscar\n");
		scanf("%d", &x);
		y = lista.recuperar_sucesor(x);
		if (y==-1) printf("No es posible recuperar el sucesor");
		else printf("El sucesor del numero %d es %d \n", x, y);
			
		
		
		getchar();
		break;
	}
	case 10: {
		printf("Dame un numero a buscar\n");
		scanf("%d", &x);
		y = lista.recuperar_predecesor(x);
		if (y==-1) printf("No es posible recuperar predecesor\n");
		else printf("El predecesor del numero %d es %d \n", x, y);
		getchar();
		break;
	}
	case 11:{
		lista.mostrar_elementos();
		break;
	}

	default:{
		printf("numero invalido\n");
		break;
	}

	} //Fin de switch
			break;
		}
		case 2:{
		printf("Ingrese la accion a realizar sobre la cola:\n 1) Encolar\n 2) Desencolar\n 3) Buscar\n 4) Estado \n");
		scanf("%d", &opc);
		switch (opc) {
		case 1:{
			printf("Dame el numero a ingresar\n");
			scanf("%d", &x);
			cola.encolar(x);
			getchar();
			break;
		}
		case 2:{
			y = cola.desencolar();
			if (y==-1) printf("No es posible deseconlar\n");
			else printf("El numero que se desencolo es %d\n", y);
			break;
		}

		case 3:{
			printf("Dame el numero a buscar\n");
			scanf("%d", &x);
			y = cola.recuperar(x);
			if(y == -1) printf("Numero no encontrado\n");
			else	printf("La posicion del numero %d es %d\n",x, y);
			getchar();
			break;
		}
		case 4:{
			cola.estado();
			break;
		}

	}
		break;}
		case 3:{
		printf("Ingrese la accion a realizar sobre la pila:\n1) Ingresar al final\n2) Sacar al final \n3) Recurperar tope \n4) Estado \n");
		scanf("%d", &opc);
		switch (opc) {
		case 1:{
			printf("Dame el numero a ingresar\n");
			scanf("%d", &x);
			pila.push(x);
			getchar();
		break;
		}
		case 2:{
			y = pila.pop();
			if (y==-1) printf("No es posible popear\n");
			else printf("Se popeo %d\n", y);
			break;
		}
		case 3:{

			printf("El tope de pila es %d \n", pila.ultimo());
			break;

		}
		case 4:{
			pila.estado();
			break;
		}

	}
		break;}
	}



//lista de opciones



getchar();
} while(opc!=12);
return 0;
}
