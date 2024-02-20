//
// Created by Nazar Frazovir on 12.02.2024.
//

#ifndef CONSTRUCTOR2_WINDOW_H
#define CONSTRUCTOR2_WINDOW_H

#endif //CONSTRUCTOR2_WINDOW_H

class Window{
private:
    int x;
    int y;
    int heigh;
    int width;
public:

    /*
    Синтаксис створення конструктора:



   1. Прототип:
    Імʼя_Класу(Список_Параметрів);

   2. Визначення:
     Імʼя_Класу::Імʼя_Класу(Список_Параметрів)
     {
        Код
     }

     */

    Window(){
        x = 0;
        y = 0;
        heigh = 0;
        width = 0;
    } // - default constructor , в ньому рекомендується задавати параметри

//    Window(int originX, int originY, int originHeight, int originWidth); ---- constructor with 4 parameters
//    Window(int originX, int originY); ------- constructor with 2 parameters

    Window(int originX = 0 , int originY = 0, int originHeight = 10, int originWidth = 5);

    // Це нам дозволяє не робити лишніх конструкторів з різною кількістю параметрів

    int GetX() const { return x; }
    int GetY()  const { return y; }
    int GetHeight() const { return heigh; }
    int GetWidth() const { return width; }

    void SetX(int newX);
    void SetY(int newY);
    void SetHeight(int newHeight);
    void SetWidth(int newWidth);

    void Show() const;
};