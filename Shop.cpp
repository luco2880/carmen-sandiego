#include <iostream>
#include "Shop.h"
#include "ComputerPartItem.h"
#include "Computer.h"



Shop::Shop()
{
    

    ItemType computer_part_item_type = ItemType("COMPUTER PARTS", "If your computer breaks, you need 5 computer parts to make a new one.", 1);
    vector<Item> computer_part_items = { ComputerPartItem("CPU", 10, 1, 1), ComputerPartItem("GPU", 20, 1, 2), ComputerPartItem("Power Supply Unit", 5, 1, 3),
     ComputerPartItem("Computer Case", 15, 1, 4), ComputerPartItem("internet card", 5, 1, 5),
     ComputerPartItem("keyboard and mouse", 10, 1, 6), Computer("premade computer", 100, 1, 7)};
    computer_part_item_type.setItems(computer_part_items);

    ItemType antivirus_software_item_type = ItemType("ANTIVIRUS SOFTWARE", "If your computer is infected with a virus, use the antivirus software to get rid of it.", 2);
    vector<Item> antivirus_software_items = { Item("USB", 10, 2, 8)};
    antivirus_software_item_type.setItems(antivirus_software_items);

    ItemType virtual_private_network_item_type = ItemType("VIRTUAL PRIVATE NETWORK", "The more VPNs you have the harder it is for a hacker to infect your computer with a virus.", 3);
    vector<Item> virtual_private_network_items = { Item("VPN", 20, 3, 9)};
    virtual_private_network_item_type.setItems(virtual_private_network_items);

    ItemType internet_provider_item_type = ItemType("INTERNET PROVIDER.", "The better the internet provider, the more reliable your hacking will be.", 4);
    vector<Item> internet_provider_items = { Item("Internet provider level 2", 10, 4, 10), Item("Internet provider level 3", 25, 4, 11),
    Item("Internet provider level 4", 40, 4, 12), Item("Internet provider level 5", 50, 4, 13)};
    internet_provider_item_type.setItems(internet_provider_items);
   
   inventory = { };
   inventory.insert(inventory.end(), computer_part_items.begin(), computer_part_items.end());
   inventory.insert(inventory.end(), antivirus_software_items.begin(), antivirus_software_items.end());
   inventory.insert(inventory.end(), virtual_private_network_items.begin(), virtual_private_network_items.end());
   inventory.insert(inventory.end(), internet_provider_items.begin(), internet_provider_items.end());
   
    item_types = 
    {
    computer_part_item_type,
    antivirus_software_item_type,
    virtual_private_network_item_type,
    internet_provider_item_type
    };
    Screen screen;

}
void Shop::showMenu() {
    for (int i = 0; i < item_types.size(); i++)
    {
    ItemType item_type = item_types[i];
    screen.display(to_string(item_type.getId()) + ") " + item_type.getName());
    screen.display(" " + item_type.getDescription() + " \n");
    vector<Item> items = item_type.getItems();

        for(int j = 0; j < item_type.getItems().size(); j++) {
            Item item = item_type.getItems()[j];
            screen.display(to_string(item.getId()) + " " + item.getName() + " " + to_string(item.getCost()));
        }
    }
}
void Shop::addItem(Item item)
{
    inventory.push_back(item);
}
int Shop::findItemIndex(int id)
{
    for (int i = 0; i < inventory.size(); i++)
    {
    if (id == inventory[i].getId())
    {
        return i;
    }
    }
    return -1;
}
Item Shop::getItem(int index)
{
    return inventory[index];
}
void Shop::processOrder()
{
    int option = screen.collectNumberInput();
    int index = findItemIndex(option);
    if (index == -1)
    {
        screen.display("Invalid input.");
        return;
    }
    Item itemWanted = getItem(index);
    screen.display("How many do you want?");
    int number_of_items = screen.collectNumberInput();
    


}