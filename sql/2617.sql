SELECT pd.name, pv.name
FROM products AS pd
JOIN providers AS pv
    ON pv.id = pd.id_providers
WHERE pv.name = 'Ajax SA';