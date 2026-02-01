class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        for(int i = 0; i < s.size(); i++) {
            switch(s[i]){
                case 'I':
                    if((s[i+1] == 'V'  || s[i+1] == 'X') && s[i+1] != '\0')
                    { 
                        num = num;
                    }else {
                        num = num + 1;
                    }
                    break;
                case 'V':
                    if(i > 0) {
                      if(s[i-1] == 'I') {
                            num = num + 4;
                        }else {
                            num = num + 5;
                        }
                    }else {
                        num = num + 5;
                    }
                    break;
                case 'X':
                    if(i > 0){
                       if(s[i-1] == 'I') {
                            num = num + 9;
                        }else if((s[i+1] == 'C' || s[i+1] == 'L') && s[i+1] != '\0') {
                            num = num;
                        }else {
                            num = num + 10;
                        }
                    }else if((s[i+1] == 'C' || s[i+1] == 'L') && s[i+1] != '\0'){
                        num = num;
                    }else {
                        num = num + 10;
                    }
                    break;
                case 'L':
                if(i > 0){
                       if(s[i-1] == 'X') {
                            num = num + 40;
                        }else {
                            num = num + 50;
                        }
                    }else {
                        num = num + 50;
                    }
                    
                    break;
                case 'C':
                    if(i > 0) {
                        if(s[i-1] == 'X') {
                            num = num + 90;
                        }else if((s[i+1] == 'M'  || s[i+1] == 'D') && s[i+1] != '\0') {
                            num = num;
                        }else {
                            num = num + 100;
                        }
                    }else if((s[i+1] == 'M'  || s[i+1] == 'D') && s[i+1] != '\0') {
                            num = num;
                    }else {
                        num = num + 100;
                    }
                    break;
                case 'D':
                    if(i > 0) {
                        if(s[i-1] == 'C') {
                            num = num + 400;
                        }else {
                            num = num + 500;
                        }  
                    }else {
                        num = num + 500;
                    }
                    break;
                case 'M':
                    if(i > 0) {
                        if(s[i-1] == 'C') {
                            num = num + 900;
                        }else {
                            num = num + 1000;
                        }
                    }else {
                        num = num + 1000;
                    }
                    
                    break;
            }
        }
        return num;
    }
};