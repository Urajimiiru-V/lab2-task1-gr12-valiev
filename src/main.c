#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_power(int number) {
		if (number <= 0) {
			return 0;
		}
		while (number % 5 == 0) {
				number /= 5;
		}
		return (number == 1);
}

int main(int argc, char *argv[]) {
		if (argc != 2) {
				printf("Enter size.\n");
				return 1;
		}
		int n = atoi(argv[1]);
		if (n <= 0) {
				printf("Error\n");
				return 1;
		}

		int arr[n];
		srand(time(NULL));
		printf("array %d nums:\n", n);
		for (int i = 0; i < n; i++) {
				arr[i] = rand() % 1000 + 1;
				printf("%d ", arr[i]);
		}
		printf("\n");

		printf("Numbers which are power of 5:\n");
		int found = 0;
		for (int i = 0; i < n; i++) {
				if (is_power(arr[i])) {
						printf("%d ", arr[i]);
						found = 1;
				}
		}
		if (!found) {
				printf("No such nums");
		}
		printf("\n");
		return 0;
}