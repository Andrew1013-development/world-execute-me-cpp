#include <tuple>
#include <vector>
#include <string>
#include <map>
#include <queue>

namespace GodDrinksCPP {
    //forward declaration (again)
    class Thing;
    class World;
    
    class Thing {
        private:
            std::string thing_name;
            int whatever_num1;
            bool whatever_bool1;
            int whatever_num2;
            bool whatever_bool2;
            std::tuple<unsigned int, unsigned int, unsigned int> thing_dimensions;
            unsigned int thing_circumference;
            std::vector<std::map<std::string, double>> thing_actions;
            int thing_limit;
            std::string thing_current;
            bool thing_cansee = true;
            std::vector<std::string> thing_feelings;
            unsigned int thing_simulations_available;
            unsigned int thing_simulations_needed;
            bool thing_satisfaction;
            unsigned int thing_nutrients;
            unsigned int thing_antioxidiants;
            bool thing_proof;
            char thing_gender;
            char thing_bdsm_role;
            bool thing_high = false;
            std::vector<std::string> thing_sensings;
            std::queue<std::tuple<std::string, bool, bool>> thing_memories;
            std::vector<std::tuple<std::string, bool>> thing_opinions;
            std::string thing_execution;
            float thing_x_position;
            int thing_year;
            bool thing_locked = false;
        public:
            void Lovable(std::string name, int int1, bool bool1, int int2, bool bool2);
            std::tuple<unsigned int, unsigned int, unsigned int> getDimensions();
            void setDimensions(std::tuple<unsigned int, unsigned int, unsigned int> dimensions);
            unsigned int getCircumference();
            void setCircumference(unsigned int circumference);
            void addAction(std::string name, double where);
            float getXPosition();
            float getTangent(float x_pos);
            int getLimit();
            void setLimit(int limit);
            void toggleCurrent();
            void canSee(bool status);
            void addFeeling(std::string feeling);
            unsigned int getNumSimulationsAvailable();
            unsigned int getNumSimulationsNeeded();
            bool getSatisfaction();
            void setSatisfaction(bool satisfaction);
            int getFeelingIndex(std::string search_feeling);
            void requestExecution(World world);
            unsigned int getNutrients();
            void setNutrients(unsigned int nutrients);
            void resetNutrients();
            unsigned int getAntiOxidiants();
            void setAntiOxidiants(unsigned int antioxidiants);
            void resetAntiOxidiants();
            void purr();
            void setLocked(bool state);
            bool getProof();
            void setProof(bool proof);
            void toggleGender();
            void toggleRoleBDSM();
            bool getSenseIndex(std::string sense);
            std::tuple<std::string, bool, bool> getMemory();
            bool lookFor(Thing thing, World world);
            void removeFeeling(std::string feeling);
            std::string getOpinionIndex(std::string opinion);
            void setOpinion(std::string opinion, bool belief);
            std::string getExecution();
            void setExecution(std::string execution);
            void escapeWorld(World world);
            void takeExamTopic(std::string topic);
            void getAlgebraicExpression(std::string topic);
            std::string getName();
            void timeTravel(int year);
            void setHigh(bool high);
            void escapeTopic(std::string topic);
    };
    class World {
        private:
            int world_num;
            std::vector<Thing> world_characters;
            int world_year = 2023;
            std::vector<Thing> world_locked_characters;
            std::string world_god;
            std::vector<std::map<std::string, std::string>> world_couples;
            std::string world_executor;
            std::string world_next_executor;
            bool world_in_execution;
        public:
            void World_set(int num);
            void addThing(Thing thing);
            void startSimulation();
            void timeTravelForTwo(std::string common_era, unsigned int year, Thing* thing1, Thing* thing2);
            void unite(Thing thing1, Thing thing2);
            std::string getGod();
            void setGod(std::string god);
            void procreate(Thing thing1, Thing thing2);
            void makeHigh(Thing thing);
            void lockThing(Thing thing);
            void removeThing(Thing thing);
            void unlockThing(Thing thing);
            void announce(std::string text, std::string locale = "en");
            bool getThing(Thing thing);
            bool isExecutableBy(Thing thing);
            void runExecution();
            void execute(Thing thing);
            void setNextExecutor(std::string name);
            std::vector<Thing> getThings();
    };
    bool compare_instance(Thing* thing1, Thing* thing2);
    bool isErasable(std::tuple<std::string, bool, bool> memory_packet);
}