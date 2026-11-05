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

// Function: sub_0021FBA8
// Address: 0x21fba8 - 0x21fbd8
void sub_0021FBA8_0x21fba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FBA8_0x21fba8");
#endif

    switch (ctx->pc) {
        case 0x21fbbcu: goto label_21fbbc;
        default: break;
    }

    ctx->pc = 0x21fba8u;

    // 0x21fba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21fba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21fbac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21fbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21fbb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21fbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21fbb4: 0xc08752a  jal         func_21D4A8
    ctx->pc = 0x21FBB4u;
    SET_GPR_U32(ctx, 31, 0x21FBBCu);
    ctx->pc = 0x21FBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FBB4u;
    // 0x21fbb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D4A8u, 0x21FBB4u, 0x21FBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FBBCu;
label_21fbbc:
    // 0x21fbbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fbc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21fbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21fbc4: 0xae0213f8  sw          $v0, 0x13F8($s0)
    ctx->pc = 0x21fbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5112), GPR_U32(ctx, 2));
    // 0x21fbc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21fbc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x21FBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FBCCu;
        // 0x21fbd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FBD4u;
    // 0x21fbd4: 0x0  nop
    ctx->pc = 0x21fbd4u;
    // NOP
    ctx->pc = 0x21fbd8u;
}
