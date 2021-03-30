#include <stdlib.h>
#include <math.h>

float My_Rand() {
	return ((float)(rand()) / (RAND_MAX)) * 0.5;
}

float Logic(float x, float a, float b) {
	return a + b * log(x / (1 - x));
}