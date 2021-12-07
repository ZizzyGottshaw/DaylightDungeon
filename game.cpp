#include <iostream>  
#include <stdlib.h>
#include <vector>

class Item 
{
    public:
        std::string name;;
        std::string description;
        int count;
};

class Weapon
{
    public:
};

class Enemy
{
    private:
        std::string name;
        int health = 1;
        int strength = 0;
        int defense = 0;
    public:
        Enemy(std::string self_name)
        {
            name = self_name;
        }

        std::string get_name()
        {
            return name;
        }

        int get_health()
        {
            return health;
        }

        int get_strength()
        {
            return strength;
        }

        int get_defense()
        {
            return defense;
        }

        void set_name(std::string new_name)
        {
            name = new_name;
        }

        void set_health(int new_health)
        {
            health = new_health;
        }

        void set_strength(int new_strength)
        {
            strength = new_strength;
        }

        void set_defense(int new_defense)
        {
            defense = new_defense;
        }
};

class User
{
    public:
        bool is_alive = true;
        std::string origin = NULL;
        std::string name;
        int exp_lvl = 0;
        int exp_progress = 0;
        int health = 25;
        int strength = 1;
        int defense = 5;
        bool is_blocking = false;
        bool is_searching = false;
        bool is_fighting = false;

        User(std::string self_name);

        bool get_is_alive()
        {
            return is_alive;
        }

        std::string get_origin()
        {
            return origin;
        }

        std::string get_name()
        {
            return name;
        }

        int get_exp_lvl()
        {
            return exp_lvl;
        }

        int get_exp_progress()
        {
            return exp_progress;
        }
        
        int get_health()
        {
            return health;
        }

        int get_strength()
        {
            return strength;
        }

        int get_defense()
        {
            return defense;
        }

        void set_is_alive(bool new_alive_value)
        {
            is_alive = new_alive_value;
        }

        void set_origin(std::string new_origin)
        {
            origin = new_origin;
        }

        void set_name(std::string new_name)
        {
            name = new_name;
        }

        void set_exp_lvl(int new_exp_lvl)
        {
            exp_lvl = new_exp_lvl;
        }

        void set_exp_progress(int new_exp_progress)
        {
            exp_progress = new_exp_progress;
        }

        void set_health(int new_health)
        {
            health = new_health;
        }

        void set_strength(int new_strength)
        {
            strength = new_strength;
        }

        void set_defense(int new_defense)
        {
            defense = new_defense;
        }

        void set_is_blocking(bool new_blocking_value)
        {
            is_blocking = new_blocking_value;
        }

        void set_is_searching(bool new_searching_value)
        {
            is_searching = new_searching_value;
        }

        void set_is_fighting(bool new_fighting_value)
        {
            is_fighting = new_fighting_value;
        }

};

int main() 
{
    Enemy Goomba("Jeffrey");
    Goomba.set_health(42);
    Goomba.set_strength(5);
    Goomba.set_defense(2);
    std::string talon = Goomba.get_name();
    std::cout << talon << Goomba.get_health() << Goomba.get_strength() << Goomba.get_defense();
    return 0;
}
