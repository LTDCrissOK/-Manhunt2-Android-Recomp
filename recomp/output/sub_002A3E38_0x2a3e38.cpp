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

// Function: sub_002A3E38
// Address: 0x2a3e38 - 0x2a3e60
void sub_002A3E38_0x2a3e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3E38_0x2a3e38");
#endif

    switch (ctx->pc) {
        case 0x2a3e54u: goto label_2a3e54;
        default: break;
    }

    ctx->pc = 0x2a3e38u;

    // 0x2a3e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a3e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a3e3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a3e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a3e40: 0x90820284  lbu         $v0, 0x284($a0)
    ctx->pc = 0x2a3e40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 644)));
    // 0x2a3e44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3E44u;
    {
        const bool branch_taken_0x2a3e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3E44u;
        // 0x2a3e48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3e44) {
            ctx->pc = 0x2A3E58u;
            goto label_2a3e58;
        }
    }
    ctx->pc = 0x2A3E4Cu;
    // 0x2a3e4c: 0xc0a7b60  jal         func_29ED80
    ctx->pc = 0x2A3E4Cu;
    SET_GPR_U32(ctx, 31, 0x2A3E54u);
    ctx->pc = 0x29ED80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29ED80u, 0x2A3E4Cu, 0x2A3E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E54u;
label_2a3e54:
    // 0x2a3e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a3e58:
    // 0x2a3e58: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3E58u;
        // 0x2a3e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3E60u;
}
