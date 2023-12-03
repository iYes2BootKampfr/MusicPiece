#include "Timer.hpp" // Include the header file for the Timer class declaration

// Start the timer by recording the current time
void Timer::Start()
{
    start_ = std::chrono::high_resolution_clock::now();
}

// Stop the timer, calculate the elapsed time since start, and return it in microseconds
int64_t Timer::Stop()
{
    auto end = std::chrono::high_resolution_clock::now();                                // Record the end time
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start_); // Calculate the duration
    return duration.count();                                                             // Return the duration count
}
