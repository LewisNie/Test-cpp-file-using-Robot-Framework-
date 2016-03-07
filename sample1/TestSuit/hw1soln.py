# The valid stock analyst opinions
ops=['strong sell', 'sell', 'hold', 'buy', 'strong buy']
person=1
def compare(opinion1, opinion2):
    ''' Compare two stock analyst opinions
        Return a negative number if opinion1 is worse than opinion2
               a positive number if opinion1 is better than opinion2
               zero if the two opinions are the same
    '''
    return ops.index(opinion1) - ops.index(opinion2)
    
def changes(opinions):
    ''' Return list of changes in opinions
    '''
    if len(opinions) <= 1:
        return []
    change = compare(opinions[0], opinions[1])
    if change > 0:
        result = ['downgrade']
    elif change < 0:
        result = ['upgrade']
    else:
        result = ['same']
    return result + changes(opinions[1:])
    
def currentOpinions(opinionsList):
    ''' Return list of only the most current opinion of each analyst
    '''
    result = []
    for opinion in opinionsList:
        result.append(opinion[-1])
    return result

def removeEmpties(seq):
    ''' Remove empty sequence from sequence of sequences
    '''
    return filter(lambda elt: len(elt) > 0, seq)

def getRating(opinion):
    ''' Convert opinion to number starting with 1 for highest up to 5 for lowest
    '''
    return 5 - ops.index(opinion)

def averageRating(opinions):
    ''' Compute average rating of all opinions
    '''
    if 0 == len(opinions):
        return 0
    return sum(map(getRating, opinions))/(len(opinions) + 0.0)
