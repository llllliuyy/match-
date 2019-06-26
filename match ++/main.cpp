//
//  main.cpp
//  match ++
//
//  Created by s20181106116 on 2019/6/19.
//  Copyright © 2019 s20181106116. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct People
{
    string name;
    string number;
    string college;
    string sex;
    string connection;
    double progress[7];
    
}people[4];
struct Referee
{
    string name;
    double progress[4];
}referee[7];

int main()
{
    
    ifstream input("/Users/s20181106116/Desktop/input.txt");
    ifstream progress("/Users/s20181106116/Desktop/progress.txt");
    ofstream  lxmcin("/Users/s20181106116/desktop/lxmcin.txt");
    if (input.is_open())
    {
        int i;
        for(i=0;i<4;i++)
        {
            input>>people[i].name>>people[i].number>>people[i].college>>people[i].sex>>people[i].connection;
        }
        input.close();
    }
    if( progress.is_open())
    {
        int j;
        for(j=0;j<7;j++)
        {
    progress>>referee[j].name>>referee[j].progress[0]>>referee[j].progress[1]>>referee[j].progress[2]>>referee[j].progress[3] ;
        }
        progress.close();
    }
        
    if (lxmcin.is_open())
    {
        lxmcin<<setw(10)<<people
        lxmcin.close();
    }
    return 0;
}


void print(int arr[], int n)
{
    for(int j= 0; j<n; j++)
    {
        cout<<arr[j] <<"  ";
    }
    cout<<endl;
}

void BubbleSort(int arr[], int n)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(i=1;i<=5;i++)
    {
        int sum;
        sum=sum+arr[i];
      
    }
}
int x;





