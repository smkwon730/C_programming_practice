#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	char* pc = NULL;
	int i = 0;

	pc = (char*)malloc(100 * sizeof(char));
	if (pc == NULL) {
		printf("메모리 할당 오류\n");
		exit(1);
	}
	for (i = 0; i < 26; i++) {
		pc[i] = 'a' + i;
	}
	pc[i] = 0;					//문자열 만들기 위해 마지막에 0 넣어줌
	printf("%s\n", pc);
	
	free(pc);
	
	return 0;
}
