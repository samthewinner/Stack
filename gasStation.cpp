int tour(petrolPump p[],int n)
    {
        int tot=0;
        for(int i=0;i<n;i++){
            tot+=(p[i].petrol-p[i].distance);
        }
        if(tot<0) return -1;
        int st =0;int ed=0;
        tot = 0;
        for(ed=0;ed<n;ed++){
            tot+=(p[ed].petrol-p[ed].distance);
            if(tot<0){
                tot=0;
                st = ed+1;
            }
        }
        return st;
    }
