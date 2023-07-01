#include <iostream>

int task(int num){
    int y;
    int x;
    int answer;
        if(num = 1){
        printf("Enter First Number : \n");
        std::cin >> x;
        printf("Enter Secound Number : \n");
        std::cin >> y;
        
        answer = x + y;
        
    }
    else if(num = 2){
        printf("Enter First Number : \n");
        std::cin >> x;
        printf("Enter Secound Number : \n");
        std::cin >> y;
        
        answer = x - y;
    }
    else if(num = 3){
        printf("Enter First Number : \n");
        std::cin >> x;
        printf("Enter Secound Number : \n");
        std::cin >> y;
        
        answer = x * y;
    }
    else if(num = 4){
        printf("Enter First Number : \n");
        std::cin >> x;
        printf("Enter Secound Number : \n");
        std::cin >> y;
        
        answer = x / y;
    }
    else if(num = 5){
        printf("Enter First Number : \n");
        std::cin >> x;
        printf("Enter Secound Number : \n");
        std::cin >> y;
        
        answer = x % y;
    }
    else if(num = 6){
        printf("Enter Your Number : \n");
        std::cin >> x;

        answer = x ++;
    }
    else if(num = 7){
        printf("Enter Your Number : \n");
        std::cin >> x;
        
        answer = x --;
    }
    else{
        printf("\nInvalid Operator, Please Check Again\n");
    }
    
    return answer;
}


int main() {
    int x;
    int y;
    int num;
    double answer;
    int loop = 1;
    int wait;
    
    while(loop = 1){
        std::cout << "------------------------- \n";
        std::cout << "Operations \n";
        std::cout << "------------------------- \n";
        std::cout << "1-Addition \n";
        std::cout << "2-Substraction \n";
        std::cout << "3-Multiplication \n";
        std::cout << "4-Division \n";
        std::cout << "5-Modulus \n";
        std::cout << "6-Increment \n";
        std::cout << "7-Decrement \n";
        std::cout << "------------------------- \n";
        std::cout << "\n";
        
        printf("What is the Operation you want to perform : \n");
        std::cin >> num;
        answer = task(num);
        std::cout << "Answer : ";
        std::cout << answer;

        printf("\n-------------------------------------------------------------------------\n");
        printf("Thank you For Using this Program");
        printf("--------------------------------------------------------------------------\n");
        
        std::cin >> wait;


    }

    
    return 0;
}
