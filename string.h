#include <cstdio>
#include <cstdlib>

class String {
 private:
 
    //////////////// ATTRIBUTES
    
    // length of the String
    int size_;
    // tab of char (represents the string)
    char* tab_;
    // tab size (room currently allocated)
    int capacity_;
    //maximum possible tab room
    static const int Sizemax;
    
    
    
    ////////////////// PRIVATE METHODS
    
    int getCap(int size); 
    
    
    
        
 public:
    
    ////////////////// CONSTRUCTORS
    
    String(); //default constructor
    String(const String& s); //constructor by copy
    String(int n, char c);
    
    
    
    ////////////////// PUBLIC METHODS
    
    char* c_str();
    void clear ();



    ////////////////// OPERATORS
    
    String& operator= (const String& S);
    friend String operator+ (const String& S, char C);
    
     
    
    //////////////////// GETTERS
    
    inline int max_size();
    inline int size();
    inline int capacity();
    inline char* tab();     
    //////////////////// SETTERS
    
    
    
    
};


