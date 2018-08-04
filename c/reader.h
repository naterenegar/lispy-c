#include <stdio.h>

int position = 0;

typedef struct Token {
	const char *str;
	struct Token *next;	
} token;

struct Token next();
struct Token peek(); 
const char *tokenizer(const char *input); 

