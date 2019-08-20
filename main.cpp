//
//  main.cpp
//  Acker
//
//  Created by Alexis on 8/19/19.
//  Copyright © 2019 Alexis. All rights reserved.
//

#include<iostream>
using namespace std;

int Acker(int m, int n)
{
    if (m == 0)
    {
        return n + 1;
    }
    else if (n == 0)
    {
        Acker(m - 1, 1);
    }
    else
    {
        Acker(m - 1, Acker(m, n - 1));
    }
    //return ???;
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << Acker(num1, num2);
    cout << endl;
    system("pause");
    return 0;
}

