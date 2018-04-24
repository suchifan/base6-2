//
//  main.cpp
//  base6-2
//
//  Created by suchao on 4/24/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "input n:\n";
    int n;
    cin >> n;
    int target = n;
    
    for(int i=2; i<n; i++){
        int count = 0;
        while(target % i == 0){
            target = target / i;
            count++;
        }
        if(count !=0)
            cout << i << "(" << count << ")";
    }
    
    return 0;
}
