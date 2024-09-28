#include<iostream>
#include<vector>
using namespace std;

class Matrix{
    private:
    vector<vector<int>> vec;
    int rows,col;
    public:
    Matrix(int r,int c)
    {
        cout<<"constructor called"<<endl;
        rows=r;
        col=c;
        vec.resize(rows,vector<int>(col,1));

    }
    void matrix_input()
    {
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<col;j++){
                cin>>vec[i][j];
            }

        }
    }
    void matrix_dis()
    {
        if(rows==col){
            for(int i=0;i<rows;i++)
            {
                for(int j=0;j<col;j++){
                    cout<<vec[i][j]<<" ";
                }
                cout<<endl;

            }
        }

    }
    Matrix():rows(0),col(0){};

   
        

    Matrix operator+(const Matrix& rhs)const{
        //vec.resize(rows,vector<int>(col,0));
        Matrix res(rows,col);
        if(rows==col){
            for(int i=0;i<rows;i++)
            {
                for(int j=0;j<col;j++){
                res.vec[i][j]=vec[i][j]+rhs.vec[i][j];
                }
                

            }
            return res;
        }
        else{
            cout<<"rows and col must be of same size!";
            
        }
        return res;

    }
    Matrix operator-(const Matrix& rhs)
    {
        Matrix res1(rows,col);
        if(rows==col){
            for(int i=0;i<rows;i++)
            {
                for(int j=0;j<col;j++){
                res1.vec[i][j]=vec[i][j]-rhs.vec[i][j];
                }
                

            }
            return res1;
        }
        else{
            cout<<"rows and col must be of same size!";

        }
        return res1;


    }
};
int main(){
    /*Matrix m1(2,2);
    m1.matrix_dis();
    cout<<"\nenter vector element:"<<endl;
    m1.matrix_input();
    cout<<endl;
    m1.matrix_dis();
    Matrix m2(2,2);
    cout<<"\nenter vector element:"<<endl;
    m2.matrix_input();
    cout<<endl;
    m1.matrix_dis();
    Matrix m3=m1-m2;
    m3.matrix_dis();*/
    Matrix m1(50,100);
    Matrix m2(50,100);
    Matrix m3=m1+m2;
    m3.matrix_dis();

    return 0;
}