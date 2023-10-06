#include<iostream>
#include<vector>
using namespace std;

vector<int> InterSectElement(int arr1[], int n, int arr2[], int m, int arr3[], int v){

    int i = 0;
    int j = 0;
    int k = 0;
    vector<int> ans;
    while(i<n && j<m && k<v){

        if(arr1[i] == arr2[j] && arr2[j] == arr3[k]){
            ans.push_back(arr1[i]);
            i++;
            j++;
            k++;
            arr1[i] = -12343;
            break;
        }
        else if(arr1[i] < arr2[j] || arr2[j] < arr3[k]){
            i++;
        }
        else if(arr2[k] <  arr1[i] || arr2[j] < arr3[k]){
            j++;
        }
        else{
            k++;
        }
    }
    return ans;
}
int main(){
    int n, m, v;
    cin >> n>>m>>v;

    int arr1[n];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    int arr2[m];
    for(int i =0; i < m; i++){
        cin >> arr2[i];
    }
    int arr3[v];
    for(int i = 0; i < v; i++){
        cin >> arr3[i];
    }

    vector<int> ans = InterSectElement(arr1, n, arr2, m, arr3, v);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}