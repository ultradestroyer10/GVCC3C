//
//  main.cpp
//  hello
//
//  Created by Richard Liu on 2019-12-04.
//  Copyright © 2019 Richard Liu. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(void){
    int a=1,b=2,c=3,d=4,t;
    string  opin  = "";
    cout << a << " "<< b <<endl;
    cout << c << " "<< d <<endl;
    cout << "Enter H or V" << endl;
    cin >> opin;
    cout <<"Times: "<< opin.size() << endl;
    for(int m = 0; m < opin.size(); m = m +1 )
    {
        if (opin[m] == 'H' )
        {
            t=a;
            a=c;
            c=t;
            t=b;
            b=d;
            d=t;
        
        }
        else if (opin[m] == 'V' )
        {
            t=a;
            a=b;
            b=t;
            t=c;
            c=d;
            d=t;
        }
        cout << m +1 << "times" <<endl;
    }
    cout << a << " "<< b <<endl;
    cout << c << " "<< d <<endl;
}
