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

// Function: sub_0025FC7C
// Address: 0x25fc7c - 0x25fc98
void sub_0025FC7C_0x25fc7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FC7C_0x25fc7c");
#endif

    switch (ctx->pc) {
        case 0x25fc8cu: goto label_25fc8c;
        case 0x25fc90u: goto label_25fc90;
        default: break;
    }

    ctx->pc = 0x25fc7cu;

    // 0x25fc7c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25fc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25fc80: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x25fc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc84: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x25FC84u;
    SET_GPR_U32(ctx, 31, 0x25FC8Cu);
    ctx->pc = 0x25FC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC84u;
    // 0x25fc88: 0x24a57140  addiu       $a1, $a1, 0x7140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x25FC84u, 0x25FC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC8Cu;
label_25fc8c:
    // 0x25fc8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25fc90:
    // 0x25fc90: 0x3e00008  jr          $ra
    ctx->pc = 0x25FC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC90u;
        // 0x25fc94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FC98u;
}
