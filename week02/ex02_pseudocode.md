BEGIN [Grading]
    INPUT Score
    IF Score >= 80 THEN
        Grade = "A"
    ELSE IF Score >= 70 THEN
        Grade = "B"
    ELSE IF Score >= 60 THEN
        Grade = "C"
    ELSE IF Score >= 50 THEN
        Grade = "D"
    ELSE
        Grade = "F"
    END IF
    OUTPUT Grade
END

BEGIN [Bigger_number]
    INPUT A, B
    IF A > B THEN
        OUTPUT A
    ELSE IF B > A THEN
        OUTPUT B
    ELSE
        OUTPUT "A and B are equal"
    END IF
END

BEGIN [Counting_From_1_To_N]
    INPUT N
    FOR i = 1 TO N DO
        PRINT i
    END FOR
END