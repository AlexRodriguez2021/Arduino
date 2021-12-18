/*
    ledcube.pde - Example sketch for controlling an LED cube.
    Created by Gamaiel Zavala (gzip), 2009-2014
    MIT License. See accompanying LICENSE file for terms.
*/

#include <LedCube.h>

#define SIZE 3
#define COLS (SIZE*SIZE)

byte levelPins[SIZE] = {11,12,13};
byte colPins[COLS] = {2,3,4,5,6,7,8,9,10};

LedCube cube(SIZE, levelPins, colPins);

//#define DEBUG
#ifdef DEBUG
#include <memdebug.h>
void showmem(const char label[] = "")
{
  char buffer[100];
 
  sprintf(buffer,"%s: %04u %04u : used/free",
      label,
      getMemoryUsed(),
      getFreeMemory()
    );
 
  Serial.println(buffer);
}
#endif

void setup ()
{
#ifdef DEBUG
    Serial.begin(9600);
#endif
}

void loop ()
{
    delay(50);
    
#ifdef DEBUG
    showmem("start");
#endif
    // paste UI output here (https://rawgithub.com/gzip/arduino-ledcube/master/ui/index.html)
     
  cubeFrame* f[] = {
        cube.createFrame((const byte[]) {0,6}, 2, 300),
        cube.createFrame((const byte[]) {0,3}, 2, 300),
        cube.createFrame((const byte[]) {0,0}, 2, 300),
        cube.createFrame((const byte[]) {0,1}, 2, 300),
        cube.createFrame((const byte[]) {0,4}, 2, 300),
        cube.createFrame((const byte[]) {0,7}, 2, 300),
        cube.createFrame((const byte[]) {0,8}, 2, 300),
        cube.createFrame((const byte[]) {0,5}, 2, 300),
        cube.createFrame((const byte[]) {0,2}, 2, 300),
        cube.createFrame((const byte[]) {1,0}, 2, 300),
        cube.createFrame((const byte[]) {1,3}, 2, 300),
        cube.createFrame((const byte[]) {1,6}, 2, 300),
        cube.createFrame((const byte[]) {1,7}, 2, 300),
        cube.createFrame((const byte[]) {1,4}, 2, 300),
        cube.createFrame((const byte[]) {1,1}, 2, 300),
        cube.createFrame((const byte[]) {1,2}, 2, 300),
        cube.createFrame((const byte[]) {1,5}, 2, 300),
        cube.createFrame((const byte[]) {1,8}, 2, 300),
        cube.createFrame((const byte[]) {2,6}, 2, 300),
        cube.createFrame((const byte[]) {2,3}, 2, 300),
        cube.createFrame((const byte[]) {2,0}, 2, 300),
        cube.createFrame((const byte[]) {2,1}, 2, 300),
        cube.createFrame((const byte[]) {2,4}, 2, 300),
        cube.createFrame((const byte[]) {2,7}, 2, 300),
        cube.createFrame((const byte[]) {2,8}, 2, 300),
        cube.createFrame((const byte[]) {2,5}, 2, 300),
        cube.createFrame((const byte[]) {2,2}, 2, 300)
    };
    cube.lightFrames(f, 27);

}
