import telebot

bot = telebot.TeleBot('1362641473:AAF3pYjK4kYKFBHhOy9Q-qmSQdcWB8lAZyY')
#keyboard1 = telebot.types.ReplyKeyboardMarkup(resize_keyboard=True)
#keyboard1.row('Розклад', 'Заміни')
logs = dict()
@bot.message_handler(commands=['start'])
def start_message(message):
    bot.send_message(message.chat.id, "Здоровенькі були, {0.first_name}!\nЯ - {1.first_name}, бот створений для того щоб просто існувати😊".format(
                         message.from_user, bot.get_me()))
    bot.send_message(message.chat.id, "1 - Вхід\n2 - Реєстрація\n3 - Вихід\n")
    bot.send_message(message.chat.id, "Введіть логін:")
    bot.send_message(message.chat.id, "Введіть логін:")
    

@bot.message_handler(content_types=['text'])
def send_text(message):


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
    

bot.polling()