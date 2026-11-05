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

// Function: sub_0013A258
// Address: 0x13a258 - 0x13a530
void sub_0013A258_0x13a258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A258_0x13a258");
#endif

    switch (ctx->pc) {
        case 0x13a308u: goto label_13a308;
        case 0x13a320u: goto label_13a320;
        case 0x13a340u: goto label_13a340;
        case 0x13a348u: goto label_13a348;
        case 0x13a364u: goto label_13a364;
        case 0x13a384u: goto label_13a384;
        case 0x13a394u: goto label_13a394;
        case 0x13a39cu: goto label_13a39c;
        case 0x13a3b8u: goto label_13a3b8;
        case 0x13a3d8u: goto label_13a3d8;
        case 0x13a3e8u: goto label_13a3e8;
        case 0x13a3f0u: goto label_13a3f0;
        case 0x13a410u: goto label_13a410;
        case 0x13a428u: goto label_13a428;
        case 0x13a444u: goto label_13a444;
        case 0x13a45cu: goto label_13a45c;
        case 0x13a468u: goto label_13a468;
        case 0x13a478u: goto label_13a478;
        case 0x13a4bcu: goto label_13a4bc;
        case 0x13a4d4u: goto label_13a4d4;
        case 0x13a4e8u: goto label_13a4e8;
        case 0x13a500u: goto label_13a500;
        default: break;
    }

    ctx->pc = 0x13a258u;

    // 0x13a258: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13a258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13a25c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x13a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x13a260: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x13a260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x13a264: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x13a264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x13a268: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x13a268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x13a26c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13a26cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a270: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13a270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13a274: 0x30b400ff  andi        $s4, $a1, 0xFF
    ctx->pc = 0x13a274u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13a278: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13a278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13a27c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x13a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x13a280: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13a280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13a284: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x13a284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x13a288: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x13a288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x13a28c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x13a28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x13a290: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x13a290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x13a294: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x13a294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x13a298: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x13a298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x13a29c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13a2a0: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x13a2a0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a2a4: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x13a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x13a2a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13a2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13a2ac: 0x8c760108  lw          $s6, 0x108($v1)
    ctx->pc = 0x13a2acu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x13a2b0: 0x2ec20001  sltiu       $v0, $s6, 0x1
    ctx->pc = 0x13a2b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x13a2b4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13A2B4u;
    {
        const bool branch_taken_0x13a2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2B4u;
        // 0x13a2b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a2b4) {
            ctx->pc = 0x13A2E8u;
            goto label_13a2e8;
        }
    }
    ctx->pc = 0x13A2BCu;
    // 0x13a2bc: 0x8ec30ff8  lw          $v1, 0xFF8($s6)
    ctx->pc = 0x13a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4088)));
    // 0x13a2c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a2c4: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x13a2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x13a2c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A2C8u;
    {
        const bool branch_taken_0x13a2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2C8u;
        // 0x13a2cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a2c8) {
            ctx->pc = 0x13A2DCu;
            goto label_13a2dc;
        }
    }
    ctx->pc = 0x13A2D0u;
    // 0x13a2d0: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x13a2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x13a2d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A2D4u;
    {
        const bool branch_taken_0x13a2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2D4u;
        // 0x13a2d8: 0x2c820001  sltiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a2d4) {
            ctx->pc = 0x13A2E8u;
            goto label_13a2e8;
        }
    }
    ctx->pc = 0x13A2DCu;
label_13a2dc:
    // 0x13a2dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13a2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a2e0: 0x2c820001  sltiu       $v0, $a0, 0x1
    ctx->pc = 0x13a2e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x13a2e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13a2e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a2e8:
    // 0x13a2e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13a2e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a2ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A2ECu;
    {
        const bool branch_taken_0x13a2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2ECu;
        // 0x13a2f0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a2ec) {
            ctx->pc = 0x13A2FCu;
            goto label_13a2fc;
        }
    }
    ctx->pc = 0x13A2F4u;
    // 0x13a2f4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x13a2f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a2f8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x13a2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a2fc:
    // 0x13a2fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13a2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a300: 0xc0952de  jal         func_254B78
    ctx->pc = 0x13A300u;
    SET_GPR_U32(ctx, 31, 0x13A308u);
    ctx->pc = 0x13A304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A300u;
    // 0x13a304: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254B78u, 0x13A300u, 0x13A308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A308u;
