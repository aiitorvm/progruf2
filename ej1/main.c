
#include <stdio.h>
int validate();
void main(){
	int num;
	do{
		num = validate();
	}while (num == -1);
	printf("\n Has introduit el valor = %d",num);
}



