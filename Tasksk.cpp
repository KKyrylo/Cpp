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

  cout<<"Enter the finger number\n";  int palec;  cin>>palec;
  while (palec == 0 || palec > 5){
    cout << "The incorrect finger number" << '\n' << "Please input the finger number up to 5\n";  cin >> palec;
  }
  
  switch (palec){
    case 1: 
      cout<<"That's Thumb\n";
      break;
    case 2:
      cout<<"That's Index Finger\n";
      break;
    case 3: 
      cout<<"That's Middle Finger\n";
      break;
    case 4: 
      cout<<"That's Ring Finger\n";
      break;
    case 5: 
      cout<<"That's Little Finger\n";
      break;
  }
    return 0;
}


int task10(){
  cout<<"Task10:\n";
  
  int a[5] = { 0, 1, 0, 1, 1 };
    cout<<"Sample Input 1:" << ' '; for ( int i =0; i<5; i++) { cout << a[i]; } //printing input
    cout << '\n';
  int b[5]; for (int j=0;j<5;j++) { a[j]=0 ? b[j]=0 : b[j]=j+1;  }  //changing input to needed output
    cout<<"Sample Output 1:" << ' ';  for (int z=0; z<5; z++) { cout << b[z]; } //printing output
    cout << '\n';


  int c[5] = { 1, 1, 1, 1, 0 };
    cout<<"Sample Input 2:"<<' '; for(int q = 0; q<5; q++) { cout << c[q]; } //input
    cout << '\n';

  int d[5]; for (int x=0;x<5;x++) { c[x]=0 ? d[x]=0 : d[x]=x; } //changing input
    cout<<"Sample Output 2:"<< ' '; for (int l =0; l<5; l++) { cout << d[l]; }//printing output
    cout << '\n';
  return 0;
}


int task11(){
  cout<<"Task11\n";

  return 0;
}





int main() {

  cout << "Choose the number of task:\n";
    int n_zad;
    cin >> n_zad;

  switch(n_zad){
    case 1: task1();
      break;
    case 2: task2();
      break;
    case 3: task3();
      break;
    case 4: task4();
      break;
    case 5: task5();
      break;
    case 6: task6();
      break;
    case 7: task7();
      break;
    case 8: task8();
      break;
    case 9: task9();
      break;
    case 10: task10();
      break;
  }
}



