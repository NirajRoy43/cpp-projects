#include <iostream>
#include <string>
using namespace std;

int main () {
    cout << " This game will be played between two players :: ";
    cout << " playerA and playerB \n \n ";
    cout << " rock = 1 \n paper=2 \n scissor=3";
    //now we will define the terms 
    string rock;
    string paper;
    string scissor;
    
    //taking input from players
    int A;
    cout << " playerA -> choose from 1 , 2 or 3 \n  ";
    cin >> A;
    
    
    int B;
    cout << " \n playerB -> now you choose \n  ";
    cin >> B;
    
    if ( A==1; B==2) {
        cout << "B WINS !! " ;
    } 
    
    else if (A==1 ; B==3) {
        cout << "\n A WINS !!" ;
    }
    
    else if (A==2 ; B==1) {
        cout << "\n A WINS !! ";
    }
    
    else if (A==2; B==3) {
        cout << "\n B WINS !! ";
    }
    
    else if (A==3; B==0) {
        cout << "\n B WINS !! ";
    }
    
    else if (A==3; B==2) {
        cout << "\n A WINS !! ";
    }
     else { 
         cout << " ";
     }
    
    cout << "\n GAME ENDED -- RUN THE CODE AGAIN";
    
    
    
    
    
    
    
    return 0;
}
