
#include <iostream>
#include "Movie.hpp"

int main() {
    std::string input = "24 s2,2014";
    Movie movie = parseMovieString(input);

    std::cout << "Title: " << movie.title << std::endl;
    std::cout << "Season: " << movie.season << std::endl;
    std::cout << "Year: " << movie.year << std::endl;

    return 0;
}
