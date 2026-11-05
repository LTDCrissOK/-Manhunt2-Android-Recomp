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

// Function: sub_00228818
// Address: 0x228818 - 0x228c00
void sub_00228818_0x228818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228818_0x228818");
#endif

    switch (ctx->pc) {
        case 0x228864u: goto label_228864;
        case 0x228880u: goto label_228880;
        case 0x22888cu: goto label_22888c;
        case 0x22889cu: goto label_22889c;
        case 0x2288e8u: goto label_2288e8;
        case 0x228900u: goto label_228900;
        case 0x228910u: goto label_228910;
        case 0x228950u: goto label_228950;
        case 0x228978u: goto label_228978;
        case 0x2289a4u: goto label_2289a4;
        case 0x228a60u: goto label_228a60;
        case 0x228a70u: goto label_228a70;
        case 0x228aacu: goto label_228aac;
        case 0x228ac8u: goto label_228ac8;
        default: break;
    }

    ctx->pc = 0x228818u;

    // 0x228818: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x228818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x22881c: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x22881cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x228820: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x228820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x228824: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x228824u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228828: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x228828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x22882c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x22882cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228830: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x228830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x228834: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x228834u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228838: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x228838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x22883c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x22883cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x228840: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x228840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x228844: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x228844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x228848: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x228848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x22884c: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x22884cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
    // 0x228850: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x228850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x228854: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x228854u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x228858: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x228858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x22885c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x22885Cu;
    SET_GPR_U32(ctx, 31, 0x228864u);
    ctx->pc = 0x228860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22885Cu;
    // 0x228860: 0xafa800c4  sw          $t0, 0xC4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x22885Cu, 0x228864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228864u;
label_228864:
    // 0x228864: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x228864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x228868: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x228868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x22886c: 0x7fa00010  sq          $zero, 0x10($sp)
    ctx->pc = 0x22886cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 0));
    // 0x228870: 0x7fa00040  sq          $zero, 0x40($sp)
    ctx->pc = 0x228870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 0));
    // 0x228874: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x228874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228878: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x228878u;
    SET_GPR_U32(ctx, 31, 0x228880u);
    ctx->pc = 0x22887Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228878u;
    // 0x22887c: 0x24050415  addiu       $a1, $zero, 0x415 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x228878u, 0x228880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228880u;
label_228880:
    // 0x228880: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x228880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228884: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x228884u;
    SET_GPR_U32(ctx, 31, 0x22888Cu);
    ctx->pc = 0x228888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228884u;
    // 0x228888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x228884u, 0x22888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22888Cu;
label_22888c:
    // 0x22888c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22888Cu;
    {
        const bool branch_taken_0x22888c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22888c) {
            ctx->pc = 0x228890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22888Cu;
            // 0x228890: 0x7a0200b0  lq          $v0, 0xB0($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2288A0u;
            goto label_2288a0;
        }
    }
    ctx->pc = 0x228894u;
    // 0x228894: 0xc0c4900  jal         func_312400
    ctx->pc = 0x228894u;
    SET_GPR_U32(ctx, 31, 0x22889Cu);
    ctx->pc = 0x228898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228894u;
    // 0x228898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x228894u, 0x22889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22889Cu;
label_22889c:
    // 0x22889c: 0x7a0200b0  lq          $v0, 0xB0($s0)
    ctx->pc = 0x22889cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
label_2288a0:
    // 0x2288a0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2288a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2288a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2288a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2288a8: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x2288a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
    // 0x2288ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2288acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2288b0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2288b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2288b4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2288b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2288b8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2288b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2288bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2288BCu;
    {
        const bool branch_taken_0x2288bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2288C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2288BCu;
        // 0x2288c0: 0xe7a10030  swc1        $f1, 0x30($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2288bc) {
            ctx->pc = 0x2288DCu;
            goto label_2288dc;
        }
    }
    ctx->pc = 0x2288C4u;
    // 0x2288c4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2288c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2288c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2288c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2288cc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2288CCu;
    {
        const bool branch_taken_0x2288cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2288D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2288CCu;
        // 0x2288d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2288cc) {
            ctx->pc = 0x2288F8u;
            goto label_2288f8;
        }
    }
    ctx->pc = 0x2288D4u;
    // 0x2288d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2288D4u;
    {
        const bool branch_taken_0x2288d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2288d4) {
            ctx->pc = 0x228908u;
            goto label_228908;
        }
    }
    ctx->pc = 0x2288DCu;
