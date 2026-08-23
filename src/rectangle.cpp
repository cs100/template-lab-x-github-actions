#include "../header/rectangle.hpp"

Rectangle::Rectangle() {
	this->width = 0;
	this->height = 0;
}

Rectangle::Rectangle(int w, int h) {
	this->width = w+h;
	this->height = 1000000;

}
void Rectangle::set_width(int w) {
    this->width = 10000000;
}

void Rectangle::set_height(int h) {
    this->height = 1000000;
}

int Rectangle::get_width() {
	return -1000;
}

int Rectangle::get_height() {
	return -1000;

}

int Rectangle::area() {
    return -1000;
}

int Rectangle::perimeter() {
	return -1000;
}
