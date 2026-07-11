class Solution {
private :

string unit_digit_to_roman(int digit)
{
    vector<string>unit={"","I","II","III","IV","V","VI","VII","VIII","IX"};
    return unit[digit];
}
string tens_digit_to_roman(int digit)
{
    vector <string> tens ={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    return tens[digit];
}
string hundredth_digit_to_roman(int digit)
{
    vector <string> hundreds = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    return hundreds[digit];
}
string thousandth_digit_to_roman(int digit)
{
    vector <string> thousands = {"","M","MM","MMM"};
    return thousands[digit];
}
public:
    string intToRoman(int num) {
        string units = unit_digit_to_roman(num%10);
        string tens = tens_digit_to_roman((num/10)%10);
        string hundreds = hundredth_digit_to_roman((num/100)%10);
        string thousands = thousandth_digit_to_roman(num/1000) ;

        return thousands + hundreds + tens + units;
    }
};