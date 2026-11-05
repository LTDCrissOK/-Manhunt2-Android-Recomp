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

// Function: sub_003CF360
// Address: 0x3cf360 - 0x3cf538
void sub_003CF360_0x3cf360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CF360_0x3cf360");
#endif

    switch (ctx->pc) {
        case 0x3cf3a0u: goto label_3cf3a0;
        case 0x3cf3b8u: goto label_3cf3b8;
        case 0x3cf3e0u: goto label_3cf3e0;
        case 0x3cf450u: goto label_3cf450;
        case 0x3cf490u: goto label_3cf490;
        case 0x3cf4a0u: goto label_3cf4a0;
        case 0x3cf4a8u: goto label_3cf4a8;
        case 0x3cf4bcu: goto label_3cf4bc;
        case 0x3cf4ccu: goto label_3cf4cc;
        case 0x3cf4dcu: goto label_3cf4dc;
        case 0x3cf4e4u: goto label_3cf4e4;
        default: break;
    }

    ctx->pc = 0x3cf360u;

    // 0x3cf360: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3cf360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3cf364: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x3cf364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x3cf368: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x3cf368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x3cf36c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3cf36cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf370: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x3cf370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x3cf374: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3cf374u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf378: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3cf378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3cf37c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3cf37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3cf380: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x3cf380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x3cf384: 0x3c170066  lui         $s7, 0x66
    ctx->pc = 0x3cf384u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)102 << 16));
    // 0x3cf388: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x3cf388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x3cf38c: 0x26f23940  addiu       $s2, $s7, 0x3940
    ctx->pc = 0x3cf38cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 14656));
    // 0x3cf390: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x3cf390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x3cf394: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x3cf394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x3cf398: 0xc0f379c  jal         func_3CDE70
    ctx->pc = 0x3CF398u;
    SET_GPR_U32(ctx, 31, 0x3CF3A0u);
    ctx->pc = 0x3CF39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF398u;
    // 0x3cf39c: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDE70u, 0x3CF398u, 0x3CF3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF3A0u;
label_3cf3a0:
    // 0x3cf3a0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3cf3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3cf3a4: 0x8c43d68c  lw          $v1, -0x2974($v0)
    ctx->pc = 0x3cf3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x42D68Cu));
    // 0x3cf3a8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CF3A8u;
    {
        const bool branch_taken_0x3cf3a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cf3a8) {
            ctx->pc = 0x3CF3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CF3A8u;
            // 0x3cf3ac: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CF3BCu;
            goto label_3cf3bc;
        }
    }
    ctx->pc = 0x3CF3B0u;
    // 0x3cf3b0: 0xc0f37be  jal         func_3CDEF8
    ctx->pc = 0x3CF3B0u;
    SET_GPR_U32(ctx, 31, 0x3CF3B8u);
    ctx->pc = 0x3CDEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDEF8u, 0x3CF3B0u, 0x3CF3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF3B8u;
label_3cf3b8:
    // 0x3cf3b8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3cf3b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3cf3bc:
    // 0x3cf3bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3cf3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf3c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3cf3c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf3c4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3CF3C4u;
    {
        const bool branch_taken_0x3cf3c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF3C4u;
        // 0x3cf3c8: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf3c4) {
            ctx->pc = 0x3CF408u;
            goto label_3cf408;
        }
    }
    ctx->pc = 0x3CF3CCu;
    // 0x3cf3cc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3cf3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3cf3d0: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x3cf3d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3cf3d4: 0x3c150066  lui         $s5, 0x66
    ctx->pc = 0x3cf3d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)102 << 16));
    // 0x3cf3d8: 0x3c140066  lui         $s4, 0x66
    ctx->pc = 0x3cf3d8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)102 << 16));
    // 0x3cf3dc: 0x0  nop
    ctx->pc = 0x3cf3dcu;
    // NOP
