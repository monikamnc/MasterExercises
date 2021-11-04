#pragma once
class String
{
    // '+' operator overloading
    friend String operator+(
        const String& lhs,
        const String& rhs);
    char* str;

public:
    // No arguments constructor
    String();

    // pop_back() function
    void pop_bk();

    // push_back() function
    void push_bk(char a);

    // To get the length
    int get_length();

    // Function to copy the string
    // of length len from position pos
    void cpy(char s[], int len, int pos);

    // Swap strings function
    void swp(String& rhs);

    // Constructor with 1 arguments
    String(char* val);

    // Copy Constructor
    String(const String& source);

    // Move Constructor
    String(String&& source);

    // Overloading the assignment
    // operator
    String& operator=(
        const String& rhs);

    // Destructor
    ~String() { delete str; }

	
};

