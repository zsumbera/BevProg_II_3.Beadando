#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"
#ifndef BEADANDO3_JATEKMESTER_HPP
#define BEADANDO3_JATEKMESTER_HPP


class Jatekmester {
protected:

public:
    Jatekmester();

    bool isLegal(genv::event e);
    int isHit(bool isReserved);
    bool isSink();

};


#endif //BEADANDO3_JATEKMESTER_HPP
