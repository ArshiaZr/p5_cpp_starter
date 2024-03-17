#include <iostream>
#include "p5.hpp"


// Create a new instance of the P5 class
P5& p5 = P5::getInstance();

// Define the setup and draw functions
void setup(){
    p5.createCanvas(400, 400);
}

// Define the setup and draw functions
void draw(){
    p5.background(220);
    p5.fill(255);
    p5.ellipse(200, 200, 100, 100);
}

// Main function
int main(){
    // Register the setup and draw functions
    p5.registerMethod("setup", setup);
    p5.registerMethod("draw", draw);

    // Run the sketch
    p5.run();

    return 0;
}