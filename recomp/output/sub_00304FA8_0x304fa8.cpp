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

// Function: sub_00304FA8
// Address: 0x304fa8 - 0x304fd0
void sub_00304FA8_0x304fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304FA8_0x304fa8");
#endif

    switch (ctx->pc) {
        case 0x304fbcu: goto label_304fbc;
        case 0x304fc4u: goto label_304fc4;
        default: break;
    }

    ctx->pc = 0x304fa8u;

    // 0x304fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304fac: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304fb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x304fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304fb4: 0xc0c129e  jal         func_304A78
    ctx->pc = 0x304FB4u;
    SET_GPR_U32(ctx, 31, 0x304FBCu);
    ctx->pc = 0x304FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304FB4u;
    // 0x304fb8: 0x24846580  addiu       $a0, $a0, 0x6580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304A78u, 0x304FB4u, 0x304FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304FBCu;
label_304fbc:
    // 0x304fbc: 0xc0c13d0  jal         func_304F40
    ctx->pc = 0x304FBCu;
    SET_GPR_U32(ctx, 31, 0x304FC4u);
    ctx->pc = 0x304F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304F40u, 0x304FBCu, 0x304FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304FC4u;
label_304fc4:
    // 0x304fc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x304FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304FC8u;
        // 0x304fcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304FD0u;
}
