SELECT m.id, m.name
FROM movies AS m
JOIN prices AS p
    ON p.id = m.id_prices
WHERE p.value < 2.0;