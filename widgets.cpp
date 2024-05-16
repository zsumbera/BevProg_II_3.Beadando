#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"
#include "widgets.hpp"

#include <utility>
#include "window.hpp"

using namespace genv;
using namespace std;

Widgets::Widgets(Window *w,int x,int y,int sx,int sy) : _x(x),_y(y),_sx(sx),_sy(sy){
    w->_addwidget(this);
}

bool Widgets::focus(event ev) {
    if (_x<ev.pos_x && _x+_sx>ev.pos_x && _y<ev.pos_y && _y+_sy>ev.pos_y)
        return _f = true;
    else return _f= false;
}

void Widgets::draw() {
}

void Widgets::exec(genv::event ev,bool &isStarted) {
}