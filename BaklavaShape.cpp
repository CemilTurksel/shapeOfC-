#include <stdio.h>
#include <stdlib.h>


void lettercTriangle(int n){
	int i,j;
	int spaceNumber=n-1;
	for(i=1;i<=n;i++){
		for(j=1;j<=spaceNumber;j++){
			printf(" ");
		}
		spaceNumber--;
		for(j=1;j<=2*i-1;j++){
			printf("c");
		}
		printf("\n");	
	}
}
void plusTriangle(int n){
	int spaceNumber=1;
	int i,j;
	for(i=1;i<=n-1;i++){
		for(j=1;j<=spaceNumber;j++){
			printf(" ");
		}
		spaceNumber++;
		for(j=1;j<=2*(n-i)-1;j++){
			printf("+");
		}
		printf("\n");
	}
}

int main(){
	
	int row;
	printf("Enter the number of rows: \n");
	scanf("%d",&row);
	lettercTriangle(row);
	plusTriangle(row);
	
	return 0;
}
