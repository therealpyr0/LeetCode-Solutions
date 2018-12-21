class Solution(object):
    
    def isv4(self,s):
        nums=s.split(".")
        if len(nums)==4:
            for num in nums:
                if (num.startswith("0") or "0" in num) and len(num)>1:
                    return False
                try:
                    n=int(num)
                    if n>=0 and n<=255:
                        pass
                    else:
                        return False
                except:
                    return False
            pass
            return True
        else:
            return False
        pass
    
    def isv6(self,s):
        valid=['a','b','c','e','d','f']
        limit=15*pow(16,0)+15*pow(16,1)+15*pow(16,2)+15*pow(16,3)
        h={'a':10,'b':11,'c':12,'d':13,'e':14,'f':15}
        for i in range(10):
            h[str(i)]=i
        #print h
        nums=s.split(":")
        if len(nums)==8:
            for num in nums:
                if len(num)==0:
                    return False
                else:
                    l=0 
                    if len(num)>4:
                        return False
                    for i in range(len(num)-1,-1,-1):
                        if num[i] not in h:
                            return False
                        l+=int(h[num[i]]*pow(16,len(num)-1-i))
                        if l>=0 and l<=limit:
                               pass
                        else:
                               return False
            return True
            pass
        else:
            return False
        
        pass
    def validIPAddress(self, IP):
        """
        :type IP: str
        :rtype: str
        """
        s=IP.lower()
        if self.isv4(s):
            return "IPv4"
        if self.isv6(s):
            return "IPv6"
        return "Neither"
            
        