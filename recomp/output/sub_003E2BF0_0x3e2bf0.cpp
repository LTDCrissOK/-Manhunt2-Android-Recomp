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

// Function: sub_003E2BF0
// Address: 0x3e2bf0 - 0x3e2ce0
void sub_003E2BF0_0x3e2bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2BF0_0x3e2bf0");
#endif

    switch (ctx->pc) {
        case 0x3e2cd0u: goto label_3e2cd0;
        default: break;
    }

    ctx->pc = 0x3e2bf0u;

    // 0x3e2bf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3e2bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3e2bf4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3e2bf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2bf8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e2bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e2bfc: 0x27a80008  addiu       $t0, $sp, 0x8
    ctx->pc = 0x3e2bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x3e2c00: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e2c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e2c04: 0x252affec  addiu       $t2, $t1, -0x14
    ctx->pc = 0x3e2c04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967276));
    // 0x3e2c08: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e2c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e2c0c: 0x252cfff4  addiu       $t4, $t1, -0xC
    ctx->pc = 0x3e2c0cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967284));
    // 0x3e2c10: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3e2c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3e2c14: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3e2c14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2c18: 0x27ad0028  addiu       $t5, $sp, 0x28
    ctx->pc = 0x3e2c18u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x3e2c1c: 0x27ab0020  addiu       $t3, $sp, 0x20
    ctx->pc = 0x3e2c1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3e2c20: 0xc520ffec  lwc1        $f0, -0x14($t1)
    ctx->pc = 0x3e2c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2c24: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x3e2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x3e2c28: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x3e2c28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x3e2c2c: 0x1433023  subu        $a2, $t2, $v1
    ctx->pc = 0x3e2c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x3e2c30: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3e2c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2c34: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3e2c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3e2c38: 0xc520fff4  lwc1        $f0, -0xC($t1)
    ctx->pc = 0x3e2c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2c3c: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x3e2c3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3e2c40: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x3e2c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2c44: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3e2c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e2c48: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x3e2c48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2c4c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3e2c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e2c50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e2c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2c54: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x3e2c54u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x3e2c58: 0xc5800004  lwc1        $f0, 0x4($t4)
    ctx->pc = 0x3e2c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2c5c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3e2c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e2c60: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x3e2c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x3e2c64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e2c64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2c68: 0xc5410010  lwc1        $f1, 0x10($t2)
    ctx->pc = 0x3e2c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2c6c: 0xe522ffec  swc1        $f2, -0x14($t1)
    ctx->pc = 0x3e2c6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294967276), bits); }
    // 0x3e2c70: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3e2c70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3e2c74: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3e2c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2c78: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x3e2c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x3e2c7c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3e2c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2c80: 0xe521fff4  swc1        $f1, -0xC($t1)
    ctx->pc = 0x3e2c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294967284), bits); }
    // 0x3e2c84: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3e2c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2c88: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x3e2c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x3e2c8c: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x3e2c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2c90: 0xe5410010  swc1        $f1, 0x10($t2)
    ctx->pc = 0x3e2c90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x3e2c94: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3e2c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x3e2c98: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3e2c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x3e2c9c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x3e2c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x3e2ca0: 0xada00004  sw          $zero, 0x4($t5)
    ctx->pc = 0x3e2ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 0));
    // 0x3e2ca4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3e2ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2ca8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3e2ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2cac: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3e2cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3e2cb0: 0xe5610004  swc1        $f1, 0x4($t3)
    ctx->pc = 0x3e2cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x3e2cb4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3e2cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2cb8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3e2cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3e2cbc: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x3e2cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2cc0: 0xe5a10004  swc1        $f1, 0x4($t5)
    ctx->pc = 0x3e2cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x3e2cc4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3e2cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2cc8: 0xc0f8a44  jal         func_3E2910
    ctx->pc = 0x3E2CC8u;
    SET_GPR_U32(ctx, 31, 0x3E2CD0u);
    ctx->pc = 0x3E2CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2CC8u;
    // 0x3e2ccc: 0xe5600010  swc1        $f0, 0x10($t3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2910u, 0x3E2CC8u, 0x3E2CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2CD0u;
label_3e2cd0:
    // 0x3e2cd0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3e2cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e2cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2CD4u;
        // 0x3e2cd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2CDCu;
    // 0x3e2cdc: 0x0  nop
    ctx->pc = 0x3e2cdcu;
    // NOP
    ctx->pc = 0x3e2ce0u;
}