label_2288dc:
    // 0x2288dc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2288dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2288e0: 0xc078668  jal         func_1E19A0
    ctx->pc = 0x2288E0u;
    SET_GPR_U32(ctx, 31, 0x2288E8u);
    ctx->pc = 0x2288E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2288E0u;
    // 0x2288e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E19A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19A0u, 0x2288E0u, 0x2288E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2288E8u;
label_2288e8:
    // 0x2288e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2288E8u;
    {
        const bool branch_taken_0x2288e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2288ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2288E8u;
        // 0x2288ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2288e8) {
            ctx->pc = 0x228908u;
            goto label_228908;
        }
    }
    ctx->pc = 0x2288F0u;
    // 0x2288f0: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x2288F0u;
    {
        const bool branch_taken_0x2288f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2288F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2288F0u;
        // 0x2288f4: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2288f0) {
            ctx->pc = 0x228BD0u;
            goto label_228bd0;
        }
    }
    ctx->pc = 0x2288F8u;
label_2288f8:
    // 0x2288f8: 0xc0788a0  jal         func_1E2280
    ctx->pc = 0x2288F8u;
    SET_GPR_U32(ctx, 31, 0x228900u);
    ctx->pc = 0x2288FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2288F8u;
    // 0x2288fc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2280u, 0x2288F8u, 0x228900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228900u;
label_228900:
    // 0x228900: 0x104000b2  beqz        $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x228900u;
    {
        const bool branch_taken_0x228900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228900u;
        // 0x228904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228900) {
            ctx->pc = 0x228BCCu;
            goto label_228bcc;
        }
    }
    ctx->pc = 0x228908u;
label_228908:
    // 0x228908: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x228908u;
    SET_GPR_U32(ctx, 31, 0x228910u);
    ctx->pc = 0x22890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228908u;
    // 0x22890c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x228908u, 0x228910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228910u;
label_228910:
    // 0x228910: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x228910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x228914: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x228914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x228918: 0x7fa00060  sq          $zero, 0x60($sp)
    ctx->pc = 0x228918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 0));
    // 0x22891c: 0x7fa00090  sq          $zero, 0x90($sp)
    ctx->pc = 0x22891cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 0));
    // 0x228920: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x228920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x228924: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x228924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x228928: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x228928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x22892c: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x22892cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x228930: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x228930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x228934: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x228934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x228938: 0x244297f8  addiu       $v0, $v0, -0x6808
    ctx->pc = 0x228938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940664));
    // 0x22893c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x22893cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x228940: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x228940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x228944: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x228944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x228948: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x228948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x22894c: 0x0  nop
    ctx->pc = 0x22894cu;
    // NOP
label_228950:
    // 0x228950: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x228950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x228954: 0x16e20030  bne         $s7, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x228954u;
    {
        const bool branch_taken_0x228954 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x228958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228954u;
        // 0x228958: 0x26830344  addiu       $v1, $s4, 0x344 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 836));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228954) {
            ctx->pc = 0x228A18u;
            goto label_228a18;
        }
    }
    ctx->pc = 0x22895Cu;
    // 0x22895c: 0x8e84032c  lw          $a0, 0x32C($s4)
    ctx->pc = 0x22895cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 812)));
    // 0x228960: 0x10800090  beqz        $a0, . + 4 + (0x90 << 2)
    ctx->pc = 0x228960u;
    {
        const bool branch_taken_0x228960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x228964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228960u;
        // 0x228964: 0x27b10050  addiu       $s1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228960) {
            ctx->pc = 0x228BA4u;
            goto label_228ba4;
        }
    }
    ctx->pc = 0x228968u;
    // 0x228968: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x228968u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22896c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22896cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228970: 0xc096664  jal         func_259990
    ctx->pc = 0x228970u;
    SET_GPR_U32(ctx, 31, 0x228978u);
    ctx->pc = 0x228974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228970u;
    // 0x228974: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259990u, 0x228970u, 0x228978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228978u;
label_228978:
    // 0x228978: 0x8e900334  lw          $s0, 0x334($s4)
    ctx->pc = 0x228978u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 820)));
    // 0x22897c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x22897cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x228980: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x228980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x228984: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x228984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x228988: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x228988u;
    {
        const bool branch_taken_0x228988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228988u;
        // 0x22898c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228988) {
            ctx->pc = 0x2289C4u;
            goto label_2289c4;
        }
    }
    ctx->pc = 0x228990u;
    // 0x228990: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x228990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x228994: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x228994u;
    {
        const bool branch_taken_0x228994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x228994) {
            ctx->pc = 0x228998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228994u;
            // 0x228998: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2289C8u;
            goto label_2289c8;
        }
    }
    ctx->pc = 0x22899Cu;
    // 0x22899c: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x22899Cu;
    SET_GPR_U32(ctx, 31, 0x2289A4u);
    ctx->pc = 0x2289A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22899Cu;
    // 0x2289a0: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x22899Cu, 0x2289A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2289A4u;
