#include <Colorduino.h>

int refreshRate = 100;
int r = 255;
int g = random(0, 255);
int b = random(0, 255);

void setup() {
  Serial.begin(9600);
  Colorduino.Init();
}

void clear() {
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      Colorduino.SetPixel(i, j, 0, 0, 0);
    }
  }
}

void paint(int xs[], int ys[], int len) {
  clear();
  for (int i = 0; i <= len; i++) {
    Colorduino.SetPixel(xs[i], ys[i], r, g, b);
  }
  Colorduino.FlipPage();
  delay(refreshRate);
}

void leftOne() {
  int xs[] = {
    5, 6, 7, 0, 1, 2,
    4, 5, 6, 0, 1,
    3, 4, 5, 0,
    2, 3, 4, 7,
    2, 3, 4, 7,
    3, 4, 5, 0,
    4, 5, 6, 0, 1,
    5, 6, 7, 0, 1, 2
  };

  int ys[] = {
    0, 0, 0, 0, 0, 0, 
    1, 1, 1, 1, 1, 
    2, 2, 2, 2,
    3, 3, 3, 3,
    4, 4, 4, 4,
    5, 5, 5, 5,
    6, 6 ,6, 6, 6,
    7, 7, 7, 7, 7, 7
  };
  paint(xs, ys, 39);
}

void leftTwo(){
  int xs[] = {
    4, 5, 6, 0, 1,
    3, 4, 5, 0,
    2, 3, 4, 7,
    1, 2, 3, 6, 7,
    1, 2, 3, 6, 7,
    2, 3, 4, 7,
    3, 4, 5, 0,
    4, 5, 6, 0, 1
  };

  int ys[] = {
    0, 0, 0, 0, 0,
    1, 1, 1, 1,
    2, 2, 2, 2,
    3, 3, 3, 3, 3,
    4, 4, 4, 4, 4,
    5, 5, 5, 5,
    6, 6, 6, 6, 
    7, 7, 7, 7, 7
  };
  paint(xs, ys, 36);
}

void leftThree(){
  int xs[] = {
    3, 4, 5, 0,
    2, 3, 4, 7,
    1, 2, 3, 6, 7,
    0, 1, 2, 5, 6, 7,
    0, 1, 2, 5, 6, 7,
    1, 2, 3, 6, 7,
    2, 3, 4, 7,
    3, 4, 5, 0
  };

  int ys[] = {
    0, 0, 0, 0,
    1, 1, 1, 1,
    2, 2, 2, 2, 2,
    3, 3, 3, 3, 3, 3,
    4, 4, 4, 4, 4, 4,
    5, 5, 5, 5, 5,
    6, 6, 6, 6,
    7, 7, 7, 7
  };
  paint(xs, ys, 38);
}

void leftFour(){
  int xs[] = {
    2, 3, 4, 7,
    1, 2, 3, 6, 7,
    0, 1, 2, 5, 6, 7,
    0, 1, 4, 5, 6,
    0, 1, 4, 5, 6,
    0, 1, 2, 5, 6, 7,
    1, 2, 3, 6, 7,
    2, 3, 4, 7
  };

  int ys[] = {
    0, 0, 0, 0,
    1, 1, 1, 1, 1,
    2, 2, 2, 2, 2, 2,
    3, 3, 3, 3, 3,
    4, 4, 4, 4, 4,
    5, 5, 5, 5, 5, 5,
    6, 6, 6, 6, 6,
    7, 7, 7, 7
  };
  paint(xs, ys, 40);
}

void leftFive(){
  int xs[] = {
    1, 2, 3, 6, 7,
    0, 1, 2, 5, 6, 7,
    0, 1, 4, 5, 6,
    0, 3, 4, 5,
    0, 3, 4, 5,
    0, 1, 4, 5, 6,
    0, 1, 2, 5, 6, 7,
    1, 2, 3, 6, 7,
  };

  int ys[] = {
    0, 0, 0, 0, 0,
    1, 1, 1, 1, 1, 1,
    2, 2, 2, 2, 2,
    3, 3, 3, 3, 
    4, 4, 4, 4,
    5, 5, 5, 5, 5,
    6, 6, 6, 6, 6, 6,
    7, 7, 7, 7, 7
  };
  paint(xs, ys, 40);
}

void turnLeft(){
  leftOne();
  leftTwo();
  leftThree();
  leftFour();
  leftFive();
}

void loop() {
  // if (Serial.available() > 0) { }
  turnLeft();
}
