#include <iostream>
#include "StringPlusPlus.h"
int main() {
    char c = '1';

    //   std::cout <<"The string we have is "<< charToString(c) << std::endl;
    //   std::cout <<"The string we have is "<< boolToString(0) << std::endl;
//    std::cout <<"The string we have is array and ray so true "<< endsWith("array","ray") << std::endl;
//    std::cout <<"The string we have is array and ra so false "<< endsWith("array","ra") << std::endl;
//    std::cout <<"The string we have is array and s so false "<< endsWith("array","s") << std::endl;
//    std::cout <<"The string we have is array and s so false "<< endsWith("array",'s') << std::endl;
//    std::cout <<"The string we have is array and y so true "<< endsWith("array",'y') << std::endl;
//    std::cout <<"The string we have is array and y so false "<< startsWith("array",'y') << std::endl;
//    std::cout <<"The string we have is array and a so true "<< startsWith("array",'a') << std::endl;
//    std::cout <<"The string we have is array and ray so false "<< startsWith("array","ray") << std::endl;
//    std::cout <<"The string we have is array and ar so true "<< startsWith("array","ar") << std::endl;
//    std::cout <<"The string we have is aR 1RaY and AR 1RAY "<< equalsIgnoreCase("aR 1RaY","AR 1RAY") << std::endl;
//    std::cout <<"The string we have is array and so upper case is "<< toUpperCase("aR 1RaY") << std::endl;
//    std::cout <<"The string we have is array and so lower case is "<< toLowerCase("aR 1RaY") << std::endl;
//    std::cout <<"The string we have is /    arra  y   / and trim is "<< trim("    arra  y   ") << std::endl;
//    std::cout <<"The string we have is /    arra  y   / and trim is "<< stringReplace("hihihihihih","hi","bye") << std::endl;




    string s1 = charToString('s');
    string s2 = "Idiots";

    // Test 1 charToString
    if (s1 == "s") cout << "Test 1 Passed charToString" << endl;
    else {
        cout << "Test 1 FAILED charToString" << endl;
        cout << "String: " << s1 << endl;
    }


    // Test 2 endsWith
    if (endsWith(s2, s1) && endsWith(s2, 's')) cout << "Test 2 Passed endsWith" << endl;
    else cout << "Test 2 FAILED endsWith" << endl;

    // Test 3 startsWtih
    s2 = boolToString(true);
    s1 = "true Men";
    if (startsWith(s1, s2) && startsWith(s1, 't')) cout << "Test 3 Passed startsWith" << endl;
    else cout << "Test 3 FAILED startsWith" << endl;

    // Test 4 equalsIgnoreCase
    s2 = "FouRtY MEN";
    s1 = "fourty men";
    if (equalsIgnoreCase(s1, s2)) cout << "Test 4 equalsIgnoreCase Passed" << endl;
    else {
        cout << "Test 4 equalsIgnoreCase FAILED" << endl;
        cout << "\tstring 1: " << s1 << endl << "\tstring 2: " << s2 << endl;
    }

    // Test 5 doubleToString
    double f1 = 5.0407755;
    s1 = doubleToString(f1, 2);
    s2 = doubleToString(f1, 5);
    if (s1 == "5.04" && s2 == "5.04078") cout << "Test 5 Passed doubleToString" << endl;
    else {
        cout << "Test 5 FAILED doubleToString" << endl;
        cout << "\tString 1: " << s1 << endl;
        cout << "\tString 2: " << s2 << endl;
    }

    // Test 6 stringToDouble
    f1 = stringToDouble("5.04");
    double f2 = stringToDouble("0.00000006");
    if (f1 == 5.04 && f2 == 0.00000006) cout << "Test 6 Passed stringToDouble" << endl;
    else {
        cout << "Test 6 FAILED stringToDouble" << endl;
        cout << "\tFloat 1: " << doubleToString(f1, 2) << endl;
        cout << "\tFloat 2: " << doubleToString(f2, 8) << endl;
    }

    // Test 7 stringJoin
    vector<string> v;
    v.push_back("Five");
    v.push_back("Worlds");
    v.push_back("Apart");
    s1 = stringJoin(v, "|");
    if (s1 == "Five|Worlds|Apart") cout << "Test 7 Passed stringJoin" << endl;
    else cout << "Test 7 FAILED stringJoin" << endl;
    v.clear();

    // Test 8 stringSplit
    s1 = "Ten|Men|and|women";
    s2 = "seven|days|";
    v.push_back("Ten");
    v.push_back("Men");
    v.push_back("and");
    v.push_back("women");
    vector<string> v2;
    v2.push_back("seven");
    v2.push_back("days");

    if (v == stringSplit(s1, "|") && stringSplit(s2, "|") == v2) cout << "Test 8 Passed stringSplit" << endl;
    else {
        cout << "Test 8 FAILED stringSplit" << endl;
        cout << "\tFirst Vector: ";
        for (string s : stringSplit(s1, "|")) cout << s << " ";
        cout << endl;
        cout << "\tSecond Vector: ";
        for (string s : stringSplit(s2, "|")) cout << s << " ";
        cout << endl;
    }
    // Test 9 toUpper and toLower
    s1 = toLowerCase("FIVe Men");
    s2 = toUpperCase("fiVE mEn");
    if (s1 == "five men" && s2 == "FIVE MEN") cout << "Test 9 Passed toUpper and toLower" << endl;
    else cout << "Test 9 FAILED toUpper and toLower" << endl;

    // Test 10 stringReplace
    s1 = "FiveSixFive  Six";
    s1 = stringReplace(s1, "Six", "|");
    s2 = stringReplace("Hi", "|", "*");
    if (s1 == "Five|Five  |" && s2 == "Hi") cout << "Test 10 Passed stringReplace" << endl;
    else cout << "Test 10 FAILED stringReplace" << endl;

    // Test 11 pigLatinfy
    s1 = "Hello There";
    s2 = "jimmy and his john";
    if (pigLatinfy(s1) == "elloHay ereThay" && pigLatinfy(s2) == "immyjay andyay ishay ohnjay")
        cout << "Test 11 Passed pigLatinfy" << endl;
    else {
        cout << "Test 11 FAILED pigLatinfy" << endl;
        cout << "\tString 1: " << pigLatinfy(s1) << endl;
        cout << "\tString 2: " << pigLatinfy(s2) << endl;


        return 0;
    }
}