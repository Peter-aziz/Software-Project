#include<iostream>
#include<chrono>
#include<thread>
using namespace std;







int main() {
	
	auto seconds = 120s;
	string response;
	cout << "respond with 2 minutes" << endl;

	this_thread::sleep_for(seconds);
	auto start = chrono::steady_clock::now();
	while (true) {
	
		if (chrono::steady_clock::now() - start == chrono::seconds(seconds)) {


			cout << "fire department called";
			break;
		}
		else if (cin >> response) {
			if (response == "ok") {
				cout << "no action needed";
			}
		}
	}
		//int durationSeconds = 50;
	//string response;



	//auto start = chrono::steady_clock::now();

	//this_thread::sleep_for(chrono::seconds(durationSeconds));

	//auto end = chrono::steady_clock::now();

	//chrono::duration<double> elapsedSeconds = end - start;

	//
	////cout << "Timer expired after " << elapsedSeconds.count() << " seconds." << endl;


	//if (elapsedSeconds.count() < 50) {
	//	cout << "respond with 2 minutes" << endl;
	//	cin >> response;
	//	if (response == "ok") {
	//		cout<< "no action needed";
	//	}
	//}
	//else

	//	cout << "fire department called";


	} 
	
