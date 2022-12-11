BEGIN
 
NUMBER num1,num2,num3
 
INPUT num1
INPUT num2
INPUT num3
 
IF num1>num2 AND num1>num3  THEN
     OUTPUT num1+ "is bigger"
ELSE IF num2 > num3 THEN
     OUTPUT num2 + "is bigger"
ELSE
     OUTPUT num3+ "is bigger"
ENDIF
 
END