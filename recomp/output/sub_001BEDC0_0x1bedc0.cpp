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

// Function: sub_001BEDC0
// Address: 0x1bedc0 - 0x1bee38
void sub_001BEDC0_0x1bedc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEDC0_0x1bedc0");
#endif

    ctx->pc = 0x1bedc0u;

    // 0x1bedc0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1bedc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bedc4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1bedc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bedc8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1bedc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1bedcc: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1bedccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bedd0: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1bedd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1bedd4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1bedd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bedd8: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BEDD8u;
    {
        const bool branch_taken_0x1bedd8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1BEDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDD8u;
        // 0x1beddc: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bedd8) {
            ctx->pc = 0x1BEDF4u;
            goto label_1bedf4;
        }
    }
    ctx->pc = 0x1BEDE0u;
    // 0x1bede0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1bede0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bede4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BEDE4u;
    {
        const bool branch_taken_0x1bede4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDE4u;
        // 0x1bede8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bede4) {
            ctx->pc = 0x1BEDFCu;
            goto label_1bedfc;
        }
    }
    ctx->pc = 0x1BEDECu;
    // 0x1bedec: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BEDECu;
    {
        const bool branch_taken_0x1bedec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bedec) {
            ctx->pc = 0x1BEE14u;
            goto label_1bee14;
        }
    }
    ctx->pc = 0x1BEDF4u;
label_1bedf4:
    // 0x1bedf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEDFCu;
label_1bedfc:
    // 0x1bedfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bedfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bee00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bee00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bee04: 0x0  nop
    ctx->pc = 0x1bee04u;
    // NOP
    // 0x1bee08: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1bee08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1bee0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE0Cu;
        // 0x1bee10: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEE14u;
label_1bee14:
    // 0x1bee14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bee14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bee18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bee18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bee1c: 0x0  nop
    ctx->pc = 0x1bee1cu;
    // NOP
    // 0x1bee20: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x1bee20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1bee24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bee24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bee28: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1bee28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1bee2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEE34u;
    // 0x1bee34: 0x0  nop
    ctx->pc = 0x1bee34u;
    // NOP
    ctx->pc = 0x1bee38u;
}
