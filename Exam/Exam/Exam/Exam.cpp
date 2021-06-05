
#include <iostream>
#include <map>
using namespace std;

class Human {
private:
    double height; // height of Human in meters
    double weight; // weight of Human in kilograms
public:
    Human(); // constructor with no arguments
    Human(double heightValue, double weightValue);
    // constructor with arguments height and weight
    double BMI() const;
    // constant function that calculates the BMI. FORMULA: weight / (height * height)
        void setAttibutes(double heightValue, double weightAtrribute);
    // function to set attributes
    double getheight(); // gets the value of the height
    double getweight(); // gets the value of the weight
    ~Human(); // class destructor
    bool operator >(const Human& obj) const;
    // overloading operator > to work with class Human comparing their BMI values
        friend ostream& operator <<(ostream& o, Human& r);
    //out stream
    Human(Human& r); // copy constructor

    Human& operator=(Human const& other)
    {

        this->height = other.getheight();
        this->age = other.getweight();  
        return *this;
    }
};

Human::Human(Human &r)
// implementation of the copy constructor
{
    this->height = r.getweight();
    this->weight = r.getheight();
}

Human::operator<<(ostream& o, Human& r) {



Human::Human() {

}

Human::Human(double heightValue, double weightValue) {
    this->height = heightValue;
    this->weight = weightValue;

}

double Human::BMI() const {
    double bmi = this->weight / (this->height * this->weight);

    return bmi;

}

void Human::setAttibutes(double heightValue, double weightAtrribute) {

    this->height = heightValue;
    this->weight = weightAtrribute;

}



int main()
{
    double maxHeight = 200;
    double maxWeight = 140;

    double minHeight = 100;
    double minWeight = 40;
    Human array[3];

    array[0] = Human((double)(rand() % (int)(maxHeight - minHeight + 1) + minHeight), (double)(rand() % (int)(maxWeight - minWeight + 1) + minWeight));
    array[1] = Human((double)(rand() % (int)(maxHeight - minHeight + 1) + minHeight), (double)(rand() % (int)(maxWeight - minWeight + 1) + minWeight));
    array[2] = Human((double)(rand() % (int)(maxHeight - minHeight + 1) + minHeight), (double)(rand() % (int)(maxWeight - minWeight + 1) + minWeight));


    multimap<string, double> map;

    for (Human h : array) {
        double bmi = h.BMI();
        string bmiType;
        if (bmi < 18.5) {
            bmiType = "Malnourished";
        }
        else if (bmi > 25) {
            bmiType = "Obese";
        }
        else {
            bmiType = "Normal";
        }
        map.insert(pair<string, int>(bmiType, bmi));
    }

    sort(array.begin(), array.end(), greater<Human>());
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << endl;
    }
}







}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

