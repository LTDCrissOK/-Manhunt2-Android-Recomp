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

// Function: sub_00268EB0
// Address: 0x268eb0 - 0x268ed8
void sub_00268EB0_0x268eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268EB0_0x268eb0");
#endif

    switch (ctx->pc) {
        case 0x268eccu: goto label_268ecc;
        default: break;
    }

    ctx->pc = 0x268eb0u;

    // 0x268eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x268eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x268eb4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x268eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x268eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x268ebc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x268ebcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ec0: 0x24422648  addiu       $v0, $v0, 0x2648
    ctx->pc = 0x268ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9800));
    // 0x268ec4: 0xc0836c2  jal         func_20DB08
    ctx->pc = 0x268EC4u;
    SET_GPR_U32(ctx, 31, 0x268ECCu);
    ctx->pc = 0x268EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268EC4u;
    // 0x268ec8: 0xac620218  sw          $v0, 0x218($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB08u, 0x268EC4u, 0x268ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268ECCu;
label_268ecc:
    // 0x268ecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x268ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268ED0u;
        // 0x268ed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268ED8u;
}
