//
//  main.cpp
//  practice1.3
//
//  Created by Alexander Brinley Gibson on 9/1/18.
//  Copyright © 2018 Alexander Brinley Gibson. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {
    int birthDay;
    int birthMonth;
    int birthYear;
    
    cin >> birthDay;
    cin >> birthMonth;
    cin >> birthYear;
    
    cout << birthMonth << "-" << birthDay << "-" << birthYear << endl;
    cout << "Happy Birthday!" << endl;
    
    return 0;
}

