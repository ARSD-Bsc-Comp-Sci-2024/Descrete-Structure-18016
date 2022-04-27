#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter no of vertices : ";
    cin>>n;
    cout<<"Enter no of edges : ";
    cin>>m;
    int arr[m][2];

    bool flag=false;

    cout<<"Enter the G :"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }

    int mat[n+1][n+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            mat[i][j]=0;
        }
    }

    for(int i=0;i<m;i++){
        int x = arr[i][0];
        int y = arr[i][1];

        mat[x][y] = 1;
        mat[y][x] = 1;
    }


    cout<<"Adjacency Matrix of The G : "<<endl;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && mat[i][j]==0){
                flag=true;
            }
        }
    }
    if(flag==true){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}