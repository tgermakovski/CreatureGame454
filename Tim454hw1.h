// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>
using namespace std;

class Room {      
  public:            
    int state, nrt, sth, est, wes, num;
    int creatures[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int pop(){
        int pop = 0;
        for(int i=0;i<10;i++){
            if(creatures[i]!=-1){
                pop++;
            }
        }
        return pop;
    }
    int full(){
        for(int i=0;i<10;i++){
            if(creatures[i]==-1){
                return 0;
            }
        }
        return 1;
    }
    void add(int x){
        for(int i=0;i<10;i++){
            if(creatures[i]==-1){
                creatures[i]=x; i=10;
            }
        }
    }
    void remove(int x){
        for(int i=0;i<10;i++){
            if(creatures[i]==x){
                creatures[i]=-1; i=10;
            }
        }
    }
};

class Creature {      
  public:    
 
    int typ, loc, num;
   
    int flee(Room * rooms, Room * croom)
    {
        if(typ==1){return hflee(rooms,croom);}
        if(typ==2){return aflee(rooms,croom);}
        if(typ==0){return -2;}
    };
   
    int hflee(Room * rooms, Room * croom){
       
        if(croom->nrt > -1 && rooms[croom->nrt].full() == 0)
        {
            loc = croom->nrt;croom->remove(num);rooms[croom->nrt].add(num);
            if(rooms[croom->nrt].state == 0){rooms[croom->nrt].state++;}
        }
        else if(croom->sth > -1 && rooms[croom->sth].full() == 0)
        {
            loc = croom->sth;croom->remove(num);rooms[croom->sth].add(num);
            if(rooms[croom->sth].state == 0){rooms[croom->sth].state++;}
        }
        else if(croom->est > -1 && rooms[croom->est].full() == 0)
        {
            loc = croom->est;croom->remove(num);rooms[croom->est].add(num);
            if(rooms[croom->est].state == 0){rooms[croom->est].state++;}
        }
        else if(croom->wes > -1 && rooms[croom->wes].full() == 0)
        {
            loc = croom->wes;croom->remove(num);rooms[croom->wes].add(num);
            if(rooms[croom->wes].state == 0){rooms[croom->wes].state++;}
        }
        else
        {
            loc = -1;croom->remove(num);
            cout << "fuck this shit im out!!!";
        } return loc;
       
    };
    int aflee(Room * rooms, Room * croom){
       
        if(croom->nrt > -1 && rooms[croom->nrt].full() == 0)
        {
            loc = croom->nrt;croom->remove(num);rooms[croom->nrt].add(num);
            if(rooms[croom->nrt].state == 2){rooms[croom->nrt].state--;}
        }
        else if(croom->sth > -1 && rooms[croom->sth].full() == 0)
        {
            loc = croom->sth;croom->remove(num);rooms[croom->sth].add(num);
            if(rooms[croom->sth].state == 2){rooms[croom->sth].state--;}
        }
        else if(croom->est > -1 && rooms[croom->est].full() == 0)
        {
            loc = croom->est;croom->remove(num);rooms[croom->est].add(num);
            if(rooms[croom->est].state == 2){rooms[croom->est].state--;}
        }
        else if(croom->wes > -1 && rooms[croom->wes].full() == 0)
        {
            loc = croom->wes;croom->remove(num);rooms[croom->wes].add(num);
            if(rooms[croom->wes].state == 2){rooms[croom->wes].state--;}
        }
        else
        {
            loc = -1;croom->remove(num);
            cout << "fuck this shit im out!!! ddddddddddddrrrrrrrrrrrrrrrr!!!!!";
        } return loc;
       
    };
};



int main() {

    int n, m, pci; int respect=40;
   
    cout << "enter number of rooms: "; cin >> n; Room * rooms = new Room[n];
    for(int i=0;i<n;i++){
        scanf("%d %d %d %d %d", &rooms[i].state, &rooms[i].nrt, &rooms[i].sth, &rooms[i].est, &rooms[i].wes); rooms[i].num = i;
    }
   
    cout << "enter number of creatures: "; cin >> m; Creature * creatures = new Creature[m];
    for(int i=0;i<m;i++){
        scanf("%d %d", &creatures[i].typ, &creatures[i].loc); creatures[i].num=i;
        if(creatures[i].typ==0){pci=i;}
        rooms[creatures[i].loc].add(i);
    }
   
    int cloc = creatures[pci].loc; Room * croom = &rooms[cloc];
            
    string com;string quit = "quit";
   
    do{
       

        string abc = "abc";
       
        string poop = "poop";
        //string quit = "quit";
        string help = "help";
        string hw = "hw";
        string look = "look";
        string clean = "clean";
        string dirty = "dirty";
        string ncom = "north";        
        string scom = "south";
        string ecom = "east";
        string wcom = "west";
        string respekt = "respect";
        string c_colon = "c:";
        string d_colon = "d:";
        string n_colon = "n:";
        string s_colon = "s:";
        string e_colon = "e:";
        string w_colon = "w:";
        string amongus = "virebviqreigfpvuregpqfwe8nvr0qhvq";
        string lose = "lose";
        string win = "win";
        string colon = ":";
       
        cloc = creatures[pci].loc; croom = &rooms[cloc];
        cout << "enter command: "; cin >> com;

        if(com==poop){cout << "poop \n";}

        else if(com==respekt){cout << respect << "\n";}
       
        else if(com==help){cout << "refer to my 322 hw for further information\n";}
        else if(com==hw){
            cout << "poop : poop \n";
            cout << "quit : terminates game \n";
            cout << "help : help \n";
            cout << "hw : this \n";
            cout << "look : info about current room \n";
            cout << "clean : clean \n";
            cout << "dirty : unclean \n";
            cout << "north : go north \n";
            cout << "south : go to ur mom's house \n";
            cout << "east : same as west, but opposite direction \n";
            cout << "west : refer to east \n";
            cout << "respect : prints current approval rating \n";
            cout << "c:i : force creature index number i to clean current room \n";
            cout << "for example, c:69 forces creature 69 to clean current room \n";
            cout << "d:i : force creature #i to UNclean current room \n";
            cout << "n:i : force creature #i to go north \n";
            cout << "s/e/w:i : exile creature #i to ur mom's house \n";
            cout << "virebviqreigfpvuregpqfwe8nvr0qhvq : does something unspeakable. DO NOT USE UNLESS AUTHORIZED BY THE DEPARTMENT OF QNRAVRNSOGI34BTWR61NVISUB AFFAIRS \n" ;
        }

        else if(com==look){
            printf("Room ");printf("%d", cloc);
            if(croom->state==0){printf(" - clean");}
            else if(croom->state==1){printf(" - neutral");}
            else if(croom->state==2){printf(" - dirty");}
            if(croom->nrt > -1){printf(" - north ");printf("%d", croom->nrt);}
            if(croom->sth > -1){printf(" - south ");printf("%d", croom->sth);}
            if(croom->est > -1){printf(" - east ");printf("%d", croom->est);}
            if(croom->wes > -1){printf(" - west ");printf("%d", croom->wes);}
            printf(" - Player 1 ");
            for(int i=0; i<10; i++)
            {
                if(creatures[croom->creatures[i]].typ == 1){
                    printf("Animal ");printf("%d",creatures[i].num);}
                else if(creatures[croom->creatures[i]].typ == 2){
                    printf("Human ");printf("%d",creatures[i].num);}
                printf(" ");
            }
            printf("\n");
        }
       
        //clean
        else if(com==clean){
           
            if(croom->state ==0){cout << "already clean\n";}
            else{
                croom->state--;
                for(int i=0;i<10;i++){
                    if(creatures[croom->creatures[i]].typ==1){
                        respect++;
                        cout << "Animal " << creatures[croom->creatures[i]].num << " licks face \n";
                    }
                    if(creatures[croom->creatures[i]].typ==2){
                        respect--;
                        cout << "Human " << creatures[croom->creatures[i]].num << " grumbles \n";
                        if(croom->state==0){
                           
                            int fled = creatures[croom->creatures[i]].flee(rooms, croom);  
                            if(fled==-1){
                                /*everyone pissed*/
                                for(int j=0;j<10;j++){
                                    if(creatures[croom->creatures[j]].typ==1){
                                        cout << "Animal " << creatures[croom->creatures[j]].num << " growls \n";
                                        respect--;
                                    }
                                    if(creatures[croom->creatures[j]].typ==2){
                                        cout << "Human " << creatures[croom->creatures[j]].num << " grumbles\n";
                                        respect--;
                                    }
                                }

                            }else{cout << "and leaves to room" << fled << "\n";}
                        }
                    }
                }
               
               
                /*Creature ** creatures = new Creature*[num_creatures];
creatures[i] = new Human(...);*/
               
               
               
               
            }

           
           
           
           
        }
       
       
       
       
       
       
       
       
        //dirty
       else if(com==dirty){
           
            if(croom->state ==2){cout << "already dirty\n";}
            else{
                croom->state++;
                for(int i=0;i<10;i++){
                    if(creatures[croom->creatures[i]].typ==2){
                        respect++;
                        cout << "Human " << creatures[croom->creatures[i]].num << " smiles \n";
                    }
                    if(creatures[croom->creatures[i]].typ==1){
                        respect--;
                        cout << "Animals " << creatures[croom->creatures[i]].num << " growls \n";
                        if(croom->state==2){
                           
                            int fled = creatures[croom->creatures[i]].flee(rooms, croom);  
                            if(fled==-1){
                                /*everyone pissed*/
                                for(int j=0;j<10;j++){
                                    if(creatures[croom->creatures[j]].typ==1){
                                        cout << "Animal " << creatures[croom->creatures[j]].num << " growls\n";
                                        respect--;
                                    }
                                    if(creatures[croom->creatures[j]].typ==2){
                                        cout << "Human " << creatures[croom->creatures[j]].num << " grumbles\n";
                                        respect--;
                                    }
                                }

                            }else{cout << "and leaves to room" << fled << "\n";}
                        }
                    }
                }
               
               
                /*Creature ** creatures = new Creature*[num_creatures];
creatures[i] = new Human(...);*/
               
               
               
               
            }

           
           
           
           
        }
       
       
       
       
       
       
       
       
       
        //north/south/east/west
        else if(com==ncom)
        {
            if(croom->nrt > -1 && rooms[croom->nrt].full() == 0)
            {
                creatures[pci].loc = croom->nrt;
                croom->remove(pci);
                rooms[croom->nrt].add(pci);
            }else{cout << "no\n";}
        }
       
        else if(com==scom)
        {
            if(croom->sth > -1 && rooms[croom->sth].full() == 0)
            {
                creatures[pci].loc = croom->sth;
                croom->remove(pci);
                rooms[croom->sth].add(pci);
            }else{cout << "no\n";}
        }
       
        else if(com==ecom)
        {
            if(croom->est > -1 && rooms[croom->est].full() == 0)
            {
                creatures[pci].loc = croom->est;
                croom->remove(pci);
                rooms[croom->est].add(pci);
            }else{cout << "no\n";}
        }
       
        else if(com==wcom)
        {
            if(croom->wes > -1 && rooms[croom->wes].full() == 0)
            {
                creatures[pci].loc = croom->wes;
                croom->remove(pci);
                rooms[croom->wes].add(pci);
            }else{cout << "no\n";}
        }
       
        //colon clean
        else if(com.substr(0,2)==c_colon){
            string id = com.substr(2,com.length() - 2);
            int iidd = stoi(id);
           
           
           
            if(croom->state ==0){cout << "already clean\n";}
            else{
               
                if(creatures[iidd].typ==2){
                    respect--; respect--;
                    cout << "Human " << iidd << " grumbles\n";
                    cout << "Human " << iidd << " grumbles\n";
                }
                if(creatures[iidd].typ==1){
                    respect++; respect++;
                    cout << "Animal " << iidd << " licks your face\n";
                    cout << "Animal " << iidd << " licks your face\n";
                }
               
                croom->state--;
                for(int i=0;i<10;i++){
                    if(creatures[croom->creatures[i]].typ==1){
                        respect++;
                        cout << "Animal " << creatures[croom->creatures[i]].num << " licks face \n";
                    }
                    if(creatures[croom->creatures[i]].typ==2){
                        respect--;
                        cout << "Human " << creatures[croom->creatures[i]].num << " grumbles \n";
                        if(croom->state==0){
                           
                            int fled = creatures[croom->creatures[i]].flee(rooms, croom);  
                            if(fled==-1){
                                /*everyone pissed*/
                                for(int j=0;j<10;j++){
                                    if(creatures[croom->creatures[j]].typ==1){
                                        cout << "Animal " << creatures[croom->creatures[j]].num << " growls\n";
                                        respect--;
                                    }
                                    if(creatures[croom->creatures[j]].typ==2){
                                        cout << "Human " << creatures[croom->creatures[j]].num << " grumbles\n";
                                        respect--;
                                    }
                                }

                            }else{cout << "and leaves to room" << fled << "\n";}
                        }
                    }
                }
           
            }

        }
       
       
        else if(com.substr(0,2)==d_colon){
            string id = com.substr(2,com.length() - 2);
            int iidd = stoi(id);
           
           
           
            if(croom->state ==2){cout << "already dirty\n";}
            else{
               
                if(creatures[iidd].typ==2){
                    respect++; respect++;
                    cout << "Human " << iidd << " smiles\n";
                    cout << "Human " << iidd << " smiles\n";
                }
                if(creatures[iidd].typ==1){
                    respect--; respect--;
                    cout << "Animal " << iidd << " growls\n";
                    cout << "Animal " << iidd << " growls\n";
                }
               
                croom->state++;
                for(int i=0;i<10;i++){
                    if(creatures[croom->creatures[i]].typ==2){
                        respect++;
                        cout << "Human " << creatures[croom->creatures[i]].num << " smiles \n";
                    }
                    if(creatures[croom->creatures[i]].typ==1){
                        respect--;
                        cout << "Animal " << creatures[croom->creatures[i]].num << " growls \n";
                        if(croom->state==2){
                           
                            int fled = creatures[croom->creatures[i]].flee(rooms, croom);  
                            if(fled==-1){
                                /*everyone pissed*/
                                for(int j=0;j<10;j++){
                                    if(creatures[croom->creatures[j]].typ==1){
                                        cout << "Animal " << creatures[croom->creatures[j]].num << " growls\n";
                                        respect--;
                                    }
                                    if(creatures[croom->creatures[j]].typ==2){
                                        cout << "Human " << creatures[croom->creatures[j]].num << " grumbles\n";
                                        respect--;
                                    }
                                }

                            }else{cout << "and leaves to room" << fled << "\n";}
                        }
                    }
                }
           
            }

        }
       
       
        else if(com.substr(0,2)==n_colon){
            string id = com.substr(2,com.length() - 2);
            int iidd = stoi(id);
           
            if(croom->nrt == -1 || rooms[croom->nrt].full()==1){
                respect--;
                if(creatures[iidd].typ==2)
                {cout << "Human " << iidd << "grumbles\n";}
                if(creatures[iidd].typ==1)
                {cout << "Animal " << iidd << "growls\n";}
            }else{
                creatures[iidd].loc = croom->nrt;
                croom->remove(iidd);rooms[croom->nrt].add(iidd);
                if(creatures[iidd].typ==2 && rooms[croom->nrt].state == 0)
                {rooms[croom->nrt].state++;}
                if(creatures[iidd].typ==1 && rooms[croom->nrt].state == 2)
                {rooms[croom->nrt].state--;}
            }
           
           

        }
       
        else if(com.substr(0,2)==s_colon){
            string id = com.substr(2,com.length() - 2);
            int iidd = stoi(id);
           
            if(croom->sth == -1 || rooms[croom->sth].full()==1){
                respect--;
                if(creatures[iidd].typ==2)
                {cout << "Human " << iidd << "grumbles\n";}
                if(creatures[iidd].typ==1)
                {cout << "Animal " << iidd << "growls\n";}
            }else{
                creatures[iidd].loc = croom->sth;
                croom->remove(iidd);rooms[croom->sth].add(iidd);
                if(creatures[iidd].typ==2 && rooms[croom->sth].state == 0)
                {rooms[croom->sth].state++;}
                if(creatures[iidd].typ==1 && rooms[croom->sth].state == 2)
                {rooms[croom->sth].state--;}
            }
           
           

        }
       
        else if(com.substr(0,2)==e_colon){
            string id = com.substr(2,com.length() - 2);
            int iidd = stoi(id);
           
            if(croom->est == -1 || rooms[croom->est].full()==1){
                respect--;
                if(creatures[iidd].typ==2)
                {cout << "Human " << iidd << "grumbles\n";}
                if(creatures[iidd].typ==1)
                {cout << "Animal " << iidd << "growls\n";}
            }else{
                creatures[iidd].loc = croom->est;
                croom->remove(iidd);rooms[croom->est].add(iidd);
                if(creatures[iidd].typ==2 && rooms[croom->est].state == 0)
                {rooms[croom->est].state++;}
                if(creatures[iidd].typ==1 && rooms[croom->est].state == 2)
                {rooms[croom->est].state--;}
            }
           
           

        }
       
        else if(com.substr(0,2)==w_colon){
            string id = com.substr(2,com.length() - 2);
            int iidd = stoi(id);
           
            if(croom->wes == -1 || rooms[croom->wes].full()==1){
                respect--;
                if(creatures[iidd].typ==2)
                {cout << "Human " << iidd << "grumbles\n";}
                if(creatures[iidd].typ==1)
                {cout << "Animal " << iidd << "growls\n";}
            }else{
                creatures[iidd].loc = croom->wes;
                croom->remove(iidd);rooms[croom->wes].add(iidd);
                if(creatures[iidd].typ==2 && rooms[croom->wes].state == 0)
                {rooms[croom->wes].state++;}
                if(creatures[iidd].typ==1 && rooms[croom->wes].state == 2)
                {rooms[croom->wes].state--;}
            }
           
           

        }
        
        else if(com==win){respect=80;}
       else if(com==lose){respect=0;}
       
       
        else if(com==amongus){
           
            cout << "⣠ ";
            cout << "\n";cout << "          ⣠⣤⣤⣤⣤⣤⣤⣤⣤⣄⡀⠀⠀⠀⠀⠀";
            cout << "\n";cout << "         ⣴⣿⡿⠛⠉⠙⠛⠛⠛⠛⠻⢿⣿⣷⣤⡀⠀⠀⠀⠀ ⠀";
            cout << "\n";cout << "⠀⠀⠀⠀⠀⠀⠀ ⣼⣿⠋⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⠈⢻⣿⣿⡄⠀⠀⠀⠀ ";
            cout << "\n";cout << "⠀⠀⠀⠀⠀⠀⠀⣸⣿⡏⠀⠀⠀⣠⣶⣾⣿⣿⣿⠿⠿⠿⢿⣿⣿⣿⣄⠀⠀⠀ ";
            cout << "\n";cout << "⠀⠀⠀⠀⠀⠀⠀⣿⣿⠁⠀⠀⢰⣿⣿⣯⠁⠀⠀⠀⠀⠀⠀⠀⠈⠙⢿⣷⡄⠀ ";
            cout << "\n";cout << "⠀⠀⣀⣤⣴⣶⣶⣿⡟⠀⠀⠀⢸⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣷⠀ ";
            cout << "\n";cout << "⠀⢰⣿⡟⠋⠉⣹⣿⡇⠀⠀⠀⠘⣿⣿⣿⣿⣷⣦⣤⣤⣤⣶⣶⣶⣶⣿⣿⣿⠀ ";
            cout << "\n";cout << "⠀⢸⣿⡇⠀⠀⣿⣿⡇⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⠀ ";
            cout << "\n";cout << "⠀⣸⣿⡇⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠉⠻⠿⣿⣿⣿⣿⡿⠿⠿⠛⢻⣿⡇⠀⠀ ";
            cout << "\n";cout << "⠀⣿⣿⠁⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣧⠀⠀ ";
            cout << "\n";cout << "⠀⣿⣿⠀⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⠀⠀ ";
            cout << "\n";cout << "⠀⣿⣿⠀⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⠀⠀ ";
            cout << "\n";cout << "⠀⢿⣿⡆⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡇⠀⠀ ";
            cout << "\n";cout << "⠀⠸⣿⣧⡀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⠃⠀⠀ ";
            cout << "\n";cout << "⠀⠀⠛⢿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⣰⣿⣿⣷⣶⣶⣶⣶⠶⠀⢠⣿⠀ ";
            cout << "\n";cout << "⠀⠀⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⣿⣿⡇⠀⣽⣿⡏⠁⠀⠀⢸⣿⡇⠀⠀⠀ ";
            cout << "\n";cout << "⠀⠀⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⣿⣿⡇⠀⢹⣿⡆⠀⠀⠀⣸⣿⠇⠀⠀⠀ ";
            cout << "\n";cout << "⠀⠀⠀⠀⠀⠀⠀⢿⣿⣦⣄⣀⣠⣴⣿⣿⠁⠀⠈⠻⣿⣿⣿⣿⡿⠏⠀⠀⠀⠀ ";
            cout << "\n";cout << "⠀⠀⠀⠀⠀⠀⠀⠈⠛⠻⠿⠿⠿⠿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀";
            cout << "\n";
        }
       
        //colon n/s/e/w
       
       
       
       
       
    }while(respect < 80 && respect > 0 && com!=quit);
   
    if(respect > 80){cout << "you win! here's a cookie";}else{cout << "you lose! hold this L";}
   
    
   

   
   
    delete [] rooms; delete [] creatures;
     
   
   
   
   
   
   
   
   

    return 0;
}