label_3cf3e0:
    // 0x3cf3e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3cf3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3cf3e4: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x3cf3e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x3cf3e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3CF3E8u;
    {
        const bool branch_taken_0x3cf3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF3E8u;
        // 0x3cf3ec: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf3e8) {
            ctx->pc = 0x3CF418u;
            goto label_3cf418;
        }
    }
    ctx->pc = 0x3CF3F0u;
    // 0x3cf3f0: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x3cf3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x3cf3f4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3cf3f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3cf3f8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3CF3F8u;
    {
        const bool branch_taken_0x3cf3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CF3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF3F8u;
        // 0x3cf3fc: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf3f8) {
            ctx->pc = 0x3CF3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cf3e0;
        }
    }
    ctx->pc = 0x3CF400u;
    // 0x3cf400: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3CF400u;
    {
        const bool branch_taken_0x3cf400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF400u;
        // 0x3cf404: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf400) {
            ctx->pc = 0x3CF41Cu;
            goto label_3cf41c;
        }
    }
    ctx->pc = 0x3CF408u;
label_3cf408:
    // 0x3cf408: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3cf408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3cf40c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x3cf40cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3cf410: 0x3c150066  lui         $s5, 0x66
    ctx->pc = 0x3cf410u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)102 << 16));
    // 0x3cf414: 0x3c140066  lui         $s4, 0x66
    ctx->pc = 0x3cf414u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)102 << 16));
label_3cf418:
    // 0x3cf418: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3cf418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_3cf41c:
    // 0x3cf41c: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CF41Cu;
    {
        const bool branch_taken_0x3cf41c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3cf41c) {
            ctx->pc = 0x3CF420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CF41Cu;
            // 0x3cf420: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CF430u;
            goto label_3cf430;
        }
    }
    ctx->pc = 0x3CF424u;
    // 0x3cf424: 0xa240040f  sb          $zero, 0x40F($s2)
    ctx->pc = 0x3cf424u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cf428: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x3cf428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x3cf42c: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x3cf42cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_3cf430:
    // 0x3cf430: 0x24a31e58  addiu       $v1, $a1, 0x1E58
    ctx->pc = 0x3cf430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 7768));
    // 0x3cf434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3cf434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cf438: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3cf438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3cf43c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3cf43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3cf440: 0x26944580  addiu       $s4, $s4, 0x4580
    ctx->pc = 0x3cf440u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 17792));
    // 0x3cf444: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x3cf444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x3cf448: 0xc0f2668  jal         func_3C99A0
    ctx->pc = 0x3CF448u;
    SET_GPR_U32(ctx, 31, 0x3CF450u);
    ctx->pc = 0x3CF44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF448u;
    // 0x3cf44c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99A0u, 0x3CF448u, 0x3CF450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF450u;
label_3cf450:
    // 0x3cf450: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3cf450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf454: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x3cf454u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x3cf458: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3cf458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3cf45c: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x3cf45cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x3cf460: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3cf460u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x3cf464: 0x26a45040  addiu       $a0, $s5, 0x5040
    ctx->pc = 0x3cf464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 20544));
    // 0x3cf468: 0x26e73940  addiu       $a3, $s7, 0x3940
    ctx->pc = 0x3cf468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 14656));
    // 0x3cf46c: 0x26080011  addiu       $t0, $s0, 0x11
    ctx->pc = 0x3cf46cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x3cf470: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3cf470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3cf474: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3cf474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3cf478: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3cf478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3cf47c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cf47cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf480: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3cf480u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf484: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3cf484u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3cf488: 0xc0f3640  jal         func_3CD900
    ctx->pc = 0x3CF488u;
    SET_GPR_U32(ctx, 31, 0x3CF490u);
    ctx->pc = 0x3CF48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF488u;
    // 0x3cf48c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD900u, 0x3CF488u, 0x3CF490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF490u;
label_3cf490:
    // 0x3cf490: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CF490u;
    {
        const bool branch_taken_0x3cf490 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3CF494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF490u;
        // 0x3cf494: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf490) {
            ctx->pc = 0x3CF4B0u;
            goto label_3cf4b0;
        }
    }
    ctx->pc = 0x3CF498u;
    // 0x3cf498: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x3CF498u;
    SET_GPR_U32(ctx, 31, 0x3CF4A0u);
    ctx->pc = 0x3CF49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF498u;
    // 0x3cf49c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3CF498u, 0x3CF4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF4A0u;
