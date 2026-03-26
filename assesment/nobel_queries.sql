-- Create Table
CREATE TABLE Nobel_win (
    year INT,
    subject VARCHAR(50),
    winner VARCHAR(100),
    country VARCHAR(50),
    category VARCHAR(50)
);


-- Insert Data
INSERT INTO Nobel_win VALUES (1970,'Physics','Hannes Alfven','Sweden','Scientist');
INSERT INTO Nobel_win VALUES (1970,'Physics','Louis Neel','France','Scientist');
INSERT INTO Nobel_win VALUES (1970,'Chemistry','Luis Federico Leloir','France','Scientist');
INSERT INTO Nobel_win VALUES (1970,'Physiology','Ulf von Euler','Sweden','Scientist');
INSERT INTO Nobel_win VALUES (1970,'Physiology','Bernard Katz','Germany','Scientist');
INSERT INTO Nobel_win VALUES (1970,'Literature','Aleksandr Solzhenitsyn','Russia','Linguist');
INSERT INTO Nobel_win VALUES (1970,'Economics','Paul Samuelson','USA','Economist');
INSERT INTO Nobel_win VALUES (1970,'Physiology','Julius Axelrod','USA','Scientist');
INSERT INTO Nobel_win VALUES (1971,'Physics','Dennis Gabor','Hungary','Scientist');
INSERT INTO Nobel_win VALUES (1971,'Chemistry','Gerhard Herzberg','Germany','Scientist');
INSERT INTO Nobel_win VALUES (1971,'Peace','Willy Brandt','Germany','Chancellor');
INSERT INTO Nobel_win VALUES (1971,'Literature','Pablo Neruda','Chile','Linguist');
INSERT INTO Nobel_win VALUES (1971,'Economics','Simon Kuznets','Russia','Economist');
INSERT INTO Nobel_win VALUES (1978,'Peace','Anwar al-Sadat','Egypt','President');
INSERT INTO Nobel_win VALUES (1978,'Peace','Menachem Begin','Israel','Prime Minister');
INSERT INTO Nobel_win VALUES (1987,'Chemistry','Donald J. Cram','USA','Scientist');
INSERT INTO Nobel_win VALUES (1987,'Chemistry','Jean-Marie Lehn','France','Scientist');
INSERT INTO Nobel_win VALUES (1987,'Physiology','Susumu Tonegawa','Japan','Scientist');
INSERT INTO Nobel_win VALUES (1994,'Economics','Reinhard Selten','Germany','Economist');
INSERT INTO Nobel_win VALUES (1994,'Peace','Yitzhak Rabin','Israel','Prime Minister');
INSERT INTO Nobel_win VALUES (1987,'Physics','Johannes Georg Bednorz','Germany','Scientist');
INSERT INTO Nobel_win VALUES (1987,'Literature','Joseph Brodsky','Russia','Linguist');
INSERT INTO Nobel_win VALUES (1987,'Economics','Robert Solow','USA','Economist');
INSERT INTO Nobel_win VALUES (1994,'Literature','Kenzaburo Oe','Japan','Linguist');

--Winners of Year 1970
SELECT year, subject, winner FROM Nobel_win WHERE year = 1970;

--Chemistry Winners Between 1965 and 1975
SELECT year, subject, winner, country FROM Nobel_win WHERE subject='Chemistry' AND year BETWEEN 1965 AND 1975;

--Winner Name Starting With Louis
SELECT year, subject, winner, country FROM Nobel_win WHERE winner LIKE 'Louis%';

--Subject Not Starting With 'P'
SELECT * FROM Nobel_win WHERE subject NOT LIKE 'P%' ORDER BY year DESC, winner ASC;

--1970 Winners Ordered Specially
SELECT year, subject, winner, country, category
FROM Nobel_win
WHERE year = 1970
ORDER BY 
CASE 
    WHEN subject='Chemistry' THEN 2
    WHEN subject='Economics' THEN 3
    ELSE 1
END,
subject ASC;
