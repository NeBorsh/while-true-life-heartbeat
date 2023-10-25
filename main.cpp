#include <iostream>
#include <thread>

using namespace std;

void life() {
  while (true) {
    cout << ":3" << endl;
    this_thread::sleep_for(chrono::seconds(1));
  }
}

void heartbeat() {
  while (true) {
    cout << "heartbeat" << endl;
    this_thread::sleep_for(chrono::seconds(1));
  }
}

int main() {
  thread life_thread(life);
  thread heartbeat_thread(heartbeat);

  life_thread.join();
  heartbeat_thread.join();

  return 0;
}
