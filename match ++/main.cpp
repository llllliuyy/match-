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
#include <iomanip>
#include <algorithm>
using namespace std;
struct People
{
    string name;
    string number;
    string college;
    string sex;
    string connection;
    double progress[7];
    int x;
}people[20];


int main()
{
    int i;
    ifstream input("/Users/s20181106116/Desktop/input.txt");
    ifstream progress("/Users/s20181106116/Desktop/progress.txt");
    ofstream  lxmcin("/Users/s20181106116/desktop/lxmcin.txt");

    for(i=0;i<20;i++)
    {
            input>>people[i].name>>people[i].number>>people[i].college>>people[i].sex>>people[i].connection;
      }
        int j;
    for(i=0;i<20;i++){
        for(j=0;j<7;j++){
            progress>>people[i].progress[j];
        }
    }
    
    for(i=0;i<20;i++){
        int max=0;
        for(j=0;j<7;j++){
            if(people[i].progress[j]>max){
                max=people[i].progress[j];
            }
        }
        for(j=0;j<7;j++){
            if(people[i].progress[j]==max){
                people[i].progress[j]=0;
            }
        }
    }
    for(i=0;i<20;i++){
        int min=0;
        for(j=0;j<7;j++){
            if(people[i].progress[j]!=0){
                min=people[i].progress[j];
            }
        }
        for(j=0;j<7;j++){
            if(people[i].progress[j]<min&&people[i].progress[j]!=0){
                min=people[i].progress[j];
            }
        }
        for(j=0;j<7;j++){
            if(people[i].progress[j]==min){
                people[i].progress[j]=0;
            }
        }
    }
     double h=0;
    for(i=0;i<20;i++){
        h=0;
        for(j=0;j<7;j++){
            h=h+people[i].progress[j];
        }
        people[i].x=h/5;
    }

    People t;
    for(i=0;i<20;i++){
        for(j=0;j<19;j++){
            if(people[j].x<people[j+1].x){
                t=people[j];
                people[j]=people[j+1];
                people[j+1]=t;
            }
        }
    }
   if (lxmcin.is_open())
    {
        int j;
        for(j=0;j<20;j++)
        {
        lxmcin<<people[j].name<<" "<<people[j].number<<"  "<<people[j].college<<" "<<people[j].sex<<" "<<people[j].connection<<" "<<people[j].x<<endl;
            
        }
        lxmcin.close();
    }
    return 0;
}

