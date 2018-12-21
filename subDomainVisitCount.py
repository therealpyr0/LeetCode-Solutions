class Solution(object):
    def subdomainVisits(self, cpdomains):
        """
        :type cpdomains: List[str]
        :rtype: List[str]
        """
        h={}
        #rows=cpdomains.split(",")
        rows=cpdomains
        #print rows
        for row in rows:
            count=0
            count,domains=row.split(" ")
            count=int(count)
            domains=domains.split(".")
            for i in range(len(domains)):
                d=".".join(domains[i:])
                #print d,count
                if d in h:
                    #print d,h[d]
                    h[d]+=count
                    #print d,h[d]
                else:
                    h[d]=count
                #h[d]=count
        alist=[]
        print h
        for i in h:
            temp=str(h[i])+ " "+str(i)
            alist.append(temp)
            temp=""
        return alist
                
            
        