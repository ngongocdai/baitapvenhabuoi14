#include<stdio.h>
//bai1
int tinhChuVi(int a, int b, int c)
{
	int p=a+b+c;
  return p; 
}
 


//bai2
float tinhDienTich(int a, int b, int c){
    int P = tinhChuVi(a, b, c);
    float p = P/2.0;
     
    float S = float(p * (p-a) * (p-b) *(p-c));
     
    return S;
}


//bai3
int tongsonguyen(int n) {
    int s = 0;
    do {
        s = s + n % 10;
        n = n / 10;
    } while (n > 0);
    return s;
}

//bai4
int UCLN(int a, int b)
{
    while ( a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a; 
}
    
    
//bai5
int BCNN(int a, int b){
	int n=UCLN(a,b);
	int i=(a*b)/n;
	return i;
}


//bai6
bool sochinhphuong(int n){
	int i=0;
	while(i*i <= n){
        if(i*i == n){
        	return true;
        }
        i++;
    }
 return false;
}



//bai7
int songuyenduongn( int n){
	int S=0;
	while(S < 10000)
  {
    n++;
    S = S + n;
  }
  return n;
}



//bai8
bool giam(int n){
	while (n>=10)
{
        int donvi=n%10;
        n=n/10;
        if(donvi>n%10)
        {
            return false;
        }
}
return true;
}
int tutraisangphai(int n){
	int m;
	m = n%10;
	n = n/10;
	if(m!=n%10)
		{
		if(giam(n)==true)
		{
				return 1;
			}else{
				return 0;
		}
	}
}

