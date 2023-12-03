#include "MusicPiece.hpp" // Include the header file for the class declaration.
#include <iostream>       // Include iostream for using std::cout.
#include <algorithm>      // Include algorithm for std::reverse.

// Define the constructor that takes a vector of integers.
// It uses an initializer list to initialize the order_ member variable.
MusicPiece::MusicPiece(std::vector<int> order) : order_(order) {}

// Define the ReverseOrder method.
// It uses the std::reverse function to reverse the elements of the vector in place.
void MusicPiece::ReverseOrder()
{
    std::reverse(order_.begin(), order_.end());
}

// Define the PrintOrder method.
// It outputs the elements of the order_ vector to the standard output.
void MusicPiece::PrintOrder() const
{
    for (int note : order_)
    {
        std::cout << note << ' ';
    }
    std::cout << '\n';
}
