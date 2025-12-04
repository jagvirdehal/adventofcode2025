#include <stdio.h>

typedef enum : char {
	LEFT = 'L',
	RIGHT = 'R',
} Dir;

int main() {
	Dir d;
	int amt;

	int cumsum = 50;
	int password = 0;
	while (scanf("%c%d\n", &d, &amt) != EOF) {
		switch (d) {
			case LEFT:
				cumsum -= amt;
				break;
			case RIGHT:
				cumsum += amt;
				break;
		}
		cumsum = (cumsum + 100) % 100;
		if (cumsum == 0) {
			password += 1;
		}
	}
	printf("%d\n", password);
	return 0;
}
