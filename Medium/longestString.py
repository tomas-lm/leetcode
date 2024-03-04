class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        max_window_length = 0
        current_window_lenght = 0
        current_window = []
        last_character_index = {}
        for i in range(len(s)):
            if s[i] not in current_window:
                current_window.append(s[i])
                last_character_index[s[i]] = i
                current_window_lenght += 1
            else:
                if current_window_lenght > max_window_length:
                    max_window_length = current_window_lenght
                current_window_lenght = i - last_character_index[s[i]]

        print('-------S[i]--------') 
        print(s[i])
        print('-------Current_Window---------')
        print(current_window)
        print('-------LCI---------')
        print(last_character_index)
        print('------CWL---------')
        print(current_window_lenght)
        print('-------MWL---------')
        print(max_window_length)
        print('------------------')




if __name__ == "__main__":
    s = Solution()
    s.lengthOfLongestSubstring("abcabcbb")
            
        