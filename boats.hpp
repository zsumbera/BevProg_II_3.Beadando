#ifndef BEADANDO3_BOATS_HPP
#define BEADANDO3_BOATS_HPP
#include "widgets.hpp"
#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"

class Boats :public Widgets{
protected:
    std::vector<Map*> _m;
    int _s;
    bool hold=true;
public:
    Boats(Window *w,int x,int y,int sx,int sy,int s,std::vector<Map*> &m);
    virtual void draw();
    virtual bool focus(genv::event ev);
    virtual void exec(genv::event ev,bool &isStarted);
    void snap();
};


#endif //BEADANDO3_BOATS_HPP
