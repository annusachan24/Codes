    #include  <iostream>
    #include <unordered_set>
     
    using namespace std;
     
    unordered_set<int> us;
     
    bool isProduct(int arr[], int n, int x){
        if(n < 2) return false;
     
        for(int i = 0 ;i < n ; i++){
     
            if(arr[i] == 0 && x == 0) return true;
     
            if(arr[i] != 0 && x % arr[i] == 0){
                if( us.find(x / arr[i]) != us.end() ){
                    return true;
                }
                us.insert(arr[i]);
            }
        }
        return false;
    }
     
     
    int main(){
        int arr[] = {10, 20, 9, 40};
        int x = 400;
        int n = sizeof(arr)/sizeof(arr[0]);
        isProduct(arr, n, x)? cout << "Yes\n"
                            : cout << "No\n";
        x = 190;
        isProduct(arr, n, x)? cout << "Yes\n"
                            : cout << "No\n";
        return 0;
    }