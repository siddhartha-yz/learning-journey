# vocab = {0: bytes([65]), 1: bytes([228, 184, 173])}

# token_ids = [1, 0, 1]

# result = bytes()
# for token_id in token_ids:
#     result += vocab[token_id]

# print(result.decode("utf-8"))

# for token_id in token_ids:
#     print(vocab[token_id])

counts = {}
max_count = 0
max_token = 0
token = [97, 97, 97]
for i in range(len(token)-1):
    if (token[i], token[i+1]) not in counts:
        counts[(token[i], token[i+1])] = 1
    else:
        counts[(token[i], token[i+1])] += 1
for key, value in counts.items():
    if value > max_count:
        max_count = value
        max_token = key
    elif value == max_count:
        if key[0] > max_token[0]:
            max_token = key
        elif key[0] == max_token[0]:
            if key[1] > max_token[1]:
                max_token = key

merged = []
i = 0
while i < len(token):
    if i == len(token)-1:
        merged.append(token[i])
        break
    if (token[i], token[i + 1]) == max_token:
        merged.append(256)
        i += 2
    else:
        merged.append(token[i])
        i += 1
print(merged)
vocab = {97 : bytes([97])}
vocab[256] = 
print(vocab)

