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

// Function: sub_00135948
// Address: 0x135948 - 0x135978
void sub_00135948_0x135948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135948_0x135948");
#endif

    switch (ctx->pc) {
        case 0x135958u: goto label_135958;
        default: break;
    }

    ctx->pc = 0x135948u;

    // 0x135948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13594c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13594cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x135950: 0xc04d682  jal         func_135A08
    ctx->pc = 0x135950u;
    SET_GPR_U32(ctx, 31, 0x135958u);
    ctx->pc = 0x135A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135A08u, 0x135950u, 0x135958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135958u;
label_135958:
    // 0x135958: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x135958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x13595c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x13595cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x135960: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x135960u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x135964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135968: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x135968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13596c: 0x3e00008  jr          $ra
    ctx->pc = 0x13596Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13596Cu;
        // 0x135970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13596Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135974u;
    // 0x135974: 0x0  nop
    ctx->pc = 0x135974u;
    // NOP
    ctx->pc = 0x135978u;
}
