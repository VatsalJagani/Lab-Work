domains
       Color,nature=symbol
       User,name=string
predicates
	hypothesis(string,color)
	ask(name,Nature)
	response(char)
	go
clauses
	go:-
	write("What is the name of user?"),
	readln(User),
        write("what is favourite color?"),
        readln(Color), 
        hypothesis(User,Color), 
	write(User ,"'s ",Color,"."),nl.
	
	 
	ask(User,red):-
	write("Does ",User," likes red color(y/n)?"),
	response(Reply),
	Reply='y'.
	
	ask(User,yellow):-
	write("Does ",User," likes yellow color(y/n)?"),
	response(Reply),
	Reply='y'.
	
	ask(User,orange):-
	write("Does ",User," likes orange color(v/n)?"),
	response(Reply),
	Reply='y'.
	
	ask(User,green):-
	write("Does ",User," likes green color(y/n)?"),
	response(Reply),
	Reply='y'.
		
	ask(User,blue):-
	write("Does ",User," likes blue color(y/n)?"),
	response(Reply),
	Reply='y'.
	
	ask(User,purple):-
	write("Does",User,"likes purple(y/n)?"),
	response(Reply),
	Reply='y'.
	
	ask(User,brown):-
	write("Does",User,"likes brown(y/n)?"),
	response(Reply),
	Reply='y'.
	
	ask(User,grey):-
	write("Does",User,"likes grey(y/n)?"),
	response(Reply),
	Reply='y'.
	
	ask(User,black):-
	write("Does",Use	r,"likes black(y/n)?"),
	response(Reply),
	Reply='y'.
	
	hypothesis(User,red):-
	ask(User,social),
	ask(User,assertive),
	ask(User,energetic),
	ask(User,moody),
	ask(User,impulsive),
        ask(User,optimistic),
        ask(User,complainer).
        
        hypothesis(User,orange):-
	ask(User,goodnatured),
	ask(User,goodwork),
	ask(User,strongloyalties),
	ask(User,goodheart).
	
	hypothesis(User,yellow):-
	ask(User,imaginative),
	ask(User,helping),
	ask(User,shy),
	ask(User,mentalloner),
	ask(User,safefriend).
	
	hypothesis(User,green):-
	ask(User,goodcitizen),
	ask(User,sensitive),
	ask(User,frank),
	ask(User,teacher).
	
	hypothesis(User,blue):-
	ask(User,deliberate),
	ask(User,introspective),
	ask(User,loyalfriend),
	ask(User,conservative).
	
	hypothesis(User,purple):-
	ask(User,goodmind),
	ask(User,angry),
	ask(User,creative).
	
	hypothesis(User,brown):-
	ask(User,clever),
	ask(User,stubborn),
	ask(User,steady).
	
	hypothesis(User,grey):-
	ask(User,cautious),
	ask(User,adjustable).
	
	hypothesis(User,black):-
	ask(User,polite),
	ask(User,regal),
	ask(User,quite).
	
	response(Reply):-
	readchar(Reply),
	write(Reply),nl.
	
	 