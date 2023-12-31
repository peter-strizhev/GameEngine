#include "global_header.h"
#include "DE_engine_vector.h"

#define main SDL_main

#include "SDL.h"

int main(int argc, char* argv[])
{
	DE_Vector2 windowDimensions = DE_Vector_Set(640, 480);

	DE_Vector2 screenSize = DE_Vector_Set((float)GetSystemMetrics(SM_CXSCREEN), (float)GetSystemMetrics(SM_CYSCREEN));

	DE_Vector2 screenLocation = DE_Vector_Set(
		(screenSize.x / 2) - (windowDimensions.x / 2),
		screenLocation.y = (screenSize.y / 2) - (windowDimensions.y / 2)
	);

	SDL_Window* newWindow = SDL_CreateWindow(
		"Testing",
		(int)screenLocation.x,
		(int)screenLocation.y,
		(int)windowDimensions.x,
		(int)windowDimensions.y,
		0
	);
	Sleep(4000);
	return 0;
}

// TODO
// Find name for Engine - done
// Dynamo Engine

// Engine Run Function
// Engine terminate Function
// Next gamestate function
// Create Gamestates such as initialize, update, end

// Define window size
// Option for fullscreen
// Get display width and height - Done
// Counters for frame rates
	// get frame rate
	// set frame rate
// Get milliseconds
// Get seconds

// Input of whole keyboard
// Key triggered
// Key held down
// Key released
// Mouse triggers
// Get mouse x and y
// Mouse delta x and y

// Random functions
// random gaussian
// random noise
// random noise seed