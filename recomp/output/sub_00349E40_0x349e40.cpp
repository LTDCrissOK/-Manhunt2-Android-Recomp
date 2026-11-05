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

// Function: sub_00349E40
// Address: 0x349e40 - 0x349e78
void sub_00349E40_0x349e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349E40_0x349e40");
#endif

    switch (ctx->pc) {
        case 0x349e64u: goto label_349e64;
        default: break;
    }

    ctx->pc = 0x349e40u;

    // 0x349e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349e44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x349e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x349e48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x349e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x349e4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x349e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349e50: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x349e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x349e54: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x349E54u;
    {
        const bool branch_taken_0x349e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x349e54) {
            ctx->pc = 0x349E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349E54u;
            // 0x349e58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349E6Cu;
            goto label_349e6c;
        }
    }
    ctx->pc = 0x349E5Cu;
    // 0x349e5c: 0xc0b0f1a  jal         func_2C3C68
    ctx->pc = 0x349E5Cu;
    SET_GPR_U32(ctx, 31, 0x349E64u);
    ctx->pc = 0x2C3C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C68u, 0x349E5Cu, 0x349E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E64u;
label_349e64:
    // 0x349e64: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x349e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x349e68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x349e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_349e6c:
    // 0x349e6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x349e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x349e70: 0x3e00008  jr          $ra
    ctx->pc = 0x349E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349E70u;
        // 0x349e74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349E78u;
}
