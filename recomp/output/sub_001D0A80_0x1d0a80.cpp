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

// Function: sub_001D0A80
// Address: 0x1d0a80 - 0x1d0ad0
void sub_001D0A80_0x1d0a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0A80_0x1d0a80");
#endif

    switch (ctx->pc) {
        case 0x1d0a98u: goto label_1d0a98;
        case 0x1d0ac4u: goto label_1d0ac4;
        default: break;
    }

    ctx->pc = 0x1d0a80u;

    // 0x1d0a80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0a84: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1d0a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0a88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0a8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0A8Cu;
    {
        const bool branch_taken_0x1d0a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A8Cu;
        // 0x1d0a90: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a8c) {
            ctx->pc = 0x1D0A9Cu;
            goto label_1d0a9c;
        }
    }
    ctx->pc = 0x1D0A94u;
    // 0x1d0a94: 0x0  nop
    ctx->pc = 0x1d0a94u;
    // NOP
label_1d0a98:
    // 0x1d0a98: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1d0a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d0a9c:
    // 0x1d0a9c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D0A9Cu;
    {
        const bool branch_taken_0x1d0a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A9Cu;
        // 0x1d0aa0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a9c) {
            ctx->pc = 0x1D0AC8u;
            goto label_1d0ac8;
        }
    }
    ctx->pc = 0x1D0AA4u;
    // 0x1d0aa4: 0x0  nop
    ctx->pc = 0x1d0aa4u;
    // NOP
    // 0x1d0aa8: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D0AA8u;
    {
        const bool branch_taken_0x1d0aa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D0AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0AA8u;
        // 0x1d0aac: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0aa8) {
            ctx->pc = 0x1D0A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0a98;
        }
    }
    ctx->pc = 0x1D0AB0u;
    // 0x1d0ab0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1d0ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d0ab4: 0x50820001  beql        $a0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D0AB4u;
    {
        const bool branch_taken_0x1d0ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0ab4) {
            ctx->pc = 0x1D0AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0AB4u;
            // 0x1d0ab8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0ABCu;
            goto label_1d0abc;
        }
    }
    ctx->pc = 0x1D0ABCu;
label_1d0abc:
    // 0x1d0abc: 0xc073e76  jal         func_1CF9D8
    ctx->pc = 0x1D0ABCu;
    SET_GPR_U32(ctx, 31, 0x1D0AC4u);
    ctx->pc = 0x1CF9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF9D8u, 0x1D0ABCu, 0x1D0AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0AC4u;
label_1d0ac4:
    // 0x1d0ac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0ac8:
    // 0x1d0ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0AC8u;
        // 0x1d0acc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0AD0u;
}
