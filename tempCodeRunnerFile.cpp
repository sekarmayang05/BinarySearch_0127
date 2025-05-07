void display()
{
    cout << "\n=========================================\n";
    cout << "   Element Array Setelah Diurtkan (Asc)    \n";
    cout << "\n=========================================\n";
    for (int j = 0; j < nPanjang; j++)
    {
        cout << element [j];
        if (j < nPanjang - 1)
        {
            cout << "-->";
        }
    }
    cout << endl;
}