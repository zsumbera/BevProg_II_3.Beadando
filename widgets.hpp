#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"
#ifndef BEADANDO3_WIDGETS_HPP
#define BEADANDO3_WIDGETS_HPP

class Window;
class Map;

class Widgets {
protected:
    Window *w;
    bool _f;
    int _x,_y,_sx,_sy;
    std::vector<Map *>_m;
public:
    Widgets(Window *w,int x,int y,int sx,int sy);
virtual bool focus(genv::event ev);
virtual void draw();
virtual void exec(genv::event ev,bool &isStarted);
};


#endif //BEADANDO3_WIDGETS_HPP
