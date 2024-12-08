
#include <bits/stdc++.h>
using namespace std;
class Categorie {
  public:

    // class data
    int id;
    string label ;

    // class function
    void drive(int distance) {
        mileage += distance;
    }
    Categorie(int idd , string s ) {
        id= idd; 
        label=s ; 
        
    }
};
 set<<int,string >pair> v;
class Priority {
  public:

    // class data
    int id_Priority; 
    string label_Priority;
 
    
    // class function
    void Priority( int i ,string s ){
        id_Priority=i;
        label_Priority= s;
        v.insert({i,s}); 

    }
    void del_Priority( int i, string s ){
        v.delete({i,s}); 
        
    } 
    
    Categorie(int idd , string s ) {
        id= idd; 
        label=s ; 
        
    }
};
set < Task_Category > s ; 

class Task_Category {
  public:

    // class data
    int id ; 
    string label ;  
    // class function
    void Task_Category( int i ,string s ){
        s.insert({i,s}); 

    }
     
    void del_Categorie( int i, string s ){
        v.delete({i,s}); 
        
    }

    void show_AllCategories() {
        cout << "id" << "  "<<label <<endl; 
        for ( auto e:s ){
            cout << e.first ( ) << ' '<< e.Second()<<endl;   
        }
    }
     
};


int main(){
        
        ios_base::sync_with_stdio(false);cin.tie(0);
        	cout<<fixed<<setprecision(15);

    
   
}
