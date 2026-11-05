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

// Function: sub_0014B588
// Address: 0x14b588 - 0x14b5c0
void sub_0014B588_0x14b588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B588_0x14b588");
#endif

    switch (ctx->pc) {
        case 0x14b5b0u: goto label_14b5b0;
        default: break;
    }

    ctx->pc = 0x14b588u;

    // 0x14b588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b58c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14b58cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14b590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b594: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14b594u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14b598: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x14b598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x14b59c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x14b59cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14b5a0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14b5a4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x14b5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14b5a8: 0xc04dbd4  jal         func_136F50
    ctx->pc = 0x14B5A8u;
    SET_GPR_U32(ctx, 31, 0x14B5B0u);
    ctx->pc = 0x14B5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B5A8u;
    // 0x14b5ac: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F50u, 0x14B5A8u, 0x14B5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B5B0u;
label_14b5b0:
    // 0x14b5b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x14B5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B5B4u;
        // 0x14b5b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B5BCu;
    // 0x14b5bc: 0x0  nop
    ctx->pc = 0x14b5bcu;
    // NOP
    ctx->pc = 0x14b5c0u;
}
