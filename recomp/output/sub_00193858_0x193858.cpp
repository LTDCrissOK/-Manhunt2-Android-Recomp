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

// Function: sub_00193858
// Address: 0x193858 - 0x1938b0
void sub_00193858_0x193858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193858_0x193858");
#endif

    switch (ctx->pc) {
        case 0x193884u: goto label_193884;
        default: break;
    }

    ctx->pc = 0x193858u;

    // 0x193858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19385c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19385cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193864: 0x8c820ff8  lw          $v0, 0xFF8($a0)
    ctx->pc = 0x193864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x193868: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x193868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19386c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x19386cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193870: 0x0  nop
    ctx->pc = 0x193870u;
    // NOP
    // 0x193874: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x193874u;
    {
        const bool branch_taken_0x193874 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x193878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193874u;
        // 0x193878: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193874) {
            ctx->pc = 0x19388Cu;
            goto label_19388c;
        }
    }
    ctx->pc = 0x19387Cu;
    // 0x19387c: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x19387Cu;
    SET_GPR_U32(ctx, 31, 0x193884u);
    ctx->pc = 0x193880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19387Cu;
    // 0x193880: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x19387Cu, 0x193884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193884u;
label_193884:
    // 0x193884: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x193884u;
    {
        const bool branch_taken_0x193884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193884u;
        // 0x193888: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193884) {
            ctx->pc = 0x1938A4u;
            goto label_1938a4;
        }
    }
    ctx->pc = 0x19388Cu;
label_19388c:
    // 0x19388c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19388cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193890: 0x0  nop
    ctx->pc = 0x193890u;
    // NOP
    // 0x193894: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x193894u;
    {
        const bool branch_taken_0x193894 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x193898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193894u;
        // 0x193898: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193894) {
            ctx->pc = 0x1938A0u;
            goto label_1938a0;
        }
    }
    ctx->pc = 0x19389Cu;
    // 0x19389c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19389cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1938a0:
    // 0x1938a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1938a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1938a4:
    // 0x1938a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1938A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1938A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1938A4u;
        // 0x1938a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1938A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1938ACu;
    // 0x1938ac: 0x0  nop
    ctx->pc = 0x1938acu;
    // NOP
    ctx->pc = 0x1938b0u;
}
