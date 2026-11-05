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

// Function: sub_00126448
// Address: 0x126448 - 0x126478
void sub_00126448_0x126448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126448_0x126448");
#endif

    switch (ctx->pc) {
        case 0x126450u: goto label_126450;
        default: break;
    }

    ctx->pc = 0x126448u;

    // 0x126448: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x126448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12644c: 0x2486007c  addiu       $a2, $a0, 0x7C
    ctx->pc = 0x12644cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
label_126450:
    // 0x126450: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x126450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x126454: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x126454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x126458: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x126458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x12645c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x12645cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x126460: 0x2ca20070  sltiu       $v0, $a1, 0x70
    ctx->pc = 0x126460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)112) ? 1 : 0);
    // 0x126464: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x126464u;
    {
        const bool branch_taken_0x126464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126464u;
        // 0x126468: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126464) {
            ctx->pc = 0x126450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126450;
        }
    }
    ctx->pc = 0x12646Cu;
    // 0x12646c: 0x3e00008  jr          $ra
    ctx->pc = 0x12646Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12646Cu;
        // 0x126470: 0xa080023c  sb          $zero, 0x23C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12646Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126474u;
    // 0x126474: 0x0  nop
    ctx->pc = 0x126474u;
    // NOP
    ctx->pc = 0x126478u;
}
