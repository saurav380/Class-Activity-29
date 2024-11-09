
#ifndef MOVIE_HPP
#define MOVIE_HPP

#include <string>

struct Movie {
    std::string title;
    int season;
    int year;
};

Movie parseMovieString(const std::string& movieString);

#endif
