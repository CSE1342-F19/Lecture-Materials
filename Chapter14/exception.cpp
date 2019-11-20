#include <iostream>
// #include <exception>
#include <vector>
#include <stdexcept>

using namespace std;

int main() {
  // vector<int> integers;
  //   cout << "Access: " << integers.at(1);
  try { 
    cout << "Starting Program..." << endl;
    vector<int> integers;
    cout << "Access: " << integers.at(1);

    cout << "Continue..." << endl;
  } catch (std::out_of_range& e) {
    cout << e.what() << endl;
  } catch (int &error) {
    cout << "Error Code: " << error << endl;
  } catch (...) {
    cout << "An Error Occured" << endl;
  }

  return 0;
}