#pragma once

#include "global_header.h"

/// <summary>
/// Creates a Vector2 and initializes with given X and Y values
/// </summary>
/// <param name="x">value to set</param>
/// <param name="y">value to set</param>
/// <returns>Vector2 with set values</returns>
DE_Vector2 DE_Vector_Set(float x, float y);

DE_Vector2 DE_Vector_Zero(void);

DE_Vector2 DE_Vector_Negate(DE_Vector2 vec);

DE_Vector2 DE_Vector_Add(DE_Vector2 a, DE_Vector2 b);

DE_Vector2 DE_Vector_Subtract(DE_Vector2 a, DE_Vector2 b);

DE_Vector2 DE_Vector_Normalize(DE_Vector2 vec);

DE_Vector2 DE_Vector_Scale(DE_Vector2 vec, float scale);

DE_Vector2 DE_Vector_MatrixMultiply(DE_Matrix mat, DE_Vector2 vec);

// Fix Later
//float DE_Vector_Length(DE_Vector2 vec)
//{
//	return (float)fabs(sqrtf(DE_Math_Square_Value(vec.x) + DE_Math_Square_Value(vec.y)));
//}
//
//float DE_Vector_Distance(DE_Vector2 a, DE_Vector2 b)
//{
//	return sqrtf(DE_Math_Square_Value(b.x - a.x) + DE_Math_Square_Value(b.y - a.y));
//}
//
//float DE_Vector_DotProduct(DE_Vector2 a, DE_Vector2 b)
//{
//	float dot = (a.x * b.x) + (a.y * b.y);
//	return dot;
//}
//
//float DE_Vector_Angle(DE_Vector2 a, DE_Vector2 b)
//{
//	return (float)acosf(DE_Vector_DotProduct(a, b) / (float)fabs(DE_Vector_DotProduct(a, b)));
//}
//
//float DE_Vector_CrossProduct(DE_Vector2 a, DE_Vector2 b)
//{
//	//DE_Vector2 normal; // 2 vectors combined, perpendicular to combined vector with length of 1
//	//normal = 
//
//
//	// If this does not work properly, calculate unit vector and multiply by value below then return
//	return DE_Vector_Length(a) * DE_Vector_Length(b) * sinf(DE_Vector_Angle(a, b));
//	// abs(a) * abs(b) * sin(angle between vectors) * unit vector
//}