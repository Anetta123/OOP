#include "trapezoid.h"
#include "rhombus.h"
#include "pentagon.h"

int main()
{
    std::cout << "press 1 for start: ";
    int xui;
    std::cin >> xui;
    if (xui) {
        char c;
        std::cout << "Press '?':\n";
        while ((c = getchar()) != EOF) {
            if (c == '?') {
                std::cout << "press t -- for trapezoid\n";
                std::cout << "press r -- for Rhombus\n";
                std::cout << "press p -- for Pentagon\n";
                std::cout << "press e -- Exit\n";
            }
            else if (c == 't') {
                std::cout << "Trapezoid \nUse coodinates. Type of points - double\n";
                Trapezoid a(std::cin);
                std::cout << "ab = " << a.len_ab << " bc = " << a.len_bc << " cd = " << a.len_cd << " da = " << a.len_da << std::endl; 
                std::cout << "Area = " << a.Area() << std::endl;
                std::cout << "Vertex Number = " << a.VertexesNumber() << std::endl;
                a.Print(std::cout);  
                std::cout << "Please click another button\n";          
            }
            else if (c == 'r') {
                std::cout << "Rhombus Mode...\nUse coodinates. Type of points - double\n";
                Rhombus b(std::cin);
                std::cout << "a = " << b.len_a << " d1 (AC) = " << b.d_ac << " d2 (BD) = " << b.d_bd << std::endl; 
                std::cout << "Area = " << b.Area() << std::endl;
                std::cout << "Vertex Number = " << b.VertexesNumber() << std::endl;
                b.Print(std::cout);
                std::cout << "Please click another button\n";  
            }
            else if (c == 'p') {
                Pentagon c(std::cin);
                std::cout << "ab = "  << c.len_ab 
                          << " bc = " << c.len_bc
                          << " cd = " << c.len_cd 
                          << " de = " << c.len_de 
                          << " ea = " << c.len_ea 
                          << " d1 (AC) = " << c.d_ac 
                          << " d2 (CE) = " << c.d_ce 
                          << std::endl; 
                std::cout << "Area = " << c.Area() << std::endl;
                std::cout << "Vertex Number = " << c.VertexesNumber() << std::endl;
                c.Print(std::cout);
                std::cout << "Please click another button\n";  
            }
            else if (c == 'e') {
                std::cout << "End" << std::endl;
                return 0;
            }
            else if (!(c == 't' || c == 'r' || c == 'p' || c == '?') && (c != ' ' && c != '\n' && c != '\t')) {
                std::cout << "try again\n";
            }
        }
    }
    return 0;
}
