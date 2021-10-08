void setup(){
    // Write code that's executed once here.
    Serial.println("Hello Arduino");
}

void loop(){
    // Write code that should keep executing in an infinite while loop here.
    Serial.println("Keep checking for new messages");
}


int LED_BUILTIN = 2;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}


char str[] = "Geeks";
char str[6] = "Geeks";
char str[] = {'G', 'e', 'e', 'k', 's', '\0'};
char str[6] = {'G', 'e', 'e', 'k', 's', '\0'};

char* str = "Geeks";
const char* str = "Geeks";

String stringOne = "Hello String";                    // using a constant String
String stringOne = String('a');                       // converting a constant char into a String
String stringTwo = String("This is a string");        // converting a constant string into a String object
String stringOne = String(stringTwo + " with more");  // concatenating two strings
String stringOne = String(13);                        // using a constant integer
String stringOne = String(45, HEX);                   // using an int and a base (hexadecimal)
String stringOne = String(255, BIN);                  // using an int and a base (binary)
String stringOne = String(5.698, 3);                  // using a float and the decimal places

// ** JavaScript **
let arr = ["arihant", 1, false, "COOL"]

// ** C++ **
// Declare array
int a1[10]; 
char a1[20];

// Declare and Initialize array
int a1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// altering array elements
a1[5] = 20;
// We cannot add or remove elements from a static array.
// a1.push(10); delete a1[5]; - cant do these. 


// Vectors
#include <vector.h>
std::vector<int> v1; // Not giveing any size information here. 

// Appending Items
v1.push_back(3);
v1.push_back(4);
v1.pop_back(); // removes the last element







vector<int> v;
// Append items to the vector
v.push_back(1); // Javascript - v.push(1);
v.push_back(5);

// Assign on an index.
v.emplace(1, 10); // Javascript - v[1] =  10;
// Remove last element
v.pop_back(); // Javascript - v.pop();
// Size of the array
v.size(); // Javascript - v.length;
// Iterate over array
// javascript
for(let i = 0; i < v.length; i++) {
    console.log(v[i]);
}
// C++
for (int i = 0; i < v.size(); i++){
       Serial.println(v[i]);
}
// Javascript
for(let elem of v ){
    console.log(elem);
}
// C++
for (auto& elem : arr) {
    Serial.println(elem);
}


//Other functions
std::vector<int>::iterator it = v.begin(); // refrence to starting of vector

// Javascript
let loc = {
    id: 1
    name: "Hyderabad",
    "point": {
        lat: 17.23,
        lng: 23.34
    }
};

// Structs
struct Coordinate {
    float lat, lng;
}
struct Location {
    int id;
    char* name;
    Coordinate point;
};

Location loc = {
    {1.0, 2.0}, "Arihant", 1 
}


class Location
{
    public:
        int id;
        char* name;
        float lat;
        float lng;
    void PrintLocationname(){
       Serial.println(name);
    }
};

Location loc = new Location();
loc.id = 1;


bool function executeJob(int param1){
    bool success = true;
    return success;
} 


int  var = 20;   /* actual variable declaration */
int  *ip;        /* pointer variable declaration */

ip = &var;  /* store address of var in pointer variable*/

printf(ip); // prints the address of var - bffd8b3c
printf(*ip); // prints the value stored at the address of ip - 20


struct Student { //use singular, not plural
   //...
}

// Structs pass by refrence
Student first, second; 

void PassByValue(Student who){
    //you work with a shallow copy of "who, if you changes is, actual object remains the same
}

void PassByReference(Student& who){
    // when you modify who you modify actual passed object
}

PassByValue(first); 
PassByReference(second); //no copy (faster)


#define MAX_SIZE 10
int messages[MAX_SIZE];
// When the code is compiled the compiler would treat the code as if it was written like this. 
int messages[10];

// COnfiguration file
#if HARDWARE_VERSION == 1
#define LED_PIN 2
#elif HARDWARE_VERSION == 2
#define LED_PIN 3
#endif

digitalWrite(LED_PIN, HIGH);



