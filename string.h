#include <cstdio>
#include <cstdlib>

class String {
 protected:
    // length of the String
    int size_;
    // tab of char (represents the string)
    char* tab_;
    // tab size (room currently allocated)
    int sizemax_;
    
    size_t getCapacity(size_t size); 
    static int length(const char* s);
    
 public:
    
    //Constructors
    String(); //default constructor
    String(const String& str); //constructor by copy
    String(char* chartab); //constructor 

    //Destructor
    ~String();
   
    // Public Methods
    char* c_str();
    void clear ();
    bool empty();
    int size(); //length() will not be added because it's identical to size
    int max_size();
    void resize (int n);
    int capacity();
    void reserve(int n);

 
    //Operators
    String& operator=(const char* other);
    String& operator=(const String elem);
    String& operator=(char c);
    // operator + overloading  with string given
    char& operator[] (int pos);
    const char& operator[] (int pos) const;
};
String operator+(const String& s, const char c);
String operator+(const char c, const String& s);
String operator+(const String& lhs, const String& rhs);
String operator+(const String& lhs, const char* rhs);
String operator+(const char* lhs, const String& rhs);

