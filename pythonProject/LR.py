
logs = dict()

while True:
    n = int(input("1 - Вхід\n2 - Реєстрація\n3 - Вихід\n"))
    if n == 1:
        login = input("Введіть логін:")
        if login in logs:
            password = input("Введіть пароль")
            if logs.keys(login) == password:
                print("Вхід успішний")
            else:
                print("Пароль не вірний")
        else:
            print("Логін не вірний")
    elif n == 2:
        login = input("Введіть логін:")

        if login not in logs:
            password = input("Введіть пароль:")
            logs[login] = password
            print("Реєстрація успішна")
        else:
            print("Логін вже використовується")
    elif n == 3:
        break
    else:
        print("Перевірте правильність введених данних")