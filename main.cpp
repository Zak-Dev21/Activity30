#include "Header.h"
#include <iostream>

int main()
{
    TextBox mytextbox("Zak , B");

    mytextbox.displayText();

    mytextbox.setValue("new text entry");

    mytextbox.displayText();

    return 0;


}