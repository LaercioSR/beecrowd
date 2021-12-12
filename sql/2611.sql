SELECT m.id, m.name
FROM movies AS m
JOIN genres AS g
    ON g.id = m.id_genres
WHERE g.description = 'Action';