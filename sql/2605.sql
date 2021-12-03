SELECT prod.name, p.name FROM products AS prod
INNER JOIN providers AS p
ON p.id = prod.id_providers
INNER JOIN categories AS c
ON c.id = prod.id_categories
WHERE prod.id_categories = 6;