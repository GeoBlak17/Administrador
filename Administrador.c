#include <stdio.h>

int main()
{
	
	
	//Variables a utilizar
	int op,n1,n2,n3,n4,n5,call;
	double cal;
	char au=163, ao=162, aa=160, ai=161, pc=100, pr=37;
	do
	{
	//Calculadora Administrativa
	printf("\n\n\t\t\tDatos de la semana\n\n");
	//Mostrar menú
	printf("1)Personal\n2)Ventas\n3)RCH\n4)ROI\n5)Nomina\n6)Margen Bruto\n7)Margen Neto\n8)Salir del sistema");
	
	//Solicitar la opción y los números
	printf("\nAdministraci%cn de: ",ao);
	scanf("%d",&op);
	
	switch (op)
	{
		//Se solicita la cantidad de empleados para saber si se tienen los suficientes para realizar múltiples labores
		case 1:
			printf("El total del personal debe ser: \n");
			scanf("%i",&n1);
			printf("Cantidad de personal presente hoy: \n");
			scanf("%i",&n2);
			if(n1 == n2)
			{
				printf("\nPersonal completo hoy\n");
			}
			if (n1<n2)
			{
				printf("\nPersonal extra no autorizado\n");
			}
			if(n1>n2)
			{
				printf("\nPersonal faltante");
			}
			break;
			
			//Ya con una media de ventas, se podrá calcular si la el número de ventas es mayor o menor 
		case 2:
			printf("\nMedia de ventas de: ");
			scanf("%i",&n1);
			printf("\nN%cmero de ventas de hoy: ",au);
			scanf("%i",&n2);
			if(n1==n2)
			{
				printf("\nEn la media");
			}
			if (n1>n2)
			{
				printf("\nMenor a la media");
				cal=((n2*100)/n1)-100;
				printf("\nDisminuci%cn del %g por ciento en ventas ",ao,cal);
			}
			if (n1<n2)
			{
				printf("Mayor a la media");
				cal=((n2*100)/n1)-100;
				printf("\nIncremento del %g por ciento en ventas",cal);
			}
			break;
			
			//Recursos Humanos se encargará de que la productividad de los empleados no se vea afectada por malos tratos de los gerentes o supervisores
		case 3:
			printf("\nAlguna queja presente");
			printf("\nN%cmero de quejas: ",au);
			scanf("%i",&n1);
			if (n1==0)
			{
				printf("\nEmpleados satisfechos");
			}
			if (n1 !=0)
			{
				printf("\nEmpleados insatisfechos");
			    printf("\nPosible llamada de atenci%cn",ao);
			}
			if (n1>=6)	
			{
				printf("\nPosible venida del sindicato");
				printf("\nSi no se soluciona podr%cn sancionar a la empresa",aa);
				printf("\nSe sansionar%c al gerente resposable de no atender dichas quejas",aa);
			}
			break;	
			
			//Return over investment o retorno sobre la inversión calcula los beneficios en un plazo de una semana
		case 4:	
			printf("\nCosto de productos comprados de esta semana:  ");
			scanf("%i",&n1);
			printf("\nVentas de esta semana: ");
			scanf("%i",&n2);
			
			if (n1>n2)
			{
				cal=((n1 - n2)/n2)*pc;
				printf("El ROI es de %g esta semana \n",cal);
				printf("\nN%cmeros rojos",au);
			}
			if (n1<n2)
			{
				cal=((n2 - n1)/n1)*pc;
				printf("El ROI es de %g esta semana \n",cal);
				printf("\nN%cmeros verdes",au);
			}
			break;	
			
			//Se pone un salario base para que se calcule el numero de horas trabajadas
		case 5:	
			printf("\nSalario base por hora: ");
			scanf("%i",&n1);
			printf("\nHoras legales m%cximas de trabajo 9h",aa);
			printf("\nHoras extra trabajadas: ");
			scanf("%i",&n2);
			cal=n2*n1;
			if (n2<9)
			{
				printf("\nHoras de trabajo no cumplidas");
				cal=n2*n1;
				printf("\nSalario es de %g ",cal);
			}
			if (n2==9)
			{
				printf("\nHoras de trabajo cumplidas");
				cal=n2*n1;
				printf("\nSalario es de %g ",cal);
			}
			if (n2>9)
			{
				printf("\nHoras de trabajo cumplidas, descanse");
				cal=n2*n1;
				printf("\nSalario es de %g ",cal);
			}
			if(n2>12)
			{
			  printf("\nEvitar plazos largos de trabajo para no fatigar a los empleados");
			  printf("\nSi no se sigue este lineamiento se sansionar%c al gerente responsable",aa);
			  cal=n2*n1;
			  printf("\nSalario es de %g",cal);
			}
			break;
			
			//El Margen Bruto calcula las ventas menos los costos de las ventas sobre las ventas
		case 6:	
			printf("\nVentas totales: ");
			scanf("%i",&n1);

			printf("\nCostos de ventas: ");
			scanf("%i",&n2);
			
			printf("\nCostos de los bienes vendidos: ");
			scanf("%i",&n3);
			
			cal=((n1 - n2)/n2)*pc;
			printf("\nMargen bruto en por ciento es de %g",cal);
			cal=n1-n3;
			printf("\nMargen bruto %g",cal);
			break;	
			
			//El Margen Neto es el beneficio que se tiene al final del calculo de todos los gatos e ingresos
		case 7:	
			printf("Ingresos totales: ");
			scanf("%i",&n1);
			printf("Gastos totales: ");
			scanf("%i",&n2);
			cal=n1-n2;
			printf("\nEl margen neto es %g ",cal);
			cal=((n1-n2)*pc)/n1;
			printf("\nEl margen neto es del %g por ciento ",cal);
			break;	
			
		default:
		printf("Ha salido del sistema");
		break;
	}	
	
	
	}
	while(op < 8);
	
	return 0;
}