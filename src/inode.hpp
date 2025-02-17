#ifndef INODE_H
#define INODE_H

#include <cstdint>
#include <ctime>

class Inode {
public:
    static const int DIRECT_BLOCKS = 8;
    static const int INDIRECT_BLOCKS = 8;

    struct Permissions {
        bool read;
        bool write;
        bool execute;
    };

    enum class InodeType {
        File,
        Directory,
        SymbolicLink,
    };
private:
    uint32_t inode_number;
    InodeType type;
    Permissions owner;
    Permissions group;
    Permissions others;
    time_t c_time; // creation time
    time_t m_time; // modification time
    time_t a_time; // access time
    uint32_t uid; // user id
    uint32_t gid; // group id
    uint32_t size; // in bytes
    uint32_t link_count; // number of hard links to this inode
    uint32_t block_count; // number of blocks allocated to this inode
    uint32_t direct_blocks[DIRECT_BLOCKS]; // direct blocks
    uint32_t indirect_blocks[INDIRECT_BLOCKS]; // indirect blocks
public:
    // TODO: implement inode methods
};

#endif
