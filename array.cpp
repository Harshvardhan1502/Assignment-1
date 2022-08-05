#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr()
    int a[100][100];
    int i,j,m,n;
    cout<<"\nEnter size of array";
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
     for(j=0;j<n;j++)
     {
        cout<<"\nEnter"<<i+j+1<<"element of array";
        cin>>a[i][j];
    }
    }
    cout<<"\nDisplaying array";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }

cout<<"displaying diagonal elements"
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    if(i==j)
    cout<<a[i][j];
}



}
