#include "window.hpp"
#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"
#include "widgets.hpp"
#include <iostream>
#include "simplelist.hpp"
#include "pushbutton.hpp"
#include "boats.hpp"
#include <random>

using namespace genv;
using namespace std;


Window::Window(int XX,int YY): w(w){
    gout.open(XX,YY);
    gout.load_font("/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/LiberationSans-Regular.ttf");

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            Map * map = new Map(this,650+j*50,100+i*50,50,50,false,false);
            mp.push_back(map);
        }
    }
    for (int i = 1; i <= 4; ++i) {
        Boats * boat = new Boats(this,50,130+i*60,48,48,i,mp);
    }
    Pushbutton * button = new Pushbutton(this,900,700,100,50);


}

void Window::startloop() {
event ev;
    int f = -1;
    while (gin>>ev){
        update();
        start();
        for (int i=0;i<w.size();i++) {
            if (ev.button == btn_left && w[i]->focus(ev)){
                    f = i;
            }else if (ev.button == -btn_left && !w[i]->focus(ev)){
                f=-1;
            }
        }
        if(f!=-1) {
                w[f]->exec(ev,isStarted);
                w[f]->draw();
        }
        gout<<refresh;
        if (isStarted){
            break;
        }
    }
    gameloop();
}
void Window::gameloop() {
    event ev;
    update();
    std::vector<string> list1 = {"Sima lövés","Bomba"};
    Simplelist * simple = new Simplelist(this,100,700,100,60,list1);
    std::vector<Map*> m;
    rand();
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
                Map * map = new Map(this,50+j*50,100+i*50,50,50,true, false);
                m.push_back(map);
            }
        }
    for (int i = 0; i <= 4; ++i) {
        int rnd = rand() % m.size();
        for (int j = 0; j < i; ++j) {
            m[rnd+j]->Reserve();
        }

    }
    int f = -1;
    start();
    while (gin>>ev){
        for (int i=0;i<w.size();i++) {
            if (ev.button == btn_left && w[i]->focus(ev)){
                f = i;
            }
        }
        if(f!=-1) {
            w[f]->draw();
            w[f]->exec(ev,isStarted);
        }
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