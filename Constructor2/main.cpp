#include <iostream>
#include "Window.h"

int main() {

    Window window1(3,5,-10,5);
    //                                                             ---- Виклики конструкторів
    Window window2{3,5,10,5};
//    Window window3;  - Викликання конструктора за замовчуванням
//    Window window4{10,5};  - Викликанян конструктора з двома параметрами

//    window1.SetX(3);
//    window1.SetY(5);
//    window1.SetHeight(10);
//    window1.SetWidth(5);
    window1.Show();

    return 0;
}
