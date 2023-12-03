#ifndef MUSICPIECE_HPP // This is an include guard.
#define MUSICPIECE_HPP // It prevents the file from being included multiple times.

#include <vector> // Include the vector header for using std::vector.

// Declare the MusicPiece class.
class MusicPiece
{
public:
    // Constructor declaration that takes a vector of integers.
    MusicPiece(std::vector<int> order);

    // Method to reverse the order of the music piece.
    void ReverseOrder();

    // Const method to print the order of the music piece.
    void PrintOrder() const;

private:
    std::vector<int> order_; // Private vector to store the music piece notes.
};

#endif // MUSICPIECE_HPP  // End of the include guard.
