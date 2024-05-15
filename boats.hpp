#ifndef BEADANDO3_BOATS_HPP
#define BEADANDO3_BOATS_HPP
#include "widgets.hpp"
#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"

class Boats :public Widgets{
protected:
bool nyom;
public:
    Boats(Window *w,int x,int y,int sx,int sy);
    virtual void draw();
    virtual bool focus(genv::event ev);
    virtual void exec(genv::event ev);

};


#endif //BEADANDO3_BOATS_HPP
