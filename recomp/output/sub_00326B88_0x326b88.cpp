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

// Function: sub_00326B88
// Address: 0x326b88 - 0x326bb8
void sub_00326B88_0x326b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326B88_0x326b88");
#endif

    switch (ctx->pc) {
        case 0x326bacu: goto label_326bac;
        default: break;
    }

    ctx->pc = 0x326b88u;

    // 0x326b88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326b8c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x326b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326b90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326b94: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x326b94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x326b98: 0x24a56cd0  addiu       $a1, $a1, 0x6CD0
    ctx->pc = 0x326b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27856));
    // 0x326b9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x326b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326ba0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x326ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x326ba4: 0xc0c8a76  jal         func_3229D8
    ctx->pc = 0x326BA4u;
    SET_GPR_U32(ctx, 31, 0x326BACu);
    ctx->pc = 0x326BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326BA4u;
    // 0x326ba8: 0xa440000a  sh          $zero, 0xA($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3229D8u, 0x326BA4u, 0x326BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326BACu;
label_326bac:
    // 0x326bac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x326BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BB0u;
        // 0x326bb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326BB8u;
}
