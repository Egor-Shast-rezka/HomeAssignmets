/*
    Egor Shastin st129457@student.spbu.ru
    This is code for testing all classes by using Google Test
*/

#include <gtest/gtest.h>
#include "Class_Transformer.h"
#include "Class_Autobot.h"
#include "Class_Decepticon.h"
#include "Class_Dinobot.h"
#include "Class_Ability.h"
#include "Class_Weapon.h"

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

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}















