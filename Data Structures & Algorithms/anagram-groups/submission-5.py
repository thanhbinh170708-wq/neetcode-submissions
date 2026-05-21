class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        newdict ={}
        for index,val in enumerate(strs):
            tempval = val
            tempval = sorted(tempval.lower().replace(" ",""))
            tempval = "".join(tempval)
            if tempval not in newdict.keys():
                newdict[tempval] = [index]
            else:
                newdict[tempval].append(index)
        newlist = []
        for values in newdict.values():
            templist = []
            for index in range(len(values)):
                templist.append(strs[values[index]])
            newlist.append(templist)
        return newlist
            


