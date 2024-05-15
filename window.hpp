#ifndef BEADANDO3_WINDOW_HPP
#define BEADANDO3_WINDOW_HPP
#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"
#include <vector>
#include "widgets.hpp"

class Widgets;

class Window {
protected:
    std::vector<Widgets*> w;
public:
    Window(int XX,int YY);

    void _addwidget(Widgets *widget) {w.push_back(widget);}
    void loop();
    void start();
};


#endif //BEADANDO3_WINDOW_HPP
