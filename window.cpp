#include "window.hpp"
#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"
#include "widgets.hpp"

using namespace genv;
using namespace std;

Window::Window(int XX,int YY): w(w){
    gout.open(XX,YY);
    gout.load_font("/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/LiberationSans-Regular.ttf");
}

void Window::loop() {
event ev;
    int f = -1;
    start();
    while (gin>>ev){

        for (int i=0;i<w.size();i++) {
            if (ev.button == btn_left){
                if (w[i]->focus(ev.pos_x, ev.pos_y)) {
                    f = i;
                }
            }

            w[i]->draw();
        }

        if(f!=-1) {
            w[f]->exec(ev);
        }
        else{
            f=-1;
        }
        for (int i = 0; i < w.size(); ++i) {
            w[i]->draw();
        }

        gout<<refresh;
    }
}

    void Window::start() {
        for (int i = 0; i < w.size(); ++i) {
            w[i]->draw();
        }

        gout<<refresh;
    }