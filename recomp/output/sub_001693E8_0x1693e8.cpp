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

// Function: sub_001693E8
// Address: 0x1693e8 - 0x1694a8
void sub_001693E8_0x1693e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001693E8_0x1693e8");
#endif

    switch (ctx->pc) {
        case 0x16940cu: goto label_16940c;
        case 0x169418u: goto label_169418;
        case 0x16942cu: goto label_16942c;
        case 0x169448u: goto label_169448;
        case 0x16947cu: goto label_16947c;
        case 0x169484u: goto label_169484;
        case 0x169494u: goto label_169494;
        default: break;
    }

    ctx->pc = 0x1693e8u;

    // 0x1693e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1693e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1693ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1693ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1693f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1693f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1693f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1693f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1693f8: 0x8e020328  lw          $v0, 0x328($s0)
    ctx->pc = 0x1693f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x1693fc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1693FCu;
    {
        const bool branch_taken_0x1693fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1693FCu;
        // 0x169400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1693fc) {
            ctx->pc = 0x169498u;
            goto label_169498;
        }
    }
    ctx->pc = 0x169404u;
    // 0x169404: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x169404u;
    SET_GPR_U32(ctx, 31, 0x16940Cu);
    ctx->pc = 0x169408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169404u;
    // 0x169408: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x169404u, 0x16940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16940Cu;
label_16940c:
    // 0x16940c: 0x8e050328  lw          $a1, 0x328($s0)
    ctx->pc = 0x16940cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
    // 0x169410: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x169410u;
    SET_GPR_U32(ctx, 31, 0x169418u);
    ctx->pc = 0x169414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169410u;
    // 0x169414: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x169410u, 0x169418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169418u;
label_169418:
    // 0x169418: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x169418u;
    {
        const bool branch_taken_0x169418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169418) {
            ctx->pc = 0x16941Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169418u;
            // 0x16941c: 0x92020009  lbu         $v0, 0x9($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169434u;
            goto label_169434;
        }
    }
    ctx->pc = 0x169420u;
    // 0x169420: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x169420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169424: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x169424u;
    SET_GPR_U32(ctx, 31, 0x16942Cu);
    ctx->pc = 0x169428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169424u;
    // 0x169428: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x169424u, 0x16942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16942Cu;
label_16942c:
    // 0x16942c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16942Cu;
    {
        const bool branch_taken_0x16942c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16942Cu;
        // 0x169430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16942c) {
            ctx->pc = 0x169498u;
            goto label_169498;
        }
    }
    ctx->pc = 0x169434u;
label_169434:
    // 0x169434: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x169434u;
    {
        const bool branch_taken_0x169434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169434u;
        // 0x169438: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169434) {
            ctx->pc = 0x16947Cu;
            goto label_16947c;
        }
    }
    ctx->pc = 0x16943Cu;
    // 0x16943c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16943Cu;
    {
        const bool branch_taken_0x16943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16943Cu;
        // 0x169440: 0x2c820010  sltiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16943c) {
            ctx->pc = 0x169454u;
            goto label_169454;
        }
    }
    ctx->pc = 0x169444u;
    // 0x169444: 0x0  nop
    ctx->pc = 0x169444u;
    // NOP
label_169448:
    // 0x169448: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x169448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16944c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x16944cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x169450: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x169450u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_169454:
    // 0x169454: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x169454u;
    {
        const bool branch_taken_0x169454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169454u;
        // 0x169458: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169454) {
            ctx->pc = 0x16947Cu;
            goto label_16947c;
        }
    }
    ctx->pc = 0x16945Cu;
    // 0x16945c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x169460: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169464: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x169464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169468: 0x10a0fff7  beqz        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x169468u;
    {
        const bool branch_taken_0x169468 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169468u;
        // 0x16946c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169468) {
            ctx->pc = 0x169448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169448;
        }
    }
    ctx->pc = 0x169470u;
    // 0x169470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169474: 0xc04f546  jal         func_13D518
    ctx->pc = 0x169474u;
    SET_GPR_U32(ctx, 31, 0x16947Cu);
    ctx->pc = 0x169478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169474u;
    // 0x169478: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D518u, 0x169474u, 0x16947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16947Cu;
label_16947c:
    // 0x16947c: 0xc04f478  jal         func_13D1E0
    ctx->pc = 0x16947Cu;
    SET_GPR_U32(ctx, 31, 0x169484u);
    ctx->pc = 0x169480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16947Cu;
    // 0x169480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D1E0u, 0x16947Cu, 0x169484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169484u;
label_169484:
    // 0x169484: 0xae000328  sw          $zero, 0x328($s0)
    ctx->pc = 0x169484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 0));
    // 0x169488: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x169488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16948c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x16948Cu;
    SET_GPR_U32(ctx, 31, 0x169494u);
    ctx->pc = 0x169490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16948Cu;
    // 0x169490: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x16948Cu, 0x169494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169494u;
label_169494:
    // 0x169494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x169494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169498:
    // 0x169498: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x169498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16949c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16949cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1694a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1694A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1694A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694A0u;
        // 0x1694a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1694A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1694A8u;
}