label_13a308:
    // 0x13a308: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x13a308u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a30c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13a30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a310: 0x2ea20001  sltiu       $v0, $s5, 0x1
    ctx->pc = 0x13a310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x13a314: 0x2b2900a  movz        $s2, $s5, $s2
    ctx->pc = 0x13a314u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 21));
    // 0x13a318: 0xc04eea8  jal         func_13BAA0
    ctx->pc = 0x13A318u;
    SET_GPR_U32(ctx, 31, 0x13A320u);
    ctx->pc = 0x13A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A318u;
    // 0x13a31c: 0x50800a  movz        $s0, $v0, $s0 (Delay Slot)
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BAA0u, 0x13A318u, 0x13A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A320u;
label_13a320:
    // 0x13a320: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A320u;
    {
        const bool branch_taken_0x13a320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a320) {
            ctx->pc = 0x13A324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A320u;
            // 0x13a324: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A330u;
            goto label_13a330;
        }
    }
    ctx->pc = 0x13A328u;
    // 0x13a328: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x13a328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a32c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x13a32cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a330:
    // 0x13a330: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x13A330u;
    {
        const bool branch_taken_0x13a330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A330u;
        // 0x13a334: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a330) {
            ctx->pc = 0x13A384u;
            goto label_13a384;
        }
    }
    ctx->pc = 0x13A338u;
    // 0x13a338: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x13A338u;
    SET_GPR_U32(ctx, 31, 0x13A340u);
    ctx->pc = 0x13A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A338u;
    // 0x13a33c: 0x241007d1  addiu       $s0, $zero, 0x7D1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x13A338u, 0x13A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A340u;
label_13a340:
    // 0x13a340: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x13A340u;
    SET_GPR_U32(ctx, 31, 0x13A348u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x13A340u, 0x13A348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A348u;
label_13a348:
    // 0x13a348: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x13a348u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13a34c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13a34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a350: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13A350u;
    {
        const bool branch_taken_0x13a350 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a350) {
            ctx->pc = 0x13A354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A350u;
            // 0x13a354: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A358u;
            goto label_13a358;
        }
    }
    ctx->pc = 0x13A358u;
label_13a358:
    // 0x13a358: 0x8810  mfhi        $s1
    ctx->pc = 0x13a358u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x13a35c: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x13A35Cu;
    SET_GPR_U32(ctx, 31, 0x13A364u);
    ctx->pc = 0x13A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A35Cu;
    // 0x13a360: 0x263103e8  addiu       $s1, $s1, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x13A35Cu, 0x13A364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A364u;
label_13a364:
    // 0x13a364: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x13a364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x13a368: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13a368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13a36c: 0x2832018  mult        $a0, $s4, $v1
    ctx->pc = 0x13a36cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x13a370: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13a370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13a374: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x13a374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x13a378: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13a378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a37c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13A37Cu;
    SET_GPR_U32(ctx, 31, 0x13A384u);
    ctx->pc = 0x13A380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A37Cu;
    // 0x13a380: 0xac620508  sw          $v0, 0x508($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1288), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13A37Cu, 0x13A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A384u;
label_13a384:
    // 0x13a384: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x13A384u;
    {
        const bool branch_taken_0x13a384 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A384u;
        // 0x13a388: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a384) {
            ctx->pc = 0x13A3D8u;
            goto label_13a3d8;
        }
    }
    ctx->pc = 0x13A38Cu;
    // 0x13a38c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x13A38Cu;
    SET_GPR_U32(ctx, 31, 0x13A394u);
    ctx->pc = 0x13A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A38Cu;
    // 0x13a390: 0x24100fa1  addiu       $s0, $zero, 0xFA1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x13A38Cu, 0x13A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A394u;
label_13a394:
    // 0x13a394: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x13A394u;
    SET_GPR_U32(ctx, 31, 0x13A39Cu);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x13A394u, 0x13A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A39Cu;
label_13a39c:
    // 0x13a39c: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x13a39cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13a3a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13a3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a3a4: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13A3A4u;
    {
        const bool branch_taken_0x13a3a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a3a4) {
            ctx->pc = 0x13A3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A3A4u;
            // 0x13a3a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A3ACu;
            goto label_13a3ac;
        }
    }
    ctx->pc = 0x13A3ACu;
label_13a3ac:
    // 0x13a3ac: 0x8810  mfhi        $s1
    ctx->pc = 0x13a3acu;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x13a3b0: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x13A3B0u;
    SET_GPR_U32(ctx, 31, 0x13A3B8u);
    ctx->pc = 0x13A3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A3B0u;
    // 0x13a3b4: 0x26310fa0  addiu       $s1, $s1, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x13A3B0u, 0x13A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A3B8u;
label_13a3b8:
    // 0x13a3b8: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x13a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x13a3bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13a3c0: 0x2832018  mult        $a0, $s4, $v1
    ctx->pc = 0x13a3c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x13a3c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13a3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13a3c8: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x13a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x13a3cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13a3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a3d0: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13A3D0u;
    SET_GPR_U32(ctx, 31, 0x13A3D8u);
    ctx->pc = 0x13A3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A3D0u;
    // 0x13a3d4: 0xac620504  sw          $v0, 0x504($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1284), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13A3D0u, 0x13A3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A3D8u;
