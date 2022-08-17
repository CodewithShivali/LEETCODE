

class Solution {
    public String getHint(String secret, String guess) {
        int bulls = 0, cows = 0;
        Map<Integer, Integer> guessMap = new HashMap<>();
        Map<Integer, Integer> secretMap = new HashMap<>();
        
        for (int i=0; i < secret.length(); i++) {
            int s = secret.charAt(i) - '0';
            int g = guess.charAt(i) - '0';
            if (s == g) {
                bulls++;
            } else {
                guessMap.put(g, guessMap.getOrDefault(g, 0) + 1);
                secretMap.put(s, secretMap.getOrDefault(s , 0) + 1);
            }
        }
        
        for (Map.Entry<Integer, Integer> entry : guessMap.entrySet()) {
            if (secretMap.containsKey(entry.getKey()))
                cows += Math.min(entry.getValue(), secretMap.get(entry.getKey()));
        }
        
        return bulls + "A" + cows + "B";
    }
}