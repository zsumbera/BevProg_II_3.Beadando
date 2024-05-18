#ifndef BEADANDO2_SIMPLELIST_HPP
#define BEADANDO2_SIMPLELIST_HPP
#include "widgets.hpp"
#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"

class Simplelist : public Widgets {
protected:
    bool _f;
    std::string current;
    std::vector<std::string> _contents;
public:
    Simplelist(Window *a,int x,int y, int sx,int sy,std::vector<std::string>contents);

    virtual void draw();
    virtual bool focus(genv::event ev);
    virtual void exec(genv::event ev);
    virtual std::string push_back();
};


#endif //BEADANDO2_SIMPLELIST_HPP
