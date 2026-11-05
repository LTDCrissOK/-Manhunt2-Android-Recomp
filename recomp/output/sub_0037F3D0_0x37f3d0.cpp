#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037F3D0
// Address: 0x37f3d0 - 0x37f4b8
void sub_0037F3D0_0x37f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F3D0_0x37f3d0");
#endif

    ctx->pc = 0x37f3d0u;

    // 0x37f3d0: 0x40000002  .word       0x40000002                   # mfc0        $zero, Index # 00000002 <InstrIdType: R5900_COP0>
    ctx->pc = 0x37f3d0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
    // 0x37f3d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f3d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f3d8: 0x1004780c  beq         $zero, $a0, . + 4 + (0x780C << 2)
    ctx->pc = 0x37F3D8u;
    {
        const bool branch_taken_0x37f3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x37F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F3D8u;
        // 0x37f3dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f3d8) {
            ctx->pc = 0x39D40Cu;
            return;
        }
    }
    ctx->pc = 0x37F3E0u;
    // 0x37f3e0: 0x10047818  beq         $zero, $a0, . + 4 + (0x7818 << 2)
    ctx->pc = 0x37F3E0u;
    {
        const bool branch_taken_0x37f3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x37F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F3E0u;
        // 0x37f3e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f3e0) {
            ctx->pc = 0x39D444u;
            return;
        }
    }
    ctx->pc = 0x37F3E8u;
    // 0x37f3e8: 0x80000070  lb          $zero, 0x70($zero)
    ctx->pc = 0x37f3e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x70u));
    // 0x37f3ec: 0x1e007d8  .word       0x01E007D8                   # mult        $zero, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37f3ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37f3f0: 0x800000b0  lb          $zero, 0xB0($zero)
    ctx->pc = 0x37f3f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xB0u));
    // 0x37f3f4: 0x1e0ffc3  .word       0x01E0FFC3                   # sra         $ra, $zero, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f3f4u;
    SET_GPR_S32(ctx, 31, SRA32(GPR_S32(ctx, 0), 31));
    // 0x37f3f8: 0x10030003  beq         $zero, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37F3F8u;
    {
        const bool branch_taken_0x37f3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x37F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F3F8u;
        // 0x37f3fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f3f8) {
            ctx->pc = 0x37F408u;
            goto label_37f408;
        }
    }
    ctx->pc = 0x37F400u;
    // 0x37f400: 0x100500f0  beq         $zero, $a1, . + 4 + (0xF0 << 2)
    ctx->pc = 0x37F400u;
    {
        const bool branch_taken_0x37f400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x37F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F400u;
        // 0x37f404: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f400) {
            ctx->pc = 0x37F7C4u;
            return;
        }
    }
    ctx->pc = 0x37F408u;
label_37f408:
    // 0x37f408: 0x81e2237c  lb          $v0, 0x237C($t7)
    ctx->pc = 0x37f408u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
    // 0x37f40c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f40cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f410: 0x81e3237c  lb          $v1, 0x237C($t7)
    ctx->pc = 0x37f410u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
    // 0x37f414: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f414u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f418: 0x81e4237c  lb          $a0, 0x237C($t7)
    ctx->pc = 0x37f418u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
    // 0x37f41c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f41cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f420: 0x81e5237c  lb          $a1, 0x237C($t7)
    ctx->pc = 0x37f420u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
    // 0x37f424: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f424u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f428: 0x80010870  lb          $at, 0x870($zero)
    ctx->pc = 0x37f428u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x870u));
    // 0x37f42c: 0x1e111bc  .word       0x01E111BC                   # dsll32      $v0, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << (32 + 6));
    // 0x37f430: 0x80010870  lb          $at, 0x870($zero)
    ctx->pc = 0x37f430u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x870u));
    // 0x37f434: 0x1e118bd  .word       0x01E118BD                   # INVALID     $t7, $at, 0x18BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f434u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37F434 raw=0x01E118BD");
    // 0x37f438: 0x80010870  lb          $at, 0x870($zero)
    ctx->pc = 0x37f438u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x870u));
    // 0x37f43c: 0x1e120be  .word       0x01E120BE                   # dsrl32      $a0, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f43cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) >> (32 + 2));
    // 0x37f440: 0x80010870  lb          $at, 0x870($zero)
    ctx->pc = 0x37f440u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x870u));
    // 0x37f444: 0x1e0298b  .word       0x01E0298B                   # movn        $a1, $t7, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f444u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 15));
    // 0x37f448: 0x800210b0  lb          $v0, 0x10B0($zero)
    ctx->pc = 0x37f448u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x10B0u));
    // 0x37f44c: 0x1e1f9bf  .word       0x01E1F9BF                   # dsra32      $ra, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f44cu;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 1) >> (32 + 6));
    // 0x37f450: 0x800210b0  lb          $v0, 0x10B0($zero)
    ctx->pc = 0x37f450u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x10B0u));
    // 0x37f454: 0x1e031cf  .word       0x01E031CF                   # sync # 01E03000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f454u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x37f458: 0x800210b0  lb          $v0, 0x10B0($zero)
    ctx->pc = 0x37f458u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x10B0u));
    // 0x37f45c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f45cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f460: 0x800210b0  lb          $v0, 0x10B0($zero)
    ctx->pc = 0x37f460u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x10B0u));
    // 0x37f464: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f464u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f468: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f468u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f46c: 0x1e031bf  .word       0x01E031BF                   # dsra32      $a2, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f46cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> (32 + 6));
    // 0x37f470: 0x34062800  ori         $a2, $zero, 0x2800
    ctx->pc = 0x37f470u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)10240);
    // 0x37f474: 0x1e1fa0b  .word       0x01E1FA0B                   # movn        $ra, $t7, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f474u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37f478: 0x80060875  lb          $a2, 0x875($zero)
    ctx->pc = 0x37f478u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x875u));
    // 0x37f47c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f47cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f480: 0x12031801  beq         $s0, $v1, . + 4 + (0x1801 << 2)
    ctx->pc = 0x37F480u;
    {
        const bool branch_taken_0x37f480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x37F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F480u;
        // 0x37f484: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f480) {
            ctx->pc = 0x385488u;
            return;
        }
    }
    ctx->pc = 0x37F488u;
    // 0x37f488: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f488u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f48c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f48cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f490: 0x34062800  ori         $a2, $zero, 0x2800
    ctx->pc = 0x37f490u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)10240);
    // 0x37f494: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f494u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f498: 0x520307ed  beql        $s0, $v1, . + 4 + (0x7ED << 2)
    ctx->pc = 0x37F498u;
    {
        const bool branch_taken_0x37f498 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x37f498) {
            ctx->pc = 0x37F49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F498u;
            // 0x37f49c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381450u;
            return;
        }
    }
    ctx->pc = 0x37F4A0u;
    // 0x37f4a0: 0x800610b5  lb          $a2, 0x10B5($zero)
    ctx->pc = 0x37f4a0u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x10B5u));
    // 0x37f4a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f4a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f4a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f4a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f4ac: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x37f4acu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
    // 0x37f4b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f4b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f4b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f4b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x37f4b8u;
}