label_3cf4a0:
    // 0x3cf4a0: 0xc0f37a8  jal         func_3CDEA0
    ctx->pc = 0x3CF4A0u;
    SET_GPR_U32(ctx, 31, 0x3CF4A8u);
    ctx->pc = 0x3CDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDEA0u, 0x3CF4A0u, 0x3CF4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF4A8u;
label_3cf4a8:
    // 0x3cf4a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3CF4A8u;
    {
        const bool branch_taken_0x3cf4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF4A8u;
        // 0x3cf4ac: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf4a8) {
            ctx->pc = 0x3CF4E8u;
            goto label_3cf4e8;
        }
    }
    ctx->pc = 0x3CF4B0u;
label_3cf4b0:
    // 0x3cf4b0: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x3cf4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x3cf4b4: 0xc0f37a8  jal         func_3CDEA0
    ctx->pc = 0x3CF4B4u;
    SET_GPR_U32(ctx, 31, 0x3CF4BCu);
    ctx->pc = 0x3CF4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF4B4u;
    // 0x3cf4b8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDEA0u, 0x3CF4B4u, 0x3CF4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF4BCu;
label_3cf4bc:
    // 0x3cf4bc: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CF4BCu;
    {
        const bool branch_taken_0x3cf4bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cf4bc) {
            ctx->pc = 0x3CF4D4u;
            goto label_3cf4d4;
        }
    }
    ctx->pc = 0x3CF4C4u;
    // 0x3cf4c4: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x3CF4C4u;
    SET_GPR_U32(ctx, 31, 0x3CF4CCu);
    ctx->pc = 0x3CF4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF4C4u;
    // 0x3cf4c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3CF4C4u, 0x3CF4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF4CCu;
label_3cf4cc:
    // 0x3cf4cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3CF4CCu;
    {
        const bool branch_taken_0x3cf4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF4CCu;
        // 0x3cf4d0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf4cc) {
            ctx->pc = 0x3CF4E8u;
            goto label_3cf4e8;
        }
    }
    ctx->pc = 0x3CF4D4u;
label_3cf4d4:
    // 0x3cf4d4: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x3CF4D4u;
    SET_GPR_U32(ctx, 31, 0x3CF4DCu);
    ctx->pc = 0x3CF4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF4D4u;
    // 0x3cf4d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x3CF4D4u, 0x3CF4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF4DCu;
label_3cf4dc:
    // 0x3cf4dc: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x3CF4DCu;
    SET_GPR_U32(ctx, 31, 0x3CF4E4u);
    ctx->pc = 0x3CF4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF4DCu;
    // 0x3cf4e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3CF4DCu, 0x3CF4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF4E4u;
label_3cf4e4:
    // 0x3cf4e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3cf4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3cf4e8:
    // 0x3cf4e8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x3cf4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3cf4ec: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x3cf4ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3cf4f0: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x3cf4f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3cf4f4: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x3cf4f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3cf4f8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x3cf4f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3cf4fc: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x3cf4fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3cf500: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3cf500u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3cf504: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x3cf504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3cf508: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3cf508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3cf50c: 0x3e00008  jr          $ra
    ctx->pc = 0x3CF50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CF510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF50Cu;
        // 0x3cf510: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CF50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CF514u;
    // 0x3cf514: 0x0  nop
    ctx->pc = 0x3cf514u;
    // NOP
    // 0x3cf518: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x3cf518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3cf51c: 0x0  nop
    ctx->pc = 0x3cf51cu;
    // NOP
    // 0x3cf520: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3cf520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3cf524: 0x0  nop
    ctx->pc = 0x3cf524u;
    // NOP
    // 0x3cf528: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x3cf528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3cf52c: 0x0  nop
    ctx->pc = 0x3cf52cu;
    // NOP
    // 0x3cf530: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3cf530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3cf534: 0x0  nop
    ctx->pc = 0x3cf534u;
    // NOP
    ctx->pc = 0x3cf538u;
}
