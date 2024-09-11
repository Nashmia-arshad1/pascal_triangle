#include<iostream>
#include <vector>

using namespace std;

int main()
{

    std::vector<std::vector<int>> pascal;

    int n;
    cout<<"enter numbers of rows:";
    cin>>n;
    cout<<endl;
    for (int i =0;i<n;i++){
        
        vector<int> row;
        int nelments= i+1;

        row.push_back(1);

        for (int j=0;j<nelments-1;j++){
            if (j < nelments -2){
            row.push_back(-1);
            }
            else{
                row.push_back(1);
            }
        }

        //add from previous row if any
        if (i>1){
            for (int j=1;j<nelments-1;j++){
                int sum = pascal[i-1][j] + pascal[i-1][j-1];
                row[j]=sum;
            }
        }
        //push row to main pascal triangle
        pascal.push_back(row);

        
    }

    for (auto & row: pascal) {
        for (auto & col: row){
            cout<<col<<" ";
        }

        std::cout<<std::endl;
    }

return 0;
}

