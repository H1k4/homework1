import telebot
token = '7422488790:AAF7Rlj1Iet8si7yByRguqY_dvnTJGr2RCQ'
bot = telebot.TeleBot(token)
@bot.message_handler(commands=['start'])
def start(message):
    chat = message.chat
    name = chat.first_name
    bot.send_message(message.chat.id, text=f'Приветик {name}! Мое имя - Шарлотта. Я бот и могу выполнять данные функции '                                           '    /echo '
                                           '/apple '                                           '/newcat')
@bot.message_handler(commands=['newcat'])
def newcat(message):
    bot.send_message(message.chat.id, text='Скоро здесь будут котики! Надеюсь, я их к тому времени не съем...Да ладно, шучу! Я вегетарианка.')
@bot.message_handler(commands=['apple'])
def apple(message):
    bot.send_message(message.chat.id, text='...кто-то сказал...яблоки.? АЙ ЛОВ ЭППЕЛС!!!!!!*начинает жоско флексить*')
# @bot.message_handler(commands=['echo'])def echo(message):
#     bot.send_message(message.chat.id, message.text)
# # @bot.message_handler(content_types=['text'])
# # def echo(message):#     bot.send_message(message.chat.id, message.text)

bot.polling()