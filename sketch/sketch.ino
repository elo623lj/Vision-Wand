// Leds are connected to pin8 to pin12
const int row = 6;
//const int col = 3;
const int start_pin = 8; 
// defining the space between the letters (ms)
const int letterSpace = 6;
// defining the time column dots appear (ms)
const int dotTime = 3;

// first row is mapped to pin 8, and so on until pin 13.
int _[] = {0,0,0,0,0,0, 0,0,0,0,0,0, 0,0,0,0,0,0};
int A[] = {0,1,1,1,1,1, 1,0,1,0,0,1, 0,1,1,1,1,1};
int B[] = {1,1,1,1,1,1, 1,0,1,0,1,1, 0,1,0,1,0,0};
int C[] = {0,1,1,1,0,1, 1,0,0,0,1,1, 1,0,0,0,1,1};
int D[] = {1,1,1,1,1,1, 1,0,0,0,1,1, 0,1,1,1,0,0};
int E[] = {1,1,1,1,1,1, 1,0,1,0,1,1, 1,0,1,0,1,0};
int F[] = {1,1,1,1,1,1, 1,0,1,0,0,0, 1,0,1,0,0,0};
int G[] = {0,1,1,1,0,0, 1,0,1,0,1,1, 0,0,1,1,0,0};
int H[] = {1,1,1,1,1,1, 0,0,1,0,0,0, 1,1,1,1,1,1};
int I[] = {0,0,0,0,1,1, 1,0,1,1,1,1, 0,0,0,0,1,1};
int J[] = {1,0,0,0,0,0, 1,0,0,0,1,1, 1,1,1,1,1,1};
int K[] = {1,1,1,1,1,1, 0,0,1,0,0,0, 0,1,0,1,1,1};
int L[] = {1,1,1,1,1,1, 0,0,0,0,1,1, 0,0,0,0,1,1};
int M[] = {1,1,1,1,1,1, 0,1,1,0,0,0, 0,1,1,1,1,1};
int N[] = {1,1,1,1,1,1, 1,0,0,0,0,0, 0,1,1,1,1,1};
int O[] = {0,1,1,1,0,0, 1,0,0,0,1,1, 0,1,1,1,0,0};
int P[] = {1,1,1,1,1,1, 1,0,1,0,0,0, 0,1,0,0,0,0};
int Q[] = {0,1,1,1,1,1, 1,0,0,1,1,1, 0,1,1,1,1,1};
int R[] = {1,1,1,1,1,1, 1,0,1,0,0,0, 0,1,0,1,1,1};
int S[] = {0,1,0,0,1,1, 1,0,1,0,1,1, 1,0,0,1,0,0};
int T[] = {1,0,0,0,0,0, 1,1,1,1,1,1, 1,0,0,0,0,0};
int U[] = {1,1,1,1,1,1, 0,0,0,0,1,1, 1,1,1,1,1,1};
int V[] = {1,1,1,1,0,0, 0,0,0,0,1,1, 1,1,1,1,0,0};
int W[] = {1,1,1,1,0,0, 0,0,1,1,0,0, 1,1,1,1,0,0};
int X[] = {1,1,0,1,1,1, 0,0,1,0,0,0, 1,1,0,1,1,1};
int Y[] = {1,1,0,0,0,0, 0,0,1,0,0,0, 1,1,1,1,1,1};
int Z[] = {1,0,0,1,1,1, 1,0,1,0,1,1, 1,1,0,0,1,1};
int heart[] = {0,1,1,0,0,0, 1,1,1,1,0,0, 1,1,1,1,1,0, 0,1,1,1,1,1, 1,1,1,1,1,0, 1,1,1,1,0,0, 0,1,1,0,0,0};


void setup()
{
  // setting the pins from 8 to 12 of the leds to OUTPUT
  for (int i=start_pin; i<=start_pin+row; i++) {
    pinMode(i,OUTPUT);
  }
}

void loop()
{
  // you can print your own text by modifing here :) 
  printLetter(I,3);
  printLetter(heart,7);
  printLetter(H,3);
  printLetter(K,3);
  
}

void printLetter(int letter[], int col)
{

  for (int x=0; x<col; x++) {  
    for (int y=0; y<row; y++)
    {
      digitalWrite(start_pin+y, letter[y+row*x]); // start at pin8
    }
    delay(dotTime); // time wait before starting next column of dots
  }
 
  // printing the space (led off) between the letters
  for (int y=0; y<row; y++)
  {
    digitalWrite(start_pin+y, 0); // turn off all LEDs
  }
  delay(letterSpace); // time wait before starting next letter
}

 