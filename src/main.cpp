#include "myUtil.h"

void make_label(string filename, int num) {
  ofstream outputfile;

  outputfile.open(filename, std::ios::out);
  if(!outputfile) {
    cout << "[ERROR] cannot open. " << endl;
    exit(1);
  }

  for (int i=1; i<=num; i++) {
    outputfile << i << endl;
  }
}

int main( int argc, char** argv )	{
  if (argc != 3) {
    cout << "[Usage] ./make_label [filename] [num]" << endl;
    return 0;
  }
  string filename = argv[1];
  int num = atoi(argv[2]);

  make_label(filename, num);

  cout << "End." << endl;
  return 0;
}
