#ifndef NANDROID_H
#define NANDROID_H

int nandroid_main(int argc, char** argv);
int bu_main(int argc, char** argv);
int nandroid_backup(const char* backup_path);
int nandroid_advanced_backup(const char* backup_path, int boot, int recovery, int system, int data, int cache, int sdext);
int nandroid_dump(const char* partition);

int nandroid_restore(const char* backup_path, int restore_boot, int restore_system, int restore_data, int restore_cache, int restore_sdext, int restore_wimax);

int nandroid_undump(const char* partition);
void nandroid_dedupe_gc(const char* blob_dir);
void nandroid_force_backup_format(const char* fmt);
unsigned nandroid_get_default_backup_format();
void nandroid_get_base_backup_path(const char* backup_path, int other_sd);
void nandroid_get_root_backup_path(const char* backup_path, int other_sd);
void nandroid_get_backup_path(const char* backup_path, int other_sd);
int recalc_sdcard_space();

#define NANDROID_BACKUP_FORMAT_FILE "/sdcard/clockworkmod/.default_backup_format"
#define NANDROID_BACKUP_FORMAT_TAR 0
#define NANDROID_BACKUP_FORMAT_DUP 1

#endif
