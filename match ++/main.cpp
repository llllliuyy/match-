//
//  main.cpp
//  match ++
//
//  Created by s20181106116 on 2019/6/19.
//  Copyright © 2019 s20181106116. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream lxmcin("/Users/s20181106116/Desktop/lxmcin.txt");
    if (lxmcin.is_open())
    {
        lxmcin<< "This is a line.\n";
        lxmcin<< "This is another line.\n";
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
    for (int i = 0; i < n - 1; i++)
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
}



