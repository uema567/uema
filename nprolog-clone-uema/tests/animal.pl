% unicode example

動物(人間).
動物(X) :- 人間(X).
動物(_い) :- 鳥類(_い).

人間(ジョー).


鳥類(X) :-
    温血(X),
    脊椎動物(X),
    羽根(X).


ほ乳類(A) :-
    温血(A),
    脊椎動物(A),
    体毛(A).

温血(熊).
温血(鷲).
温血(人).
温血(すずめ).

脊椎動物(熊).
脊椎動物(鷲).
脊椎動物(人).
脊椎動物(すずめ).

体毛(人).
体毛(熊).

羽根(鷲).
羽根(すずめ).

