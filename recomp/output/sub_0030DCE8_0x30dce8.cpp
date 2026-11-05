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

// Function: sub_0030DCE8
// Address: 0x30dce8 - 0x30dd38
void sub_0030DCE8_0x30dce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DCE8_0x30dce8");
#endif

    switch (ctx->pc) {
        case 0x30dd00u: goto label_30dd00;
        case 0x30dd08u: goto label_30dd08;
        default: break;
    }

    ctx->pc = 0x30dce8u;

    // 0x30dce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30dce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30dcec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30dcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30dcf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30dcf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dcf4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30dcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x30dcf8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30DCF8u;
    SET_GPR_U32(ctx, 31, 0x30DD00u);
    ctx->pc = 0x30DCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DCF8u;
    // 0x30dcfc: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30DCF8u, 0x30DD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DD00u;
label_30dd00:
    // 0x30dd00: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30DD00u;
    SET_GPR_U32(ctx, 31, 0x30DD08u);
    ctx->pc = 0x30DD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DD00u;
    // 0x30dd04: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30DD00u, 0x30DD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DD08u;
label_30dd08:
    // 0x30dd08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dd0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30dd0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dd10: 0xa2030009  sb          $v1, 0x9($s0)
    ctx->pc = 0x30dd10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x30dd14: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x30dd14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x30dd18: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x30dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x30dd1c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x30dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x30dd20: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x30dd20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x30dd24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30dd24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30dd28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30dd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30dd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x30DD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DD2Cu;
        // 0x30dd30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DD34u;
    // 0x30dd34: 0x0  nop
    ctx->pc = 0x30dd34u;
    // NOP
    ctx->pc = 0x30dd38u;
}
