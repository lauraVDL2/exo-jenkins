#include "../src/messages.h"
#include <assert.h>

int addition(int a, int b) {
	return a + b;
}

int main() {
	int inputX = 5, inputY = 6, valeurAttendue = 11;
	printf("test 1");
	assert(addition(inputX, inputY) == valeurAttendue);
	return 0;
}
