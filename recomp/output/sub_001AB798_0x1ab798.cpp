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

// Function: sub_001AB798
// Address: 0x1ab798 - 0x1ab7f8
void sub_001AB798_0x1ab798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB798_0x1ab798");
#endif

    switch (ctx->pc) {
        case 0x1ab7d8u: goto label_1ab7d8;
        case 0x1ab7e8u: goto label_1ab7e8;
        default: break;
    }

    ctx->pc = 0x1ab798u;

    // 0x1ab798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab79c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab7a0: 0x8c8201e8  lw          $v0, 0x1E8($a0)
    ctx->pc = 0x1ab7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x1ab7a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1AB7A4u;
    {
        const bool branch_taken_0x1ab7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7A4u;
        // 0x1ab7a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab7a4) {
            ctx->pc = 0x1AB7E0u;
            goto label_1ab7e0;
        }
    }
    ctx->pc = 0x1AB7ACu;
    // 0x1ab7ac: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1ab7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab7b0: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x1ab7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x1ab7b4: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1ab7b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1ab7b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ab7b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ab7bc: 0x0  nop
    ctx->pc = 0x1ab7bcu;
    // NOP
    // 0x1ab7c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ab7c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab7c4: 0x0  nop
    ctx->pc = 0x1ab7c4u;
    // NOP
    // 0x1ab7c8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB7C8u;
    {
        const bool branch_taken_0x1ab7c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ab7c8) {
            ctx->pc = 0x1AB7E0u;
            goto label_1ab7e0;
        }
    }
    ctx->pc = 0x1AB7D0u;
    // 0x1ab7d0: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB7D0u;
    SET_GPR_U32(ctx, 31, 0x1AB7D8u);
    ctx->pc = 0x1AB7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB7D0u;
    // 0x1ab7d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB7D0u, 0x1AB7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB7D8u;
label_1ab7d8:
    // 0x1ab7d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB7D8u;
    {
        const bool branch_taken_0x1ab7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7D8u;
        // 0x1ab7dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab7d8) {
            ctx->pc = 0x1AB7ECu;
            goto label_1ab7ec;
        }
    }
    ctx->pc = 0x1AB7E0u;
label_1ab7e0:
    // 0x1ab7e0: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB7E0u;
    SET_GPR_U32(ctx, 31, 0x1AB7E8u);
    ctx->pc = 0x1AB7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB7E0u;
    // 0x1ab7e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB7E0u, 0x1AB7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB7E8u;
label_1ab7e8:
    // 0x1ab7e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab7ec:
    // 0x1ab7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7ECu;
        // 0x1ab7f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB7F4u;
    // 0x1ab7f4: 0x0  nop
    ctx->pc = 0x1ab7f4u;
    // NOP
    ctx->pc = 0x1ab7f8u;
}
