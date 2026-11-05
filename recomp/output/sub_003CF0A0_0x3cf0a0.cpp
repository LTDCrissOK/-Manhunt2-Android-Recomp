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

// Function: sub_003CF0A0
// Address: 0x3cf0a0 - 0x3cf208
void sub_003CF0A0_0x3cf0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CF0A0_0x3cf0a0");
#endif

    switch (ctx->pc) {
        case 0x3cf0c8u: goto label_3cf0c8;
        case 0x3cf0d4u: goto label_3cf0d4;
        case 0x3cf100u: goto label_3cf100;
        case 0x3cf12cu: goto label_3cf12c;
        case 0x3cf17cu: goto label_3cf17c;
        case 0x3cf18cu: goto label_3cf18c;
        case 0x3cf194u: goto label_3cf194;
        case 0x3cf1acu: goto label_3cf1ac;
        case 0x3cf1bcu: goto label_3cf1bc;
        case 0x3cf1ccu: goto label_3cf1cc;
        case 0x3cf1d4u: goto label_3cf1d4;
        default: break;
    }

    ctx->pc = 0x3cf0a0u;

    // 0x3cf0a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3cf0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3cf0a4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x3cf0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x3cf0a8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3cf0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3cf0ac: 0x3c140066  lui         $s4, 0x66
    ctx->pc = 0x3cf0acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)102 << 16));
    // 0x3cf0b0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3cf0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x3cf0b4: 0x26923940  addiu       $s2, $s4, 0x3940
    ctx->pc = 0x3cf0b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 14656));
    // 0x3cf0b8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3cf0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3cf0bc: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x3cf0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x3cf0c0: 0xc0f367c  jal         func_3CD9F0
    ctx->pc = 0x3CF0C0u;
    SET_GPR_U32(ctx, 31, 0x3CF0C8u);
    ctx->pc = 0x3CF0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF0C0u;
    // 0x3cf0c4: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD9F0u, 0x3CF0C0u, 0x3CF0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF0C8u;
label_3cf0c8:
    // 0x3cf0c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cf0c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf0cc: 0xc0f379c  jal         func_3CDE70
    ctx->pc = 0x3CF0CCu;
    SET_GPR_U32(ctx, 31, 0x3CF0D4u);
    ctx->pc = 0x3CF0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF0CCu;
    // 0x3cf0d0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDE70u, 0x3CF0CCu, 0x3CF0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF0D4u;
label_3cf0d4:
    // 0x3cf0d4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3cf0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3cf0d8: 0x8c62d68c  lw          $v0, -0x2974($v1)
    ctx->pc = 0x3cf0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42D68Cu));
    // 0x3cf0dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CF0DCu;
    {
        const bool branch_taken_0x3cf0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf0dc) {
            ctx->pc = 0x3CF0F8u;
            goto label_3cf0f8;
        }
    }
    ctx->pc = 0x3CF0E4u;
    // 0x3cf0e4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CF0E4u;
    {
        const bool branch_taken_0x3cf0e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf0e4) {
            ctx->pc = 0x3CF0F8u;
            goto label_3cf0f8;
        }
    }
    ctx->pc = 0x3CF0ECu;
    // 0x3cf0ec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3cf0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3cf0f0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CF0F0u;
    {
        const bool branch_taken_0x3cf0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cf0f0) {
            ctx->pc = 0x3CF0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CF0F0u;
            // 0x3cf0f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CF108u;
            goto label_3cf108;
        }
    }
    ctx->pc = 0x3CF0F8u;
label_3cf0f8:
    // 0x3cf0f8: 0xc0f37a8  jal         func_3CDEA0
    ctx->pc = 0x3CF0F8u;
    SET_GPR_U32(ctx, 31, 0x3CF100u);
    ctx->pc = 0x3CDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDEA0u, 0x3CF0F8u, 0x3CF100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF100u;
label_3cf100:
    // 0x3cf100: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3CF100u;
    {
        const bool branch_taken_0x3cf100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF100u;
        // 0x3cf104: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf100) {
            ctx->pc = 0x3CF1E4u;
            goto label_3cf1e4;
        }
    }
    ctx->pc = 0x3CF108u;
label_3cf108:
    // 0x3cf108: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3cf108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3cf10c: 0x24421e28  addiu       $v0, $v0, 0x1E28
    ctx->pc = 0x3cf10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7720));
    // 0x3cf110: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cf110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cf114: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x3cf114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
    // 0x3cf118: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3cf118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3cf11c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x3cf11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x3cf120: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3cf120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x3cf124: 0xc0f2668  jal         func_3C99A0
    ctx->pc = 0x3CF124u;
    SET_GPR_U32(ctx, 31, 0x3CF12Cu);
    ctx->pc = 0x3CF128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF124u;
    // 0x3cf128: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99A0u, 0x3CF124u, 0x3CF12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF12Cu;
