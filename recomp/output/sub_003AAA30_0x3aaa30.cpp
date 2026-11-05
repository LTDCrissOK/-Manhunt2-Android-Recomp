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

// Function: sub_003AAA30
// Address: 0x3aaa30 - 0x3aaa80
void sub_003AAA30_0x3aaa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AAA30_0x3aaa30");
#endif

    switch (ctx->pc) {
        case 0x3aaa60u: goto label_3aaa60;
        default: break;
    }

    ctx->pc = 0x3aaa30u;

    // 0x3aaa30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aaa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aaa34: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3aaa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3aaa38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aaa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3aaa3c: 0x2450d970  addiu       $s0, $v0, -0x2690
    ctx->pc = 0x3aaa3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957424));
    // 0x3aaa40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3aaa40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x41D970u));
    // 0x3aaa44: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AAA44u;
    {
        const bool branch_taken_0x3aaa44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA44u;
        // 0x3aaa48: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaa44) {
            ctx->pc = 0x3AAA64u;
            goto label_3aaa64;
        }
    }
    ctx->pc = 0x3AAA4Cu;
    // 0x3aaa4c: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3aaa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x3aaa50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3aaa50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aaa54: 0x2484d978  addiu       $a0, $a0, -0x2688
    ctx->pc = 0x3aaa54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957432));
    // 0x3aaa58: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3AAA58u;
    SET_GPR_U32(ctx, 31, 0x3AAA60u);
    ctx->pc = 0x3AAA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAA58u;
    // 0x3aaa5c: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3AAA58u, 0x3AAA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAA60u;
label_3aaa60:
    // 0x3aaa60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3aaa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3aaa64:
    // 0x3aaa64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3aaa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3aaa68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3aaa68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aaa6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3aaa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3aaa70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aaa70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aaa74: 0x3e00008  jr          $ra
    ctx->pc = 0x3AAA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AAA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA74u;
        // 0x3aaa78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AAA7Cu;
    // 0x3aaa7c: 0x0  nop
    ctx->pc = 0x3aaa7cu;
    // NOP
    ctx->pc = 0x3aaa80u;
}
