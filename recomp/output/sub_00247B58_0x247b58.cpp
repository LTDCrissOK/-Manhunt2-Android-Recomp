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

// Function: sub_00247B58
// Address: 0x247b58 - 0x247b80
void sub_00247B58_0x247b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247B58_0x247b58");
#endif

    switch (ctx->pc) {
        case 0x247b58u: goto label_247b58;
        case 0x247b5cu: goto label_247b5c;
        case 0x247b60u: goto label_247b60;
        case 0x247b64u: goto label_247b64;
        case 0x247b68u: goto label_247b68;
        case 0x247b6cu: goto label_247b6c;
        case 0x247b70u: goto label_247b70;
        case 0x247b74u: goto label_247b74;
        case 0x247b78u: goto label_247b78;
        case 0x247b7cu: goto label_247b7c;
        default: break;
    }

    ctx->pc = 0x247b58u;

label_247b58:
    // 0x247b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_247b5c:
    // 0x247b5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_247b60:
    // 0x247b60: 0x8ca4010c  lw          $a0, 0x10C($a1)
    ctx->pc = 0x247b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 268)));
label_247b64:
    // 0x247b64: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x247b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_247b68:
    // 0x247b68: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x247b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_247b6c:
    // 0x247b6c: 0x40f809  jalr        $v0
label_247b70:
    if (ctx->pc == 0x247B70u) {
        ctx->pc = 0x247B74u;
        goto label_247b74;
    }
    ctx->pc = 0x247B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x247B74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247B6Cu, 0x247B74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247B74u;
label_247b74:
    // 0x247b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_247b78:
    // 0x247b78: 0x3e00008  jr          $ra
label_247b7c:
    if (ctx->pc == 0x247B7Cu) {
        ctx->pc = 0x247B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B78u;
        // 0x247b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247B80u;
        goto label_fallthrough_0x247b78;
    }
    ctx->pc = 0x247B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B78u;
        // 0x247b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x247b78:
    ctx->pc = 0x247B80u;
}
