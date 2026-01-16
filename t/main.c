#include <stdio.h>
#include <stdlib.h>

int main(){
	int* i_ptr = malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; i++){
		i_ptr[i] = i;
	}
	for (int i = 0; i < 10; i++){
		printf("%d\n", i_ptr[i]);
	}
	
	free(i_ptr);
	return 0;
}
