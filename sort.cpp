
using namespace std;

void sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
     int n=5 ;
     //cin>>n;
    int arr[5]={1,0,1,4,3};
    //for(int i=0;i<n;i++){
      //  cin>>arr[i];
    //}
    sort(arr, n);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
   return 0;
}