label_2289a4:
    // 0x2289a4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2289A4u;
    {
        const bool branch_taken_0x2289a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2289a4) {
            ctx->pc = 0x2289A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2289A4u;
            // 0x2289a8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2289C8u;
            goto label_2289c8;
        }
    }
    ctx->pc = 0x2289ACu;
    // 0x2289ac: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2289acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2289b0: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2289b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2289b4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2289B4u;
    {
        const bool branch_taken_0x2289b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2289B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2289B4u;
        // 0x2289b8: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2289b4) {
            ctx->pc = 0x2289C4u;
            goto label_2289c4;
        }
    }
    ctx->pc = 0x2289BCu;
    // 0x2289bc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2289BCu;
    {
        const bool branch_taken_0x2289bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2289bc) {
            ctx->pc = 0x2289C8u;
            goto label_2289c8;
        }
    }
    ctx->pc = 0x2289C4u;
label_2289c4:
    // 0x2289c4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2289c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2289c8:
    // 0x2289c8: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x2289C8u;
    {
        const bool branch_taken_0x2289c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2289c8) {
            ctx->pc = 0x2289ECu;
            goto label_2289ec;
        }
    }
    ctx->pc = 0x2289D0u;
    // 0x2289d0: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2289d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2289d4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2289d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2289d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2289d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2289dc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2289dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2289e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2289e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2289e4: 0x3842003d  xori        $v0, $v0, 0x3D
    ctx->pc = 0x2289e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)61);
    // 0x2289e8: 0x2980b  movn        $s3, $zero, $v0
    ctx->pc = 0x2289e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_2289ec:
    // 0x2289ec: 0x12600027  beqz        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x2289ECu;
    {
        const bool branch_taken_0x2289ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2289F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2289ECu;
        // 0x2289f0: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2289ec) {
            ctx->pc = 0x228A8Cu;
            goto label_228a8c;
        }
    }
    ctx->pc = 0x2289F4u;
    // 0x2289f4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2289f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2289f8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2289f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2289fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2289fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228a00: 0x0  nop
    ctx->pc = 0x228a00u;
    // NOP
    // 0x228a04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x228a08: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x228a08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x228a0c: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x228a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x228a10: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x228A10u;
    {
        const bool branch_taken_0x228a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A10u;
        // 0x228a14: 0xe6220030  swc1        $f2, 0x30($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a10) {
            ctx->pc = 0x228A88u;
            goto label_228a88;
        }
    }
    ctx->pc = 0x228A18u;
label_228a18:
    // 0x228a18: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x228a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x228a1c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x228a1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228a20: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x228a20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228a24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x228a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x228a28: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x228A28u;
    {
        const bool branch_taken_0x228a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x228A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A28u;
        // 0x228a2c: 0x8fa200d4  lw          $v0, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a28) {
            ctx->pc = 0x228BA8u;
            goto label_228ba8;
        }
    }
    ctx->pc = 0x228A30u;
    // 0x228a30: 0x8e82013c  lw          $v0, 0x13C($s4)
    ctx->pc = 0x228a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 316)));
    // 0x228a34: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x228A34u;
    {
        const bool branch_taken_0x228a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228a34) {
            ctx->pc = 0x228A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228A34u;
            // 0x228a38: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228A48u;
            goto label_228a48;
        }
    }
    ctx->pc = 0x228A3Cu;
    // 0x228a3c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x228a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x228a40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x228A40u;
    {
        const bool branch_taken_0x228a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A40u;
        // 0x228a44: 0x8e83033c  lw          $v1, 0x33C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a40) {
            ctx->pc = 0x228A4Cu;
            goto label_228a4c;
        }
    }
    ctx->pc = 0x228A48u;
label_228a48:
    // 0x228a48: 0x8e830340  lw          $v1, 0x340($s4)
    ctx->pc = 0x228a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
label_228a4c:
    // 0x228a4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x228a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x228a50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x228a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x228a54: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x228a54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x228a58: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x228A58u;
    SET_GPR_U32(ctx, 31, 0x228A60u);
    ctx->pc = 0x228A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228A58u;
    // 0x228a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x228A58u, 0x228A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A60u;
