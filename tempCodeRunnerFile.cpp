 int mid = (low + high) / 2;
            if (element[mid] == x)
            {
                cout << "\n [✔] Elemen " << x << " ditemukan pada indeks " << mid << ".\n";
                return;
            }
            if (x < element[mid])
            {
                high = mid - 1;