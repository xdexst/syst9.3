#include <stdio.h>
#include <math.h>

int f(int a) {
	switch (a) {
	case 1:
		printf("Yes.\n");
		break;
	case 2:
		printf("No.\n");
		break;
	case 3:
		printf("Cancel.\n");
		break;
	default:
		printf("Error: invalid variable.\n");
		break;
	}
}

int main() {
	printf("Test v9.3: OK.\n");

	int a;
	printf("Enter your choice(1 - 'Yes', 2 - 'No', 3 - 'Cancel'):\n");
	scanf("%d", &a);
	f(a);

	return 0;
}
