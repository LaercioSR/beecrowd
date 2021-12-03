start_day = int(input().replace("Dia ", ""))
start_hours, start_minutes, start_seconds = map(lambda x: int(x), input().split(" : "))
end_day = int(input().replace("Dia ", ""))
end_hours, end_minutes, end_seconds = map(lambda x: int(x), input().split(" : "))

start_time = start_seconds + (start_minutes * 60) + (start_hours * 60 * 60) + (start_day * 60 * 60 * 24)
end_time = end_seconds + (end_minutes * 60) + (end_hours * 60 * 60) + (end_day * 60 * 60 * 24)
total_time = end_time - start_time

total_days = total_time // (60 * 60 * 24)
total_time -= 60 * 60 * 24 * total_days
total_hours = total_time // (60 * 60)
total_time -= 60 * 60 * total_hours
total_minutes = total_time // 60
total_time -= 60 * total_minutes
total_seconds = total_time

print(total_days, "dia(s)")
print(total_hours, "hora(s)")
print(total_minutes, "minuto(s)")
print(total_seconds, "segundo(s)")