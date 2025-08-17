#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Player {
public:
    string name{"Player"};
    int health{100};
    int xp{3};
    //Methods

    void talk(string text) {cout << name << " says " << text << endl;}
    bool is_dead();
};


class Account {
public:
    string name {"dogey"};
    double balance{0.0};
    //Methods

    bool deposit(double bal) {balance += bal; cout << "In deposit" << endl; return true;}
    bool withdraw(double bal) {balance -= bal; cout << "In withdraw" << endl; return true;}
};


int main () {
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);



    Player frank;
    frank.name = "Frank";
    frank.health = 125;
    frank.xp = 12;
    frank.talk("Hi there");

    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 2500;
    enemy -> xp = 10;
    enemy->talk("I will destroy you!!!");
    



    return 0;
}









    // Account diego_account;
    // Account frank_account;

    // Player hero;
    // Player players[] {frank, hero};
    // vector <Player> player_vec {frank};
    // player_vec.push_back(hero);
    // Player *enemy {nullptr};
    // enemy = new Player;
    // delete enemy;
