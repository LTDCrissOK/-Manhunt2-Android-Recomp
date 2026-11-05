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

// Function: sub_003809B0
// Address: 0x3809b0 - 0x3809f8
void sub_003809B0_0x3809b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003809B0_0x3809b0");
#endif

    switch (ctx->pc) {
        case 0x3809d0u: goto label_3809d0;
        case 0x3809e8u: goto label_3809e8;
        default: break;
    }

    ctx->pc = 0x3809b0u;

    // 0x3809b0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3809b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3809b4: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x3809b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3809b8: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x3809b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x3809bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3809bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3809c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3809c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3809c4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3809c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3809c8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3809c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3809cc: 0x8c480018  lw          $t0, 0x18($v0)
    ctx->pc = 0x3809ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3809d0:
    // 0x3809d0: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x3809d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3809d4: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x3809d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x3809d8: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x3809d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x3809dc: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x3809dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x3809e0: 0xace80008  sw          $t0, 0x8($a3)
    ctx->pc = 0x3809e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
    // 0x3809e4: 0x3e00008  jr          $ra
label_3809e8:
    if (ctx->pc == 0x3809E8u) {
        ctx->pc = 0x3809E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3809E4u;
        // 0x3809e8: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3809ECu;
        goto label_fallthrough_0x3809e4;
    }
    ctx->pc = 0x3809E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3809E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3809E4u;
        // 0x3809e8: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3809E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3809e4:
    ctx->pc = 0x3809ECu;
    // 0x3809ec: 0x0  nop
    ctx->pc = 0x3809ecu;
    // NOP
    // 0x3809f0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3809f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3809f4: 0x0  nop
    ctx->pc = 0x3809f4u;
    // NOP
    ctx->pc = 0x3809f8u;
}
