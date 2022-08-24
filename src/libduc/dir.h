//
// Created by grider on 22-8-22.
//

#ifndef DUC_DIR_H
#define DUC_DIR_H

struct duc_dir {
    struct duc *duc;
    struct duc_devino devino;
    struct duc_devino devino_parent;
    time_t mtime;
    char *path;
    struct duc_dirent *ent_list;
    struct duc_size size;
    size_t ent_cur;
    size_t ent_count;
    size_t ent_pool;
    duc_size_type size_type;
    duc_sort sort;
};

#endif //DUC_DIR_H
