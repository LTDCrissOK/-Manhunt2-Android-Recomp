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

// Function: sub_003CC0F8
// Address: 0x3cc0f8 - 0x3cc140
void sub_003CC0F8_0x3cc0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC0F8_0x3cc0f8");
#endif

    switch (ctx->pc) {
        case 0x3cc134u: goto label_3cc134;
        default: break;
    }

    ctx->pc = 0x3cc0f8u;

    // 0x3cc0f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3cc0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3cc0fc: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x3cc0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x3cc100: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3cc100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3cc104: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3cc104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc108: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x3cc108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x3cc10c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3cc10cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc110: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3cc110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3cc114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cc114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3cc118: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x3cc118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x3cc11c: 0x2484c000  addiu       $a0, $a0, -0x4000
    ctx->pc = 0x3cc11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950912));
    // 0x3cc120: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x3cc120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x3cc124: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3cc124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc128: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x3cc128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    // 0x3cc12c: 0xc0f2cba  jal         func_3CB2E8
    ctx->pc = 0x3CC12Cu;
    SET_GPR_U32(ctx, 31, 0x3CC134u);
    ctx->pc = 0x3CC130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC12Cu;
    // 0x3cc130: 0x27a80068  addiu       $t0, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CB2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CB2E8u, 0x3CC12Cu, 0x3CC134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC134u;
label_3cc134:
    // 0x3cc134: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cc134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cc138: 0x3e00008  jr          $ra
    ctx->pc = 0x3CC138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC138u;
        // 0x3cc13c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CC140u;
}
