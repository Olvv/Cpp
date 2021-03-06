#include <algorithm>
#include <iostream>
#include <vector>
#include "Widget.h"
using std::vector;
using std::find;

int main()
{
    vector<Widget> vw;
    Widget bestWidget;

    // Add some Widgets to the vector of Widgets.
    vw.push_back(Widget(1));
    vw.push_back(Widget(2));
    vw.push_back(Widget(3));
    
    // Give bestWidget a value.
    bestWidget.setId(2);
    
    // Find a Widget with the same value as bestWidget.
    vector<Widget>::iterator i =
        find(vw.begin(), vw.end(), bestWidget);

    std::cout << *i << std::endl;
}