label_13a3d8:
    // 0x13a3d8: 0x12e00020  beqz        $s7, . + 4 + (0x20 << 2)
    ctx->pc = 0x13A3D8u;
    {
        const bool branch_taken_0x13a3d8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A3D8u;
        // 0x13a3dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a3d8) {
            ctx->pc = 0x13A45Cu;
            goto label_13a45c;
        }
    }
    ctx->pc = 0x13A3E0u;
    // 0x13a3e0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x13A3E0u;
    SET_GPR_U32(ctx, 31, 0x13A3E8u);
    ctx->pc = 0x13A3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A3E0u;
    // 0x13a3e4: 0x24120fa1  addiu       $s2, $zero, 0xFA1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x13A3E0u, 0x13A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A3E8u;
label_13a3e8:
    // 0x13a3e8: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x13A3E8u;
    SET_GPR_U32(ctx, 31, 0x13A3F0u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x13A3E8u, 0x13A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A3F0u;
label_13a3f0:
    // 0x13a3f0: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x13a3f0u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13a3f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13a3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a3f8: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13A3F8u;
    {
        const bool branch_taken_0x13a3f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a3f8) {
            ctx->pc = 0x13A3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A3F8u;
            // 0x13a3fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A400u;
            goto label_13a400;
        }
    }
    ctx->pc = 0x13A400u;
label_13a400:
    // 0x13a400: 0x24121b59  addiu       $s2, $zero, 0x1B59
    ctx->pc = 0x13a400u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7001));
    // 0x13a404: 0x1810  mfhi        $v1
    ctx->pc = 0x13a404u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x13a408: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x13A408u;
    SET_GPR_U32(ctx, 31, 0x13A410u);
    ctx->pc = 0x13A40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A408u;
    // 0x13a40c: 0x24710fa0  addiu       $s1, $v1, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x13A408u, 0x13A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A410u;
label_13a410:
    // 0x13a410: 0x2410005c  addiu       $s0, $zero, 0x5C
    ctx->pc = 0x13a410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x13a414: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x13a414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13a418: 0x2908018  mult        $s0, $s4, $s0
    ctx->pc = 0x13a418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x13a41c: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x13a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x13a420: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x13A420u;
    SET_GPR_U32(ctx, 31, 0x13A428u);
    ctx->pc = 0x13A424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A420u;
    // 0x13a424: 0xac43051c  sw          $v1, 0x51C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1308), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x13A420u, 0x13A428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A428u;
label_13a428:
    // 0x13a428: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x13a428u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13a42c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13a42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a430: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13A430u;
    {
        const bool branch_taken_0x13a430 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a430) {
            ctx->pc = 0x13A434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A430u;
            // 0x13a434: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A438u;
            goto label_13a438;
        }
    }
    ctx->pc = 0x13A438u;
label_13a438:
    // 0x13a438: 0x1810  mfhi        $v1
    ctx->pc = 0x13a438u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x13a43c: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x13A43Cu;
    SET_GPR_U32(ctx, 31, 0x13A444u);
    ctx->pc = 0x13A440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A43Cu;
    // 0x13a440: 0x24710bb8  addiu       $s1, $v1, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x13A43Cu, 0x13A444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A444u;
label_13a444:
    // 0x13a444: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x13a444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13a448: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x13a448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x13a44c: 0xae030520  sw          $v1, 0x520($s0)
    ctx->pc = 0x13a44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 3));
    // 0x13a450: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13a450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a454: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13A454u;
    SET_GPR_U32(ctx, 31, 0x13A45Cu);
    ctx->pc = 0x13A458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A454u;
    // 0x13a458: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13A454u, 0x13A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A45Cu;
label_13a45c:
    // 0x13a45c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13a45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a460: 0xc04eee8  jal         func_13BBA0
    ctx->pc = 0x13A460u;
    SET_GPR_U32(ctx, 31, 0x13A468u);
    ctx->pc = 0x13A464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A460u;
    // 0x13a464: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BBA0u, 0x13A460u, 0x13A468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A468u;
label_13a468:
    // 0x13a468: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A468u;
    {
        const bool branch_taken_0x13a468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A468u;
        // 0x13a46c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a468) {
            ctx->pc = 0x13A478u;
            goto label_13a478;
        }
    }
    ctx->pc = 0x13A470u;
    // 0x13a470: 0xc04ef18  jal         func_13BC60
    ctx->pc = 0x13A470u;
    SET_GPR_U32(ctx, 31, 0x13A478u);
    ctx->pc = 0x13A474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A470u;
    // 0x13a474: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BC60u, 0x13A470u, 0x13A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A478u;
