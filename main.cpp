#include <iostream>  // Needed for input/output streams
#include <vector>    // Needed to use the std::vector container
#include <chrono>    // Needed for high-resolution timing
#include <algorithm> // Needed for std::reverse algorithm

// MusicPiece class definition
class MusicPiece
{
public:
    // Constructor that initializes the class with a vector of integers
    MusicPiece(std::vector<int> order) : order_(order) {}

    // Reverses the order of the elements in the vector, in place
    void ReverseOrder()
    {
        std::reverse(order_.begin(), order_.end());
    }

    // Prints the elements of the vector to standard output
    void PrintOrder() const
    {
        for (int note : order_)
        {
            std::cout << note << ' ';
        }
        std::cout << '\n';
    }

private:
    std::vector<int> order_; // Vector to hold the music piece notes
};

// Timer class definition
class Timer
{
public:
    // Starts the timer
    void Start()
    {
        start_ = std::chrono::high_resolution_clock::now();
    }

    // Stops the timer and returns the elapsed time in microseconds
    int64_t Stop()
    {
        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start_);
        return duration.count();
    }

private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start_; // Holds the start time
};

// The main function, where the program execution begins
int main()
{
    // Create a vector to represent the music piece
    std::vector<int> song = {1, 2, 3, 4, 5};

    // Instantiate a MusicPiece object with the song
    MusicPiece piece(song);

    // Instantiate a Timer object to measure execution time
    Timer timer;

    // Start the timer
    timer.Start();

    // Reverse the order of the music piece
    piece.ReverseOrder();

    // Stop the timer and get the elapsed time
    int64_t runtime = timer.Stop();

    // Print the reversed order of the music piece
    piece.PrintOrder();

    // Print the runtime in microseconds
    std::cout << "Runtime in microseconds: " << runtime << '\n';

    // Return 0 to indicate successful completion of the program
    return 0;
}
