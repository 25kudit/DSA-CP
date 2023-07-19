#include<bits/stdc++.h>
using namespace std;
int countMaze(int i,int j){
    if(i==0 && j==0)  return 0;
    if(i==0 || j==0)    return 1;
    return countMaze(i-1,j) + countMaze(i,j-1);

}
int main (){
    system("cls");
    int i,j;
    cout<<"Enter size of maze: ";
    cin>>i>>j;
    cout<<"total possible paths in maze: "<<countMaze(i-1,j-1);
    return 0;
}