# Simple random number generator rewritten in Python by Troy Davies

import secrets

def main():
    try:
        min_val = int(input("Input minimum value.\nValue: "))
        max_val = int(input("Input maximum value.\nValue: "))
    except ValueError:
        print("ERROR: Please enter valid integers.")
        return 1

    if max_val < min_val:
        print("ERROR: Maximum value must be larger than minimum value.")
        return 1

    randnum = secrets.randbelow(max_val - min_val + 1) + min_val
    print(f"Random number is {randnum}.")
    return 0

if __name__ == "__main__":
    main()