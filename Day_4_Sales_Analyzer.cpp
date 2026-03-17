#include <iostream>
#include <iomanip>
#define SIZE 5

using namespace std;

int main()
{
    double sales[SIZE];
    double sum = 0;

    for (int i=0; i<SIZE; i++) {
        cout<<"Enter the sales for day "<<i+1<<": ";
        cin>>sales[i];
        sum = sum + sales[i];

    }


     double maxsale = sales[0];
     for (int i=0; i<SIZE; i++) {
        if (sales[i]>maxsale) {
           maxsale = sales[i];
        }

     }



    double average = sum/SIZE;

    cout<< fixed << setprecision(2);
    cout<<endl;
    cout<<endl;
    cout<<"     REPORT      \n";
    cout<<"Total Revenue is: $"<<sum<<endl;
    cout<<"The Average is: $"<<average<<endl;
    cout<<"The Max Sale is: $"<<maxsale<<endl;




    return 0;
}
