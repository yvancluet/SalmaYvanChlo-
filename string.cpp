#include "string.h"
#include <cstdio>
#include <cstdlib>

const int String::Sizemax = 100;

////////////////////// CONSTRUCTORS

String::String(){ //default constructor
    tab_ = nullptr;
    size_= 0;
    capacity_ = 0;
}

String::String(int n, char c){
    size_=n;
    capacity_=getCap(n);
    tab_=new char[capacity_+1];
    for (int i =0; i<n; i++){
      tab_[i]=c;
    }
    tab_[n]='\0';
}

String::String (const String &s){ //copy constructor
    size_=s.size();
    capacity_=getCap(size_);
    tab_= new char[capacity_+1];
    char* ptr = s.c_str();
    for(int i=0; i<size_;i++)
    tab_[i]=ptr[i];
    tab_[size_]='\0';
}

///////////////////////// PROTECTED METHODS

//added method providing a tab capacity for a given size
int String::getCap(int size){
    size=size*2;
    if (size>(Sizemax/2))
	return Sizemax;
    else
	return size;
}


////////////////////////// PUBLIC METHODS


const char* String::c_str(){
    return tab_;
}


void String::clear() {
    tab_[0]='\0';
    size_=0;
}


////////////////////////////// GETTERS

int String::max_size(){
    return Sizemax;
}

int String::size() {
    return size_;
}

int String::capacity() {
    return capacity_;
}

char* String::tab() {
    return tab_;
}

////////////////////////////// OPERATORS

String& String::operator= (const String &S){
	
  capacity_ = S.capacity();
	size_ = S.size();
	delete [] tab_;
	tab_ = new char[capacity_+1];
	
	char* cA = S.c_str();
	for (int i= 0 ; i<size_+1 ; i++){
		tab_[i] = cS[i];
	}
	
	return *this;
}



String operator+ (const String &S, char C){
	
  char* tab_S = S.c_str();
  
  int x = S.size();
  int sumsize = x + 1;
	
  if (sumsize > S.Sizemax){
    sumsize = S.Sizemax;
    std::cout << "length of string exceeds maximum size"  << std::endl;
  }
  
  char* sumtab = new char[sumsize+1];
	
  for (int i =0; i<x; i++){
    sumtab[i]=tab_S[i];
  }
	
  sumtab[x]=C;
  sumtab[sumsize] = '\0';
  
  return String(sumtab);
}


