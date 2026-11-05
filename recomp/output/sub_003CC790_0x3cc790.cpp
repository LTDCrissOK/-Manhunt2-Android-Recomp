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

// Function: sub_003CC790
// Address: 0x3cc790 - 0x3cc7d0
void sub_003CC790_0x3cc790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC790_0x3cc790");
#endif

    switch (ctx->pc) {
        case 0x3cc7c0u: goto label_3cc7c0;
        default: break;
    }

    ctx->pc = 0x3cc790u;

    // 0x3cc790: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3cc790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc794: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3cc794u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc798: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x3cc798u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc79c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3cc79cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3cc7a0: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x3cc7a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc7a4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3cc7a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc7a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3cc7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3cc7ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3cc7acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc7b0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3cc7b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc7b4: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x3cc7b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc7b8: 0xc0f3186  jal         func_3CC618
    ctx->pc = 0x3CC7B8u;
    SET_GPR_U32(ctx, 31, 0x3CC7C0u);
    ctx->pc = 0x3CC7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC7B8u;
    // 0x3cc7bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC618u, 0x3CC7B8u, 0x3CC7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC7C0u;
label_3cc7c0:
    // 0x3cc7c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3cc7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cc7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3CC7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC7C4u;
        // 0x3cc7c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CC7CCu;
    // 0x3cc7cc: 0x0  nop
    ctx->pc = 0x3cc7ccu;
    // NOP
    ctx->pc = 0x3cc7d0u;
}
