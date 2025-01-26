class Solution {
    public boolean isIsomorphic(String s, String t) {
        if(s.length()!= t.length()) return false;
        HashMap<Character, Character> mp1 = new HashMap<>();
        HashMap<Character, Character> mp2 = new HashMap<>();
        for(int i=0;i<s.length();i++){
            if(mp1.containsKey(s.charAt(i))){
                if(mp1.get(s.charAt(i)) != t.charAt(i)){
                    return false;
                }
            }else{
                mp1.put(s.charAt(i), t.charAt(i));
            }


            // map2
            

            if(mp2.containsKey(t.charAt(i))){
                 if(mp2.get(t.charAt(i)) != s.charAt(i)){
                    return false;
                }
                // if(mp1.get(t.charAt(i))!=s.charAt(i)){
                //     return false;
                // }
            }else if(mp1.get(s.charAt(i))!= t.charAt(i)){
                return false;
            }else{
                    mp2.put(t.charAt(i), s.charAt(i));
                }
        }
        return true;
    }
}