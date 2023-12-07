#include "MusicPiece.hpp"
#include "Timer.hpp"
#include <iostream>
#include <vector>
#include <cstdlib> // for std::atoi

int main(int argc, char *argv[])
{
    std::vector<int> song;

    if (argc > 1)
    {
        for (int i = 1; i < argc; ++i)
        {
            song.push_back(std::atoi(argv[i]));
        }
    }
    else
    {
        song = {1, 2, 3, 4, 5};
    }

    // Debugging: Print the contents of 'song'
    std::cout << "Vector contents before reversal: ";
    for (int note : song)
    {
        std::cout << note << ' ';
    }
    std::cout << '\n';

    MusicPiece piece(song);
    Timer timer;

    timer.Start();
    piece.ReverseOrder();
    int64_t runtime = timer.Stop();

    piece.PrintOrder(); // This should print the reversed order
    std::cout << "Runtime in nanoseconds: " << runtime << '\n';

    return 0;
}
