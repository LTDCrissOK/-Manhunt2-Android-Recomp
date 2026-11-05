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

// Function: sub_00135F88
// Address: 0x135f88 - 0x135fa8
void sub_00135F88_0x135f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135F88_0x135f88");
#endif

    switch (ctx->pc) {
        case 0x135f98u: goto label_135f98;
        default: break;
    }

    ctx->pc = 0x135f88u;

    // 0x135f88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x135f8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x135f90: 0xc04f72c  jal         func_13DCB0
    ctx->pc = 0x135F90u;
    SET_GPR_U32(ctx, 31, 0x135F98u);
    ctx->pc = 0x135F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135F90u;
    // 0x135f94: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DCB0u, 0x135F90u, 0x135F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135F98u;
label_135f98:
    // 0x135f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x135F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F9Cu;
        // 0x135fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135FA4u;
    // 0x135fa4: 0x0  nop
    ctx->pc = 0x135fa4u;
    // NOP
    ctx->pc = 0x135fa8u;
}
