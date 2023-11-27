#include <iostream>

using namespace std;

int main() {
    int hours, minutes;
    char separator;
    
    cin >> hours >> separator >> minutes;
    
    int bonbons = 0;
    
    for(int i = 1; i <= 3; i++) {
        if (hours < 8 || hours > 19) {
            if (i < 3) {
                if (minutes == 59) {
                    minutes = 0;
                    hours++;
                    
                    if (hours == 24) hours = 0;
                } else {
                    minutes++;
                }
            }
            
            continue;
        }
        
        if (hours == 4 || hours == 14) {
            bonbons++;
        }
        
        if (minutes < 10) {
            if (minutes == 4) {
                bonbons++;
            }
        } else {
            int digit1 = minutes/10;
            int digit2 = minutes%10;
            
            if (digit1 == 4) bonbons++;
            if (digit2 == 4) bonbons++;
        }
        
        if (i < 3) {
            if (minutes == 59) {
                minutes = 0;
                hours++;
                
                if (hours == 24) hours = 0;
            } else {
                minutes++;
            }
        }
    }
    
    if (hours < 10) {
        cout << "0" << hours << separator;
    } else {
        cout << hours << separator;
    }
    
    if (minutes < 10) {
        cout << "0" << minutes;
    } else {
        cout << minutes;
    }
    
    cout << " " << bonbons;
    
    return 0;
}
