#include "String.h"
#include <cstring>
#include <iostream>
using namespace std;
// Overloading the assignment operator
String& String::operator=(
    const String& rhs)
{
    if (this == &rhs)
        return *this;
    delete[] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Overloading the plus operator
String operator+(const String& lhs,
    const String& rhs)
{
    int length = strlen(lhs.str)
        + strlen(rhs.str);

    char* buff = new char[length + 1];

    // Copy the strings to buff[]
    strcpy(buff, lhs.str);
    strcat(buff, rhs.str);

    // String temp
    String temp{ buff };

    // delete the buff[]
    delete[] buff;

    // Return the concatenated string
    return temp;
}

// Function for swapping string
void String::swp(String& rhs)
{
    String temp{ rhs };
    rhs = *this;
    *this = temp;
}

// Function to copy the string
void String::cpy(char s[], int len,
    int pos)
{
    for (int i = 0; i < len; i++) {
        s[i] = str[pos + i];
    }
    s[len] = '\0';
}

// Function to implement push_bk
void String::push_bk(char a)
{
    // Find length of string
    int length = strlen(str);

    char* buff = new char[length + 2];

    // Copy character from str
    // to buff[]
    for (int i = 0; i < length; i++) {
        buff[i] = str[i];
    }
    buff[length] = a;
    buff[length + 1] = '\0';

    // Assign the new string with
    // char a to string str
    *this = String{ buff };

    // Delete the temp buff[]
    delete[] buff;
}

// Function to implement pop_bk
void String::pop_bk()
{
    int length = strlen(str);
    char* buff = new char[length];

    // Copy character from str
    // to buff[]
    for (int i = 0; i < length - 1; i++)
        buff[i] = str[i];
    buff[length] = '\0';

    // Assign the new string with
    // char a to string str
    *this = String{ buff };

    // delete the buff[]
    delete[] buff;
}

// Function to implement get_length
int String::get_length()
{
    return strlen(str);
}

// Function to illustrate Constructor
// with no arguments
String::String()
    : str{ nullptr }
{
    str = new char[1];
    str[0] = '\0';
}

// Function to illustrate Constructor
// with one arguments
String::String(char* val)
{
    if (val == nullptr) {
        str = new char[1];
        str[0] = '\0';
    }

    else {

        str = new char[strlen(val) + 1];

        // Copy character of val[]
        // using strcpy
        strcpy(str, val);
    }
}

// Function to illustrate
// Copy Constructor
String::String(const String& source)
{
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
}

// Function to illustrate
// Move Constructor
String::String(String&& source)
{
    str = source.str;
    source.str = nullptr;
}

