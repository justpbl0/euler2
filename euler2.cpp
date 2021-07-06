#include <iostream>

using namespace std;

int fibo[1000];
int n;

int suma;



int main()
{
    cout << "ile liczb wyznaczyc: " << n << endl;
    cin >>n;

    fibo[0]=1;
    fibo[1]=1;

    for(int i=2; i<n; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

     for (int i=0; i<n; i++)
    {
        if (fibo[i]%2==0)
        {
            suma += fibo[i];
        }
        cout<<endl<<"wyraz nr"<<i+1<<": "<<fibo[i];

    }
cout<<endl<<suma;
    return 0;
}
