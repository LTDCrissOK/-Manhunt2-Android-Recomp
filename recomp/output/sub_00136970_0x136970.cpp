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

// Function: sub_00136970
// Address: 0x136970 - 0x1369a0
void sub_00136970_0x136970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136970_0x136970");
#endif

    switch (ctx->pc) {
        case 0x136994u: goto label_136994;
        default: break;
    }

    ctx->pc = 0x136970u;

    // 0x136970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x136970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x136974: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x136974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x136978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13697c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13697cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x136980: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x136980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x136984: 0x8c840468  lw          $a0, 0x468($a0)
    ctx->pc = 0x136984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1128)));
    // 0x136988: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x136988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13698c: 0xc04f016  jal         func_13C058
    ctx->pc = 0x13698Cu;
    SET_GPR_U32(ctx, 31, 0x136994u);
    ctx->pc = 0x136990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13698Cu;
    // 0x136990: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C058u, 0x13698Cu, 0x136994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136994u;
label_136994:
    // 0x136994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x136994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136998: 0x3e00008  jr          $ra
    ctx->pc = 0x136998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136998u;
        // 0x13699c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1369A0u;
}
