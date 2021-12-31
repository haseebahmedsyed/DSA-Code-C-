#include <iostream>
using namespace std;
int main(){
    int arr[8]={35,50,15,25,80,20,90,45};
    int pivot = arr[0];
    bool P_presnet = false;
    bool Q_presnet = false;
    int i =1 , j=7;
    while (i<j)
    {
        if (arr[i]>pivot)
        {
            P_presnet = true;
        }
        else{
            i++;
        }
        if (arr[j]<pivot)
        {
            Q_presnet = true;
        }
        else{
            j--;
        }
        if (P_presnet==true && Q_presnet==true) 
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j]=temp;
            i++;
            j--;
        }

        P_presnet=false;
        Q_presnet=false;

    }

    P_presnet=false;
    Q_presnet=false;

    int temp = arr[0];
    arr[0]=arr[j];
    arr[j]=temp;

    int k = 1;
    int l = j-1;
    int pivott = arr[0];

    while (k<l)
    {
        if (arr[k]>pivott)
        {
            P_presnet = true;
        }
        else{
            k++;
        }
        if (arr[l]<pivott)
        {
            Q_presnet = true;
        }
        else{
            l--;
        }
        if (P_presnet==true && Q_presnet==true) 
        {
            int tempp = arr[k];
            arr[k] = arr[l];
            arr[l]=tempp;
            k++;
            l--;
        }

        P_presnet=false;
        Q_presnet=false;
    }
    int tempp = arr[0];
    arr[0]=arr[l];
    arr[l]=tempp;

    
    P_presnet=false;
    Q_presnet=false;
    int m = j+2;
    int n = 7;
    int pivottt = arr[j+1];

    while (m<n)
    {
        if (arr[m]>pivottt)
        {
            P_presnet = true;
        }
        else{
            m++;
        }
        if (arr[n]<pivottt)
        {
            Q_presnet = true;
        }
        else{
            n--;
        }
        if (P_presnet==true && Q_presnet==true) 
        {
            int temppp = arr[m];
            arr[m] = arr[n];
            arr[n]=temppp;
            m++;
            n--;
        }

        P_presnet=false;
        Q_presnet=false;
    }
    int temppp = arr[j+1];
    arr[j+1]=arr[n];
    arr[n]=temppp;




    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
    return 0;
}