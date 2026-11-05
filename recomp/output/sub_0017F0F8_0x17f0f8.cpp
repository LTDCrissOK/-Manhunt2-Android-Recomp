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

// Function: sub_0017F0F8
// Address: 0x17f0f8 - 0x17f128
void sub_0017F0F8_0x17f0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F0F8_0x17f0f8");
#endif

    switch (ctx->pc) {
        case 0x17f114u: goto label_17f114;
        default: break;
    }

    ctx->pc = 0x17f0f8u;

    // 0x17f0f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f0fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f100: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x17f100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17f104: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F104u;
    {
        const bool branch_taken_0x17f104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F104u;
        // 0x17f108: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f104) {
            ctx->pc = 0x17F11Cu;
            goto label_17f11c;
        }
    }
    ctx->pc = 0x17F10Cu;
    // 0x17f10c: 0xc05fd8a  jal         func_17F628
    ctx->pc = 0x17F10Cu;
    SET_GPR_U32(ctx, 31, 0x17F114u);
    ctx->pc = 0x17F628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F628u, 0x17F10Cu, 0x17F114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F114u;
label_17f114:
    // 0x17f114: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17F114u;
    {
        const bool branch_taken_0x17f114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F114u;
        // 0x17f118: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f114) {
            ctx->pc = 0x17F120u;
            goto label_17f120;
        }
    }
    ctx->pc = 0x17F11Cu;
label_17f11c:
    // 0x17f11c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f120:
    // 0x17f120: 0x3e00008  jr          $ra
    ctx->pc = 0x17F120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F120u;
        // 0x17f124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F128u;
}
