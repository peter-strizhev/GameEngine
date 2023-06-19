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

/// <summary>
/// Updates the random seed based off time
/// </summary>
/// <param name=""></param>
void DE_Random_Update(void);

/// <summary>
/// Generates a random bool
/// </summary>
/// <param name=""></param>
/// <returns>Random Bool</returns>
int DE_Random_Bool(void);

/// <summary>
/// Generates a random int
/// </summary>
/// <param name=""></param>
/// <returns>Random int</returns>
int DE_Random_Int(void);

/// <summary>
/// Generates a random int between given range
/// </summary>
/// <param name="low">Range min</param>
/// <param name="high">Range max</param>
/// <returns>Random int between range</returns>
int DE_Random_Int_Range(int low, int high);

/// <summary>
/// Generates random float
/// </summary>
/// <param name=""></param>
/// <returns>Random float</returns>
float DE_Random_Float(void);

/// <summary>
/// Generates random float between given range
/// </summary>
/// <param name="low">Range min</param>
/// <param name="high">Range max</param>
/// <returns>Random float between range</returns>
float DE_Random_Float_Range(float low, float high);

/// <summary>
/// Generates a random seed value
/// </summary>
/// <param name="">Random seed</param>
int DE_Random_Seed(void);