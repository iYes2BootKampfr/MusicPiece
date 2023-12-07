#include "Timer.hpp"

// Constructor definition
// Initializes the start time to a default value (usually the time of construction)
Timer::Timer()
{
    // Optionally, initialize start_ here if specific initialization is needed
}

// Destructor definition
// Currently does nothing, but defined for potential future use and completeness
Timer::~Timer()
{
    // Cleanup code or specific actions on destruction could be added here
}

// Starts the timer by capturing the current time
void Timer::Start()
{
    start_ = std::chrono::high_resolution_clock::now();
}

// Stops the timer, calculates, and returns the elapsed time in nanoseconds
int64_t Timer::Stop()
{
    // Capture the current time as the end point
    auto end = std::chrono::high_resolution_clock::now();

    // Calculate the duration by subtracting the start time from the end time
    // The duration is then cast to the desired time unit, nanoseconds in this case
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start_);

    // Return the duration as an integer
    return duration.count();
}
