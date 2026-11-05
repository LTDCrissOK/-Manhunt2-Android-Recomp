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

// Function: sub_00386390
// Address: 0x386390 - 0x3863b8
void sub_00386390_0x386390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386390_0x386390");
#endif

    switch (ctx->pc) {
        case 0x3863a4u: goto label_3863a4;
        default: break;
    }

    ctx->pc = 0x386390u;

    // 0x386390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x386390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x386394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x386394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x386398: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x386398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x38639c: 0xc0ef8c0  jal         func_3BE300
    ctx->pc = 0x38639Cu;
    SET_GPR_U32(ctx, 31, 0x3863A4u);
    ctx->pc = 0x3863A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38639Cu;
    // 0x3863a0: 0x24840068  addiu       $a0, $a0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE300u, 0x38639Cu, 0x3863A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3863A4u;
label_3863a4:
    // 0x3863a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3863a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3863a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3863a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3863ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3863ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3863B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3863ACu;
        // 0x3863b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3863ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3863B4u;
    // 0x3863b4: 0x0  nop
    ctx->pc = 0x3863b4u;
    // NOP
    ctx->pc = 0x3863b8u;
}
