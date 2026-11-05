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

// Function: sub_00294A90
// Address: 0x294a90 - 0x294af0
void sub_00294A90_0x294a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294A90_0x294a90");
#endif

    switch (ctx->pc) {
        case 0x294aa8u: goto label_294aa8;
        case 0x294ad4u: goto label_294ad4;
        default: break;
    }

    ctx->pc = 0x294a90u;

    // 0x294a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x294a94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294a98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294a9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x294a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x294aa0: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x294AA0u;
    SET_GPR_U32(ctx, 31, 0x294AA8u);
    ctx->pc = 0x294AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294AA0u;
    // 0x294aa4: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x294AA0u, 0x294AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294AA8u;
label_294aa8:
    // 0x294aa8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x294aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x294aac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x294AACu;
    {
        const bool branch_taken_0x294aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x294AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294AACu;
        // 0x294ab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294aac) {
            ctx->pc = 0x294ABCu;
            goto label_294abc;
        }
    }
    ctx->pc = 0x294AB4u;
    // 0x294ab4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x294AB4u;
    {
        const bool branch_taken_0x294ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294AB4u;
        // 0x294ab8: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ab4) {
            ctx->pc = 0x294ADCu;
            goto label_294adc;
        }
    }
    ctx->pc = 0x294ABCu;
label_294abc:
    // 0x294abc: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x294ABCu;
    {
        const bool branch_taken_0x294abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x294abc) {
            ctx->pc = 0x294AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294ABCu;
            // 0x294ac0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294AE0u;
            goto label_294ae0;
        }
    }
    ctx->pc = 0x294AC4u;
    // 0x294ac4: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x294ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x294ac8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x294ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294acc: 0xc09f5e8  jal         func_27D7A0
    ctx->pc = 0x294ACCu;
    SET_GPR_U32(ctx, 31, 0x294AD4u);
    ctx->pc = 0x294AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294ACCu;
    // 0x294ad0: 0xc60c0040  lwc1        $f12, 0x40($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D7A0u, 0x294ACCu, 0x294AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294AD4u;
label_294ad4:
    // 0x294ad4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x294ad4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x294ad8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x294ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_294adc:
    // 0x294adc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_294ae0:
    // 0x294ae0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x294ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x294ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x294AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294AE4u;
        // 0x294ae8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294AECu;
    // 0x294aec: 0x0  nop
    ctx->pc = 0x294aecu;
    // NOP
    ctx->pc = 0x294af0u;
}
