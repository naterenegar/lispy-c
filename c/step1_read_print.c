#include <stdio.h>
#include <stdlib.h>


#define MAX_ARG_LEN 256


char *READ(char *str);
char *EVAL(char *str);
char *PRINT(char *str);
char *rep(char *str);



int main() {
	char *input = malloc(MAX_ARG_LEN);

	if(input == NULL) {	
		printf("Malloc error\n");
		return 1;
	}

	printf("user>");

	while(fgets(input, MAX_ARG_LEN, stdin) != NULL) {
		printf("user>");
	}		


	printf("\n");
	return 0;
} 

char *READ(char *str) {
	return str;
}

char *EVAL(char *str) {
	return str;
}

char *PRINT(char *str) {
	return str;	
}

char *rep(char *str) {
	return PRINT(EVAL(READ(str)));
}
