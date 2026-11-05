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

// Function: sub_00312588
// Address: 0x312588 - 0x3125c0
void sub_00312588_0x312588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312588_0x312588");
#endif

    switch (ctx->pc) {
        case 0x3125acu: goto label_3125ac;
        default: break;
    }

    ctx->pc = 0x312588u;

    // 0x312588: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x312588u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31258c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31258cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x312590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x312594: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x312594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312598: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x312598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x31259c: 0x24a52588  addiu       $a1, $a1, 0x2588
    ctx->pc = 0x31259cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9608));
    // 0x3125a0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3125a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3125a4: 0xc0c4898  jal         func_312260
    ctx->pc = 0x3125A4u;
    SET_GPR_U32(ctx, 31, 0x3125ACu);
    ctx->pc = 0x3125A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3125A4u;
    // 0x3125a8: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312260u, 0x3125A4u, 0x3125ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3125ACu;
label_3125ac:
    // 0x3125ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3125acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3125b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3125b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3125b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3125B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3125B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125B4u;
        // 0x3125b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3125B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3125BCu;
    // 0x3125bc: 0x0  nop
    ctx->pc = 0x3125bcu;
    // NOP
    ctx->pc = 0x3125c0u;
}
