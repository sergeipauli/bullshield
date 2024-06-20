#include <iostream>

// A + B
void task_0001() {
	int a, b;
    
    std::cin >> a >> b;
    
    std::cout << a + b;
}
 
// GAME
void task_0033() {
    int a, b;
     
    std::cin >> a >> b;
     
    std::cout << b - 1 << ' ' << a - 1;
     
    return 0;
}

// PAYOFF
void task_0021() {
	int a, b, c, max, min;
	
	std::cin >> a >> b >> c;
	
	if (a > b) {
		if (a > b) {
			max = a;
		} 
		
		else {
			max = b;
		}
	}
	
	else {
		if (b > c) {
			max = b;
		}
		
		else {
			max = c;
		}
	}
	
	if (a < b) {
		if (a < b) {
			min = a;
		} 
		
		else {
			min = b;
		}
	}
	
	else {
		if (b < c) {
			min = b;
		}
		
		else {
			min = c;
		}
	}
	
	std::cout << max - min;
}

int main() {
	int a, b;
    
    std::cin >> a >> b;
    
    std::cout << b - 1 << a - 1;
    
	return 0;
}