label_3cf12c:
    // 0x3cf12c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3cf12cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf130: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3cf130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3cf134: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3cf134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3cf138: 0xae913940  sw          $s1, 0x3940($s4)
    ctx->pc = 0x3cf138u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 14656), GPR_U32(ctx, 17));
    // 0x3cf13c: 0x24534580  addiu       $s3, $v0, 0x4580
    ctx->pc = 0x3cf13cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 17792));
    // 0x3cf140: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3cf140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x3cf144: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3cf144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3cf148: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3cf148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3cf14c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3cf14cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x3cf150: 0x24845040  addiu       $a0, $a0, 0x5040
    ctx->pc = 0x3cf150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20544));
    // 0x3cf154: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3cf154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf158: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3cf158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3cf15c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3cf15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3cf160: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cf160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf164: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3cf164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3cf168: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x3cf168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3cf16c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3cf16cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf170: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3cf170u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3cf174: 0xc0f3640  jal         func_3CD900
    ctx->pc = 0x3CF174u;
    SET_GPR_U32(ctx, 31, 0x3CF17Cu);
    ctx->pc = 0x3CF178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF174u;
    // 0x3cf178: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD900u, 0x3CF174u, 0x3CF17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF17Cu;
label_3cf17c:
    // 0x3cf17c: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CF17Cu;
    {
        const bool branch_taken_0x3cf17c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3cf17c) {
            ctx->pc = 0x3CF180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CF17Cu;
            // 0x3cf180: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CF19Cu;
            goto label_3cf19c;
        }
    }
    ctx->pc = 0x3CF184u;
    // 0x3cf184: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x3CF184u;
    SET_GPR_U32(ctx, 31, 0x3CF18Cu);
    ctx->pc = 0x3CF188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF184u;
    // 0x3cf188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3CF184u, 0x3CF18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF18Cu;
label_3cf18c:
    // 0x3cf18c: 0xc0f37a8  jal         func_3CDEA0
    ctx->pc = 0x3CF18Cu;
    SET_GPR_U32(ctx, 31, 0x3CF194u);
    ctx->pc = 0x3CDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDEA0u, 0x3CF18Cu, 0x3CF194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF194u;
label_3cf194:
    // 0x3cf194: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3CF194u;
    {
        const bool branch_taken_0x3cf194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF194u;
        // 0x3cf198: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf194) {
            ctx->pc = 0x3CF1E4u;
            goto label_3cf1e4;
        }
    }
    ctx->pc = 0x3CF19Cu;
label_3cf19c:
    // 0x3cf19c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3cf19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3cf1a0: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x3cf1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x3cf1a4: 0xc0f37a8  jal         func_3CDEA0
    ctx->pc = 0x3CF1A4u;
    SET_GPR_U32(ctx, 31, 0x3CF1ACu);
    ctx->pc = 0x3CF1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF1A4u;
    // 0x3cf1a8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDEA0u, 0x3CF1A4u, 0x3CF1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF1ACu;
label_3cf1ac:
    // 0x3cf1ac: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CF1ACu;
    {
        const bool branch_taken_0x3cf1ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cf1ac) {
            ctx->pc = 0x3CF1C4u;
            goto label_3cf1c4;
        }
    }
    ctx->pc = 0x3CF1B4u;
    // 0x3cf1b4: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x3CF1B4u;
    SET_GPR_U32(ctx, 31, 0x3CF1BCu);
    ctx->pc = 0x3CF1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF1B4u;
    // 0x3cf1b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3CF1B4u, 0x3CF1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF1BCu;
label_3cf1bc:
    // 0x3cf1bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3CF1BCu;
    {
        const bool branch_taken_0x3cf1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF1BCu;
        // 0x3cf1c0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf1bc) {
            ctx->pc = 0x3CF1E4u;
            goto label_3cf1e4;
        }
    }
    ctx->pc = 0x3CF1C4u;
label_3cf1c4:
    // 0x3cf1c4: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x3CF1C4u;
    SET_GPR_U32(ctx, 31, 0x3CF1CCu);
    ctx->pc = 0x3CF1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF1C4u;
    // 0x3cf1c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x3CF1C4u, 0x3CF1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF1CCu;
label_3cf1cc:
    // 0x3cf1cc: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x3CF1CCu;
    SET_GPR_U32(ctx, 31, 0x3CF1D4u);
    ctx->pc = 0x3CF1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF1CCu;
    // 0x3cf1d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3CF1CCu, 0x3CF1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF1D4u;
label_3cf1d4:
    // 0x3cf1d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3cf1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cf1d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3cf1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3cf1dc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3cf1dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3cf1e0: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x3cf1e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_3cf1e4:
    // 0x3cf1e4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3cf1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3cf1e8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x3cf1e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3cf1ec: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x3cf1ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3cf1f0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3cf1f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3cf1f4: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x3cf1f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3cf1f8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3cf1f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3cf1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3CF1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CF200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF1FCu;
        // 0x3cf200: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CF1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CF204u;
    // 0x3cf204: 0x0  nop
    ctx->pc = 0x3cf204u;
    // NOP
    ctx->pc = 0x3cf208u;
}
