#include<bits/stdc++.h>
using namespace std;
/*
void spiral(int a[10][10],int x,int y){
    //to print the matrix in the spiral order
    cout<<"array in the spiral order is: \n";
    int rowst=0,rowen=x-1,colst=0,colen=y-1;
    while(rowst<=rowen && colst<=colen){
        //print first row
        for(int col=colst;col<=colen;col++){
            cout<<a[rowst][col]<<" ";
        }
        rowst++;

        //print last column
        for(int row=rowst;row<=rowen;row++){
            cout<<a[row][colen]<<" ";
        }
        colen--;

        //print last row
        for(int col=colen;col>=colst;col--){
            cout<<a[rowen][col]<<" ";
        }
        rowen--;

        //print first column
        for(int row=rowen;row>=rowst;row--){
            cout<<a[row][colst]<<" ";
        }
        colst++;
    }
}

void transpose(int a[10][10],int x,int y){
    for(int i=0;i<x;i++){
        for(int j=i;j<y;j++){
            int t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    } 
    cout<<"array transpose is: \n";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
*/
void search(int a[10][10],int x,int y){
    int k;
    cout<<"enter the number to be searched in the matrix: ";
    cin>>k;
    int r=0,c=y-1;
    while(r<x && c>=0){
        if(a[r][c]==k){
            cout<<"element fount at index: "<<r<<','<<c;
            return;
        }
        else if(a[r][c]>k){
            c--;
        }
        else {
            r++;
        }
    }
    cout<<"element not found !";
    return;
}
int main(){
    system("cls");
    int x,y;
    cout<<"enter rows and columns respectively: ";
    cin>>x>>y;
    int a[10][10];
    cout<<"enter thr array row-wise: \n";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
             cin>>a[i][j];
        }      
    }
    cout<<"array entered by you: \n";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    //spiral(a,x,y);
    //transpose(a,x,y);
    search(a,x,y);
    return 0;
}