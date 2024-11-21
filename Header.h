#ifndef Header_h
#define Header_h

#include <iostream>
#include <string>

using namespace std;

class TextBox {
private:
    string value;

public:
    TextBox(string startValue = "") {
        value = startValue;
    }

    explicit TextBox(const string& startValue) {
        value = startValue;
    }

    string getValue() const;

    void setValue(const string& newValue);

    void displayText() const;

};



#endif
