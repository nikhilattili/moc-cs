#include<stdio.h>
main(){
	int i,j,k, n;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<(n-i)-1;j++){
			printf("%s", " ");
			
		}
		for(k=0;k<i+2;k++){
			printf("#");
		}
		printf(" ");
			for(k=0;k<i+2;k++){
			printf("#");
		}
		printf("\n");
	}
}
