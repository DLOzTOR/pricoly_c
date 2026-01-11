#include <stdio.h>

int slices_c = 0;

void print_range(int start, int end){
	printf("(%d; %d)\n", start, end);
	slices_c++;
}

int main(){
	int range;
	int slices;
	printf("Range: ");
	scanf("%d", &range);
	printf("Slices: ");
	scanf("%d", &slices);

	int slice_length = range / slices;
	int slice_start = 1;
	
	int end = range - slice_length * 1.5;
	
	while(slice_start <= end){
		print_range(slice_start, slice_start+slice_length - 1);
		slice_start += slice_length; 
	}
	if(slice_start <= range){
		print_range(slice_start, range);
	}
	printf("slices: %d\n", slices_c);
	return 0;
}
