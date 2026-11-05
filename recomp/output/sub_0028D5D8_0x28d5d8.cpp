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

// Function: sub_0028D5D8
// Address: 0x28d5d8 - 0x28d670
void sub_0028D5D8_0x28d5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D5D8_0x28d5d8");
#endif

    switch (ctx->pc) {
        case 0x28d608u: goto label_28d608;
        default: break;
    }

    ctx->pc = 0x28d5d8u;

    // 0x28d5d8: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x28d5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x28d5dc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28d5e0: 0x24630f28  addiu       $v1, $v1, 0xF28
    ctx->pc = 0x28d5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3880));
    // 0x28d5e4: 0xc442a7c4  lwc1        $f2, -0x583C($v0)
    ctx->pc = 0x28d5e4u;
    { uint32_t bits = FAST_READ32(0x3FA7C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d5e8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x28d5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d5ec: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x28d5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x28d5f0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28d5f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28d5f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28d5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d5f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28d5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d5fc: 0x24080046  addiu       $t0, $zero, 0x46
    ctx->pc = 0x28d5fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x28d600: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x28d600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x28d604: 0x0  nop
    ctx->pc = 0x28d604u;
    // NOP
label_28d608:
    // 0x28d608: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28d608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28d60c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28D60Cu;
    {
        const bool branch_taken_0x28d60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D60Cu;
        // 0x28d610: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d60c) {
            ctx->pc = 0x28D654u;
            goto label_28d654;
        }
    }
    ctx->pc = 0x28D614u;
    // 0x28d614: 0xe4ac0100  swc1        $f12, 0x100($a1)
    ctx->pc = 0x28d614u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 256), bits); }
    // 0x28d618: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x28d618u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x28d61c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x28d61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d620: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x28d620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x28d624: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x28d624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d628: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x28d628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28d62c: 0xaca801c0  sw          $t0, 0x1C0($a1)
    ctx->pc = 0x28d62cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 448), GPR_U32(ctx, 8));
    // 0x28d630: 0xc4a00100  lwc1        $f0, 0x100($a1)
    ctx->pc = 0x28d630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d634: 0xe4ad00c0  swc1        $f13, 0xC0($a1)
    ctx->pc = 0x28d634u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 192), bits); }
    // 0x28d638: 0x0  nop
    ctx->pc = 0x28d638u;
    // NOP
    // 0x28d63c: 0x0  nop
    ctx->pc = 0x28d63cu;
    // NOP
    // 0x28d640: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x28d640u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x28d644: 0xaca00140  sw          $zero, 0x140($a1)
    ctx->pc = 0x28d644u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 320), GPR_U32(ctx, 0));
    // 0x28d648: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x28d648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x28d64c: 0x3e00008  jr          $ra
    ctx->pc = 0x28D64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D64Cu;
        // 0x28d650: 0xe4a00180  swc1        $f0, 0x180($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D654u;
label_28d654:
    // 0x28d654: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x28d654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x28d658: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x28d658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x28d65c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x28D65Cu;
    {
        const bool branch_taken_0x28d65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D65Cu;
        // 0x28d660: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d65c) {
            ctx->pc = 0x28D608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d608;
        }
    }
    ctx->pc = 0x28D664u;
    // 0x28d664: 0x3e00008  jr          $ra
    ctx->pc = 0x28D664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D66Cu;
    // 0x28d66c: 0x0  nop
    ctx->pc = 0x28d66cu;
    // NOP
    ctx->pc = 0x28d670u;
}
