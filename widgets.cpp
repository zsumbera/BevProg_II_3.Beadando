//
// Created by Zsumbera Olivér on 10/05/2024.
//
#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"
#include "widgets.hpp"
#include "window.hpp"

using namespace genv;
using namespace std;

Widgets::Widgets(Window *w,int x,int y,int sx,int sy) : _x(x),_y(y),_sx(sx),_sy(sy) {
    w->_addwidget(this);
}

bool Widgets::focus(int px, int py) {
    return _f;
}

void Widgets::draw() {
}
void Widgets::exec(event ev) {


}