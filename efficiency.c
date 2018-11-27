// C efficiency
// Memory - less memory is better
// CPU - how many lines does the CPU actually touch and process - less commands to run
// adding and subtracting are more efficient, if it's possible to accomplish task with these, do so
// less lines of code processed

int oneWhile(int anAmount) {  // change = 94 69 34 19 9 4 3 2 1
    amount = anAmount;
    int coins = 0;              
    while(amount > 0) {             
        if(amount >= 25) {   // 13 lines of code to get amount of quarters
            coins++;
            amount -= 25;
        } else if(amount >= 10) {  // 18 lines 
            coins++;
            amount -= 10;
        } else if(amount >= 5) {   // 24 lines
            coins++;
            amount -= 5;
        } else {                    // 52 lines 
            coins++;
            amount -= 1;
        }
    }
    return coins;    // Process number 54
}

int multipleWhiles(int anAmount) {    // change = 94 69 34 19
    int change = anAmount;
    int coins = 0;
    while(change >= 25)             // 10
    {
        change = change - 25;      
        coins++;
    }
    while(change >= 10)             // 14
    {
        change = change - 10;
        coins++;
    }
    while(change >= 5)           // 18
    {
        change = change - 5;
        coins++;
    }
    while(change >= 1)          // 31
    {
        change = change - 1;
        coins++;
    }
    return coins;               // 33 lines processed in total
}


// A constant time function - no matter what is sent, all lines of code
// will be executed

// modulous and division take more processing power t0 run

int modulo(int anAmount) {      // change = 94
    change = anAmount                   
    int coins = change / 25;    
    change = change % 25;

    coins += change / 10;
    change = change % 10;

    coins += change / 5;
    change = change % 5;

    coins += change / 1;
    change = change % 1;

    return coins;

}