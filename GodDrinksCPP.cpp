#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <cmath>
using namespace std;

/*
    world.execute(me) in C++
*/
class World; // forward declaration (requestExecution requires a World object so have to define World outside first)
class Thing {
    private:
        // initial parameters
        string thing_name;
        int whatever_num1;
        bool whatever_bool1;
        int whatever_num2;
        bool whatever_bool2;

        // song parameters
        tuple<unsigned int, unsigned int, unsigned int> thing_dimensions = make_tuple(1,2,3); 
        unsigned int thing_circumference;
        vector<map<string, double>> thing_actions;
        int thing_limit = 4;
        string thing_current = "DC";
        bool thing_cansee = true;
        vector<string> thing_feelings;
        unsigned int thing_simulations_available = 420;
        unsigned int thing_simulations_needed = 69;
        bool thing_satisfaction = true;
        unsigned int thing_nutrients = 7;

        // support parameters
        float thing_x_position = 0.69f;
        int thing_year = 2023;
        bool thing_locked = false;
    public:
        // functions
        void Lovable(string name, int int1, bool bool1, int int2, bool bool2) {
            thing_name = name;
            whatever_num1 = int1;
            whatever_bool1 = bool1;
            whatever_num2 = int2;
            whatever_bool2 = bool2;
        }

        tuple<unsigned int, unsigned int, unsigned int> getDimensions() {
            return thing_dimensions;
        }

        void setDimensions(tuple<unsigned int, unsigned int, unsigned int> dimensions) {
            thing_dimensions = dimensions;
        }

        unsigned int getCircumference() {
            return thing_circumference;
        }

        void setCircumference(unsigned int circumference) {
            thing_circumference = circumference;
        }

        void addAction(string name, double where) {
            map<string, double> action_packet;
            action_packet[name] = where;
            thing_actions.push_back(action_packet);
        }

        float getXPosition() {
            return thing_x_position;
        }

        float getTangent(float x_pos) {
            return tanf(x_pos);
        }

        int getLimit() {
            return thing_limit;
        }

        void setLimit(int limit) {
            thing_limit = limit;
        }

        void toggleCurrent() {
            if (thing_current == "DC") {
                thing_current = "AC";
            } else {
                thing_current = "DC";
            }
        }

        void canSee(bool status) { // cursed code incoming
            if (thing_cansee != status) {
                thing_cansee = !status;
            } else {
                thing_cansee = status;
            }
        }
        
        void addFeeling(string feeling) {
            thing_feelings.push_back(feeling);
        }
        
        unsigned int getNumSimulationsAvailable() {
            return thing_simulations_available;
        }

        unsigned int getNumSimulationsNeeded() {
            return thing_simulations_needed;
        }

        bool getSatisfaction() {
            return thing_satisfaction;
        }

        void setSatisfaction(bool satisfaction) {
            thing_satisfaction = satisfaction;
        }

        int getFeelingIndex(string search_feeling) {
            for (int i = 0; i < thing_feelings.size(); i++) {
                if (search_feeling == thing_feelings.at(i)) {
                    return 0;
                } 
            }
            return -1;
        }

        void requestExecution(World world); // World object does not exist early in this code

        unsigned int getNutrients() {
            return thing_nutrients;
        }

        void setNutrients(unsigned int nutrients) {
            thing_nutrients = nutrients;
        }

        // support functions (not explicitly referenced in the song)
        string getName() {
            return thing_name;
        }

        void timeTravel(int year) {
            thing_year = year;
        }

        void setLocked(bool state) {
            if (thing_locked != state) {
                thing_locked = !state;
            } else {
                thing_locked = state;
            }
        }
};

class World {
    private:
        // initial parameters
        int world_num;
        vector<Thing> world_characters;
        
        // song parameters
        int world_year = 2023;
        vector<Thing> world_locked_characters;

        // support parameters
        vector<map<string, string>> world_couples;
        string world_executor = "amogus";
        string world_next_executor = "amogus";
    public:
        // functions
        void World_set(int num) {
            world_num = num;
        }

        void addThing(Thing thing) {
            world_characters.push_back(thing);
        }

        void startSimulation() {
            cout << "Simulation started." << endl;
        }

        void timeTravelForTwo(string common_era, unsigned int year, Thing* thing1, Thing* thing2) {
            int numerical_year;
            if (common_era == "AD") {
                numerical_year = 1 * year;
            } else {
                numerical_year = -1 * year;
            }
            world_year = numerical_year;
            thing1->timeTravel(numerical_year);
            thing2->timeTravel(numerical_year);
        }

        void unite(Thing thing1, Thing thing2) {
            map<string, string> couple;
            couple[thing1.getName()] = thing2.getName();
            world_couples.push_back(couple);
        }

        // support functions
        void setNextExecutor(string name) {
            world_next_executor = name;
            cout << "Switched next world executor to " << name << "." << endl;
        }

        void lockThing(Thing thing) {
            thing.setLocked(true);
            world_locked_characters.push_back(thing);
        }
};

// proper definition of requestExecution
void Thing::requestExecution(World world) {
    cout << "World executor change requested" << endl;
    world.setNextExecutor(thing_name);
}

bool compare_instance(Thing* thing1, Thing* thing2) {
    if (thing1->getName() == thing2->getName()) {
        return true;
    } else {
        return false;
    }
}

void GodDrinksCPP_actual(Thing* PointSet, Thing* Circle, Thing* SineWave, Thing* Sequence, Thing* EggPlant) {
    Thing me;
    me.Lovable("Me",0,true,-1,false);
    Thing you;
    you.Lovable("You",0,false,-1,false);

    World world;
    world.World_set(5);
    world.addThing(me);
    world.addThing(you);
    world.startSimulation();

    // instanceof comparator -> compare_instance() function
    if (compare_instance(&me,PointSet)) {
        you.setDimensions(me.getDimensions());
    }

    if (compare_instance(&me, Circle)) {
        you.setCircumference(me.getCircumference());
    }

    if (compare_instance(&me, SineWave)) {
        you.addAction("sit",me.getTangent(you.getXPosition()));
    }

    if (compare_instance(&me, Sequence)) {
        you.setLimit(me.getLimit());
    }

    me.toggleCurrent();
    me.canSee(false);
    me.addFeeling("dizzy");

    world.timeTravelForTwo("AD",617,&me,&you);
    world.timeTravelForTwo("BC",3691,&me,&you);

    world.unite(me, you);
    
    if (me.getNumSimulationsAvailable() >= you.getNumSimulationsNeeded()) {
        you.setSatisfaction(me.getSatisfaction()); // toSatisfaction() is similar to getSatisfaction() in this context
    }

    if (me.getFeelingIndex("happy") != -1) {
        me.requestExecution(world);
    }

    world.lockThing(me);
    world.lockThing(you);

    if (compare_instance(&me, EggPlant)) {
        you.setNutrients(me.getNutrients());
    }
}

void GodDrinksCPP() {
    Thing PointSet, Circle, SineWave, Sequence, EggPlant;
    PointSet.Lovable("PointSet",0,true,0,true);
    Circle.Lovable("Circle",0,true,0,true);
    SineWave.Lovable("SineWave",0,true,0,true);
    Sequence.Lovable("Sequence",0,true,0,true);
    EggPlant.Lovable("EggPlant",0,true,0,true);
    GodDrinksCPP_actual(&PointSet,&Circle,&SineWave,&Sequence,&EggPlant);
}

int main() {
    GodDrinksCPP();
    return 0;
}