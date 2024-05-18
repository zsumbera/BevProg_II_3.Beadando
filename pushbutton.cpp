#include "pushbutton.hpp"
#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"
#include "window.hpp"
using namespace genv;
using namespace std;

Pushbutton::Pushbutton(Window *a, int x, int y, int sx, int sy)
        :Widgets(a,x,y,sx,sy){
}

void Pushbutton::draw(){
    if(_f){
        gout<<move_to(_x,_y)<<color(0,233,233)<<box(_sx,_sy);
    } else{
        gout<<move_to(_x,_y)<<color(50,50,50)<<box(_sx,_sy);
    }
    gout<<move_to(_x+_sx/2,_y+_sy/2)<<color(100,100,100)<<text("Start");
}

void Pushbutton::exec(genv::event ev,bool &isStarted) {
    if(_f) {
        isStarted = true;
    }
}
bool Pushbutton::focus(genv::event ev){
    if (ev.pos_x>_x && ev.pos_x<_x+_sx && ev.pos_y > _y && ev.pos_y<_y+_sy){
        _f=true;
    } else{
        _f= false;
    }
    return _f;
}
