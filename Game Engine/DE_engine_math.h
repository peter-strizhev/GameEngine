#pragma once

#include "global_header.h"

/// <summary>
/// Clamps a float value
/// </summary>
/// <param name="value">Value to be clamped</param>
/// <param name="min">Min clamp value</param>
/// <param name="max">Max clamp value</param>
/// <returns>Clamped float</returns>
float DE_Math_Clamp_Float(float value, float min, float max);

/// <summary>
/// Clamps an int value
/// </summary>
/// <param name="value">Value to be clamped</param>
/// <param name="min">Min clamp value</param>
/// <param name="max">Max clamp value</param>
/// <returns>Clamped int</returns>
int DE_Math_Clamp_Int(int value, int min, int max);

/// <summary>
/// Linear Interpolation with ints, I dont remember how this works, just uhhh, figure it out
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <param name="lerpFactor"></param>
/// <returns></returns>
int DE_Math_Lerp_Int(int a, int b, float lerpFactor);

/// <summary>
/// Linear Interpolation with floats, I dont remember how this works, just uhhh, figure it out
/// </summary>
/// <param name="a"></param>
/// <param name="b"></param>
/// <param name="lerpFactor"></param>
/// <returns></returns>
float DE_Math_Lerp_Float(float a, float b, float lerpFactor);

/// <summary>
/// Squares a float
/// </summary>
/// <param name="value">Float to be squared</param>
/// <returns>Squared float</returns>
float DE_Math_Square_Value(float value);

/// <summary>
/// Calculates distance between two points
/// </summary>
/// <param name="x1"></param>
/// <param name="y1"></param>
/// <param name="x2"></param>
/// <param name="y2"></param>
/// <returns>Distance as float</returns>
float DE_Math_Distance(float x1, float y1, float x2, float y2);

/// <summary>
/// Canverts radians to degrees
/// </summary>
/// <param name="rad">Radian to be converted</param>
/// <returns>Degrees</returns>
float DE_Math_Degree(float rad);

/// <summary>
/// Canverts degrees to radians
/// </summary>
/// <param name="deg">Degree to be converted</param>
/// <returns>Radians</returns>
float DE_Math_Radian(float deg);