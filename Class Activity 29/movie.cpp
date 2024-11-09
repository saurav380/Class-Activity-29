
#include "Movie.hpp"
#include <sstream>

Movie parseMovieString(const std::string& movieString) {
    Movie movie;
    size_t pos = movieString.find(" s");

    // Parse title
    movie.title = movieString.substr(0, pos);

    // Parse season and year
    std::istringstream iss(movieString.substr(pos + 2));
    char comma;
    iss >> movie.season >> comma >> movie.year;

    return movie;
}
