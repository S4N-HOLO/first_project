#include <stdio.h>

void getValue(int *my_pointer) {
	*my_pointer = 1000;
}


int main () {
	
	int get_value;
	getValue(&get_value);
	printf("fgdg %d \n", get_value);

	return 0;
}