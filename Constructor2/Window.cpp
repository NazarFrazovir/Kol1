//
// Created by Nazar Frazovir on 12.02.2024.
//
#include <iostream>
#include "Window.h"



Window::Window(int originX, int originY, int originHeight, int originWidth)
    : x(0), y(0), heigh(10), width(5)   // - Це список ініціалізації , він потрібен для того, щоб при невірному введені параметрів не виводилось сміття
{
    SetX(originX);
    SetY(originY);
    SetHeight(originHeight);
    SetWidth(originWidth);
}

//Window::Window(int originX, int originY) {
//    SetX(originX);
//    SetY(originY);                          //              constructor with 2 parameters
//    heigh = 10;
//    width = 5;
//}


void Window::SetX(int newX){
    if (newX > 0){
        x = newX;
    }
}
void Window::SetY(int newY) {
    if (newY > 0){
        y = newY;
    }
}
void Window::SetHeight(int newHeight) {
    if (newHeight > 0){
        heigh = newHeight;
    }
}
void Window::SetWidth(int newWidth) {
    if (newWidth > 0){
        width = newWidth;
    }

}

void Window::Show() const {
    for (size_t i = 0; i < heigh ; ++i) {
        for (size_t i = 0; i < width; ++i){
         std::cout<<"#";
        }
        std::cout<<std::endl;
    }
}