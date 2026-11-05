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

// Function: sub_0025BF38
// Address: 0x25bf38 - 0x25bf60
void sub_0025BF38_0x25bf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BF38_0x25bf38");
#endif

    switch (ctx->pc) {
        case 0x25bf54u: goto label_25bf54;
        default: break;
    }

    ctx->pc = 0x25bf38u;

    // 0x25bf38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25bf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25bf3c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x25bf3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x25bf40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25bf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25bf44: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25BF44u;
    {
        const bool branch_taken_0x25bf44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF44u;
        // 0x25bf48: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf44) {
            ctx->pc = 0x25BF54u;
            goto label_25bf54;
        }
    }
    ctx->pc = 0x25BF4Cu;
    // 0x25bf4c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x25BF4Cu;
    SET_GPR_U32(ctx, 31, 0x25BF54u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x25BF4Cu, 0x25BF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BF54u;
label_25bf54:
    // 0x25bf54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25bf54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bf58: 0x3e00008  jr          $ra
    ctx->pc = 0x25BF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BF58u;
        // 0x25bf5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BF60u;
}
