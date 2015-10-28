#include "Istriangle.h"
#include <string>

using namespace std;

string determineTriangleType(int a, int b, int c){
    bool flagA = false;
    bool flagB = false;
    bool flagC = false;
    
    if((a < 1) || (a > 200))
        flagA = true;
    if((b < 1) || (b > 200))
        flagB = true;
    if((c < 1) || (c > 200))
        flagC = true;
    
    if(flagA&&flagB&&flagC)
        return "Value of a,b,c is not in the range of permitted values";
    else if(flagA&&flagB)
        return "Value of a,b is not in the range of permitted values";
    else if(flagA&&flagC)
        return "Value of a,c is not in the range of permitted values";
    else if(flagB&&flagC)
        return "Value of b,c is not in the range of permitted values";
    else if(flagA)
        return "Value of a is not in the range of permitted values";
    else if(flagB)
        return "Value of b is not in the range of permitted values";
    else if(flagC)
        return "Value of c is not in the range of permitted values";
    
    if((a >= b + c)||(b >= a + c)||(c >= a + b))
        return "Not a triangle";
				
    if((a == b)&&(b == c))
        return "Equilateral";
    else if((a == b)&&(a != c))
        return "Isosceles";
    else if((a == c)&&(a != b))
        return "Isosceles";
    else if((b == c)&&(b != a))
        return "Isosceles";
    else
        return "Scalence";	
}

