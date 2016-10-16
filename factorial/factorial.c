#include <stdio.h>
#include <stdlib.h>

int main(){

	int i, n, h;
	int j = 1;

	printf("* Do not enter a letter.\n");

	while(1){

		printf("Enter a digit (enter 0 to quit): ");
		scanf(" %d", &n);

		if(n == 0){

			break;

		}if(0<n && n<10){

			printf("%d! = ", n);

			for(i=1; i<n; ++i){
				printf("%d * ", i);
				h = j * i;
				j = h;
			}

			j = h * n;
			printf("%d = %d\n", n, j);
			j = h = 1;

		}else{
			printf("Incorrect input\n");
			continue;
		}



	}

	return 0;

}
