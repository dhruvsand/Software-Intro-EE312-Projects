#include<iostream>
#include<iomanip>
#include<sstream>
#include<vector>
#include<string>
#include "StringPlusPlus.h"

// StringPlusPlus.cpp -- EE 312 Project 8

/* Student information for project:
 *
 *
 * On my honor, Dhruv Sandesara, this programming project is my own work
 * and I have not provided this code to any other student.
 *
 * Name: Dhruv Sandesara
 * email address:dhruvsand@yahoo.com
 * UTEID:djs3967
 * Section 5 digit ID:16130
 * Number of slip days used on this assignment:0
 */

using namespace std;

/* Converts a char value to the string containing the char. */
string charToString(char c) {
//    stringstream ss;
//    ss<<c;
//    string s;
//    ss>>s;
//
//    return s;

    string s= "";//empty string
    s.append(1,c);//adding the chaacter
    return s;//returning the string


}

/* Converts bool b to the corresponding string, "true" or "false". */
string boolToString(bool b) {
    string s= b?"true":"false";//if bool is true return "true" or else return "false"

    return s;
}

/* Returns true if s ends with suf, false otherwise. */
bool endsWith(string s, string suf) {
    if(s.rfind(suf) == string::npos)
        return false;
    else{

        long a= s.rfind(suf);//the index of the string


        if(s.length()==(suf.length()+a))//checking if the suffix is really at the very end
            return true;
        else
            return false;




    }

}

/* Returns true if s ends with ch, false otherwise. */
bool endsWith(string s, char ch) {
    if(s.at(s.length()-1)==ch)//just simmple checking and comparing of last character
        return true;
    else
        return false;

}

/* Returns true if s starts with pref, false otherwise. */
bool startsWith(string s, string pref) {

    if(s.find(pref)==0)//simple checking if found at index 0
        return true;
    else
        return false;

}

/* Returns true if s starts with ch, false otherwise. */
bool startsWith(string s, char ch) {
    if(s.at(0)==ch)//simple checking of char at index 0
        return true;
    else
        return false;


}

/* Returns true if s1 and s2 are equal if case is ignored, false otherwise. */ 
bool equalsIgnoreCase(string s1, string s2) {
    return (toUpperCase(s1)==toUpperCase(s2));//convert whole string to one case and then check if equal

}

/* Converts a floating-point number into the corresponding string form with dig digits after the decimal point. */
string doubleToString(double d, int dig) {
//    string s =to_string(d);//convert to string
//    int pos= s.find('.');//find where decimal point is
//    s= s.substr(0,pos+dig+1);//cut off string at the decimal digit that we need
//
//    return s;

    stringstream ss;//making a string stream
    ss<<setprecision(dig)<<fixed<< d; //seting parameters of fixed point numbers and 2 decimal precision and inserting the double
    string s;
    ss>>s; //extracting the string

    return s;



}

/* Converts a string into its corresponding double value. */
// pre: s contains a fixed point representation of a double 
double stringToDouble(string s) {

    double f=0.0;
    stringstream ss;//making a string stream
    ss<<s; //inputing the stream

    ss>>f; //extracting the double

    return f;



}

/* Concatenates the strings in vector (maintaining their order) into a single string. In the returned string,
   any two string elements from the vector are separated by the given delimiter. */
string stringJoin(const vector<string> & v, string delimiter) {

string s="";
    for (int i=0;i<v.size();i++){

        if(i==v.size()-1)
            s=s+v[i];//if the last string dont add deliminator
        else
        s=s+v[i]+delimiter;
    }
    return s;



}

/* Break apart string str into a list of strings separated by the specified delimiter, and place each of
   those strings in a vector. The order of the strings should not change. */
vector<string> stringSplit(string str, string delim) {

    vector <string> s;
    int pos= str.find(delim);
    string token="";

    while(pos!=-1){
        token=str.substr(0,pos);//getting the string before the delimitor
        s.push_back(token);//pushing it in the vector
        str= str.substr(pos+delim.length());
        pos=str.find(delim);

    }

    if(str!="")//in case that delimiter is at end dont push anything
    s.push_back(str);//pushing the last bit in the vector

    return s;



}


/* Return a lower case version of string s. */   
string toLowerCase(string s) {

    for(int i=0;i<s.length();i++){
        s[i]=tolower(s[i]);//check each character and concvert to lower case if possible
    }

    return s;


}

/* Return an upper case version of string s. */
string toUpperCase(string s) {
    for(int i=0;i<s.length();i++){
        s[i]=toupper(s[i]);//check each character and concvert to Upper case if possible
    }

    return s;

}

/* Return a new string which is orig with all occurrences of old replaced with repl. */
string stringReplace(string orig, string old, string repl) {
    int i=0;
    while(orig.find(old)!=string::npos){//if there is still a replacement old left
        orig.replace(orig.find(old),old.length(),repl);//just replace it;
    }
    return orig;

}

/* Returns a new string which is s with all leading and trailing whitespace removed. */
string trim(string s) {
    int len=s.length() -1; // setting the boundries of length

for(int i=0;i<=len;i++){
    if(s.at(i)==' ') { //if there is a whitespace
        s.erase(i, 1); //remove it
        i--; //decresing the index
        len--;//decrese the length
    }
    else
        break;//if not whitespace that means hit the first character

}
    for(int i=len;i>0;i--){//now check the characters from the back
        if(s.at(i)==' '){//if whitespace
            s.erase(i,1);//remove it
            len--;//decrese lenght


        }
        else
            break;//if there is not a whitespace that means done and get back

    }

    return s;


}

/* Return a new string that contains s translated into pig latin. The string may contain blank spaces and 
   (possibly one) punctuation symbol at the end of words. There will not be punctuation embedded in words, and there will not be digits.  */
string pigLatinfy(string s) {

    string result = "";
    int pos = s.find(' ');


    while (pos != -1) {
        for (int i = 0; i < pos; i++) {
            if (s.at(i) == 'a' || s.at(i) == 'e' || s.at(i) == 'i' || s.at(i) == 'o' || s.at(i) == 'u' ||
                s.at(i) == 'y') {
                if(i==0){

                    result=result+s.substr(0,pos)+"yay ";
                    s = s.substr(pos + 1);
                    pos = s.find(' ');
                    i = pos;

                }
                else {
                    result = result + s.substr(i, pos - i) += s.substr(0, i) += "ay ";
                    s = s.substr(pos + 1);
                    pos = s.find(' ');
                    i = pos;
                }
            }
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == 'a' || s.at(i) == 'e' || s.at(i) == 'i' || s.at(i) == 'o' || s.at(i) == 'u' || s.at(i) == 'y') {
            if(i==0){

                result=result+s.substr(0,pos)+"yay";
                s = s.substr(pos + 1);
                pos = s.find(' ');
                i = pos;

            }
            else {
                result = result + s.substr(i, pos - i) += s.substr(0, i) += "ay";
                s = s.substr(pos + 1);
                pos = s.find(' ');
                i = pos;
                break;
            }
        }
    }

        return result;


    }




