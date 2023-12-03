#ifndef TIMER_HPP // Include guard to prevent multiple inclusions
#define TIMER_HPP

#include <chrono> // Required for std::chrono functions

// Timer class definition
class Timer
{
public:
    Timer() = default;  // Default constructor
    ~Timer() = default; // Default destructor

    void Start();   // Method to start the timer
    int64_t Stop(); // Method to stop the timer and return the elapsed time in microseconds

private:
    // Store the start time. The type is auto-deduced to be std::chrono::time_point
    std::chrono::time_point<std::chrono::high_resolution_clock> start_;
};

#endif // TIMER_HPP       // End of include guard
