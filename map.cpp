#include "map.hpp"
#include "jatekmester.hpp"
#include <iostream>
#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"

using namespace genv;
using namespace std;


Map::Map(Window *w,int x,int y,int sx,int sy,bool bot,bool isreserved) : Widgets(w,x,y,sx,sy),_bot(bot), _isreserved(isreserved) {}

void Map::draw() {
        gout << move_to(_x, _y) << color(51, 51, 255) << box_to(_x + _sx, _y + _sy);
        gout << move_to(_x + 1, _y + 1) << color(0, 0, 0) << box_to(_x + _sx - 2, _y + _sy - 2) << move_to(_x, _y);
        Shoot();
        if(_isreserved){
            gout << move_to(_x, _y) << color(255, 255, 255) << box_to(_x + _sx, _y + _sy);
        }
}

bool Map::focus(event ev) {
    if (_x<ev.pos_x && _x+_sx>ev.pos_x && _y<ev.pos_y && _y+_sy>ev.pos_y){
        return _f = true;
    }
    else{
        return _f= false;
    }
}
bool Map::botFocus(){
    return _f = true;
}
void Map::exec(genv::event ev, bool &isStarted) {
    Jatekmester j;
    if (isStarted && _f && _bot){

        if (j.isHit(isReserved())&&ev.button==btn_left){
            _hit = j.isHit(isReserved());
            cerr<<"Hit! ";
            if (j.isSink()){
                cerr<<"Sink ";
            }
        }

    } else if(!_bot && _f && isStarted){
        _hit = j.isHit(isReserved());
        cerr<<"Hajjaaa";
    }

}

void Map::Shoot(){
    if(_hit ==2){
        gout<<color(255,0,200)<<move_to(_x,_y)<<line_to(_x+_sx,_y+_sy)<<move_to(_x+_sx,_y)<<line_to(_x,_y+_sy);
    } else if(_hit == 1){
        gout<<color(0,255,0)<<move_to(_x,_y)<<line_to(_x+_sx,_y+_sy)<<move_to(_x+_sx,_y)<<line_to(_x,_y+_sy);
    }

}
void Map::Reserve(){
    _isreserved = true;
}

int Map::getPx(){
    return _x;
}
int Map::getPy(){
    return _y;
}
int Map::getSx(){
    return _sx;
}
int Map::getSy(){
    return _sy;
}
bool Map::isReserved(){
    if (_isreserved){
        return true;
    }
    else return false;
}
void Map::test() {

}