label_13a478:
    // 0x13a478: 0x12a00022  beqz        $s5, . + 4 + (0x22 << 2)
    ctx->pc = 0x13A478u;
    {
        const bool branch_taken_0x13a478 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A478u;
        // 0x13a47c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a478) {
            ctx->pc = 0x13A504u;
            goto label_13a504;
        }
    }
    ctx->pc = 0x13A480u;
    // 0x13a480: 0x12c00020  beqz        $s6, . + 4 + (0x20 << 2)
    ctx->pc = 0x13A480u;
    {
        const bool branch_taken_0x13a480 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A480u;
        // 0x13a484: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a480) {
            ctx->pc = 0x13A504u;
            goto label_13a504;
        }
    }
    ctx->pc = 0x13A488u;
    // 0x13a488: 0x8e620ab0  lw          $v0, 0xAB0($s3)
    ctx->pc = 0x13a488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2736)));
    // 0x13a48c: 0x24839a08  addiu       $v1, $a0, -0x65F8
    ctx->pc = 0x13a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x13a490: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13a490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13a494: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13a494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13a498: 0x8c630108  lw          $v1, 0x108($v1)
    ctx->pc = 0x13a498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x13a49c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x13A49Cu;
    {
        const bool branch_taken_0x13a49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A49Cu;
        // 0x13a4a0: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a49c) {
            ctx->pc = 0x13A508u;
            goto label_13a508;
        }
    }
    ctx->pc = 0x13A4A4u;
    // 0x13a4a4: 0x8c620ff8  lw          $v0, 0xFF8($v1)
    ctx->pc = 0x13a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
    // 0x13a4a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a4ac: 0x4600016  bltz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x13A4ACu;
    {
        const bool branch_taken_0x13a4ac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x13A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A4ACu;
        // 0x13a4b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a4ac) {
            ctx->pc = 0x13A508u;
            goto label_13a508;
        }
    }
    ctx->pc = 0x13A4B4u;
    // 0x13a4b4: 0xc04e9a6  jal         func_13A698
    ctx->pc = 0x13A4B4u;
    SET_GPR_U32(ctx, 31, 0x13A4BCu);
    ctx->pc = 0x13A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A4B4u;
    // 0x13a4b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A698u, 0x13A4B4u, 0x13A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A4BCu;
label_13a4bc:
    // 0x13a4bc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13A4BCu;
    {
        const bool branch_taken_0x13a4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A4BCu;
        // 0x13a4c0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a4bc) {
            ctx->pc = 0x13A504u;
            goto label_13a504;
        }
    }
    ctx->pc = 0x13A4C4u;
    // 0x13a4c4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13a4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a4c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13a4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a4cc: 0xc04e9a0  jal         func_13A680
    ctx->pc = 0x13A4CCu;
    SET_GPR_U32(ctx, 31, 0x13A4D4u);
    ctx->pc = 0x13A4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A4CCu;
    // 0x13a4d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A680u, 0x13A4CCu, 0x13A4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A4D4u;
label_13a4d4:
    // 0x13a4d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13a4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a4d8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x13a4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a4dc: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x13a4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x13a4e0: 0xc04dbd4  jal         func_136F50
    ctx->pc = 0x13A4E0u;
    SET_GPR_U32(ctx, 31, 0x13A4E8u);
    ctx->pc = 0x13A4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A4E0u;
    // 0x13a4e4: 0x24070028  addiu       $a3, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F50u, 0x13A4E0u, 0x13A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A4E8u;
label_13a4e8:
    // 0x13a4e8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13a4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13a4ec: 0x8e670ab0  lw          $a3, 0xAB0($s3)
    ctx->pc = 0x13a4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2736)));
    // 0x13a4f0: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x13a4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x13a4f4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x13a4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a4f8: 0xc04668a  jal         func_119A28
    ctx->pc = 0x13A4F8u;
    SET_GPR_U32(ctx, 31, 0x13A500u);
    ctx->pc = 0x13A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A4F8u;
    // 0x13a4fc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x13A4F8u, 0x13A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A500u;
label_13a500:
    // 0x13a500: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13a500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13a504:
    // 0x13a504: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13a504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13a508:
    // 0x13a508: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13a508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a50c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x13a50cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13a510: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x13a510u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a514: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x13a514u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13a518: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x13a518u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a51c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x13a51cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a520: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x13a520u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13a524: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x13a524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13a528: 0x3e00008  jr          $ra
    ctx->pc = 0x13A528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A528u;
        // 0x13a52c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A530u;
}
