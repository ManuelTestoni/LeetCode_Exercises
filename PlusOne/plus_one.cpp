class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int nineCount = 0;

        //Conto i nove consecutivi che trovo
        for(int i = 0; i < digits.size(); i++) {
            if(digits[i] == 9) {
                nineCount++;
            } else {
                break; 
            }
        }
        
        //Questo mi gestisce i casi in cui tutti gli elementi sono 9.
        if(nineCount == digits.size()) {
            digits.resize(digits.size() + 1, 0); //Aumento di 1 la dimensione del vector andando   
            //                                      ad aggiungere uno zero in coda
            for(int i = 0; i < digits.size(); i++) {
                digits[i] = 0;
            }
            digits[0] = 1;
            return digits;
        }
        
        // Caso normale: incrementa l'ultimo non-9 e azzera i 9 successivi
        int i = digits.size() - 1;
        digits[i]++;  // incrementa l'ultimo
        
        // Propaga il carry verso i 9 precedenti
        for(int j = digits.size() - 1; j >= 0; j--) {
            if(digits[j] > 9) {
                digits[j] = 0;
                if(j > 0) {
                    digits[j-1]++;
                }
            } else {
                break;
            }
        }
        
        return digits;
    }
};
