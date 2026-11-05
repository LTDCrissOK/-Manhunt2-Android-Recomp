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

// Function: sub_001072E0
// Address: 0x1072e0 - 0x107318
void sub_001072E0_0x1072e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001072E0_0x1072e0");
#endif

    switch (ctx->pc) {
        case 0x1072f4u: goto label_1072f4;
        default: break;
    }

    ctx->pc = 0x1072e0u;

    // 0x1072e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1072e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1072e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1072e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1072e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1072e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1072ec: 0xc0ab41a  jal         func_2AD068
    ctx->pc = 0x1072ECu;
    SET_GPR_U32(ctx, 31, 0x1072F4u);
    ctx->pc = 0x1072F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1072ECu;
    // 0x1072f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD068u, 0x1072ECu, 0x1072F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072F4u;
label_1072f4:
    // 0x1072f4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1072f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1072f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1072f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1072fc: 0x246302f8  addiu       $v1, $v1, 0x2F8
    ctx->pc = 0x1072fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 760));
    // 0x107300: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x107300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x107304: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x107304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x107308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10730c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10730cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x107310: 0x3e00008  jr          $ra
    ctx->pc = 0x107310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107310u;
        // 0x107314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107318u;
}
