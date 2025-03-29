#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	int yourAnswer;
	int num1;
	int num2;
  
	for (int answer = 0; answer<10; answer++) {
		num1 = rand() % 11;
		num2 = rand() % 11;
		cout << num1 << " * " << num2 << " = ";
		cin >> yourAnswer;
		
		if(yourAnswer == num1*num2) { 
		    cout << "Верно!\n";
		} else {
			cout << "Неверно" << " " << "Ответ равен:" << num1*num2 << endl;
		}
	}
         
   return 0;
}

