#include <assert.h>
#include <stdio.h>

typedef enum : char {
	LEFT = 'L',
	RIGHT = 'R',
} Dir;

#define ABS(a) ((a) < 0 ? -(a) : (a))

int main() {
	Dir d;
	int amt;

	int cumsum = 50;
	int password = 0;
	while (scanf("%c%d\n", &d, &amt) != EOF) {
		switch (d) {
			case LEFT:
				if (cumsum == 0) { password -= 1; }
				cumsum -= amt;
				break;
			case RIGHT:
				cumsum += amt;
				break;
		}

		while (cumsum < 0) {
			cumsum += 100;
			password += 1;
		}
		if (cumsum == 0) {
			password += 1;
		}
		while (cumsum >= 100) {
			cumsum -= 100;
			password += 1;
		}

		assert(cumsum % 100 == cumsum);
	}

	printf("%d\n", password);
	return 0;
}
