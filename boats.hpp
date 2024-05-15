#ifndef BEADANDO3_BOATS_HPP
#define BEADANDO3_BOATS_HPP
#include "widgets.hpp"
#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"

class Boats :public Widgets{
protected:

public:
    Boats(Window *w,int x,int y,int sx,int sy);
    void draw();
    bool focus(genv::event ev);
    void move();

};


#endif //BEADANDO3_BOATS_HPP
