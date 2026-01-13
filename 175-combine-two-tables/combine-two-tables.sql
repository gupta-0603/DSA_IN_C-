Select 
      P.firstName,
      P.lastName,
      A.city,
      A.state
From Person as P
LEFT JOIN Address as A ON P.PersonID=A.PersonID;
