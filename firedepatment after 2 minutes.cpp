

#include <iostream>
#include <chrono>
#include<thread>

using namespace std;
string firedepartmntalarm(string response) {
    if (response.empty()) {

       return "call ";

    }
    else if (response == "ok") {
      return  "cancel";

    }

}
int main() {
    

    string response;
    cout << "put your response within 1 minute"<<endl;
    cin >> response;



string x= firedepartmntalarm(response);
    
    


    if (x == "call")
        cout << "fire department called";
    else if (x == "cancel")
        cout << "user responded";


    return 0;


    this_thread::sleep_for(chrono::seconds(60));

    


}


