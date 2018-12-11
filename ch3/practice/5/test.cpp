#include <iostream>
#include <Eigen/Eigen>
using namespace std;
using namespace Eigen;
int main(int argc, char** argv)
{
MatrixXd m = MatrixXd::Identity(10,10);
cout<<"m = \n"<<m<<endl;


Matrix3d out = m.block(0,0,3,3);
out(1,2) = 3;
cout<<"out = \n"<<out<<endl;



return 0;
}
