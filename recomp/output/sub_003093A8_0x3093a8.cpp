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

// Function: sub_003093A8
// Address: 0x3093a8 - 0x309428
void sub_003093A8_0x3093a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003093A8_0x3093a8");
#endif

    switch (ctx->pc) {
        case 0x3093c8u: goto label_3093c8;
        case 0x3093e0u: goto label_3093e0;
        case 0x3093e8u: goto label_3093e8;
        case 0x3093f0u: goto label_3093f0;
        default: break;
    }

    ctx->pc = 0x3093a8u;

    // 0x3093a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3093a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3093ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3093acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3093b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3093b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3093b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3093b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3093b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3093b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3093bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3093bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3093c0: 0xc0c49a4  jal         func_312690
    ctx->pc = 0x3093C0u;
    SET_GPR_U32(ctx, 31, 0x3093C8u);
    ctx->pc = 0x3093C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3093C0u;
    // 0x3093c4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312690u, 0x3093C0u, 0x3093C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3093C8u;
label_3093c8:
    // 0x3093c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3093c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3093cc: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x3093ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3093d0: 0x1a20000e  blez        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x3093D0u;
    {
        const bool branch_taken_0x3093d0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3093D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3093D0u;
        // 0x3093d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3093d0) {
            ctx->pc = 0x30940Cu;
            goto label_30940c;
        }
    }
    ctx->pc = 0x3093D8u;
    // 0x3093d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3093d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3093dc: 0x0  nop
    ctx->pc = 0x3093dcu;
    // NOP
label_3093e0:
    // 0x3093e0: 0xc0c5492  jal         func_315248
    ctx->pc = 0x3093E0u;
    SET_GPR_U32(ctx, 31, 0x3093E8u);
    ctx->pc = 0x3093E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3093E0u;
    // 0x3093e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315248u, 0x3093E0u, 0x3093E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3093E8u;
label_3093e8:
    // 0x3093e8: 0xc0c53fe  jal         func_314FF8
    ctx->pc = 0x3093E8u;
    SET_GPR_U32(ctx, 31, 0x3093F0u);
    ctx->pc = 0x3093ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3093E8u;
    // 0x3093ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314FF8u, 0x3093E8u, 0x3093F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3093F0u;
label_3093f0:
    // 0x3093f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3093F0u;
    {
        const bool branch_taken_0x3093f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3093F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3093F0u;
        // 0x3093f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3093f0) {
            ctx->pc = 0x30940Cu;
            goto label_30940c;
        }
    }
    ctx->pc = 0x3093F8u;
    // 0x3093f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3093f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3093fc: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x3093fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x309400: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x309400u;
    {
        const bool branch_taken_0x309400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309400u;
        // 0x309404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309400) {
            ctx->pc = 0x3093E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3093e0;
        }
    }
    ctx->pc = 0x309408u;
    // 0x309408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x309408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30940c:
    // 0x30940c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30940cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309410: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x309410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x309414: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x309414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309418: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x309418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30941c: 0x3e00008  jr          $ra
    ctx->pc = 0x30941Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30941Cu;
        // 0x309420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30941Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309424u;
    // 0x309424: 0x0  nop
    ctx->pc = 0x309424u;
    // NOP
    ctx->pc = 0x309428u;
}
