#include <iostream>
#include <string>
using namespace std;

class Player {
    private:
        std::string name;
        
    public: 
        Player(std::string n) {
            name = n;
        }
        
        void getData() {
            cout<<"\n\n Name of the player: "<<name<<endl;
 			//cin>>name;
        }
};

class Cricket_Player : Player {
    private:
        int position;
        
    public:
        Cricket_Player(std::string name): Player(name) {
        	cout<<"\n\n Enter Cricket player position";
            cin>>position;
        }
        
        void getData() {
            Player::getData();
            
            cout<<" \n\n Cricket Position: "<<position;
        }
};

class Hockey_Player : Player {
    private:
        int position;
        
    public:
        Hockey_Player(std::string name): Player(name) {
            cout<<"\n\n Enter Hockey player position";
            cin>>position;
        }
        
        void getData() {
            Player::getData();
            
              cout<<" \n\n Hockey Position: "<<position;
        }
};

class Football_Player : Player {
    private:
        int position;
        
    public:
        Football_Player(std::string name): Player(name) {
            cout<<"\n\n Enter Football player position";
            cin>>position;
        }
        
        void getData() {
            Player::getData();
            
            cout<<"\n\n Football Position: "<<position;
        }
};


int main()
 {
    string name;
    cout<<"Enter name of player";
	cin>>name; 
    
    Cricket_Player cp(name);
    Hockey_Player hp(name);
    Football_Player fp(name);
    
    cp.getData();
    fp.getData();
    hp.getData();
   
return 0;
}
