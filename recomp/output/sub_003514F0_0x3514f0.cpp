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

// Function: sub_003514F0
// Address: 0x3514f0 - 0x3515e0
void sub_003514F0_0x3514f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003514F0_0x3514f0");
#endif

    switch (ctx->pc) {
        case 0x351548u: goto label_351548;
        case 0x351554u: goto label_351554;
        case 0x35157cu: goto label_35157c;
        case 0x351590u: goto label_351590;
        default: break;
    }

    ctx->pc = 0x3514f0u;

    // 0x3514f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3514f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3514f4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x3514f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x3514f8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3514f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3514fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3514fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351500: 0x8c62be70  lw          $v0, -0x4190($v1)
    ctx->pc = 0x351500u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BBE70u));
    // 0x351504: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x351504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x351508: 0x2464be70  addiu       $a0, $v1, -0x4190
    ctx->pc = 0x351508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950512));
    // 0x35150c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x35150Cu;
    {
        const bool branch_taken_0x35150c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35150Cu;
        // 0x351510: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35150c) {
            ctx->pc = 0x3515C8u;
            goto label_3515c8;
        }
    }
    ctx->pc = 0x351514u;
    // 0x351514: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x351514u;
    {
        const bool branch_taken_0x351514 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x351518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351514u;
        // 0x351518: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351514) {
            ctx->pc = 0x3515CCu;
            goto label_3515cc;
        }
    }
    ctx->pc = 0x35151Cu;
    // 0x35151c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x35151cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x351520: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x351520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x351524: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x351524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x351528: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x351528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x35152c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x35152cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x351530: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x351530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x351534: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x351534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x351538: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x351538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x35153c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x35153Cu;
    {
        const bool branch_taken_0x35153c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35153Cu;
        // 0x351540: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35153c) {
            ctx->pc = 0x3515CCu;
            goto label_3515cc;
        }
    }
    ctx->pc = 0x351544u;
    // 0x351544: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x351544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_351548:
    // 0x351548: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x351548u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35154c: 0xc0d27c0  jal         func_349F00
    ctx->pc = 0x35154Cu;
    SET_GPR_U32(ctx, 31, 0x351554u);
    ctx->pc = 0x351550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35154Cu;
    // 0x351550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349F00u, 0x35154Cu, 0x351554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351554u;
label_351554:
    // 0x351554: 0x1451000f  bne         $v0, $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x351554u;
    {
        const bool branch_taken_0x351554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x351558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351554u;
        // 0x351558: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351554) {
            ctx->pc = 0x351594u;
            goto label_351594;
        }
    }
    ctx->pc = 0x35155Cu;
    // 0x35155c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35155Cu;
    {
        const bool branch_taken_0x35155c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35155Cu;
        // 0x351560: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35155c) {
            ctx->pc = 0x351580u;
            goto label_351580;
        }
    }
    ctx->pc = 0x351564u;
    // 0x351564: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x351564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x351568: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x351568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35156c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x35156cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x351570: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x351570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x351574: 0xc0fbc50  jal         func_3EF140
    ctx->pc = 0x351574u;
    SET_GPR_U32(ctx, 31, 0x35157Cu);
    ctx->pc = 0x351578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351574u;
    // 0x351578: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF140u, 0x351574u, 0x35157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35157Cu;
label_35157c:
    // 0x35157c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x35157cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_351580:
    // 0x351580: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x351580u;
    {
        const bool branch_taken_0x351580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x351584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351580u;
        // 0x351584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351580) {
            ctx->pc = 0x351590u;
            goto label_351590;
        }
    }
    ctx->pc = 0x351588u;
    // 0x351588: 0xc0d1e40  jal         func_347900
    ctx->pc = 0x351588u;
    SET_GPR_U32(ctx, 31, 0x351590u);
    ctx->pc = 0x35158Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351588u;
    // 0x35158c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347900u, 0x351588u, 0x351590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351590u;
label_351590:
    // 0x351590: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x351590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_351594:
    // 0x351594: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x351594u;
    {
        const bool branch_taken_0x351594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351594) {
            ctx->pc = 0x351598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351594u;
            // 0x351598: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3515A8u;
            goto label_3515a8;
        }
    }
    ctx->pc = 0x35159Cu;
    // 0x35159c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x35159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3515a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3515A0u;
    {
        const bool branch_taken_0x3515a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3515A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3515A0u;
        // 0x3515a4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3515a0) {
            ctx->pc = 0x3515B8u;
            goto label_3515b8;
        }
    }
    ctx->pc = 0x3515A8u;
label_3515a8:
    // 0x3515a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3515A8u;
    {
        const bool branch_taken_0x3515a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3515ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3515A8u;
        // 0x3515ac: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3515a8) {
            ctx->pc = 0x3515BCu;
            goto label_3515bc;
        }
    }
    ctx->pc = 0x3515B0u;
    // 0x3515b0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3515b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3515b4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3515b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_3515b8:
    // 0x3515b8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3515b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3515bc:
    // 0x3515bc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x3515bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3515c0: 0x1462ffe1  bne         $v1, $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3515C0u;
    {
        const bool branch_taken_0x3515c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3515C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3515C0u;
        // 0x3515c4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3515c0) {
            ctx->pc = 0x351548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351548;
        }
    }
    ctx->pc = 0x3515C8u;
label_3515c8:
    // 0x3515c8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3515c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3515cc:
    // 0x3515cc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3515ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3515d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3515d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3515d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3515D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3515D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3515D4u;
        // 0x3515d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3515D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3515DCu;
    // 0x3515dc: 0x0  nop
    ctx->pc = 0x3515dcu;
    // NOP
    ctx->pc = 0x3515e0u;
}
