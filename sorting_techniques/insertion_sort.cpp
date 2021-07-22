#include <bits/stdc++.h>

using namespace std;

void bubble_sort(vector <int> ar){
    for(int  i = 0 ; i < ar.size() - 1 ; i++){
        for(int j = 0 ; j < ar.size() - 1 - i ; j++){
            if (ar[j] < ar[j+1]){
                int temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
    for(int i = 0 ; i < ar.size(); i++){
        cout << ar[i] << " ";
    }
    cout << "\n";
}


void insertion_sort(vector <int> ar){
    for (int i = 1 ; i < ar.size() ; i++){
        int key = ar[i];
        int j = i-1;
        while(key > ar[j] && j>=0){ //Sorted in descending order.
            int temp = ar[j];
            ar[j] = ar[j+1];
            ar[j+1] = temp;
            j--;
        }
    }
    for(int i = 0 ; i < ar.size(); i++){
        cout << ar[i] << " ";
    }
    cout << "\n";
}


int main(){
    vector <int> ar{-1 , -10, 100, 1, 8, 9 , 0 , 4, 29, 90};
    insertion_sort(ar);
    bubble_sort(ar);
    return 0;
}