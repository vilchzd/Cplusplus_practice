#ifndef _MYSTRING_H_
#define _MYSTRING_H_
using namespace std;

class Mystring
{
    friend ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    Mystring();                                          // No-args constructor
    Mystring(const char *s);                             // Overloaded constructor
    Mystring(const Mystring &source);                    // Copy constructor
    Mystring(Mystring &&source);                         // Move constructor
    ~Mystring();                                         // Destructor
    
    Mystring &operator=(const Mystring &rhs); // Copy assignment
    Mystring &operator=(Mystring &&rhs);      // Move assignment
    
    /// Challenge //

    Mystring operator-() const;  //lowercas
    bool operator==(const Mystring &rhs) const;  //equal 
    bool operator!=(const Mystring &rhs) const;  //non-equal
    bool operator<(const Mystring &rhs) const;  //lex less
    bool operator>(const Mystring &rhs) const;  //lex great
    Mystring operator+(const Mystring &rhs) const;  //concat
    Mystring operator*(int i) const;  //multi
    Mystring &operator*=(int i);  //multi





    //////////////////
    void display() const;
    
    int get_length() const;                                       // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_
