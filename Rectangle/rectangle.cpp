#include <iostream>
#include "rectangle.h"

Rectangle::Rectangle(){
    height = 1;
    width = 1;
}

Rectangle::Rectangle(float w, float h){
    height = h;
    width = w;
}

float Rectangle::get_height(){
    return height;
}

void Rectangle::set_height(float h){
    if(h>0 && h<20){
        height = h;
    }
}

float Rectangle::get_width(){
    return width;
}

void Rectangle::set_width(float w){
    if(w>0 && w<20){
        width = w;
    }
}

float Rectangle::get_area(){
        return width*height;
}

float Rectangle::get_perimeter(){
    return (2*width)+(2*height);
}



