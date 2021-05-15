class Solution {
public:
   bool isNumber(string s) {
    int n=0,t=-1,e=-1,np=0;
	
for(int i=0;i<s.size();i++){
      if(s[i] == 'E') s[i] = 'e';
      if(s[i]<48 || s[i]>57)
            if(!(s[i]=='.' || s[i]=='e' ||  s[i]=='+' || s[i]=='-' || s[i]==' ' )) return false;
    }

    for(int i=0;i< s.size();i++){         
    if(s[i]== ' ') n++;
    else {s.erase(0,n);n=0;break;}}

    for(int i= s.size()-1;i>=0;i--){     
    if(s[i]== ' ') n++;
    else {s.erase(s.size()-n,n);break;}}

    for(int i=0;i< s.size();i++){
        if(s[i]== 'e'){
            e=i;
            for(int j=i+1; j< s.size() ;j++){
                if(s[j]== 'e' || s[j]== '.') return false;}
            break;
        }}
if(e!= -1){
    
    np=e;
    if(s[np+1]=='-' || s[np+1]=='+') np++;
    for (int i=np+1;i<s.size();i++){
        if(s[i]<48 || s[i]>57) return false;}
    if(np+1 == s.size()) return false;

    if(s[0]=='-' || s[0]=='+') n=0;
        else n=-1;
    for(int i = n+1;i<e;i++){
        if(s[i]== '.'){
            t=i;
            for(int j=i+1;j< e;j++){
                if(s[j]== '.') return false;}
            break;
        }}

    if(t!= -1){

    for (int i=n+1;i<t;i++){
        if(s[i]<48 || s[i]>57) return false;}
    for (int i=t+1;i<e;i++){
        if(s[i]<48 || s[i]>57) return false;}
    if (t-n == 1 && e - t == 1) return false;
        }
    else{
        for (int i=n+1;i<e;i++){
        if(s[i]<48 || s[i]>57) return false;}
        if(e-n == 1) return false;
        }
}
else{
    if(s[0]=='-' || s[0]=='+') n=0;
        else n=-1;
    for(int i = n+1;i<s.size();i++){
        if(s[i]== '.'){
            t=i;
            for(int j=i+1;j<s.size();j++){
                if(s[j]== '.') return false;}
            break;
        }}
    if(t!= -1){
    if (t-n == 1 && s.size() - t == 1) return false;
    for (int i=n+1;i<t;i++){
        if(s[i]<48 || s[i]>57) return false;}
    for (int i=t+1;i<s.size();i++){
        if(s[i]<48 || s[i]>57) return false;}}
    else{
        if(s.size()-n == 1) return false;
        for (int i=n+1;i<s.size();i++){
        if(s[i]<48 || s[i]>57) return false;}}
}

    return true;
    }
};