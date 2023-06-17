#pragma once

#include "global_header.h"

// Random functions
// random bool - done
// random int - done
// random int range - done
// random float - done
// random float range - done
// random seed - done
// random gaussian 
// random noise 
// random noise seed 

void DE_Random_Update(void) {
	srand((unsigned int)time(NULL));
}

int DE_Random_Bool(void) {
	DE_Random_Update();
	srand((unsigned int)time(NULL));
	return (rand() / (RAND_MAX)) + 1;
}

int DE_Random_Int(void) {
	DE_Random_Update();
	srand((unsigned int)time(NULL));
	return rand();
}

int DE_Random_Int_Range(int low, int high) {
	DE_Random_Update();
	srand((unsigned int)time(NULL));
	return rand() % (high + 1 - low) + low;
}

float DE_Random_Float(void) {
	DE_Random_Update();
	return ((float)rand() / (float)(RAND_MAX)) * rand();
}

float DE_Random_Float_Range(float low, float high) {
	float random = ((float)rand()) / (float)RAND_MAX;
	float diff = high - low;
	float r = random * diff;
	return low + r;
}

int DE_Random_Seed(void) {
	DE_Random_Update();
	return rand();
}