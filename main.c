#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma execution_character_set("utf-8")

#define MAX_EXPRESSION 1000

char* parsering(char* string);

int main() {
	//char* expression [];
	//char symbol;

	//while (symbol != '\n') {
	//	realloc(expression, sizeof(&expression) + 1);
	//}

	//printf("%s", expression);

	return 0;
}

char* writting() {
	char* expression[MAX_EXPRESSION];
	char symbol;

	while (symbol != '\n') {
		for(char* p = expression; p - expression < MAX_EXPRESSION; p++)
		scanf("%c", expression);
		expression++;
	}

}

//char* parsering(char* string) {
//	return NULL;
//}