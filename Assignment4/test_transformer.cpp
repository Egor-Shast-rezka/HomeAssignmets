/*
    Egor Shastin st129457@student.spbu.ru
    This is code for testing all classes by using Google Test
*/

#include <gtest/gtest.h>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"
#include "Ability.h"
#include "Weapon.h"

// Tests for class Transformer
TEST(TransformerTest, InitialValues)
{
    Transformer transformer;
    // Check inital values
    EXPECT_EQ(transformer.getLevel(), 15);
    EXPECT_EQ(transformer.getAmmo(), 5);
    EXPECT_EQ(transformer.getFuel(), 20);
}

TEST(TransformerTest, FireWeapon)
{
    Transformer transformer;
    transformer.fire();
    EXPECT_EQ(transformer.getAmmo(), 5);
}

// Test for class Ability
TEST(AbilityTest, Activation)
{
    Transformer transformer;
    Ability ability(true, 5);
    transformer.setFuel(10); // Set fuel
    ability.activate(transformer); // Activate associate clacc ( activate ultimate )
    EXPECT_EQ(transformer.getFuel(), 5);
}

// Test for class Weapon
TEST(WeaponTest, FireWeaponDecrease)
{
    Weapon weapon(5, true);
    weapon.setPatron(weapon.getPatron() - 1); // .fire()
    EXPECT_EQ(weapon.getPatron(), 4);
}

// Test for class Autobot
TEST(AutobotTest, AutobotCreation)
{
    Autobot autobot;
    EXPECT_EQ(autobot.getLevel(), 15); // check init level
    EXPECT_EQ(autobot.getAmmo(), 5); // check init ammo
    EXPECT_EQ(autobot.getFuel(), 20); // check init fuel
}

// Test for class Decepticon
TEST(DecepticonTest, DecepticonCreation)
{
    Decepticon decepticon;
    EXPECT_EQ(decepticon.getLevel(), 15); // check init level
    EXPECT_EQ(decepticon.getAmmo(), 5); // check init ammo
    EXPECT_EQ(decepticon.getFuel(), 20); // check init fuel
}

// Test for class Dinobot
TEST(DinobotTest, DinobotCreation)
{
    Dinobot dinobot;
    EXPECT_EQ(dinobot.getLevel(), 15); // check init level
    EXPECT_EQ(dinobot.getAmmo(), 5); // check init ammo
    EXPECT_EQ(dinobot.getFuel(), 20); // check init fuel
}

// Test overload operator
TEST(AutobotTest, ComparisonOperators)
{
    Autobot autobot1(100, true);
    Autobot autobot2(150, false);

    // Checking comparison operators
    EXPECT_LT(autobot1, autobot2);
    EXPECT_GT(autobot2, autobot1);
    EXPECT_FALSE(autobot1 == autobot2);

    autobot1.setFirepowerAutobot(150); // Change for check
    EXPECT_EQ(autobot1, autobot2); // Now they equal
}

// Test comparison operators for Decepticon
TEST(DecepticonTest, ComparisonOperators)
{
    Decepticon decepticon1(120, true);
    Decepticon decepticon2(100, false);

    // Checking comparison operators
    EXPECT_GT(decepticon1, decepticon2);
    EXPECT_LT(decepticon2, decepticon1);
    EXPECT_FALSE(decepticon1 == decepticon2);

    decepticon2.setFirepowerDecepticon(120); // Change for check
    EXPECT_EQ(decepticon1, decepticon2); // Now they equal
}

// Test comparison between Autobot and Decepticon
TEST(TransformerComparisonTest, AutobotVsDecepticon)
{
    Autobot autobot(130, true);
    Decepticon decepticon(140, true);

    // Checking comparison operators
    EXPECT_LT(autobot, decepticon);
    EXPECT_GT(decepticon, autobot);
    EXPECT_FALSE(autobot == decepticon);

    autobot.setFirepowerAutobot(140); // Change for check
    EXPECT_EQ(autobot, decepticon); // Now they equal
}

// Test comparison operators for Dinobot
TEST(DinobotTest, ComparisonOperators)
{
    Dinobot dinobot1(100, true);
    Dinobot dinobot2(150, false);

    // Checking comparison operators
    EXPECT_LT(dinobot1, dinobot2);
    EXPECT_GT(dinobot2, dinobot1);
    EXPECT_FALSE(dinobot1 == dinobot2);

    dinobot1.setFirepowerDinobot(150); // Change for check
    EXPECT_EQ(dinobot1, dinobot2); // Now they equal
}

// Test comparison between Dinobot and Autobot
TEST(TransformerComparisonTest, DinobotVsAutobot)
{
    Dinobot dinobot(120, true);
    Autobot autobot(130, false);

    // Checking comparison operators
    EXPECT_LT(dinobot, autobot);
    EXPECT_GT(autobot, dinobot);
    EXPECT_FALSE(dinobot == autobot);

    dinobot.setFirepowerDinobot(130); // Change for check
    EXPECT_EQ(dinobot, autobot); // Now they equal
}
