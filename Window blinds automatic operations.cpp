#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int currentUVIndex;

int percentageWindowBlindIsOpen (int upperLim, int LowerLim, int percentCloseBlinds)
{
    if (currentUVIndex >= LowerLim || currentUVIndex <= upperLim)
        return percentCloseBlinds;
    return 0;
}

void customWindowBlindsSettings(int roomNumber)
{
    cout<<"Please choose the UV index range and how much you'd like to open/close the window blinds accordingly: "<<endl;
    int UVUpperLim, UVLowerLim;
    cin>>UVUpperLim>>UVLowerLim;
    
    int percentCloseBlinds;
    cin>>percentCloseBlinds;
    percentageWindowBlindIsOpen (UVUpperLim, UVLowerLim, percentCloseBlinds);
}

void blindsLocation()
{
    cout<<"There are blinds located at each of the following rooms: \n 1. Kitchen \n 2. Living Room \n 3. Bedroom 1 \n 4. Bedroom 2 \n 5. Bathroom \n 6. Dining "<<endl;
    cout<<"Which room would you like to adjust the automatic blinds settings for?"<<endl;
    int roomNum;
    cin>>roomNum;
    customWindowBlindsSettings(roomNum);
}

int main()
{
    currentUVIndex = rand () % 11;
    cout<<"First choosing the blinds location whose settings the user wishes to adjust: "<<endl;
    blindsLocation();
    cout<<"Current UV Index is: " << currentUVIndex<<", automatically opening/closing the blinds ";
}
