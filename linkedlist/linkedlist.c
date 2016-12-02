#include <stdio.h>
#include <stdlib.h>

typedef int ElementValue;

typedef struct Element {
	ElementValue value;
	struct Element* next;
} Element;

typedef struct LinkedList {
	Element * first;
	// Element * last;
} LinkedList;

void initLL(LinkedList* this) {
	this->first = NULL; //same as (*this).first = NULL;
	// this->last = NULL;
}

void addToLL(LinkedList* this, int value) {
	Element * newElement = malloc(sizeof(Element));
	newElement->value = value;
	newElement->next = NULL;
	if(this->first == NULL ) {
		this->first = newElement;
		}
	else {
		Element * lastElement = this->first;
		while (lastElement->next != NULL) {
			lastElement = lastElement->next;
		}
			lastElement->next = newElement;
	}
		
}

int main (void){

	LinkedList primes;
	initLL(&primes);
	addToLL(&primes, 2);
	addToLL(&primes, 5);
	addToLL(&primes, 7);
	addToLL(&primes, 11);
	
	Element * lastElement = primes.first;
	
	while (lastElement != NULL) {
			printf("Element value = %d\n", lastElement->value);
			lastElement = lastElement->next;
		}
	
}
