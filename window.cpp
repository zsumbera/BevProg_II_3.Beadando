#include "window.hpp"
#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"
#include "widgets.hpp"
#include <iostream>

using namespace genv;
using namespace std;

Window::Window(int XX,int YY): w(w){
    gout.open(XX,YY);
    gout.load_font("/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/LiberationSans-Regular.ttf");
}

void Window::loop() {
event ev;
    int f = -1;

    while (gin>>ev){
        update();
        start();
        for (int i=0;i<w.size();i++) {
            if (ev.button == btn_left){
                if (w[i]->focus(ev)) {
                    f = i;
                }
            }
        }
        if(f!=-1) {
            w[f]->exec(ev);
            w[f]->draw();
        }
        f=-1;
        gout<<refresh;
    }
}

    void Window::start() {
        for (int i = 0; i < w.size(); ++i) {
            w[i]->draw();
        }


    }
    void Window::update(){
    gout<<move_to(0,0)<<color(0,0,0)<<box(1200,900);
}