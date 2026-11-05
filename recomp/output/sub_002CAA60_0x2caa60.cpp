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

// Function: sub_002CAA60
// Address: 0x2caa60 - 0x2caaa8
void sub_002CAA60_0x2caa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAA60_0x2caa60");
#endif

    switch (ctx->pc) {
        case 0x2caa74u: goto label_2caa74;
        default: break;
    }

    ctx->pc = 0x2caa60u;

    // 0x2caa60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2caa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2caa64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2caa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2caa68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2caa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2caa6c: 0xc0b2a8e  jal         func_2CAA38
    ctx->pc = 0x2CAA6Cu;
    SET_GPR_U32(ctx, 31, 0x2CAA74u);
    ctx->pc = 0x2CAA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAA6Cu;
    // 0x2caa70: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAA38u, 0x2CAA6Cu, 0x2CAA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAA74u;
label_2caa74:
    // 0x2caa74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2caa74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caa78: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA78u;
        // 0x2caa7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAA80u;
    // 0x2caa80: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2caa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2caa84: 0x0  nop
    ctx->pc = 0x2caa84u;
    // NOP
    // 0x2caa88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2caa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2caa8c: 0x0  nop
    ctx->pc = 0x2caa8cu;
    // NOP
    // 0x2caa90: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2caa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2caa94: 0x0  nop
    ctx->pc = 0x2caa94u;
    // NOP
    // 0x2caa98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2caa98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2caa9c: 0x0  nop
    ctx->pc = 0x2caa9cu;
    // NOP
    // 0x2caaa0: 0xa0800010  sb          $zero, 0x10($a0)
    ctx->pc = 0x2caaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x2caaa4: 0x0  nop
    ctx->pc = 0x2caaa4u;
    // NOP
    ctx->pc = 0x2caaa8u;
}
