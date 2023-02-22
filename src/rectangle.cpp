#include "../header/rectangle.hpp"

Rectangle::Rectangle(){
	width = 0;
	height = 0;
}

Rectangle::Rectangle(int w, int h ){
	if(w < 0 || h < 0){
		cout << "Width/height cannot be less than 0";
		return 1;
	}
	width = w;
	height = h;

}

int Rectangle::perimeter(){

return this->width * 2 + this->height* 2;

}

void Rectangle::set_width(int w){
	this->width = w;
}

void Rectangle::set_height(int h){
	this->height = h;
}

int Rectangle::area(){
	return this->width * this->height;
}
