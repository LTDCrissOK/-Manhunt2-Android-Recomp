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

// Function: sub_001CDA10
// Address: 0x1cda10 - 0x1cdaa0
void sub_001CDA10_0x1cda10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDA10_0x1cda10");
#endif

    switch (ctx->pc) {
        case 0x1cda54u: goto label_1cda54;
        case 0x1cda84u: goto label_1cda84;
        default: break;
    }

    ctx->pc = 0x1cda10u;

    // 0x1cda10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cda10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cda14: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1cda14u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1cda18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cda18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cda1c: 0x46007032  c.eq.s      $f14, $f0
    ctx->pc = 0x1cda1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cda20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cda20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cda24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cda24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cda28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cda28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cda2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cda2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cda30: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1CDA30u;
    {
        const bool branch_taken_0x1cda30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA30u;
        // 0x1cda34: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda30) {
            ctx->pc = 0x1CDA3Cu;
            goto label_1cda3c;
        }
    }
    ctx->pc = 0x1CDA38u;
    // 0x1cda38: 0xc62e8a60  lwc1        $f14, -0x75A0($s1)
    ctx->pc = 0x1cda38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1cda3c:
    // 0x1cda3c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cda3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cda40: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1cda40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1cda44: 0xc44c8a6c  lwc1        $f12, -0x7594($v0)
    ctx->pc = 0x1cda44u;
    { uint32_t bits = FAST_READ32(0x3F8A6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cda48: 0xc46d8a70  lwc1        $f13, -0x7590($v1)
    ctx->pc = 0x1cda48u;
    { uint32_t bits = FAST_READ32(0x3F8A70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cda4c: 0xc076e86  jal         func_1DBA18
    ctx->pc = 0x1CDA4Cu;
    SET_GPR_U32(ctx, 31, 0x1CDA54u);
    ctx->pc = 0x1CDA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDA4Cu;
    // 0x1cda50: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBA18u, 0x1CDA4Cu, 0x1CDA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDA54u;
label_1cda54:
    // 0x1cda54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cda54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cda58: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1cda58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1cda5c: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x1cda5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x1cda60: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1cda60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1cda64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cda64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cda68: 0xc6208a60  lwc1        $f0, -0x75A0($s1)
    ctx->pc = 0x1cda68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cda6c: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1cda6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1cda70: 0xc4618a64  lwc1        $f1, -0x759C($v1)
    ctx->pc = 0x1cda70u;
    { uint32_t bits = FAST_READ32(0x3F8A64u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cda74: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x1cda74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x1cda78: 0xc4a08a68  lwc1        $f0, -0x7598($a1)
    ctx->pc = 0x1cda78u;
    { uint32_t bits = FAST_READ32(0x3F8A68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cda7c: 0xc073512  jal         func_1CD448
    ctx->pc = 0x1CDA7Cu;
    SET_GPR_U32(ctx, 31, 0x1CDA84u);
    ctx->pc = 0x1CDA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDA7Cu;
    // 0x1cda80: 0xe600007c  swc1        $f0, 0x7C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD448u, 0x1CDA7Cu, 0x1CDA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDA84u;
label_1cda84:
    // 0x1cda84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cda84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cda88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cda88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cda8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cda8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cda90: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA90u;
        // 0x1cda94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDA98u;
    // 0x1cda98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1cda98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cda9c: 0x0  nop
    ctx->pc = 0x1cda9cu;
    // NOP
    ctx->pc = 0x1cdaa0u;
}
