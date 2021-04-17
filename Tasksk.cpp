#include <iostream>
#include <ctime>
using namespace std;

int task1(){
  cout<<"Task 1:\n";
  cout << "Your number is (up to five digits):\n";
  
    int a; cin >> a;
  
  if (a<=99999) {
    cout << "1 digit is " << (a/10000)<<endl;
    cout << "2 digit is " << (a/1000)%10<<endl;
    cout << "3 digit is " << (a/100)%10<<endl;
    cout << "4 digit is " << (a/10)%10<<endl;
    cout << "5 digit is " << a%10<<endl;
   } else {
    cout << "Your number is incorrect\n";
  }
  return 0;
}

int task2(){
  cout << "Task 2:\n";
  int a,b,f;

  cout << "Enter numbers a, b, f \n"; cin >> a >> b >>f;
  cout<<"Your numbers are:\n";
    cout << "a="<<a<<endl;
    cout << "b="<<b<<endl;
    cout << "f="<<f<<endl;
  
  cout<< "Calculating by formula: (а + b — f / а) + f * a * a — (a + b)\n";
    cout<<"x="<< ((a + b - f / a) + f * a * a - (a + b)) <<endl;
  
  return 0;
}

int task3(){
  cout << "Task 3:\n";
  
  char z;
  
  cout <<"Enter latin lowercase letter:\n"; cin>>z;
  
  if (z>='a' && z<='z'){
    cout<<"Your lowercase letter is: "<<z<<endl;
    cout<<"Your letter in uppercase then is: "; cout<< (char)( z  - ( 'z'-'Z') ) <<endl;
  
  } else {
    cout<<"--- ";
  }
  return 0;
}

int task4(){
  cout<<"Task 4:\n";
  
  cout<<"Enter meters:"<<endl;  double metr;  cin>> metr;
  cout<<metr<<" meters in kilometers will be "<<metr/1000<<" kilometers"<<endl;
  return 0;
}

int task5(){
  cout<<"Task 5:\n";
  
  int n;  cout <<"Number of lines="; cin >>n;   
    
  for (int i = 1; i <=n; i++) {    
    for (int j = 1; j < i+1; j++)
      cout << "*"; 
      cout << "\n";
  }
  return 0;
}

int task6(){
  int numA;
  int numB;
  int numC;
    cout<<"Enter your first num:\n";  cin>>numA;
    cout<<"Enter your second num:\n"; cin>>numB;
    cout<<"Enter your third num:\n";  cin>>numC;

  if ( numA==numB || numA==numC || numB==numC ) {
    cout<<"1 number+5 ="<<numA+5<<endl;
    cout<<"2 number+5 ="<<numB+5<<endl;
    cout<<"3 number+5 ="<<numC+5<<endl;
   } else {
    cout<<"At least two numbers must match, the input is incorrect"<<endl;
  }
  return 0;
}

int task7(){
  cout<<"Task7:\n";

  int num1, num2;

  cout<<"Enter two numbers:\n"; cin>>num1;  cin>>num2;
    cout<<"a*b="<<num1*num2<<endl;
    cout<<"a+b="<<num1+num2<<endl;
    cout<<"a-b="<<num1-num2<<endl;
    cout<<"An average of two numbers="<<(num1 +num2)/2<<endl;

  return 0;
}

int task8(){
  cout<<"Task8:\n";

  cout << "Enter a four-digit number\n";  int x; cin >> x;

  if (x>9999 || x<1000){
  cout << "The number is incorrect, please input the four-digit number\n"; cin >> x;
  }
  
  cout << "Your number is:" << x << '\n'; cout << "Then digits of ur num in reverse:\n";
  while (x>0){
    int last_digit = x%10;
    cout << last_digit << endl;
    x /= 10;
  }  
  return 0;
}

int task9(){
  cout<<"Task9:\n";
  cout<<"Введите номер пальца руки(если у вас гипердактилия, то пропустите)\n";
  int palec;
  cin>>palec;

  
  switch (palec){
    case 1: 
      cout<<"Это большой палец\n";
      break;
    case 2:
      cout<<"Это указательный палец\n";
      break;
    case 3: 
      cout<<"Это средний палец\n";
      break;
    case 4: 
      cout<<"Это безымянный палец\n";
      break;
    case 5: 
      cout<<"Это мизинец\n";
      break;
    default:
      cout<<"либо у вас 6 пальцев руки, либо их нет\n";
  }

    
    return 0;
}


int task10(){
  cout<<"Task10:\n";
  // int a[] = 
  // int a,b,c,d,e;

  // int array[5];
  int a[4];

  a[0]=0;
  a[1]=1;
  a[2]=0;
  a[3]=1;
  // a[4]=1;
  cout<<"Sample Input 1:"<<a<<endl;
  int b[4];
  for (int i=0;i<5;i++){
    a[i]=0 ? b[i]=0 : b[i]=i;
    
  }
  cout<<"Sample Output 1:"<<b<<endl;

  int c[4];

  c[0]=1;
  c[1]=1;
  c[2]=1;
  c[3]=1;
  // c[4]=0;

  cout<<"Sample Input 2:"<<c<<endl;

  int d[4];
  for (int i=0;i<5;i++){
    c[i]=0 ? d[i]=0 : d[i]=i;
    
  }
  cout<<"Sample Output 2:"<<d<<endl;

  return 0;
}


int task11(){
  cout<<"Task11\n";

  return 0;
}





int main() {

  // n_zad
  // switch(n_zad)

    task1();
    task2();
    task3();
    task4();
    task5();
    task6();
    task7();
    task8();
    task9();
    task10();

}



