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

