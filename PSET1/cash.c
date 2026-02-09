int get_change(void);
int check_quarters(int q);
int check_dimes(int d);
int check_nickels(int n);

int main(void)
{
    int change = get_change();
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    int result = 0;

    quarters = check_quarters(change);
    change = change - (25 * quarters);

    dimes += check_dimes(change);
    change = change - (10 * dimes);

    if (change >= 5)
    {
        nickels = check_nickels(change);
        change = change - (5 * nickels);
        pennies += change;
    }
    else
    {
        pennies += change;
    }
    
    result = quarters + dimes + nickels + pennies;
    printf("%i\n", result);
}
