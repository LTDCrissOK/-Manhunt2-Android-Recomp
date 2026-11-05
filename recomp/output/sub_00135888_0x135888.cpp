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

// Function: sub_00135888
// Address: 0x135888 - 0x1358b8
void sub_00135888_0x135888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135888_0x135888");
#endif

    switch (ctx->pc) {
        case 0x135898u: goto label_135898;
        default: break;
    }

    ctx->pc = 0x135888u;

    // 0x135888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13588c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13588cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x135890: 0xc04d682  jal         func_135A08
    ctx->pc = 0x135890u;
    SET_GPR_U32(ctx, 31, 0x135898u);
    ctx->pc = 0x135A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135A08u, 0x135890u, 0x135898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135898u;
label_135898:
    // 0x135898: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x135898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x13589c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x13589cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1358a0: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1358a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1358a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1358a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1358a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1358a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1358ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1358ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1358B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1358ACu;
        // 0x1358b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1358ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1358B4u;
    // 0x1358b4: 0x0  nop
    ctx->pc = 0x1358b4u;
    // NOP
    ctx->pc = 0x1358b8u;
}
