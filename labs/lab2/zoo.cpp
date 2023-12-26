#include <iostream>
#include <string>
using namespace std;

class animal
{
    public:
        string species;
        string name;

        void intro() 
        {
            cout << "It is a " << species << ". His name is " << name << "."<< endl;
        };
        void feed()
        {
            cout << "You attempt giving food to " << name << " the " << species << "." << endl;  
        };
        void play() 
        {
            cout << "You reach out to "<< name <<" the " << species <<" inviting him to play with you." << endl;
        };
};

class Turtles: public animal
{
    public:
        void actions()
        {
            cout << "You can: 1.Feed. 2.Play. 3.Attack. 4.Animal Select" << endl;
        }

        void attack()
        {
            cout << "You attacked "<< name << " the Turtle." << endl;
        }

        void reaction(int action)
        {
        if (action == 1)
        {
            feed();
            cout << name << " eats slowly, but surely." << endl;
        }
        else if (action == 2)
        {
            play();
            cout << name << " tries to crawl to you. However you got tired waiting." << endl;
        }
        else if (action == 3)
        {
            attack();
            cout << name << " hides inside his shell." << endl;
        }      
        else if (action == 4)
        {
            cout << "You walk away from the cage." << endl;
        }
        else
        {
            cout << "Invalid action." << endl;
        }
        }
            
};

class Crabs: public animal
{
    public:
        void actions()
        {
            cout << "You can: 1.Feed. 2.Play. 3.Threaten. 4.Animal Select." << endl;
        }

        void threaten()
        {
            cout << "You threatened "<< name << " the Crab." << endl;
        }

        void reaction(int action)
        {
        if (action == 1)
        {
            feed();
            cout << name << " the Crab grabs food with his claws and proceeds to devour it." << endl; 
        }
        else if (action == 2)
        {
            play();
            cout << name << " pinches your finger. Seems like he is having fun." << endl;
        }
        else if (action == 3)
        {
            threaten();
            cout << name << " pulls out a knife. You back off." << endl;
        }      
        else if (action == 4)
        {
            cout << "You walk away from the cage." << endl;
        }
        else
        {
            cout << "Invalid action." << endl;
        }
        }
            
};

class Hyenas: public animal
{
    public:
        void actions()
        {
            cout << "You can: 1.Feed. 2.Play. 3.Tell a joke. 4.Animal Select." << endl;
        }

        void joke()
        {
            cout << "You told "<< name << " the Hyena a joke." << endl;
        }

        void reaction(int action)
        {
        if (action == 1)
        {
            feed();
            cout << name << " is a greedy eater. Meal is gone in no time." << endl; 
        }
        else if (action == 2)
        {
            play();
            cout << name << " ignores your childish behavior." << endl;
        }
        else if (action == 3)
        {
            joke();
            cout << name << " the Hyena laughed at whatever u told him." << endl;
        }      
        else if (action == 4)
        {
            cout << "You walk away from the cage." << endl;
        }
        else
        {
            cout << "Invalid action." << endl;
        }
        }
            
};

int main()
{
    int action;
    int animal;
    action = 0;
    Turtles turto;
    turto.name="Turto";
    turto.species="Turtle";
    Crabs krabs;
    krabs.name="Krabs";
    krabs.species="Crab";
    Hyenas jeff;
    jeff.name="Jeff";
    jeff.species="Hyena";

    while (animal != 0)
    {
        cout << "Welcome to the ZOO!" << endl <<
                "1. Go see Turtles" << endl <<
                "2. Go see Crabs" << endl <<
                "3. Go see Hyenas" << endl <<
                "0. I WANT THIS TO END" <<endl;
        cin >> animal;

        if (animal == 1)
        {
            turto.intro();
            while (action != 4)
            {
                turto.actions();
                cin >> action; 
                turto.reaction(action);
            }
        }
                
        else if (animal == 2)
        {
            krabs.intro();
            while (action != 4)
            {
                krabs.actions();
                cin >> action;
                krabs.reaction(action);
            }
        }

        else if (animal == 3)
        {
            jeff.intro();
            while (action != 4)
            {
                jeff.actions();
                cin >> action;
                jeff.reaction(action);
            }
        }
        else if (animal == 0)
        {
            break;
        }
        else
        {
            cout << "Invalid action." << endl;
        }
        action = 0;        
    }
}