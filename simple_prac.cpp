#include <cstddef>
#include "simpleCharManager.h"


simpleCharManager::simpleCharManager(){
	
	for (int i = 0; i < BUF_SIZE; i++) {	//set entire to null

		buffer[i] = '\0';
	}
}

simpleCharManager::~simpleCharManager(){}
             
char* simpleCharManager::alloc_chars(int n){
	
	char* index = '\0';
	int space = 10000;

	for (int i = 0; i < BUF_SIZE; i++) {

		int free = 0;

		while (buffer[i] == '\0') {

			free++;
			i++;
		}

		if (free >= n && free < space) {

			space = free;
			*index = i - free;
		}

	}
	if (index != '\0') return index;

	return '\0';
}

void simpleCharManager::free_chars(char* p){

	for (int* i = ; i < BUF_SIZE; i++) { //pointer arithmetic

		buffer[*i] = '\0';
	}
}         