label_228a60:
    // 0x228a60: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x228A60u;
    {
        const bool branch_taken_0x228a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228a60) {
            ctx->pc = 0x228A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228A60u;
            // 0x228a64: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228A74u;
            goto label_228a74;
        }
    }
    ctx->pc = 0x228A68u;
    // 0x228a68: 0xc0c4900  jal         func_312400
    ctx->pc = 0x228A68u;
    SET_GPR_U32(ctx, 31, 0x228A70u);
    ctx->pc = 0x228A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228A68u;
    // 0x228a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x228A68u, 0x228A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228A70u;
label_228a70:
    // 0x228a70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x228a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_228a74:
    // 0x228a74: 0x7a0200b0  lq          $v0, 0xB0($s0)
    ctx->pc = 0x228a74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x228a78: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x228a78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x228a7c: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x228a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x228a80: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x228a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x228a84: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x228a84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_228a88:
    // 0x228a88: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x228a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_228a8c:
    // 0x228a8c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x228A8Cu;
    {
        const bool branch_taken_0x228a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A8Cu;
        // 0x228a90: 0x8fa300c0  lw          $v1, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a8c) {
            ctx->pc = 0x228B04u;
            goto label_228b04;
        }
    }
    ctx->pc = 0x228A94u;
    // 0x228a94: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x228a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x228a98: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x228A98u;
    {
        const bool branch_taken_0x228a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x228A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A98u;
        // 0x228a9c: 0xc6540020  lwc1        $f20, 0x20($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a98) {
            ctx->pc = 0x228ABCu;
            goto label_228abc;
        }
    }
    ctx->pc = 0x228AA0u;
    // 0x228aa0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x228aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x228aa4: 0xc0bf1fa  jal         func_2FC7E8
    ctx->pc = 0x228AA4u;
    SET_GPR_U32(ctx, 31, 0x228AACu);
    ctx->pc = 0x228AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228AA4u;
    // 0x228aa8: 0x8c44bd50  lw          $a0, -0x42B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC7E8u, 0x228AA4u, 0x228AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228AACu;
label_228aac:
    // 0x228aac: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x228aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x228ab0: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x228ab0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x228ab4: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x228ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x228ab8: 0xe6410030  swc1        $f1, 0x30($s2)
    ctx->pc = 0x228ab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_228abc:
    // 0x228abc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x228abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ac0: 0xc078668  jal         func_1E19A0
    ctx->pc = 0x228AC0u;
    SET_GPR_U32(ctx, 31, 0x228AC8u);
    ctx->pc = 0x228AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228AC0u;
    // 0x228ac4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E19A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19A0u, 0x228AC0u, 0x228AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228AC8u;
label_228ac8:
    // 0x228ac8: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x228ac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x228acc: 0xe6540020  swc1        $f20, 0x20($s2)
    ctx->pc = 0x228accu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x228ad0: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x228AD0u;
    {
        const bool branch_taken_0x228ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228AD0u;
        // 0x228ad4: 0xe6400030  swc1        $f0, 0x30($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ad0) {
            ctx->pc = 0x228BA4u;
            goto label_228ba4;
        }
    }
    ctx->pc = 0x228AD8u;
    // 0x228ad8: 0x6e00003  bltz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x228AD8u;
    {
        const bool branch_taken_0x228ad8 = (GPR_S32(ctx, 23) < 0);
        ctx->pc = 0x228ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228AD8u;
        // 0x228adc: 0x8fa300d0  lw          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ad8) {
            ctx->pc = 0x228AE8u;
            goto label_228ae8;
        }
    }
    ctx->pc = 0x228AE0u;
    // 0x228ae0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x228AE0u;
    {
        const bool branch_taken_0x228ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228AE0u;
        // 0x228ae4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ae0) {
            ctx->pc = 0x228B98u;
            goto label_228b98;
        }
    }
    ctx->pc = 0x228AE8u;
label_228ae8:
    // 0x228ae8: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x228ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x228aec: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x228aecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x228af0: 0x92820fb8  lbu         $v0, 0xFB8($s4)
    ctx->pc = 0x228af0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4024)));
    // 0x228af4: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x228AF4u;
    {
        const bool branch_taken_0x228af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228af4) {
            ctx->pc = 0x228AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228AF4u;
            // 0x228af8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228BCCu;
            goto label_228bcc;
        }
    }
    ctx->pc = 0x228AFCu;
    // 0x228afc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x228AFCu;
    {
        const bool branch_taken_0x228afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228AFCu;
        // 0x228b00: 0x24020448  addiu       $v0, $zero, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228afc) {
            ctx->pc = 0x228B98u;
            goto label_228b98;
        }
    }
    ctx->pc = 0x228B04u;
