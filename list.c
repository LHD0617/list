/**
 * @file list.c
 * @author 满心欢喜
 * @brief 链表
 * @version 0.1
 * @date 2023-02-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/* @include */
#include <stdlib.h>
#include "list.h"

/* @struct */
#pragma pack(1) // 单字节对齐

typedef struct
{
    list_node_t* next;          // 指针域
    list_uint8 data[];          // 数据域
}list_node_t;

#pragma pack() // 恢复默认字节对齐

/**
 * @brief 创建list
 * 
 * @param size 单位数据大小
 * @return list_cb_t* 对象指针 若为FIFO_NULL 则创建失败
 */
list_cb_t* list_create(list_uint8 size)
{
    list_cb_t* cb = (list_cb_t*)LIST_MALLOC(sizeof(list_cb_t));
    if(!cb) return LIST_NULL;
    cb->size = size;
    cb->len = 0;
    cb->next = LIST_NULL;
    return cb;
}

/**
 * @brief 删除链表
 * 
 * @param cb 对象指针
 */
void list_delete(list_cb_t cb)
{
    
}

#pragma pack() // 恢复默认字节对齐
