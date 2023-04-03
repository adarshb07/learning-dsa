  #include<iostream>
  using namespace std;

  int main(){

    int n;
    cin>>n;

    int count=1;
    for(int row=0;row<n;row++){
      for(int col=0;col<row+1;col++){
        cout<<count<<" ";
        if(col!=row){
          cout<<"* ";
        }
        count++;
      }
      cout<<endl;
    }

    count = count - n;
    int temp = count;
    for(int row=n;row>0;row--){

      for(int col=1;col<=row;col++){
        cout<<count++<<" ";
        if(col!=row){
          cout<<"* ";
        }
      }
      count = temp-(row-1);
      temp = count;
      cout<<endl;
    }
    return 0;
  }