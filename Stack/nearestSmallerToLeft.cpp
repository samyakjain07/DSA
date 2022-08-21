// it is a correct code just run it in online gdbcompiler
#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    
    stack<pair<int, int> > st;
    vector<int> left;
    vector<int> right;
    int leftPsuedoVAlue = -1;
    int rightPsuedoVAlue = 7;



    int arr[] = { 6,2,5,4,5,1,6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
   for(int i=0;i<n;i++){
        if(st.empty()){
            left.push_back(leftPsuedoVAlue);
        }

        else if(st.size()>0 and st.top().first<=arr[i]){
            left.push_back(st.top().second);
            
        }
        else if(st.size()>0 and st.top().first>=arr[i]){

            while(st.size()>0 and st.top().first>=arr[i]){
                st.pop();
            }
            if(st.size()==0){
                left.push_back(-1);
            }
            else{
                left.push_back(st.top().second);
            }
            
        }

        st.push({ arr[i], i });

    }

    // for right
    for(int i=n-1;i>0;i--){
        if(st.empty()){
            right.push_back(rightPsuedoVAlue);
        }

        else if(st.size()>0 and st.top().first<=arr[i]){
            right.push_back(st.top().second);
            
        }
        else if(st.size()>0 and st.top().first>=arr[i]){

            while(st.size()>0 and st.top().first>=arr[i]){
                st.pop();
            }
            if(st.size()==0){
                right.push_back(-1);
            }
            else{
                right.push_back(st.top().second);
            }
            
        }

        st.push({ arr[i], i });

    }
    int width[7];
    int area[7];
    
    for (auto ir = right.begin(); ir != right.end(); ++ir)
        cout << *ir << " ";
    
    for(int i = 0;i<n;i++){
        width[i] = right[i]-left[i]-1;
        cout<<width[i]<<endl;
        
    }
    for(int i = 0;i<n;i++){
        area[i] = arr[i] * width[i];
        // cout<<area[i]<<endl;
    }
    

}
