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

// Function: sub_002BB1C0
// Address: 0x2bb1c0 - 0x2bb1f0
void sub_002BB1C0_0x2bb1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB1C0_0x2bb1c0");
#endif

    switch (ctx->pc) {
        case 0x2bb1c8u: goto label_2bb1c8;
        default: break;
    }

    ctx->pc = 0x2bb1c0u;

    // 0x2bb1c0: 0x4c00009  bltz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BB1C0u;
    {
        const bool branch_taken_0x2bb1c0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2BB1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1C0u;
        // 0x2bb1c4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb1c0) {
            ctx->pc = 0x2BB1E8u;
            goto label_2bb1e8;
        }
    }
    ctx->pc = 0x2BB1C8u;
label_2bb1c8:
    // 0x2bb1c8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2bb1c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bb1cc: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB1CCu;
    {
        const bool branch_taken_0x2bb1cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb1cc) {
            ctx->pc = 0x2BB1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB1CCu;
            // 0x2bb1d0: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB1DCu;
            goto label_2bb1dc;
        }
    }
    ctx->pc = 0x2BB1D4u;
    // 0x2bb1d4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x2bb1d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bb1d8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2bb1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_2bb1dc:
    // 0x2bb1dc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2bb1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2bb1e0: 0x4c1fff9  bgez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BB1E0u;
    {
        const bool branch_taken_0x2bb1e0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2BB1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB1E0u;
        // 0x2bb1e4: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb1e0) {
            ctx->pc = 0x2BB1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb1c8;
        }
    }
    ctx->pc = 0x2BB1E8u;
label_2bb1e8:
    // 0x2bb1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB1F0u;
}
