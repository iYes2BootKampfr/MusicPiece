#ifndef TIMER_HPP // Include guard to prevent multiple inclusions
#define TIMER_HPP

#include <chrono> // Required for std::chrono functions

// The Timer class is used to measure the elapsed time of a process
class Timer
{
public:
    Timer();  // Constructor, initializes the timer
    ~Timer(); // Destructor

    void Start();   // Method to start the timer
    int64_t Stop(); // Method to stop the timer and return the elapsed time in nanoseconds

private:
    // Store the start time. The type is std::chrono::time_point using the high_resolution_clock
    std::chrono::time_point<std::chrono::high_resolution_clock> start_;
};

#endif // TIMER_HPP       // End of include guard
