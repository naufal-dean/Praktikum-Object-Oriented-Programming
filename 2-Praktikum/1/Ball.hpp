// Ball.hpp

#ifndef __BALL__HPP__
#define __BALL__HPP__

#include <iostream>

class Ball {
  private:
    int radius;  // radius bola, 1 <= radius <= 1000

  public:
    Ball();              // Membuat Ball dengan nilai radius 1
    Ball(int radius);    // Membuat Ball dengan nilai radius r
    Ball(const Ball& b);
    ~Ball();

    void bounce();       // Menuliskan "boii...iing" diakhiri newline,
                         // dengan huruf i sebanyak radius

};

#endif
