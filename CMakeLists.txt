cmake_minimum_required(VERSION 3.25)
project(ZJUcbook_Problemset_1 C)

set(CMAKE_C_STANDARD 11)

add_executable(ZJUcbook_Problemset_1 main.c exe2-3.c test1.c test2.c exe2-4.c exe2-6.c exe2-8.c exe2-9.c exe2-10.c exe2-11.c exe2-12.c exe2-13.c exe2-14.c exe2-15.c exe2-17.c exe2-18_F.c xt2-1.c xt2-2.c xt2-3.c xt2-4.c xt2-5.c xt2-6.c exe3-3_F.c exe3-2.c exe3-4.c exe3-5.c exe3-7.c exe3-8.c xt3-1_F.c xt3-2.c xt3-3.c xt3-4_F.c test3.c xt3-5_F.c test4.c exe4-3.c exe4-6_F.c exe4-7.c exe4-10_F.c exe4-11_F.c xt4-1.c xt4-2.c xt4-3_f.c xt4-4.c xt4-5_IMP.c xt4-6_IMP.c xt4-7_IMP_F.c xt4-8_f.c xt4-9_IMP_F.c xt4-10.c xt4-11_IMP_F.c exe6-3_f.c xt6-7_F.c xt6-8_f.c exe5-1.c exe5-2.c exe5-3.c xt5-1.c xt5-2_f.c xt5-3.c xt5-4_f.c xt5-5.c xt5-6.c xt5-7_F.c xt5-8_f.c xt5-8_v2.c xt6-1.c xt6-2.c xt6-3_IMP_F.c xt6-4_IMP_F.c xt6-5_F.c xt6-6.c exe7-2_f.c exe7-3.c exe7-4_IMP_FF.c exe7-7.c exe7-8_F.c exe7-9.c exe7-10.c exe7-11.c xt7-1.c xt7-2_IMP.c xt7-3_F.c xt7-6.c xt7-7.c xt7-8_F.c xt7-4.c xt7-5_IMP_F.c exe8-2.c test5.c xt8-1.c xt8-2.c xt8-3_f.c xt8-4_IMP_F.c exa8-8.c exe8-8_IMP.c xt8-5_IMP.c xt8-6_IMP.c xt8-8.c xt8-9.c xt8-7.c xt8-10.c xt9-2.c xt9-6.c xt9-1_IMP.c xt9-3.c xt9-4_F.c xt9-5_f.c exp2-1-4.c exp4-1-12_f.c exp7-1-4.c exp7-1-1_IMP.c exp5-5.c exa10-5.c exe10-1.c xt10-1.c xt10-2.c xt10-3_f.c xt10-_F.c test6.c xt10-5.c xt10-6.c xt10-7_f.c xt10-8_f.c xt10-11_IMP_f.c exe11-4.c xt11-1_f.c xt11-2_F.c xt11-3.c xt11-4_F.c xt11-5_F.c xt11-6_IMP_F.c xt11-7_IMP_F.c "exa11-10-1.c" "exa11-10-1.c" xt11-8_f.c)
# 遍历项目根目录下所有的 .c 文件
file (GLOB_RECURSE files *.c)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file} "exa11-10-1.c")
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()
