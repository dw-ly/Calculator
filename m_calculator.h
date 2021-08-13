class Calculator
{
public:
    Calculator(int iNum){m_number = iNum;}
   // ~Calculator();
private:
    int m_number;    
private:
    /* data */
    static Calculator* m_calculator;
public:
    static void InitCalculator();
    static void Add(int number);
    static void Subtract(int number);
    static void Mutiply(int number);
    static void Divide(int number);
    static Calculator* _calculator(){
        return m_calculator;
    }
    static int getNumber() {
        return m_calculator->m_number;
    }
};

//add , subtract , multiply and divide