#pragma once

#include "global_header.h"

/// <summary>
/// Creates a Vector2 and initializes with given X and Y values
/// </summary>
/// <param name="x">value to set</param>
/// <param name="y">value to set</param>
/// <returns>Vector2 with set values</returns>
DE_Vector2 DE_Vector_Set(float x, float y);

/// <summary>
/// Creates a Zero'd Vector2
/// </summary>
/// <param name=""></param>
/// <returns>Vector2 with x = 0; y = 0</returns>
DE_Vector2 DE_Vector_Zero(void);

/// <summary>
/// Creates a negative Vector2
/// </summary>
/// <param name="vec"></param>
/// <returns>Vector2 with x and y = -1</returns>
DE_Vector2 DE_Vector_Negate(DE_Vector2 vec);

/// <summary>
/// Adds two Vector2's together
/// </summary>
/// <param name="a">First Vector2</param>
/// <param name="b">Second Vector2</param>
/// <returns>The sum of both Vector2's</returns>
DE_Vector2 DE_Vector_Add(DE_Vector2 a, DE_Vector2 b);

/// <summary>
/// Subtracts two Vector2's
/// </summary>
/// <param name="a">First Vector2</param>
/// <param name="b">Second Vector2</param>
/// <returns>The result of subtracting the above two vector2's</returns>
DE_Vector2 DE_Vector_Subtract(DE_Vector2 a, DE_Vector2 b);

/// <summary>
/// Normalizes a Vector2
/// </summary>
/// <param name="vec">Vector2 to be normalized</param>
/// <returns>Normalized Vector2</returns>
DE_Vector2 DE_Vector_Normalize(DE_Vector2 vec);

/// <summary>
/// Scales a Vector2 by a float value
/// </summary>
/// <param name="vec">Vector2 to be scaled</param>
/// <param name="scale">Float value to scale Vector2 by</param>
/// <returns>Scaled Vector2</returns>
DE_Vector2 DE_Vector_Scale(DE_Vector2 vec, float scale);

/// <summary>
/// Multiplies a matrix by a Vector2
/// </summary>
/// <param name="mat">Matrix to be multiplied</param>
/// <param name="vec">Vector2 to be multiplied</param>
/// <returns>Multiplied Matrix</returns>
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