# Pattern Questions in c++


   <img src ="https://github.com/NirajRoy43/cpp-projects/blob/main/patterns/images/p1.PNG" alt="error" align="right">

```
#include <iostream>

int main() {
    int n ;
    std::cin>>n;
    
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j<=n){
            std::cout<<j;
            j++;     
        }
        std::cout << std::endl;
        i++;
    }

    return 0;
}
```
<hr>

<img src="https://github.com/NirajRoy43/cpp-projects/blob/main/patterns/images/p2.PNG" align="left">

```
#include <iostream>

int main() {
    int n ;
    std::cout<<"Enter the value of n : ";
    std::cin>>n;
    
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j<=n){
            std::cout<<n-j+1;
            j++;
            
        }
        std::cout << std::endl;
        i++;
    }

    return 0;
}
```
<hr>
<img src="https://github.com/NirajRoy43/cpp-projects/blob/main/patterns/images/p3.PNG" align="right">

```
#include <iostream>

int main() {
    int n ;
    std::cout<<"Enter the value of n : ";
    std::cin>>n;
    
    int i = 1;
    int count = 1;
    while (i <= n) {
        int j = 1;
        while (j<=n){
            std::cout<<count<<" ";
            count++;
            j++;
            
        }
        std::cout << std::endl;
        i++;
    }

    return 0;

}

```

<hr>

<img src="https://github.com/NirajRoy43/cpp-projects/blob/main/patterns/images/p4.PNG" align="left">

```
#include <iostream>

int main () {
    int n;
    std::cout<<"Enter the value of n : ";
    std::cin>> n;
    
    int row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= row) {
            std::cout<<"*";
            col = col + 1; //or col++;
        }
        std::cout<<std::endl;
        row++;
    }

    return 0;

}

```
<hr>
<img src = "https://github.com/NirajRoy43/cpp-projects/blob/main/patterns/images/p5.PNG " align = "right" >

```
#include <iostream>

int main () {
    int n;
    std::cout << "Enter the value of n : ";
    std::cin >> n;
    
    int row = 1;
    while (row <= n) {
        int col = 1;
        int value = row;
        
        while (col <= row) {
            std::cout << value << " ";
            value = value + 1;
            col = col + 1;
        }
        std::cout << std::endl;
        row = row + 1;
    }
    
    return 0;
}

```
<hr>
<img src= "https://github.com/NirajRoy43/cpp-projects/blob/main/patterns/images/p6.PNG " align = "left">

```
#include <iostream>

int main () {
    int n;
    std::cout << "Enter the value of n : ";
    std::cin >> n;
    
    int row = 1;
    while (row <= n) {
        int col = 1;
        
        while (col <= n) {
            char ch = 'A' + row - 1;
            std::cout << ch << " ";
            ch = ch + 1;
            col = col + 1;
        }
        std::cout << std::endl;
        row = row + 1;
    }
    
    return 0;
}
```
<hr>
<img src ="https://github.com/NirajRoy43/cpp-projects/blob/main/patterns/images/p7.PNG" alt="error" align="right">

```
#include <iostream>

int main () {
    int n;
    std::cout << "Enter the value of n : ";
    std::cin >> n;
    
    int row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= row) {
         char ch = 'A'+row-1;          //while loop ke andar 
            std::cout << ch << " ";
            ch = ch + 1;
            col = col + 1;
        }
        std::cout<<std::endl;
        row = row + 1;
    }
    
    return 0;
}

```
<hr>
<img src ="https://github.com/NirajRoy43/cpp-projects/blob/main/patterns/images/p8.PNG" alt="error" align="left">


```
#include <iostream>

int main () {
    int n;
    std::cout << "Enter the value of n : ";
    std::cin >> n;
    
    int row = 1;
    while (row <= n) {
        int col = 1;
        char ch = 'A'+row-1;          //while loop ke bahar
        while (col <= row) {
            std::cout << ch << " ";
            ch = ch + 1;
            col = col + 1;
        }
        std::cout<<std::endl;
        row = row + 1;
    }
    
    return 0;
}

```
