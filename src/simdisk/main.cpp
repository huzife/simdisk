#include <iostream>
#include "initializor/initializor.h"
#include "disk-manager/disk-manager.h"

int main() {
    system("clear");
    auto& disk_manager = DiskManager::getInstance();
    disk_manager->getInitializor()->init();
    return 0;
}