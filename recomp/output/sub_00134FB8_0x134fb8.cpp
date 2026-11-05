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

// Function: sub_00134FB8
// Address: 0x134fb8 - 0x134ff4
void sub_00134FB8_0x134fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134FB8_0x134fb8");
#endif

    switch (ctx->pc) {
        case 0x134fc0u: goto label_134fc0;
        default: break;
    }

    ctx->pc = 0x134fb8u;

label_134fb8:
    // 0x134fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x134FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FB8u;
        // 0x134fbc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134FC0u;
label_134fc0:
    // 0x134fc0: 0x0  nop
    ctx->pc = 0x134fc0u;
    // NOP
    // 0x134fc4: 0x0  nop
    ctx->pc = 0x134fc4u;
    // NOP
    // 0x134fc8: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x134FC8u;
    {
        const bool branch_taken_0x134fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FC8u;
        // 0x134fcc: 0x2463ffd9  addiu       $v1, $v1, -0x27 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134fc8) {
            ctx->pc = 0x134FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134fb8;
        }
    }
    ctx->pc = 0x134FD0u;
    // 0x134fd0: 0x2c62003b  sltiu       $v0, $v1, 0x3B
    ctx->pc = 0x134fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x134fd4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x134FD4u;
    {
        const bool branch_taken_0x134fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FD4u;
        // 0x134fd8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134fd4) {
            ctx->pc = 0x13501Cu;
            return;
        }
    }
    ctx->pc = 0x134FDCu;
    // 0x134fdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x134fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x134fe0: 0x2442e360  addiu       $v0, $v0, -0x1CA0
    ctx->pc = 0x134fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959968));
    // 0x134fe4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x134fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x134fe8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x134fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134fec: 0x800008  jr          $a0
    ctx->pc = 0x134FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134FB8u: goto label_134fb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134FECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x134FF4u;
}
