//Given Project code
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "random.h"

char* rand_string_alloc(size_t size);
char* rand_string(char* alloc, size_t size);

char* rand_string(char* s, size_t size){
	for (int i = 0; i < size; i++) {	
		*s = randchar();
		s++;
	}
}

char* rand_string_alloc(size_t size){
	char *s = malloc(size + 1);
	if (s) {
	       	rand_string(s, size);
	}
       	return s;
}

void main (){
	srand((unsigned) time (NULL));
	char* myString = rand_string_alloc(7);
	printf("%s", myString);
}
