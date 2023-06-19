#pragma once

#include "global_header.h"

//TODO: I should probably re-write this entire file to use vectors of dynamic sizes

/// <summary>
/// Sets the values of a matrix 3x3
/// </summary>
/// <returns>Matrix with given values set</returns>
DE_Matrix3x3 DE_Matrix_Set(float f00, float f01, float f02,
	float f10, float f11, float f12,
	float f20, float f21, float f22);

/// <summary>
/// Creates an identity matrix
/// </summary>
/// <param name=""></param>
/// <returns>Identity matrix</returns>
DE_Matrix3x3 DE_Matrix_Identity(void);

/// <summary>
/// Turns 3 Vector2's into a matrix
/// </summary>
/// <param name="col1">1st Vector2</param>
/// <param name="col2">2nd Vector2</param>
/// <param name="col3">3rd Vector2</param>
/// <returns>Matrix</returns>
DE_Matrix3x3 DE_Matrix_From_Vector(DE_Vector2 col1, DE_Vector2 col2, DE_Vector2 col3);

/// <summary>
/// Creates a scale matrix
/// </summary>
/// <param name="scale">Scale value</param>
/// <returns></returns>
DE_Matrix3x3 DE_Matrix_Scale(DE_Vector2 scale);

/// <summary>
/// Creates a translation matrix from given Vector2
/// </summary>
/// <param name="offset">Vector2 to be turned into matrix</param>
/// <returns>Translation Matrix</returns>
DE_Matrix3x3 DE_Matrix_Translate(DE_Vector2 offset);

/// <summary>
/// Creates a rotation matrix
/// </summary>
/// <param name="deg">Angle for rotation matrix</param>
/// <returns></returns>
DE_Matrix3x3 DE_Matrix_Rotate(float deg);

/// <summary>
/// Creates a rotation matrix from radians
/// </summary>
/// <param name="rad">Angle for rotation matrix</param>
/// <returns></returns>
DE_Matrix3x3 DE_Matrix_Rotate_Rads(float rad);

/// <summary>
/// Transposes a given matrix
/// </summary>
/// <param name="original">Matrix to be transposed</param>
/// <returns></returns>
DE_Matrix3x3 DE_Matrix_Transpose(DE_Matrix3x3 original);

/// <summary>
/// Multiplies two matrixes together
/// </summary>
/// <param name="a">First matrix to be multiplied</param>
/// <param name="b">Second matrix to be multiplied</param>
/// <returns>Result of the two matrixes multiplied</returns>
DE_Matrix3x3 DE_Matrix_Multiply(DE_Matrix3x3 a, DE_Matrix3x3 b);

/// <summary>
/// Creates the inverse of a given matrix
/// </summary>
/// <param name="original">Original matrix to be inverted</param>
/// <returns>Inverse of given matrix</returns>
DE_Matrix3x3 DE_Matrix_Inverse(DE_Matrix3x3 original);