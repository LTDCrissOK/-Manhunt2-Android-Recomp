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

// Function: sub_001F6ED8
// Address: 0x1f6ed8 - 0x1f6f00
void sub_001F6ED8_0x1f6ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6ED8_0x1f6ed8");
#endif

    switch (ctx->pc) {
        case 0x1f6ef0u: goto label_1f6ef0;
        default: break;
    }

    ctx->pc = 0x1f6ed8u;

    // 0x1f6ed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f6ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6edc: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f6edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f6ee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6ee4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1f6ee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1f6ee8: 0xc080902  jal         func_202408
    ctx->pc = 0x1F6EE8u;
    SET_GPR_U32(ctx, 31, 0x1F6EF0u);
    ctx->pc = 0x1F6EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6EE8u;
    // 0x1f6eec: 0x24849c38  addiu       $a0, $a0, -0x63C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202408u, 0x1F6EE8u, 0x1F6EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6EF0u;
label_1f6ef0:
    // 0x1f6ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EF4u;
        // 0x1f6ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6EFCu;
    // 0x1f6efc: 0x0  nop
    ctx->pc = 0x1f6efcu;
    // NOP
    ctx->pc = 0x1f6f00u;
}
