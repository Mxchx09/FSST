def pyramide_encrypt(plaintext: str, n: int, key: list[int]):
    # 1. Calculate the total multiplier applied in the decrypt function
    total_multiplier = 1
    for i in range(1, n + 1):
        total_multiplier *= key[i]
        
    # 2. Find the modular multiplicative inverse modulo 26
    try:
        # pow(base, -1, mod) magically finds the modular inverse in Python 3.8+
        inverse_multiplier = pow(total_multiplier, -1, 26)
    except ValueError:
        raise ValueError(f"The key product ({total_multiplier}) cannot be reversed! " 
                         "It must not be divisible by 2 or 13.")

    final = []
    
    # 3. Apply the inverse multiplier to each character
    for c in plaintext:
        c_pos = get_pos(c)
        
        # Multiply by the inverse and wrap around the 26-letter alphabet
        c_final_pos = (c_pos * inverse_multiplier) % 26
        
        final.append(get_pos(c_final_pos))
        
    return final

def pyramide_decrypt(ciphertext: str, n: int,  key: list[int]):
    final = []
    for c in ciphertext:
        c_pos = get_pos(c)
        c_final = step(c_pos, n, key)
        final.append(get_pos(c_final))
    return final
            
def step(c_pos, n, key: list[int]):
    if n == 0:
        return c_pos
    new_pos = c_pos * key[n]
    return step(new_pos, n - 1, key)

def get_pos(c):
    if isinstance(c, int):
        val = c % 26
        if val == 0:
            val = 26
        return chr(val + 96)
        
    if isinstance(c, str):
        return (ord(c) - 96) % 26

# --- Test Execution ---
# Using keys that multiply to 15 (which is coprime to 26)
n = 2
key = [1, 3, 5] 

original_text = "secret"
print(f"Original Text: {original_text}")

# First, "decrypt" it (which in your setup acts as the forward pass/scrambling)
scrambled = pyramide_decrypt(original_text, n, key)
scrambled_text = "".join(scrambled)
print(f"Scrambled:     {scrambled_text}")

# Second, encrypt it to reverse the math and get the original text back
unscrambled = pyramide_encrypt(scrambled_text, n, key)
unscrambled_text = "".join(unscrambled)
print(f"Unscrambled:   {unscrambled_text}")