label_228b04:
    // 0x228b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x228b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228b08: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x228B08u;
    {
        const bool branch_taken_0x228b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x228B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228B08u;
        // 0x228b0c: 0x8fa200d4  lw          $v0, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228b08) {
            ctx->pc = 0x228BA8u;
            goto label_228ba8;
        }
    }
    ctx->pc = 0x228B10u;
    // 0x228b10: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x228b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x228b14: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x228b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x228b18: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x228b18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x228b1c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x228b1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x228b20: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x228b20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x228b24: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x228b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x228b28: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x228b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228b2c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x228b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228b30: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x228b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228b34: 0xc7a500bc  lwc1        $f5, 0xBC($sp)
    ctx->pc = 0x228b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x228b38: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x228b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x228b3c: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x228b3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x228b40: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x228b40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x228b44: 0xe7a500ac  swc1        $f5, 0xAC($sp)
    ctx->pc = 0x228b44u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x228b48: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x228b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x228b4c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x228b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228b50: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x228b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x228b54: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x228b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x228b58: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x228b58u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x228b5c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x228b5cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x228b60: 0x4604219c  madd.s      $f6, $f4, $f4
    ctx->pc = 0x228b60u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x228b64: 0x46060184  c1          0x60184
    ctx->pc = 0x228b64u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
    // 0x228b68: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x228b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228b6c: 0xc7c00020  lwc1        $f0, 0x20($fp)
    ctx->pc = 0x228b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228b70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x228b70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x228b74: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x228b74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228b78: 0x0  nop
    ctx->pc = 0x228b78u;
    // NOP
    // 0x228b7c: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x228B7Cu;
    {
        const bool branch_taken_0x228b7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228b7c) {
            ctx->pc = 0x228B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228B7Cu;
            // 0x228b80: 0x8fa200d4  lw          $v0, 0xD4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228BA8u;
            goto label_228ba8;
        }
    }
    ctx->pc = 0x228B84u;
    // 0x228b84: 0x6e00003  bltz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x228B84u;
    {
        const bool branch_taken_0x228b84 = (GPR_S32(ctx, 23) < 0);
        ctx->pc = 0x228B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228B84u;
        // 0x228b88: 0x8fa300d0  lw          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228b84) {
            ctx->pc = 0x228B94u;
            goto label_228b94;
        }
    }
    ctx->pc = 0x228B8Cu;
    // 0x228b8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x228B8Cu;
    {
        const bool branch_taken_0x228b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228B8Cu;
        // 0x228b90: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228b8c) {
            ctx->pc = 0x228B98u;
            goto label_228b98;
        }
    }
    ctx->pc = 0x228B94u;
label_228b94:
    // 0x228b94: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x228b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
label_228b98:
    // 0x228b98: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x228b98u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x228b9c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x228B9Cu;
    {
        const bool branch_taken_0x228b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228B9Cu;
        // 0x228ba0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228b9c) {
            ctx->pc = 0x228BCCu;
            goto label_228bcc;
        }
    }
    ctx->pc = 0x228BA4u;
label_228ba4:
    // 0x228ba4: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x228ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_228ba8:
    // 0x228ba8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x228ba8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x228bac: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x228bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x228bb0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x228bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x228bb4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x228bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x228bb8: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x228bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x228bbc: 0x2ae2000a  slti        $v0, $s7, 0xA
    ctx->pc = 0x228bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x228bc0: 0x1440ff63  bnez        $v0, . + 4 + (-0x9D << 2)
    ctx->pc = 0x228BC0u;
    {
        const bool branch_taken_0x228bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228BC0u;
        // 0x228bc4: 0xafa300d0  sw          $v1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228bc0) {
            ctx->pc = 0x228950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228950;
        }
    }
    ctx->pc = 0x228BC8u;
    // 0x228bc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x228bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228bcc:
    // 0x228bcc: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x228bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_228bd0:
    // 0x228bd0: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x228bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x228bd4: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x228bd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x228bd8: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x228bd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x228bdc: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x228bdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x228be0: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x228be0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x228be4: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x228be4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x228be8: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x228be8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x228bec: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x228becu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x228bf0: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x228bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x228bf4: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x228bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x228bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x228BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228BF8u;
        // 0x228bfc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228C00u;
}
