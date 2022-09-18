#include<iostream>
using namespace std;

int main(){
    int N, min=1e5, c=0;
    cin>>N;
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
        if (arr[i]<min)
        {
            min=arr[i];
            c=1;
        }
        else if(arr[i]==min)
        {
            c++;
        }
        
    }
    

    cout<<((c%2==0)?"Unlucky":"Lucky")<<endl;
    return 0;
}
