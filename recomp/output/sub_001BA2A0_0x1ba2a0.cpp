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

// Function: sub_001BA2A0
// Address: 0x1ba2a0 - 0x1ba440
void sub_001BA2A0_0x1ba2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA2A0_0x1ba2a0");
#endif

    switch (ctx->pc) {
        case 0x1ba31cu: goto label_1ba31c;
        case 0x1ba37cu: goto label_1ba37c;
        case 0x1ba3d4u: goto label_1ba3d4;
        default: break;
    }

    ctx->pc = 0x1ba2a0u;

    // 0x1ba2a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ba2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ba2a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba2a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ba2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ba2ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ba2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ba2b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ba2b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ba2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ba2bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ba2bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ba2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ba2c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ba2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ba2c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ba2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ba2cc: 0x8e0403e8  lw          $a0, 0x3E8($s0)
    ctx->pc = 0x1ba2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1000)));
    // 0x1ba2d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ba2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba2d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ba2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ba2d8: 0x82182b  sltu        $v1, $a0, $v0
    ctx->pc = 0x1ba2d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ba2dc: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1BA2DCu;
    {
        const bool branch_taken_0x1ba2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2DCu;
        // 0x1ba2e0: 0xae0203ec  sw          $v0, 0x3EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2dc) {
            ctx->pc = 0x1BA424u;
            goto label_1ba424;
        }
    }
    ctx->pc = 0x1BA2E4u;
    // 0x1ba2e4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1ba2e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba2e8: 0x14930004  bne         $a0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA2E8u;
    {
        const bool branch_taken_0x1ba2e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x1BA2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2E8u;
        // 0x1ba2ec: 0xae0403ec  sw          $a0, 0x3EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1004), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2e8) {
            ctx->pc = 0x1BA2FCu;
            goto label_1ba2fc;
        }
    }
    ctx->pc = 0x1BA2F0u;
    // 0x1ba2f0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1ba2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1ba2f4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1BA2F4u;
    {
        const bool branch_taken_0x1ba2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2F4u;
        // 0x1ba2f8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2f4) {
            ctx->pc = 0x1BA424u;
            goto label_1ba424;
        }
    }
    ctx->pc = 0x1BA2FCu;
label_1ba2fc:
    // 0x1ba2fc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1ba2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ba300: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ba300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ba304: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1ba304u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ba308: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BA308u;
    {
        const bool branch_taken_0x1ba308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA308u;
        // 0x1ba30c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba308) {
            ctx->pc = 0x1BA364u;
            goto label_1ba364;
        }
    }
    ctx->pc = 0x1BA310u;
    // 0x1ba310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba314: 0xc06e910  jal         func_1BA440
    ctx->pc = 0x1BA314u;
    SET_GPR_U32(ctx, 31, 0x1BA31Cu);
    ctx->pc = 0x1BA318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA314u;
    // 0x1ba318: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA440u, 0x1BA314u, 0x1BA31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA31Cu;
label_1ba31c:
    // 0x1ba31c: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x1BA31Cu;
    {
        const bool branch_taken_0x1ba31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba31c) {
            ctx->pc = 0x1BA320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA31Cu;
            // 0x1ba320: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA428u;
            goto label_1ba428;
        }
    }
    ctx->pc = 0x1BA324u;
    // 0x1ba324: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1ba324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ba328: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ba328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ba32c: 0x8e0303ec  lw          $v1, 0x3EC($s0)
    ctx->pc = 0x1ba32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1004)));
    // 0x1ba330: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BA330u;
    {
        const bool branch_taken_0x1ba330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba330) {
            ctx->pc = 0x1BA334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA330u;
            // 0x1ba334: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA338u;
            goto label_1ba338;
        }
    }
    ctx->pc = 0x1BA338u;
label_1ba338:
    // 0x1ba338: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x1ba338u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1ba33c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ba33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ba340: 0x2012  mflo        $a0
    ctx->pc = 0x1ba340u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1ba344: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1ba344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ba348: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1ba348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1ba34c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ba34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ba350: 0x8e0203ec  lw          $v0, 0x3EC($s0)
    ctx->pc = 0x1ba350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1004)));
    // 0x1ba354: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ba354u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba358: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1ba358u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1ba35c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1BA35Cu;
    {
        const bool branch_taken_0x1ba35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA35Cu;
        // 0x1ba360: 0xae0003fc  sw          $zero, 0x3FC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1020), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba35c) {
            ctx->pc = 0x1BA424u;
            goto label_1ba424;
        }
    }
    ctx->pc = 0x1BA364u;
