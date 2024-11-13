#include "Header.h"
#include <iostream>

using namespace std;



    string TextBox::getValue() const {
        return value;
    }

    void TextBox::setValue(const string& newValue) {
        value = newValue;
    }

    void TextBox::displayText() const {
        cout << "This is the value: " << value << endl;
    }





