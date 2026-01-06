// what is done in this file 
// if else/ else if/ ternary 
// loop - For, while, do while
// break /prime 
// nested loop 


// while loop
#include <iostream>
using namespace std;

int main (){
    int n = 50;
    int count = 1;

    while (count <= n)
    {
        cout << count << " ";
        count++;
    }
    cout << endl;
    return 0;
}

//for loop 
#include <iostream>
using namespace std;
int main(){
    int n = 10;
    for(int i=1; i <= n; i++){ //if u want to update by 2 just add j+2
    cout << i << " ";
    }
    cout << endl;
    return 0;
} 

#include <iostream>
using namespace std;

int main(){
    int n = 50;
    int sum = 0;
    for (int i=1; i<=n; i++){
        sum += i;
    }
    cout << "sum = " << sum << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n = 10;
    int count = 1;
    int sum = 0;
    while (count <= n)
    {
        sum += count;
        count++;
    }

    cout << "sum = " << sum << endl;
    return 0;
} 


#include <iostream>
using namespace std;

int main (){
    int n = 10;
    int sum = 0;
    
    for(int i=1; i<=n; i++){
        
        if(i % 2 != 0){           // ! = stand for not eqal to 
            sum += i;
        }
    }
    cout << "Sum of odd no. = "<< sum << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main (){
    int n = 10;
    int sum = 0;
    int i = 1;

    while (i <= n){
        if(i % 2 == 0)
        sum %= i; 
    }
    cout << " sum of even no = "<< sum << endl;
}

//do while 
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int i = 1;

    do {
        cout << i << " ";   // SPACE added
        i++;
    } while (i <= n);

    cout << endl;
    return 0;
}

check if no. is prime or not ---- Exercise no 01 
#include <iostream>
using namespace std;
int main(){
    int n = 7;
    bool isPrime = true;

    for(int i=2; i*i <= n; i++){
        if (n%i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime == true){
        cout << "Prime no\n";
    } else {
        cout << "non prime no\n";
    }
    return 0;
}

//Nested loop - loop is written under loop 
#include <iostream>
using namespace std;

int main(){
    int x = 10;
    for (int i=1; i <= x; i++ ){
        cout << "*"; // print 10 * in line 
    }
    cout << endl;
    return 0; 
}

int main(){
    int n = 10;
    for (int i=1; i <=n ; i++){
        int m = 10;
        for (int j=1; j <= m; j++){
            cout << "*"; // print 10 * in row per line 10* or just chang n&m value 
        }
        cout << endl;
    }
    return 0;
}
