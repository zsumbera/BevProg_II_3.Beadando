
#ifndef BEADANDO3_MAP_HPP
#define BEADANDO3_MAP_HPP
#include "widgets.hpp"
#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"

class Map: public Widgets{
protected:
genv::canvas c;
public:
    Map(Window *w,int x,int y,int sx,int sy);
    virtual void draw();
};


#endif //BEADANDO3_MAP_HPP
