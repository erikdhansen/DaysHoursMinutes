/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ehansen
 *
 * Created on June 16, 2018, 9:54 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void days_to_hours_to_minutes(int days, int *hours, int *minutes) {
    *hours = days*24;
    *minutes = days*24*60;
    return;
}

void print_output() {
    int hours;
    int minutes;
    for(int i=1; i <= 10; i++) {
        days_to_hours_to_minutes(i, &hours, &minutes);
        cout << i << " day(s) is " << hours << " hours or " << minutes << " minutes.\n";        
    }
    return;
}

/*
 * 
 */
int main(int argc, char** argv) {
    print_output();
    return 0;
}

