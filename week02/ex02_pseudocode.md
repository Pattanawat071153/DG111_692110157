BEGIN [Grading] 
    INPUT Score
    IF Score >=80 THEN
        Grade = A
    ELSE 
    Score >=70 THEN
        Grade = B
    ELSE 
    Score >=60 THEN
        Grade = C
    ELSE 
    Score >=50 THEN
        Grade = D
    ELSE
        Grade = F
    END IF
    OUTPUT Grade
END

BEGIN [Bigger_number]
    INPUT A & b
    IF A>B THEN
        OUTPUT A
    ELSE
        OUTPUT B
END

BEGIN [Counting_From_1_To_N]
    FOR i = 1 TO N DO
        PRINT i
END FOR