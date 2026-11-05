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

// Function: sub_0010FB40
// Address: 0x10fb40 - 0x10fb80
void sub_0010FB40_0x10fb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FB40_0x10fb40");
#endif

    switch (ctx->pc) {
        case 0x10fb50u: goto label_10fb50;
        default: break;
    }

    ctx->pc = 0x10fb40u;

    // 0x10fb40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10fb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10fb44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10fb48: 0xc043a7c  jal         func_10E9F0
    ctx->pc = 0x10FB48u;
    SET_GPR_U32(ctx, 31, 0x10FB50u);
    ctx->pc = 0x10E9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E9F0u, 0x10FB48u, 0x10FB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB50u;
label_10fb50:
    // 0x10fb50: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x10fb50u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x10fb54: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x10fb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x10fb58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10fb58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10fb5c: 0x0  nop
    ctx->pc = 0x10fb5cu;
    // NOP
    // 0x10fb60: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x10fb60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10fb64: 0x0  nop
    ctx->pc = 0x10fb64u;
    // NOP
    // 0x10fb68: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x10FB68u;
    {
        const bool branch_taken_0x10fb68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB68u;
        // 0x10fb6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb68) {
            ctx->pc = 0x10FB74u;
            goto label_10fb74;
        }
    }
    ctx->pc = 0x10FB70u;
    // 0x10fb70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10fb70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10fb74:
    // 0x10fb74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fb78: 0x3e00008  jr          $ra
    ctx->pc = 0x10FB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB78u;
        // 0x10fb7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FB80u;
}
