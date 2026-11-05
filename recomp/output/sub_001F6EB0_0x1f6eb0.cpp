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

// Function: sub_001F6EB0
// Address: 0x1f6eb0 - 0x1f6ed8
void sub_001F6EB0_0x1f6eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6EB0_0x1f6eb0");
#endif

    switch (ctx->pc) {
        case 0x1f6ec8u: goto label_1f6ec8;
        default: break;
    }

    ctx->pc = 0x1f6eb0u;

    // 0x1f6eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f6eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6eb4: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f6eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f6eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6ebc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1f6ebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1f6ec0: 0xc080900  jal         func_202400
    ctx->pc = 0x1F6EC0u;
    SET_GPR_U32(ctx, 31, 0x1F6EC8u);
    ctx->pc = 0x1F6EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6EC0u;
    // 0x1f6ec4: 0x24849c38  addiu       $a0, $a0, -0x63C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202400u, 0x1F6EC0u, 0x1F6EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6EC8u;
label_1f6ec8:
    // 0x1f6ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6ECCu;
        // 0x1f6ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6ED4u;
    // 0x1f6ed4: 0x0  nop
    ctx->pc = 0x1f6ed4u;
    // NOP
    ctx->pc = 0x1f6ed8u;
}
