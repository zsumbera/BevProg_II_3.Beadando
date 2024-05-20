
#ifndef BEADANDO3_MAP_HPP
#define BEADANDO3_MAP_HPP
#include "widgets.hpp"
#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"

class Map: public Widgets{
protected:
    bool _bot;
    bool _isreserved;
    int _hit =0;
public:
    Map(Window *w,int x,int y,int sx,int sy,bool bot,bool isreserved);
    virtual void draw();
    virtual bool focus(genv::event ev);
    void exec(genv::event ev,bool &isStarted);
    bool botFocus();
    void Reserve();
    void Shoot();
    int getPx();
    int getPy();
    int getSx();
    int getSy();
    bool isReserved();
    void test();
};


#endif //BEADANDO3_MAP_HPP
