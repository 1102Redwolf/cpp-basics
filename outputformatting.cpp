#include <iostream>
#include <iomanip> // for std::setw
using namespace std;
int main() {
    // std::endl : is used to insert a new line and flush the output buffer
    
    cout<<"hello"<<endl;
    cout<<"world"<<endl;

    cout<<"hello \n";
    cout<<"world \n";








    //std::flush : is used to flush the output buffer

    cout<< "this is a nice messege..."<<endl<<flush;







    
    // std::setw() : Adjusts the field width for the item about to be printed.

    cout << setw(10) << "hello" << setw(10) << "world" << endl;
    cout << "hello" << "world" << endl;
    cout << endl;

    cout << "Unformatted table : " << std::endl;

    cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
    cout << "Stanley" <<" "  << "Woods" << " 33" << std::endl;
    cout << "Jordan" << " "  << "Parker" << " 45" << std::endl;
    cout << "Joe" << " " << "Ball" << " 21" << std::endl;
    cout << "Josh" << " " << "Carr" << " 27" << std::endl;
    cout << "Izaiah" << " " << "Robinson" << " 29" << std::endl;
    cout << std::endl;
       
    cout << "Formatted table : " << std::endl;
        
    cout << std::setw(10) <<  "Lastname"  << std::setw(10) << "Firstname" << std::setw(5) << "Age" << std::endl;
    cout << std::setw(10) << "Daniel"  << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
    cout << std::setw(10) << "Stanley" << std::setw(10)  << "Woods" << std::setw(5) <<  "33" << std::endl;
    cout << std::setw(10) <<  "Jordan" << std::setw(10)  << "Parker" << std::setw(5) << "45" << std::endl;
    cout << std::setw(10) <<  "Joe" << std::setw(10) << "Ball" << std::setw(5) << "21" << std::endl;
    cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) <<"27" << std::endl;
    cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << "29" << std::endl;
    cout << std::endl;

    cout << "Formatted table with variables: " << std::endl;
    
    int col_width{20};
    cout << left;  // by default data is justified to the right
    cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
    cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << std::endl;
    cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << std::endl;
    cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << std::endl;
    cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << std::endl;
    cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << std::endl;

   
    cout << std::endl;
    cout << "Internal justified : " << std::endl;  //Internal justified : sign is left justified , data is right justified
    cout << std::left;
    cout << std::setw(10) << -123.45 << std::endl;
    cout << std::internal;
    cout << std::setw(10) << -123.45 << std::endl;
    cout << endl;



    cout << "Table with fill characters :  " << std::endl;

    int a = 20;
    cout << std::left;
    cout << std::setfill('*'); // The fill character
    cout << std::setw(a) <<  "Lastname"  << std::setw(a) << "Firstname" << std::setw(a/2) << "Age" << std::endl;
    cout << std::setw(a) << "Daniel"  << std::setw(a) << "Gray" << std::setw(a/2) << "25" << std::endl;
    cout << std::setw(a) << "Stanley" << std::setw(a)  << "Woods" << std::setw(a/2) <<  "33" << std::endl;
    cout << std::setw(a) <<  "Jordan" << std::setw(a)  << "Parker" << std::setw(a/2) << "45" << std::endl;
    cout << std::setw(a) <<  "Joe" << std::setw(a) << "Ball" << std::setw(a/2) << "21" << std::endl;
    cout << std::setw(a) << "Josh" << std::setw(a) << "Carr" << std::setw(a/2) <<"27" << std::endl;
    cout << std::setw(a) << "Izaiah" << std::setw(a) << "Robinson" << std::setw(a/2) << "29" << std::endl;
    cout << endl;






// boolalpha and noboolalpha : control bool output format : 1/0 or true/false

    bool C1 {true};
    bool C2 {false};

    cout << "C1: " << C1 << endl;
    cout << "C2: " << C2 << endl;

    cout << endl;
    cout << boolalpha;
    cout << "C1: " << C1 << endl;
    cout << "C2: " << C2 << endl;

    cout << noboolalpha;
    cout << "C1: " << C1 << endl;
    cout << "C2: " << C2 << endl;
    cout << endl;








     //showpos and noshowpos : show or hide the +  sign for positive numbers
        
    int pos_num {34};
    int neg_num {-45};
        
    cout << "pos_num : " << pos_num << std::endl;
    cout << "neg_num : " << neg_num << std::endl;
        
    cout << std::endl;
    cout << std::showpos;
    cout << "pos_num : " << pos_num << std::endl;
    cout << "neg_num : " << neg_num << std::endl;

    cout << std::endl;
    cout << std::noshowpos;
    cout << "pos_num : " << pos_num << std::endl;
    cout << "neg_num : " << neg_num << std::endl;
    cout << std::endl;








  //different number systems : std::dec, std::hex, std::oct
     
     int pos_int {717171};
     int neg_int {-47347};
     double double_var {498.32};
     
     std::cout << std::endl;
     std::cout << "default base format : " << std::endl;
     std::cout << "pos_int : " << pos_int << std::endl;
     std::cout << "neg_int : " << neg_int << std::endl;
     std::cout << "double_var : " << double_var << std::endl;
     
     std::cout << std::endl;
     std::cout << "pos_int in different bases : " << std::endl;
     std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
     std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
     std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
     
     std::cout << std::endl;
     std::cout << "neg_int in different bases : " << std::endl;
     std::cout << "neg_int (dec) : " << std::dec << neg_int << std::endl;
     std::cout << "neg_int (hex) : " << std::hex << neg_int << std::endl;
     std::cout << "neg_int (oct) : " << std::oct << neg_int << std::endl;
     
     std::cout << std::endl;
     std::cout << "double_var in different bases : " << std::endl;
     std::cout << "double_var (dec) : " << std::dec << double_var << std::endl;
     std::cout << "double_var (hex) : " << std::hex << double_var << std::endl;
     std::cout << "double_var (oct) : " << std::oct << double_var << std::endl;
    std::cout << std::endl;
}
