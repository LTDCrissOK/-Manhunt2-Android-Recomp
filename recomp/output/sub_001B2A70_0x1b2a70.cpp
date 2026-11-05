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

// Function: sub_001B2A70
// Address: 0x1b2a70 - 0x1b2ac8
void sub_001B2A70_0x1b2a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2A70_0x1b2a70");
#endif

    switch (ctx->pc) {
        case 0x1b2a8cu: goto label_1b2a8c;
        default: break;
    }

    ctx->pc = 0x1b2a70u;

    // 0x1b2a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2a74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b2a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2a78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2a7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b2a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b2a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b2a84: 0xc06c6c8  jal         func_1B1B20
    ctx->pc = 0x1B2A84u;
    SET_GPR_U32(ctx, 31, 0x1B2A8Cu);
    ctx->pc = 0x1B2A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A84u;
    // 0x1b2a88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1B20u, 0x1B2A84u, 0x1B2A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A8Cu;
label_1b2a8c:
    // 0x1b2a8c: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x1b2a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1b2a90: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x1b2a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x1b2a94: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1b2a94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1b2a98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2a9c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1b2a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2aa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2aa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2aa4: 0x0  nop
    ctx->pc = 0x1b2aa4u;
    // NOP
    // 0x1b2aa8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2AA8u;
    {
        const bool branch_taken_0x1b2aa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2AA8u;
        // 0x1b2aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2aa8) {
            ctx->pc = 0x1B2AB4u;
            goto label_1b2ab4;
        }
    }
    ctx->pc = 0x1B2AB0u;
    // 0x1b2ab0: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x1b2ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
label_1b2ab4:
    // 0x1b2ab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2ab8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b2ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2abc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2ABCu;
        // 0x1b2ac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2AC4u;
    // 0x1b2ac4: 0x0  nop
    ctx->pc = 0x1b2ac4u;
    // NOP
    ctx->pc = 0x1b2ac8u;
}
