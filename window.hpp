#ifndef BEADANDO3_WINDOW_HPP
#define BEADANDO3_WINDOW_HPP
#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"
#include <vector>
#include "widgets.hpp"
#include "map.hpp"

class Widgets;

class Window {
protected:
    std::vector<Widgets*> w;
    bool isStarted;
public:
    Window(int XX,int YY);

    void _addwidget(Widgets *widget) {w.push_back(widget);}
    void startloop();
    void gameloop();
    void start();
    void update();
};


#endif //BEADANDO3_WINDOW_HPP
