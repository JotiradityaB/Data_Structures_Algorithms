//https://www.codingninjas.com/codestudio/problems/occurs-once_1214969?leftPanelTab=1


#include <bits/stdc++.h> 
int occursOnce(vector<int> &a, int n){
	int s=0;
    for(int i=0;i<n;i++){
        s=s^a[i];
    }
	return s;
}
