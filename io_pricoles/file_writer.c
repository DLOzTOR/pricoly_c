#include <stdio.h>

void main(){
	FILE* fp = fopen("test.txt", "wb");
	int data = 1;
	fwrite(&data, 1, sizeof(int), fp);
	fwrite(&data, 1, sizeof(int), fp);
	fwrite(&data, 1, sizeof(int), fp);
	fwrite(&data, 1, sizeof(int), fp);
	fwrite(&data, 1, sizeof(int), fp);
	fwrite(&data, 1, sizeof(int), fp);
	fwrite(&data, 1, sizeof(int), fp);
	fwrite(&data, 1, sizeof(int), fp);
	fwrite(&data, 1, sizeof(int), fp);
	fclose(fp);
}
