#pragma once

#include "global_header.h"

// Math functions
// clamps for int and float
float DE_Math_Clamp_Float(float value, float min, float max);

int DE_Math_Clamp_Int(int value, int min, int max);

// Lerp for int and float
int DE_Math_Lerp_Int(int a, int b, float lerpFactor);

float DE_Math_Lerp_Float(float a, float b, float lerpFactor);

// Square functions
float DE_Math_Square_Value(float value);

// distance calculations
float DE_Math_Distance(float x1, float y1, float x2, float y2);

// degree to radians and vice versa
float DE_Math_Degree(float rad);

float DE_Math_Radian(float deg);