cmake_minimum_required(VERSION 3.6)
project(cppEx1)

include_directories(${GTEST_DIR}/src/gtest-all.cc)
set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Game/main.cpp Game/Point2d.cpp Game/Point2d.h Characters/Character.cpp Characters/Character.h Characters/Hero/Hero.cpp Characters/Hero/Hero.h Items/Weapon/Weapon.cpp Items/Weapon/Weapon.h Items/Armor/Armor.cpp Items/Armor/Armor.h Characters/Hero/Warrior.cpp Characters/Hero/Warrior.h Characters/Enemy/Enemy.cpp Characters/Enemy/Enemy.h Items/Item.cpp Items/Item.h Items/Weapon/WarriorWeapon.cpp Items/Weapon/WarriorWeapon.h Characters/Hero/Archer.cpp Characters/Hero/Archer.h Characters/Hero/Wizard.cpp Characters/Hero/Wizard.h Items/Armor/BodyArmor.cpp Items/Armor/BodyArmor.h Items/Armor/ShieldArmor.cpp Items/Armor/ShieldArmor.h Items/Potion/Potion.cpp Items/Potion/Potion.h Items/Potion/mana.cpp Items/Potion/mana.h Game/Game.cpp Game/Game.h Game/Console.cpp Game/Console.h Items/Weapon/ArcherWeapon.cpp Items/Weapon/ArcherWeapon.h Items/Weapon/WizardWeapon.cpp Items/Weapon/WizardWeapon.h Characters/Enemy/Elite.cpp Characters/Enemy/Elite.h Items/Potion/health.cpp Items/Potion/health.h Items/Weapon/Hammer.cpp Items/Weapon/Hammer.h Items/Weapon/Sword.cpp Items/Weapon/Sword.h Items/Weapon/Bow.cpp Items/Weapon/Bow.h Items/Weapon/CrossBow.cpp Items/Weapon/CrossBow.h Items/Weapon/Staff.cpp Items/Weapon/Staff.h Items/Weapon/Wand.cpp Items/Weapon/Wand.h Characters/Enemy/EnemyCharacter.cpp Characters/Enemy/EnemyCharacter.h Game/unitTest.cpp)
add_executable(GAME ${SOURCE_FILES})
