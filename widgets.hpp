#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"
#ifndef BEADANDO3_WIDGETS_HPP
#define BEADANDO3_WIDGETS_HPP

class Window;

class Widgets {
protected:
    Window *w;
    bool _f;
    int _x,_y,_sx,_sy;
public:
    Widgets(Window *w,int x,int y,int sx,int sy);
virtual bool focus(int px,int py);
virtual void draw();
virtual void exec(genv::event ev);
};


#endif //BEADANDO3_WIDGETS_HPP
