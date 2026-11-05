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

// Function: sub_0036DEC0
// Address: 0x36dec0 - 0x36df98
void sub_0036DEC0_0x36dec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DEC0_0x36dec0");
#endif

    ctx->pc = 0x36dec0u;

    // 0x36dec0: 0x50a00020  beql        $a1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x36DEC0u;
    {
        const bool branch_taken_0x36dec0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x36dec0) {
            ctx->pc = 0x36DEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36DEC0u;
            // 0x36dec4: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36DF44u;
            goto label_36df44;
        }
    }
    ctx->pc = 0x36DEC8u;
    // 0x36dec8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x36dec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36decc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36deccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36ded0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x36ded0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x36ded4: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x36ded4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36ded8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x36ded8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36dedc: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x36dedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x36dee0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x36dee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36dee4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x36dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x36dee8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x36dee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x36deec: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x36deecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36def0: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x36def0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x36def4: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x36def4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36def8: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x36def8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x36defc: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x36defcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36df00: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x36df00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x36df04: 0xe4820018  swc1        $f2, 0x18($a0)
    ctx->pc = 0x36df04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x36df08: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x36df08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36df0c: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x36df0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x36df10: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x36df10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36df14: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x36df14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x36df18: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x36df18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36df1c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x36df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x36df20: 0xe4820028  swc1        $f2, 0x28($a0)
    ctx->pc = 0x36df20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x36df24: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x36df24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36df28: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x36df28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x36df2c: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x36df2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36df30: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x36df30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x36df34: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x36df34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36df38: 0xe483003c  swc1        $f3, 0x3C($a0)
    ctx->pc = 0x36df38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x36df3c: 0x3e00008  jr          $ra
    ctx->pc = 0x36DF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DF3Cu;
        // 0x36df40: 0xe4800038  swc1        $f0, 0x38($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DF44u;
label_36df44:
    // 0x36df44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36df44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36df48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36df48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36df4c: 0x0  nop
    ctx->pc = 0x36df4cu;
    // NOP
    // 0x36df50: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x36df50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x36df54: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x36df54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36df58: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x36df58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x36df5c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x36df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x36df60: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x36df60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x36df64: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x36df64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x36df68: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x36df68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x36df6c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x36df6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x36df70: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x36df70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x36df74: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x36df74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x36df78: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x36df78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x36df7c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x36df7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x36df80: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x36df80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x36df84: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x36df84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x36df88: 0x3e00008  jr          $ra
    ctx->pc = 0x36DF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DF88u;
        // 0x36df8c: 0xac800038  sw          $zero, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DF90u;
    // 0x36df90: 0x27bd02c0  addiu       $sp, $sp, 0x2C0
    ctx->pc = 0x36df90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x36df94: 0x0  nop
    ctx->pc = 0x36df94u;
    // NOP
    ctx->pc = 0x36df98u;
}
