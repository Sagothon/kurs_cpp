#include <cstring>
#include "array.h"

Array::Array(): data(NULL), length(0) {
}

void Array::duplicate( const Array & other ) {
	length = other.getLength();
	data = new int[ length ];
	memcpy(data, other.data, length*sizeof(int));
}

Array::Array( const Array& other ) {
	duplicate( other );
}

Array::Array( const int* init, int initLen ) {
	length = initLen;
	data = new int[ length ];
	memcpy(data, init, length * sizeof(int));	
}

Array::~Array() {
	delete[] data;
	data = NULL;
}

unsigned int Array::getLength() const {
	return length;
}

Array& Array::operator=( const Array& other ) {
	if(this != &other){
		delete[] data;
		duplicate( other );
	}
}

bool Array::operator==( const Array& other ) {
	for (unsigned int i=0; i<length; i++) {
		if (data[i] != other.data[i]) {
			return false;
		}
	}
	return true;	 
}

bool Array::operator!=( const Array& other ) {
	return !(*this != other);
}
		
int& Array::operator[](unsigned int index) {
	return data[ index % length ];
}

const int& Array::operator[](unsigned int index) const {
	return data[ index % length ];
}

