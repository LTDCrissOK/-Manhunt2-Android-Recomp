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

// Function: sub_003B2340
// Address: 0x3b2340 - 0x3b24c8
void sub_003B2340_0x3b2340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2340_0x3b2340");
#endif

    switch (ctx->pc) {
        case 0x3b2398u: goto label_3b2398;
        case 0x3b23b0u: goto label_3b23b0;
        case 0x3b23c0u: goto label_3b23c0;
        case 0x3b2418u: goto label_3b2418;
        case 0x3b242cu: goto label_3b242c;
        case 0x3b2450u: goto label_3b2450;
        case 0x3b2468u: goto label_3b2468;
        default: break;
    }

    ctx->pc = 0x3b2340u;

    // 0x3b2340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b2340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3b2344: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b2344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b2348: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3b2348u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b234c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x3b234cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x3b2350: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x3b2350u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2354: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x3b2354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x3b2358: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x3b2358u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b235c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3b235cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3b2360: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3b2360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3b2364: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3b2364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3b2368: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3b2368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3b236c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3b236cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x3b2370: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x3b2370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x3b2374: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x3b2374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x3b2378: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x3b2378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3b237c: 0x8cb60014  lw          $s6, 0x14($a1)
    ctx->pc = 0x3b237cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x3b2380: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3b2380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3b2384: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x3b2384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3b2388: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3b2388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3b238c: 0x1ac00013  blez        $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x3B238Cu;
    {
        const bool branch_taken_0x3b238c = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x3B2390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B238Cu;
        // 0x3b2390: 0x8cb50004  lw          $s5, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b238c) {
            ctx->pc = 0x3B23DCu;
            goto label_3b23dc;
        }
    }
    ctx->pc = 0x3B2394u;
    // 0x3b2394: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3b2394u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b2398:
    // 0x3b2398: 0x5aa0000d  blezl       $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x3B2398u;
    {
        const bool branch_taken_0x3b2398 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x3b2398) {
            ctx->pc = 0x3B239Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2398u;
            // 0x3b239c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B23D0u;
            goto label_3b23d0;
        }
    }
    ctx->pc = 0x3B23A0u;
    // 0x3b23a0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x3b23a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3b23a4: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x3b23a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b23a8: 0x5e8821  addu        $s1, $v0, $fp
    ctx->pc = 0x3b23a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x3b23ac: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x3b23acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b23b0:
    // 0x3b23b0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x3b23b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3b23b4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b23b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b23b8: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B23B8u;
    SET_GPR_U32(ctx, 31, 0x3B23C0u);
    ctx->pc = 0x3B23BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B23B8u;
    // 0x3b23bc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B23B8u, 0x3B23C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B23C0u;
label_3b23c0:
    // 0x3b23c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3b23c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3b23c4: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B23C4u;
    {
        const bool branch_taken_0x3b23c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B23C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B23C4u;
        // 0x3b23c8: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b23c4) {
            ctx->pc = 0x3B23B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b23b0;
        }
    }
    ctx->pc = 0x3B23CCu;
    // 0x3b23cc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3b23ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3b23d0:
    // 0x3b23d0: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x3b23d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x3b23d4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3B23D4u;
    {
        const bool branch_taken_0x3b23d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B23D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B23D4u;
        // 0x3b23d8: 0x26940180  addiu       $s4, $s4, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b23d4) {
            ctx->pc = 0x3B2398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2398;
        }
    }
    ctx->pc = 0x3B23DCu;
label_3b23dc:
    // 0x3b23dc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3b23dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b23e0: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x3b23e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b23e4: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x3b23e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3b23e8: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x3B23E8u;
    {
        const bool branch_taken_0x3b23e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b23e8) {
            ctx->pc = 0x3B23ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B23E8u;
            // 0x3b23ec: 0x8fb20000  lw          $s2, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2440u;
            goto label_3b2440;
        }
    }
    ctx->pc = 0x3B23F0u;
    // 0x3b23f0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x3b23f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3b23f4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x3b23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x3b23f8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3b23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3b23fc: 0x929023  subu        $s2, $a0, $s2
    ctx->pc = 0x3b23fcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x3b2400: 0x7e8021  addu        $s0, $v1, $fp
    ctx->pc = 0x3b2400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x3b2404: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3b2404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3b2408: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x3b2408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x3b240c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b240cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b2410: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x3b2410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3b2414: 0x0  nop
    ctx->pc = 0x3b2414u;
    // NOP
