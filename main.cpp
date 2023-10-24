#include <iostream>
#include <thread>

using namespace std;

void life() {
  while (true) {
    cout << ":3" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
}

void heartbeat() {
  while (true) {
    cout << "heartbeat" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
}

int main() {
  thread life_thread(life);
  thread heartbeat_thread(heartbeat);

  life_thread.join();
  heartbeat_thread.join();

  return 0;
}
