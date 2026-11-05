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

// Function: sub_00205C50
// Address: 0x205c50 - 0x205c88
void sub_00205C50_0x205c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205C50_0x205c50");
#endif

    switch (ctx->pc) {
        case 0x205c74u: goto label_205c74;
        default: break;
    }

    ctx->pc = 0x205c50u;

    // 0x205c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205c54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205c58: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x205c58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x205c5c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x205c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x205c60: 0x8e0493c4  lw          $a0, -0x6C3C($s0)
    ctx->pc = 0x205c60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F93C4u));
    // 0x205c64: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x205C64u;
    {
        const bool branch_taken_0x205c64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205c64) {
            ctx->pc = 0x205C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205C64u;
            // 0x205c68: 0xae0093c4  sw          $zero, -0x6C3C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4294939588), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205C78u;
            goto label_205c78;
        }
    }
    ctx->pc = 0x205C6Cu;
    // 0x205c6c: 0xc081732  jal         func_205CC8
    ctx->pc = 0x205C6Cu;
    SET_GPR_U32(ctx, 31, 0x205C74u);
    ctx->pc = 0x205C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205C6Cu;
    // 0x205c70: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205CC8u, 0x205C6Cu, 0x205C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C74u;
label_205c74:
    // 0x205c74: 0xae0093c4  sw          $zero, -0x6C3C($s0)
    ctx->pc = 0x205c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939588), GPR_U32(ctx, 0));
label_205c78:
    // 0x205c78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205c78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205c7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x205c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205c80: 0x3e00008  jr          $ra
    ctx->pc = 0x205C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C80u;
        // 0x205c84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205C88u;
}
