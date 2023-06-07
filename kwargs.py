def news(player="sachine",runs="100"):
    mystry=player + "scored" + runs + "runs"
    print(mystry)
news(runs="2",player="ws")

def news(**kwargs):
    mystry=kwargs['player'] + "scored" + kwargs['runs'] + "runs"
    print(mystry)
news(runs="2",player="ws")
 
 



