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

// Function: sub_00217988
// Address: 0x217988 - 0x2179b8
void sub_00217988_0x217988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217988_0x217988");
#endif

    switch (ctx->pc) {
        case 0x2179a8u: goto label_2179a8;
        default: break;
    }

    ctx->pc = 0x217988u;

    // 0x217988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21798c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x21798cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x217990: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x217990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217994: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x217994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x217998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x217998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21799c: 0x24a57970  addiu       $a1, $a1, 0x7970
    ctx->pc = 0x21799cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31088));
    // 0x2179a0: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x2179A0u;
    SET_GPR_U32(ctx, 31, 0x2179A8u);
    ctx->pc = 0x2179A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2179A0u;
    // 0x2179a4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x2179A0u, 0x2179A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2179A8u;
label_2179a8:
    // 0x2179a8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2179a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2179ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2179acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2179b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2179B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2179B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2179B0u;
        // 0x2179b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2179B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2179B8u;
}
