#ifndef BEADANDO2_PUSHBUTTON_HPP
#define BEADANDO2_PUSHBUTTON_HPP

#include "widgets.hpp"

class Pushbutton: public Widgets{
protected:

public:
    Pushbutton(Window *a,int x,int y,int sizx,int sizy);

    virtual void draw();
    virtual void exec(genv::event ev,bool &isStarted);
    virtual bool focus(genv::event ev);
};


#endif //BEADANDO2_PUSHBUTTON_HPP
