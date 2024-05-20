#include "simplelist.hpp"
#include <iostream>
#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"

using namespace std;
using namespace genv;

Simplelist ::Simplelist(Window *a, int x, int y, int sx, int sy,std::vector<std::string>contents)
        : Widgets(a,x,y,sx,sy),_contents(contents){
}

void Simplelist::draw() {
    cerr<<current;
        for (int i = 0; i < _contents.size(); ++i) {
            //fokozatos szinezés
            if (i % 2 == 0) {
                if (_contents[i]==current){
                    gout << move_to(_x, _y + i * _sy) << color(100, 255, 100) << box(_sx, _sy )
                         << move_to(_x, _y + i * _sy + 20) <<color(255,255,255)<< text(_contents[i]);
                } else{
                    gout << move_to(_x, _y + i * _sy) << color(50, 50, 50) << box(_sx, _sy )
                         << move_to(_x, _y + i * _sy + 20) <<color(255,255,255)<< text(_contents[i]);
                }
            } else if(i%2!=0) {
                if (_contents[i]==current){
                    gout << move_to(_x, _y + i * _sy) << color(100, 255, 100) << box(_sx, _sy )
                         << move_to(_x, _y + i * _sy + 20) <<color(255,255,255)<< text(_contents[i]);
                } else{
                    gout << move_to(_x, _y + i * _sy) << color(100, 100, 100) << box(_sx, _sy )
                         << move_to(_x, _y + i * _sy + 20) <<color(255,255,255)<< text(_contents[i]);
                }
        }
    }
}
bool Simplelist::focus(genv::event ev) {
    if (ev.pos_x>_x && ev.pos_x<_x+_sx && ev.pos_y>_y && ev.pos_y<_y+_sy ){
        _f=true;
    } else{
        _f= false;
    }
    return _f;
}
//lista elemének kiválasztása
void Simplelist::exec(genv::event ev) {
   cerr<<"anyad";
        for (int i = 0; i < _contents.size(); ++i) {
            if (ev.pos_x > _x && ev.pos_x < _x+_sx && ev.pos_y < _y + i+1 * _sy && ev.pos_y > _sy) {
                current = _contents[i];
                cerr<<_contents[i];
                break;
            }
   }
}
string Simplelist::push_back() {
    return current;
}