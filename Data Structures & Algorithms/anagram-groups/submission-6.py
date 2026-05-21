class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        newdict = {}
        for word in strs:
            dict1 = [0]*26
            tempword = word.lower().replace(" ","")
            for char in tempword:
                dict1[ord(char)-ord("a")] += 1
            if tuple(dict1) not in newdict.keys():
                newdict[tuple(dict1)] =[]
            newdict[tuple(dict1)].append(word)
        return list(newdict.values())

