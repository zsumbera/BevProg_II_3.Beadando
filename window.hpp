#ifndef BEADANDO3_WINDOW_HPP
#define BEADANDO3_WINDOW_HPP
#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"
#include <vector>
#include "widgets.hpp"
#include "map.hpp"

class Widgets;
class Map;

class Window {
protected:
    std::vector<Widgets*> w;
    std::vector<Map*> mp;
    std::vector<Map*> m;
    std::vector<std::string> list1 = {"Sima lövés","Bomba"};
    bool isStarted;
    bool turn;
public:
    Window(int XX,int YY);

    void _addwidget(Widgets *widget) {w.push_back(widget);}
    void startloop();
    void gameloop();
    void start();
    void update();
};


#endif //BEADANDO3_WINDOW_HPP
