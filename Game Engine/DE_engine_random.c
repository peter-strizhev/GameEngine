#include "DE_engine_random.h"

int DE_Random_Bool(void)
{
	return ((int)rand() / (RAND_MAX)) + 1;
}

int DE_Random_Int(void)
{
	return rand();
}

int DE_Random_Int_Range(int low, int high)
{
	return rand() % (high + 1 - low) + low;
}

float DE_Random_Float(void)
{
	return (float)rand();
}

float DE_Random_Float_Range(float low, float high)
{
	float random = ((float)rand()) / (float)RAND_MAX;
	float diff = high - low;
	float r = random * diff;
	return low + r;
}

int DE_Random_Seed(void)
{
	return rand();
}

