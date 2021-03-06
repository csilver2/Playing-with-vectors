#include <iostream>
#include <vector>
using namespace std;

int main(){

  //3D Vector "Va"
  vector <vector<int> > Va;
  vector <int> Vq; // vector to store queries
  int Vn, q, qElement, qn; 
  int Vsize = 0, Velement = 0;
  //Define Number of Vectors
  cin >> Vn;
  cin >> q;

  for(int i = 0; i < Vn; i++){
    //Nested Vector "temp"
    vector<int> temp;
    cin >> Vsize; // Define the size of the vector
  
    for(int j = 0; j < Vsize; j++){
      cin >> Velement; //Add elements to the vector
      temp.push_back(Velement);
    }
    Va.push_back(temp);
  }
  //Adding to a new vector to display the queries.
  for(int k = 0; k < q; k++){
    cin >> qn >> qElement;
    Vq.push_back(Va[qn][qElement]);
  }
  //Print the queries.
  for(unsigned int k = 0; k < q; k++){
    cout << Vq[k] << endl;
  }
}