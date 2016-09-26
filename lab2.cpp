//Rhegil P. Boleche
//201510973
//CPEPROGLA2
#include <iostream>
#include <math.h>
#include <conio.h>
#include <ctime>
#include <cstdlib>




using namespace std;
	


	int getFactorial(int num){
		
		if (num!=1){
			return num*getFactorial(num-1);
		}
		
	}
	int greaterNum(int number1, int number2){
	
	cout<<"Enter first number: ";
    cin>>number1;

    cout<<"Enter second number: ";
    cin>>number2;

    cout<<"The greater number is: "<<max(number1,number2);
    cout<<endl;
    return 0;
}

	

squareArea(int n, int a){
	cout<<"AREA OF SQUARE"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Enter side of square: "<<endl;
	cin>>n;
	cout<<endl;
	a = pow(n, 2);
	cout<<"The Area is "<<a<<"sq units"<<endl;
	return 0;
}
rectangleArea(int l, int w, int a){
	cout<<"AREA OF RECTANGLE"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Enter the length and width of rectangle: "<<endl;
	cin>>l>>w;
	a = l*w;
	cout<<"The Area is "<<a<<"sq units"<<endl;
	return 0;
	
}
triangleArea(int l, int w, int a){
	cout<<"AREA OF TRIANGLE"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Enter the base and height of triangle: "<<endl;
	cin>>l>>w;
	a = l*w*1/2;
	cout<<"The Area is "<<a<<"sq units"<<endl;
	return 0;
	
}
circleArea(float r,float ca){
	cout<<"AREA OF CIRCLE"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Enter the radius of the circle: "<<endl;
	cin>>r;
	ca =   3.14159265359*pow(r, 2);
	cout<<"The Area is "<<ca<<"sq units"<<endl;
	return 0;
	
	
}

    main(){
	int num, number1, number2, n, a, w, l, i , choice;
	float pi, r, ca;
	double numr;
	int uniques[] = {0,0,0,0,0,0,0,0,0,0};
	int min = 1;
	int max = 20;
	
    cout<<"Enter the number to be round off: ";
	cin>>numr;
    cout<<"Round off value: "<<floor(numr+0.5);
    cout<<endl;
    
    
	srand( (unsigned)time( NULL )); 
	for(int i =0; i<10; i++){
		num = min + (rand() % (max - min + 1));
		for(int j=0; j<10; j++){
			if(num == uniques[j]){
				num = min + (rand() % (max - min + 1));
			}
			else{
				uniques[i] = num;
			}
		}
	}
	for(int i=0; i<10; i++){
		cout << uniques[i]<<" ";
	}
	
    
   
    
	cout<<endl;
	cout<<"MENU"<<endl;
	cout<<endl;
	
	cout<<"[1] - Area of square"<<endl;
	cout<<"[2] - Area of rectangle"<<endl;
	cout<<"[3] - Area of triangle"<<endl;
	cout<<"[4] - Area of circle"<<endl;
	cout<<"[5] - exit"<<endl;
	cout<<endl;
	
	cout<<"Enter your choice: "<<endl;
	cin>>choice;
	
	switch(choice){
		case 1:
			cout<<squareArea(n,a);
			break;
	    case 2:
	    	cout<<rectangleArea(n,l,w);
	    	break;
	    case 3:
	    	cout<<triangleArea(n,l,w);
	    	break;
	    case 4:
	    	cout<<circleArea(r,a);
	    	break;
	    case 5:
	    	break;
	    	
	}
	cout<<endl;
	cout<<"Enter a number: ";
    cin>>num;
	cout<<"The factorial of "<<num<<" is: "<<getFactorial(num);
    cout<<endl;
    
    cout<<greaterNum(number1, number2);

	
}
