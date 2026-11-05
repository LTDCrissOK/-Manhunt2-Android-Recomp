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

// Function: sub_002BEA38
// Address: 0x2bea38 - 0x2beaa8
void sub_002BEA38_0x2bea38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEA38_0x2bea38");
#endif

    switch (ctx->pc) {
        case 0x2bea54u: goto label_2bea54;
        default: break;
    }

    ctx->pc = 0x2bea38u;

    // 0x2bea38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bea38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bea3c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2bea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2bea40: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2bea40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2bea44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bea44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bea48: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2bea48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2bea4c: 0xc0b0370  jal         func_2C0DC0
    ctx->pc = 0x2BEA4Cu;
    SET_GPR_U32(ctx, 31, 0x2BEA54u);
    ctx->pc = 0x2BEA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEA4Cu;
    // 0x2bea50: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DC0u, 0x2BEA4Cu, 0x2BEA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEA54u;
label_2bea54:
    // 0x2bea54: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x2bea54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bea58: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2bea58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bea5c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bea5cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bea60: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x2bea60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bea64: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bea64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bea68: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2bea68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bea6c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2bea6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bea70: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x2bea70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bea74: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x2bea74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bea78: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x2bea78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2bea7c: 0xe6060004  swc1        $f6, 0x4($s0)
    ctx->pc = 0x2bea7cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2bea80: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x2bea80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2bea84: 0xe6030020  swc1        $f3, 0x20($s0)
    ctx->pc = 0x2bea84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2bea88: 0xe6040014  swc1        $f4, 0x14($s0)
    ctx->pc = 0x2bea88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2bea8c: 0xe6050024  swc1        $f5, 0x24($s0)
    ctx->pc = 0x2bea8cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2bea90: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x2bea90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2bea94: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2bea94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bea98: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2bea98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2bea9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA9Cu;
        // 0x2beaa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEAA4u;
    // 0x2beaa4: 0x0  nop
    ctx->pc = 0x2beaa4u;
    // NOP
    ctx->pc = 0x2beaa8u;
}
