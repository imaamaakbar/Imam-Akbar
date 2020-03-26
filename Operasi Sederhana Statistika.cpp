#include <iostream>
#include<conio.h>
using namespace std;
//fungsi mean
void mean(int *pA, int n ){
	float sumxbar=0;
	//mencari jumlah total
 for (int i=0;i<n;i++){
 	sumxbar=*(pA+i)+sumxbar;		
 }
 // mencari rata rata
 float xbar=sumxbar/n;
 cout<<"Rata-rata/Xbar = "<<xbar;
}
//fungsi median
void median (int n, int *pA){
	float med=0.0;
	//mengurutkan
	int asc;
	for(int c=1;c<n;c++)
    {
        for(int i=0;i<n-c;i++)
        {
            if(*(pA+i) > *(pA+(i+1)))
            {
                asc=*(pA+i);
                *(pA+i)=*(pA+(i+1));
                *(pA+(i+1))=asc;
            }
        }
    }
	 cout<<" jika diurutkan maka : ";
	 for(int i=0;i<n;i++){
	 	cout<<*(pA+i)<<" ";	
	 }
	 cout<<endl;
	 //mencari median
	if(n%2==0){
		float sum;
		sum=(*(pA+(n/2))+*(pA+((n/2)-1)));
    med=sum/2;
	}
	else{
	    med=*(pA+(n/2));
	}
	cout<<"Median = "<<med<<endl;	      
	}
void modus(int *pA, int n){
int mod[100];
int total[100];
int x,k=1;
x=0;
//mengurutkan
	int asc;
	for(int c=1;c<n;c++)
    {
        for(int i=0;i<n-c;i++)
        {
            if(*(pA+i) > *(pA+(i+1)))
            {
                asc=*(pA+i);
                *(pA+i)=*(pA+(i+1));
                *(pA+(i+1))=asc;
            }
        }
    }
	
