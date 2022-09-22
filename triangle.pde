void setup() {
  size(400,400);
}

void draw() {
  float x = 125;
  float y = 275;
  float l = 150;
  float n = 10;
  trifuerza(x,y,l,n);
}

void trifuerza(float x, float y, float l, float n) {
  if (n == 0) return ;
  line(x, y, x+l, y);
  line(x, y, x+l/2, y+l*cos(60));
  line(x+l/2, y+l*cos(60), x+l, y);
  trifuerza(x,y,l/2,n-1);
  trifuerza(x+l/2,y,l/2,n-1);
  trifuerza(x+l/4,y-l/2,l/2,n-1);
}
