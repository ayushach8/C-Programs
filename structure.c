#include <stdio.h>
#include <stdlib.h>
struct employe {
	char name[20];
	int sallary;
	int batch;
	struct date {
		int year;
		int month;
		int day;
	}d;
};

int main () {
	struct employe b[3];
	int i; 
	for (i=0;i<3;i++)  {
		printf ("Employe's information \n");
		printf ("Enter Name,Batch,Sallary,Date(yyyy-mm-dd)\n");
		scanf ("%s%d%d%d%d%d",&b[i].name,&b[i].batch,&b[i].sallary,&b[i].d.year,&b[i].d.month,&b[i].d.day);
	} 
	printf ("Displaying the employes info:\n");
		for (i=0;i<3;i++)  {
		printf ("Employe %d information \n");
		printf ("Enter Name,Batch,Sallary,Date(yyyy-mm-dd)\n");
		printf ("%s\t%d\t%d\t%d\t%d\t%d\n",b[i].name,b[i].batch,b[i].sallary,b[i].d.year,b[i].d.month,b[i].d.day);
	} 
}
