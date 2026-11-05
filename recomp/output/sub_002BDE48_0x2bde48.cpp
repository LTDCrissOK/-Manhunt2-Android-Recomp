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

// Function: sub_002BDE48
// Address: 0x2bde48 - 0x2bde70
void sub_002BDE48_0x2bde48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDE48_0x2bde48");
#endif

    switch (ctx->pc) {
        case 0x2bde60u: goto label_2bde60;
        default: break;
    }

    ctx->pc = 0x2bde48u;

    // 0x2bde48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bde48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bde4c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2bde4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2bde50: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BDE50u;
    {
        const bool branch_taken_0x2bde50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE50u;
        // 0x2bde54: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde50) {
            ctx->pc = 0x2BDE60u;
            goto label_2bde60;
        }
    }
    ctx->pc = 0x2BDE58u;
    // 0x2bde58: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2BDE58u;
    SET_GPR_U32(ctx, 31, 0x2BDE60u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2BDE58u, 0x2BDE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDE60u;
label_2bde60:
    // 0x2bde60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bde60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bde64: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE64u;
        // 0x2bde68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDE6Cu;
    // 0x2bde6c: 0x0  nop
    ctx->pc = 0x2bde6cu;
    // NOP
    ctx->pc = 0x2bde70u;
}
