#include <tuple>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <iostream>
#include <cmath>
#include <algorithm>
#include "GodDrinksCPP_src.hpp"
using namespace std;
using namespace GodDrinksCPP;
#define author monocashew

/*
    world.execute(me) in C++ (with some modifications)
*/

void GodDrinksCPP_func(Thing* PointSet, Thing* Circle, Thing* SineWave, Thing* Sequence, Thing* EggPlant, Thing* Tomato, Thing* TabbyCat) {
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
    
    cout << "hamham" << endl;
    if (me.getNumSimulationsAvailable() >= you.getNumSimulationsNeeded()) {
        you.setSatisfaction(me.getSatisfaction());
    }

    if (me.getFeelingIndex("happy") != -1) {
        me.requestExecution(world);
    }

    world.lockThing(me);
    world.lockThing(you);

    if (compare_instance(&me, EggPlant)) {
        you.setNutrients(me.getNutrients());
        me.resetNutrients();
    }

    if (compare_instance(&me, Tomato)) {
        you.setAntiOxidiants(me.getAntiOxidiants());
        me.resetAntiOxidiants();
    }

    if (compare_instance(&me, TabbyCat)) {
        me.purr();
    }

    if (world.getGod() == "me") {
        me.setProof(you.getProof());
    }

    me.toggleGender();
    world.procreate(me,you);
    me.toggleRoleBDSM();
    world.makeHigh(me);
    world.makeHigh(you);

    if (me.getSenseIndex("vibration")) {
        me.addFeeling("complete");
    }
    
    world.unlockThing(you); 
    world.removeThing(you);
    me.lookFor(you,world);
    me.lookFor(you,world);
    me.lookFor(you,world);
    me.lookFor(you,world);
    me.lookFor(you,world);

    if (isErasable(me.getMemory())) {
        me.removeFeeling("disheartened");
    }

    try {
        me.setOpinion(me.getOpinionIndex("you are here"), false);
        throw false;
    } catch (bool god_verdict) {
        world.announce("God is always true",""); //no specified locales on song's lyrics
    }

    world.runExecution();
    world.runExecution();
    world.runExecution();
    world.runExecution();
    world.runExecution();
    world.runExecution();
    world.runExecution();
    world.runExecution();
    world.runExecution();
    world.runExecution();
    world.runExecution();
    world.runExecution();

    world.announce("1", "de");
    world.announce("2", "es");
    world.announce("3", "fr");
    world.announce("4", "kr");
    world.announce("5", "se");
    world.announce("6", "cn");
    
    world.runExecution();

    if (world.isExecutableBy(me)) {
        you.setExecution(me.getExecution());
    }

    if (world.getThing(me) != -1) {
        world.runExecution();
    }

    me.escapeWorld(world);

    me.takeExamTopic("love");
    me.takeExamTopic("love");
    me.getAlgebraicExpression("love");
    me.escapeTopic("love");

    world.execute(me);
}

void GodDrinksCPP_wrapper() {
    Thing PointSet, Circle, SineWave, Sequence, EggPlant, Tomato, TabbyCat;
    World world;
    PointSet.Lovable("Me",0,true,0,true);
    Circle.Lovable("Me",0,true,0,true);
    SineWave.Lovable("Me",0,true,0,true);
    Sequence.Lovable("Me",0,true,0,true);
    EggPlant.Lovable("Me",0,true,0,true);
    Tomato.Lovable("Me",0,true,0,true);
    TabbyCat.Lovable("Me",0,true,0,true);
    GodDrinksCPP_func(&PointSet,&Circle,&SineWave,&Sequence,&EggPlant,&Tomato,&TabbyCat);
    cout << endl;
    cout << "Size of Thing object: " << sizeof(PointSet) << " bytes." << endl;
    cout << "Size of World object: " << sizeof(world) << " bytes." << endl;
}

int main() {
    GodDrinksCPP_wrapper();
    return 0;
}