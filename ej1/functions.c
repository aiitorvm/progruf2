
#include <stdio.h>
int validate(){
	int num, x = 0;
	do{
		printf("\n Introdueix un nombre entre 10 y 5000: ");
		scanf("%d", &num);
		x++;
	}while (num > 5000 || num < 10 && x !=3);

	if(num < 10 || num > 5000){
		return -1;
	}
	return num;
}



























