import random
import time
class Love:
    def __init__(self, partner_name):
        self.name = partner_name
        self.messages = [
            f"รัก{self.name}มากๆ ❤️",
            f"{self.name}คือกำลังใจของเค้านะ 💕",
            f"วันนี้{self.name}เหนื่อยไหมคับ 🥰",
            f"ดีใจที่มี{self.name}อยู่ในชีวิตนะ 🌹",
            f"อยู่กับพี่ไปนานๆนะ{self.name}💓"
        ]
    def send_love(self, count):
        if not self.check_intensity(count):
            print("พักก่อนมดขึ้น CPU แล้ว🐜💻")
            return
    def check_intensity(self, count):
        if count > 1000:
            print("\n⚠️ ระวังมดจะขึ้น CPU นะครับ 55555 🐜💻")
        elif count > 500:
            print("\n🐜 มดขึ้นจอหมดแล้วววว หวานเกินไปละ!")
        elif count > 100:
            print("\n💖 คลั่งรักเกินนนนนน")
        print(f"\n--- มาบอกรัก {self.name} ของเรากานน🤪💞---")
        for i in range(1, count + 1):
            msg = random.choice(self.messages)
            print(f"🌟{i} แล้ว")
            time.sleep(1)
            print(f"💌 {msg}")
            time.sleep(2)
        print(f"\n✨ รัก{self.name}ที่สุดในโลกกกกก 🎉")
my_love_name = input("ชื่อแฟน😆: ")
try:
    how_many = int(input("บอกเค้ากี่ครั้งดี🤪: "))
    my_bot = Love(my_love_name)
    my_bot.check_intensity(how_many) 
except ValueError:
    print("เดี๋ยวกี่ครั้ง คือ ใส่ตัวเลขสิ!!💢")