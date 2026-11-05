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

// Function: sub_001F6E88
// Address: 0x1f6e88 - 0x1f6eb0
void sub_001F6E88_0x1f6e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6E88_0x1f6e88");
#endif

    switch (ctx->pc) {
        case 0x1f6ea0u: goto label_1f6ea0;
        default: break;
    }

    ctx->pc = 0x1f6e88u;

    // 0x1f6e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f6e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6e8c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f6e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f6e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6e94: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1f6e94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1f6e98: 0xc0808fe  jal         func_2023F8
    ctx->pc = 0x1F6E98u;
    SET_GPR_U32(ctx, 31, 0x1F6EA0u);
    ctx->pc = 0x1F6E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6E98u;
    // 0x1f6e9c: 0x24849c38  addiu       $a0, $a0, -0x63C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023F8u, 0x1F6E98u, 0x1F6EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6EA0u;
label_1f6ea0:
    // 0x1f6ea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EA4u;
        // 0x1f6ea8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6EACu;
    // 0x1f6eac: 0x0  nop
    ctx->pc = 0x1f6eacu;
    // NOP
    ctx->pc = 0x1f6eb0u;
}