label_3b2418:
    // 0x3b2418: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3b2418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b241c: 0x26310180  addiu       $s1, $s1, 0x180
    ctx->pc = 0x3b241cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
    // 0x3b2420: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3b2420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2424: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B2424u;
    SET_GPR_U32(ctx, 31, 0x3B242Cu);
    ctx->pc = 0x3B2428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2424u;
    // 0x3b2428: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B2424u, 0x3B242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B242Cu;
label_3b242c:
    // 0x3b242c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b242cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3b2430: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x3b2430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x3b2434: 0x1640fff8  bnez        $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3B2434u;
    {
        const bool branch_taken_0x3b2434 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2434u;
        // 0x3b2438: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2434) {
            ctx->pc = 0x3B2418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2418;
        }
    }
    ctx->pc = 0x3B243Cu;
    // 0x3b243c: 0x8fb20000  lw          $s2, 0x0($sp)
    ctx->pc = 0x3b243cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3b2440:
    // 0x3b2440: 0x2a420020  slti        $v0, $s2, 0x20
    ctx->pc = 0x3b2440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3b2444: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B2444u;
    {
        const bool branch_taken_0x3b2444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2444) {
            ctx->pc = 0x3B2448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2444u;
            // 0x3b2448: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2498u;
            goto label_3b2498;
        }
    }
    ctx->pc = 0x3B244Cu;
    // 0x3b244c: 0x0  nop
    ctx->pc = 0x3b244cu;
    // NOP
label_3b2450:
    // 0x3b2450: 0x5aa0000d  blezl       $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x3B2450u;
    {
        const bool branch_taken_0x3b2450 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x3b2450) {
            ctx->pc = 0x3B2454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2450u;
            // 0x3b2454: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2488u;
            goto label_3b2488;
        }
    }
    ctx->pc = 0x3B2458u;
    // 0x3b2458: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x3b2458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3b245c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x3b245cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2460: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x3b2460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x3b2464: 0x0  nop
    ctx->pc = 0x3b2464u;
    // NOP
label_3b2468:
    // 0x3b2468: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3b2468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3b246c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3b246cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3b2470: 0x0  nop
    ctx->pc = 0x3b2470u;
    // NOP
    // 0x3b2474: 0x0  nop
    ctx->pc = 0x3b2474u;
    // NOP
    // 0x3b2478: 0x0  nop
    ctx->pc = 0x3b2478u;
    // NOP
    // 0x3b247c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B247Cu;
    {
        const bool branch_taken_0x3b247c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B247Cu;
        // 0x3b2480: 0x24420080  addiu       $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b247c) {
            ctx->pc = 0x3B2468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2468;
        }
    }
    ctx->pc = 0x3B2484u;
    // 0x3b2484: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3b2484u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3b2488:
    // 0x3b2488: 0x2a420020  slti        $v0, $s2, 0x20
    ctx->pc = 0x3b2488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3b248c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3B248Cu;
    {
        const bool branch_taken_0x3b248c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b248c) {
            ctx->pc = 0x3B2450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2450;
        }
    }
    ctx->pc = 0x3B2494u;
    // 0x3b2494: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3b2494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b2498:
    // 0x3b2498: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3b2498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b249c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b249cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b24a0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3b24a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3b24a4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3b24a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b24a8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3b24a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3b24ac: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3b24acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b24b0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x3b24b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3b24b4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x3b24b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b24b8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3b24b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3b24bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B24BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B24C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B24BCu;
        // 0x3b24c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B24BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B24C4u;
    // 0x3b24c4: 0x0  nop
    ctx->pc = 0x3b24c4u;
    // NOP
    ctx->pc = 0x3b24c8u;
}
