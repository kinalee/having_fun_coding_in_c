#include <stdio.h>
#include <stdlib.h>

int main(){

	char *inp;
	int i, num, res;

	inp = malloc(sizeof(char) * 100);
	if (inp == NULL){
		printf("Error\n");
		return 1;
	}
	printf("----------------------\n");
	printf("*Factorial Calculator*\n");
	printf("----------------------\n\n");
	while(1){
                beginning:

		printf("Enter a number (enter quit to quit): ");
		fgets(inp, 100, stdin);
		if(strcmp(inp, "quit\n") == 0){
			printf("\nGood bye!\n");
			return 0;
		}else if(inp[0] == '\n' || inp == NULL)
			 goto beginning;

		else if(inp[0] == '-' && isdigit(inp[1]) != 0){
			printf("Invalid Input: Please enter a positive integer\n");
			goto beginning;
		}
		i = 0;
		while(inp[i] != '\n'){
			if (isdigit(inp[i]) == 0){
				printf("Invalid Input: Please enter an integer\n");
				goto beginning;
			}else
				++i;
		}
		num = atoi(inp);
		if (num == 0 || num == 1)
			printf("%d! = 1\n", num);
		else{
			printf("%d! =", num);
			res = 1;
			while (num > 0){
				printf(" %d", num);
				if (num > 1)
					printf(" *");
				res *= num;
				--num;
			}
			printf(" = %d\n", res);
		}
	}
	return 0;
}
