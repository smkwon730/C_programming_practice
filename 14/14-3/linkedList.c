#include <stdio.h>
#include <stdlib.h>


typedef struct linknode {
	int data;
	void* next;
} node_t;

static node_t* list = NULL;


static node_t* create_node(int value) {
	node_t* ndPtr;

	ndPtr = (node_t*)malloc(sizeof(node_t));
	if (ndPtr == NULL) {
		printf("error in allocating memory\n");
		return NULL;
	}

	ndPtr->data = value;
	ndPtr->next = NULL;

	return ndPtr;
}

void addTail(int value) {

	node_t* newNdPtr;
	node_t* ndPtr;

	newNdPtr = create_node(value);
	if (newNdPtr != NULL) {
		if (list == NULL) {
			list = newNdPtr;
		}
		else {
			ndPtr = list;
			while (ndPtr->next != NULL) {
				ndPtr = ndPtr->next;
			}

			ndPtr->next = newNdPtr;

		}

	}
}

void print_list(void) {
	node_t* ndPtr;

	ndPtr = list;
	while (ndPtr != NULL) {
		printf("%i\n", ndPtr->data);
		ndPtr = ndPtr->next;
	}
}
