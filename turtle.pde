//falta completar

float x;
float y;
float direction = 0;

void setup() { 
  size(400,400);
  x = width/2;
  y = height/2;
}

void keyPressed(float d) {
  switch() {
    case 'F':
      float newX = x + d * cos(radians((direction)));
      float newY = y + d * sin(radians((direction)));
      line(x,y,newX,newY);
      x = newX;
      y = newY;
      break;
    case 'L':
      direction-=90;
      break;
    case 'R':
      direction+=90;
      break;
  }
}

void draw() {
  float d = 10;
  keyPressed(d);
}