label_1ba364:
    // 0x1ba364: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x1ba364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ba368: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BA368u;
    {
        const bool branch_taken_0x1ba368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA368u;
        // 0x1ba36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba368) {
            ctx->pc = 0x1BA3C4u;
            goto label_1ba3c4;
        }
    }
    ctx->pc = 0x1BA370u;
    // 0x1ba370: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ba370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba374: 0xc06e910  jal         func_1BA440
    ctx->pc = 0x1BA374u;
    SET_GPR_U32(ctx, 31, 0x1BA37Cu);
    ctx->pc = 0x1BA378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA374u;
    // 0x1ba378: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA440u, 0x1BA374u, 0x1BA37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA37Cu;
label_1ba37c:
    // 0x1ba37c: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1BA37Cu;
    {
        const bool branch_taken_0x1ba37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba37c) {
            ctx->pc = 0x1BA380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA37Cu;
            // 0x1ba380: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA428u;
            goto label_1ba428;
        }
    }
    ctx->pc = 0x1BA384u;
    // 0x1ba384: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ba384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ba388: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1ba388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ba38c: 0x8e0303ec  lw          $v1, 0x3EC($s0)
    ctx->pc = 0x1ba38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1004)));
    // 0x1ba390: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BA390u;
    {
        const bool branch_taken_0x1ba390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba390) {
            ctx->pc = 0x1BA394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA390u;
            // 0x1ba394: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA398u;
            goto label_1ba398;
        }
    }
    ctx->pc = 0x1BA398u;
label_1ba398:
    // 0x1ba398: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x1ba398u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1ba39c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ba39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ba3a0: 0x2012  mflo        $a0
    ctx->pc = 0x1ba3a0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1ba3a4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1ba3a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ba3a8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1ba3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1ba3ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ba3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ba3b0: 0x8e0203ec  lw          $v0, 0x3EC($s0)
    ctx->pc = 0x1ba3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1004)));
    // 0x1ba3b4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ba3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba3b8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ba3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ba3bc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1BA3BCu;
    {
        const bool branch_taken_0x1ba3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3BCu;
        // 0x1ba3c0: 0xae1303fc  sw          $s3, 0x3FC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1020), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3bc) {
            ctx->pc = 0x1BA424u;
            goto label_1ba424;
        }
    }
    ctx->pc = 0x1BA3C4u;
label_1ba3c4:
    // 0x1ba3c4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BA3C4u;
    {
        const bool branch_taken_0x1ba3c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3C4u;
        // 0x1ba3c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3c4) {
            ctx->pc = 0x1BA424u;
            goto label_1ba424;
        }
    }
    ctx->pc = 0x1BA3CCu;
    // 0x1ba3cc: 0xc06e910  jal         func_1BA440
    ctx->pc = 0x1BA3CCu;
    SET_GPR_U32(ctx, 31, 0x1BA3D4u);
    ctx->pc = 0x1BA3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA3CCu;
    // 0x1ba3d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA440u, 0x1BA3CCu, 0x1BA3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA3D4u;
label_1ba3d4:
    // 0x1ba3d4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BA3D4u;
    {
        const bool branch_taken_0x1ba3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba3d4) {
            ctx->pc = 0x1BA3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA3D4u;
            // 0x1ba3d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA428u;
            goto label_1ba428;
        }
    }
    ctx->pc = 0x1BA3DCu;
    // 0x1ba3dc: 0x8e0203fc  lw          $v0, 0x3FC($s0)
    ctx->pc = 0x1ba3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1020)));
    // 0x1ba3e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BA3E0u;
    {
        const bool branch_taken_0x1ba3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3E0u;
        // 0x1ba3e4: 0x8e0203ec  lw          $v0, 0x3EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3e0) {
            ctx->pc = 0x1BA408u;
            goto label_1ba408;
        }
    }
    ctx->pc = 0x1BA3E8u;
    // 0x1ba3e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ba3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ba3ec: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1ba3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ba3f0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1ba3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1ba3f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ba3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ba3f8: 0x8e0303ec  lw          $v1, 0x3EC($s0)
    ctx->pc = 0x1ba3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1004)));
    // 0x1ba3fc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ba3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ba400: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA400u;
    {
        const bool branch_taken_0x1ba400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA400u;
        // 0x1ba404: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba400) {
            ctx->pc = 0x1BA424u;
            goto label_1ba424;
        }
    }
    ctx->pc = 0x1BA408u;
label_1ba408:
    // 0x1ba408: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ba408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ba40c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1ba40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ba410: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ba410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ba414: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ba414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ba418: 0x8e0303ec  lw          $v1, 0x3EC($s0)
    ctx->pc = 0x1ba418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1004)));
    // 0x1ba41c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ba41cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ba420: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1ba420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1ba424:
    // 0x1ba424: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba428:
    // 0x1ba428: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ba428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba42c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ba42cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba430: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ba430u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ba434: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ba434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba438: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA438u;
        // 0x1ba43c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA440u;
}
