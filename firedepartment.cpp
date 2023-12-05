#include<iostream>
#include<chrono>
#include<thread>
using namespace std;







int main() {
	
	auto seconds = 60s;
	string response;
	cout << "respond within 1 minute" << endl;

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
	
