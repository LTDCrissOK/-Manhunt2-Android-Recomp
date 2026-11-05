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

// Function: sub_00192888
// Address: 0x192888 - 0x192918
void sub_00192888_0x192888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192888_0x192888");
#endif

    switch (ctx->pc) {
        case 0x19289cu: goto label_19289c;
        case 0x1928c0u: goto label_1928c0;
        default: break;
    }

    ctx->pc = 0x192888u;

    // 0x192888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x192888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19288c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19288cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x192890: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x192890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x192894: 0xc061a12  jal         func_186848
    ctx->pc = 0x192894u;
    SET_GPR_U32(ctx, 31, 0x19289Cu);
    ctx->pc = 0x192898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192894u;
    // 0x192898: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x192894u, 0x19289Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19289Cu;
label_19289c:
    // 0x19289c: 0x244500d0  addiu       $a1, $v0, 0xD0
    ctx->pc = 0x19289cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1928a0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1928a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1928a4: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1928a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1928a8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1928A8u;
    {
        const bool branch_taken_0x1928a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1928a8) {
            ctx->pc = 0x1928ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1928A8u;
            // 0x1928ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1928B4u;
            goto label_1928b4;
        }
    }
    ctx->pc = 0x1928B0u;
    // 0x1928b0: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x1928b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1928b4:
    // 0x1928b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1928b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1928b8: 0xc094e44  jal         func_253910
    ctx->pc = 0x1928B8u;
    SET_GPR_U32(ctx, 31, 0x1928C0u);
    ctx->pc = 0x1928BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1928B8u;
    // 0x1928bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253910u, 0x1928B8u, 0x1928C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1928C0u;
label_1928c0:
    // 0x1928c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1928c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1928c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1928c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1928c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1928C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1928CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928C8u;
        // 0x1928cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1928C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1928D0u;
    // 0x1928d0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1928d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1928d4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1928d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1928d8: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1928D8u;
    {
        const bool branch_taken_0x1928d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1928DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928D8u;
        // 0x1928dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928d8) {
            ctx->pc = 0x19290Cu;
            goto label_19290c;
        }
    }
    ctx->pc = 0x1928E0u;
    // 0x1928e0: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x1928e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1928e4: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x1928e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x1928e8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1928E8u;
    {
        const bool branch_taken_0x1928e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1928ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928E8u;
        // 0x1928ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928e8) {
            ctx->pc = 0x19290Cu;
            goto label_19290c;
        }
    }
    ctx->pc = 0x1928F0u;
    // 0x1928f0: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x1928f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1928f4: 0xc4a00098  lwc1        $f0, 0x98($a1)
    ctx->pc = 0x1928f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1928f8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1928f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1928fc: 0x0  nop
    ctx->pc = 0x1928fcu;
    // NOP
    // 0x192900: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x192900u;
    {
        const bool branch_taken_0x192900 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x192904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192900u;
        // 0x192904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192900) {
            ctx->pc = 0x19290Cu;
            goto label_19290c;
        }
    }
    ctx->pc = 0x192908u;
    // 0x192908: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19290c:
    // 0x19290c: 0x3e00008  jr          $ra
    ctx->pc = 0x19290Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19290Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192914u;
    // 0x192914: 0x0  nop
    ctx->pc = 0x192914u;
    // NOP
    ctx->pc = 0x192918u;
}
