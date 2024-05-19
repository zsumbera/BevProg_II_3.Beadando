#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"
#include "boats.hpp"
#include <iostream>
#include "map.hpp"

using namespace std;
using namespace genv;

Boats::Boats(Window *w,int x,int y,int sx,int sy,int s,std::vector<Map*> &m) : Widgets(w,x,y,sx,sy),_s(s),_m(m){}

void Boats::draw() {
    for (int i = 0; i <= _s; ++i) {
        gout<<move_to(_x+i*_sx,_y)<<color(40,200,40)<<box_to(_x+_sx,_y+_sy);
    }

}

bool Boats::focus(event ev) {
    if (_x<ev.pos_x && _x+_sx*_s>ev.pos_x && _y<ev.pos_y && _y+_sy>ev.pos_y){
        return _f = true;
    }
    else{
        return _f= false;
    }
}
void Boats::exec(event ev,bool &isStarted) {
    if (!isStarted) {
        _x = ev.pos_x - _sx / 2;
        _y = ev.pos_y - _sy / 2;
        snap(isStarted);
    }
}

void Boats::snap(bool isStarted) {

    for (int i = 0; i < _m.size()-_s; ++i) {

            if (_x+45/2 > _m[i]->getPx() && _x+45/2 <_m[i]->getPx()+_m[i]->getSy() &&_y+_sy/2 > _m[i]->getPy() && _y+_sy/2 <_m[i]->getPy()+_m[i]->getSy() &&_x+_sx*_s > _m[i]->getPx()+40 ){
                _x=_m[i]->getPx()+3;
                _y=_m[i]->getPy();
                _f= false;
                if (isStarted){
                    for (int j = 0; j < _s; ++j) {
                        _m[i+j]->Reserve();
                    }
                }

                cerr<<"Oh Snap";
            }
        }
}

vector<Map*> Boats::returnvector(){
    return _m;
}