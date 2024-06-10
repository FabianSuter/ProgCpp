class Subexample : public Uppclass{
    virtual ~Subexample(); // Correct Dtor
    virtual void newMethod(); //gets overriden when inherited
    void oldVirtualMethod();//still Virtual
    void getsOverridden() override;// overrides method in uppclass
    virtual void iAmPerfect() final;//cant be overridden
};
void Subexample::newMethod(){
    Uppclass::aMethodfromUpclass();
    //calls a class from a class higher in the chain
}