#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

int main(int argc, char* argv) {
	addTail(10);
	addTail(3);
	addTail(300);

	print_list();

	system("PAUSE");
	return 0;
}
