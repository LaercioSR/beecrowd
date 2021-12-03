SELECT c.name, SUM(p.amount)
FROM categories AS c
LEFT JOIN products AS p
    ON p.id_categories = c.id
GROUP BY c.name