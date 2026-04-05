// to rotate the matrix by 90degree
#include<iostream>
using namespace std;
int main(){
    int n=3,m=3;
    int a[n][m];
    for( int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"element ["<<i<<"] and ["<<j<<"]:";
             cin>>a[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for( int j=0;j<m;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }


    cout<<"after transpose is "<<endl;
    for( int i=0;i<n;i++){
        for( int j=0;j<m;j++){
            cout<<a[j][i];
        }
        cout<<endl;
    }
    
     return 0;
}





// to rotate the matrix by 90 degree
#include<iostream>
using namespace std;

int main(){
    int n=3,m=3;
    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"element ["<<i<<"] and ["<<j<<"]: ";
            cin>>a[i][j];
        }
    }

    cout<<"Original Matrix is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    // Transpose
    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            swap(a[i][j], a[j][i]);
        }
    }

    cout<<"After transpose is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    // Mirror / Reverse each row
    for(int i=0;i<n;i++){
        for(int j=0;j<m/2;j++){
            swap(a[i][j], a[i][m-j-1]);
        }
    }

    cout<<"After rotating by 90 degree clockwise:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}