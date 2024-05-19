#include "jatekmester.hpp"
#include "/Users/zsumberaoliver/Desktop/ITK_graphicslib-master/graphics.hpp"
#include "window.hpp"
Jatekmester::Jatekmester() {

}

int Jatekmester::isHit(bool isReserved) {
    if (isReserved){
        return 2;
    } else{
        return 1;
    }
}

bool Jatekmester::isLegal(genv::event e) {

}

bool Jatekmester::isSink() {

}
