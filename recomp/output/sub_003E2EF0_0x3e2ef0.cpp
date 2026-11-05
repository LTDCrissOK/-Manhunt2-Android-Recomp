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

// Function: sub_003E2EF0
// Address: 0x3e2ef0 - 0x3e3000
void sub_003E2EF0_0x3e2ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2EF0_0x3e2ef0");
#endif

    switch (ctx->pc) {
        case 0x3e2ef8u: goto label_3e2ef8;
        case 0x3e2f00u: goto label_3e2f00;
        case 0x3e2f30u: goto label_3e2f30;
        default: break;
    }

    ctx->pc = 0x3e2ef0u;

    // 0x3e2ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e2ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e2ef4: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x3e2ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_3e2ef8:
    // 0x3e2ef8: 0x24a5ffec  addiu       $a1, $a1, -0x14
    ctx->pc = 0x3e2ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
    // 0x3e2efc: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x3e2efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e2f00:
    // 0x3e2f00: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x3e2f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2f04: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3e2f04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e2f08: 0x0  nop
    ctx->pc = 0x3e2f08u;
    // NOP
    // 0x3e2f0c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3E2F0Cu;
    {
        const bool branch_taken_0x3e2f0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E2F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2F0Cu;
        // 0x3e2f10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2f0c) {
            ctx->pc = 0x3E2F18u;
            goto label_3e2f18;
        }
    }
    ctx->pc = 0x3E2F14u;
    // 0x3e2f14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e2f14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2f18:
    // 0x3e2f18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e2f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e2f1c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3E2F1Cu;
    {
        const bool branch_taken_0x3e2f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e2f1c) {
            ctx->pc = 0x3E2F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E2F1Cu;
            // 0x3e2f20: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E2F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e2f00;
        }
    }
    ctx->pc = 0x3E2F24u;
    // 0x3e2f24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3E2F24u;
    {
        const bool branch_taken_0x3e2f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2F24u;
        // 0x3e2f28: 0xc4a00010  lwc1        $f0, 0x10($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2f24) {
            ctx->pc = 0x3E2F34u;
            goto label_3e2f34;
        }
    }
    ctx->pc = 0x3E2F2Cu;
    // 0x3e2f2c: 0x0  nop
    ctx->pc = 0x3e2f2cu;
    // NOP
label_3e2f30:
    // 0x3e2f30: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x3e2f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e2f34:
    // 0x3e2f34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e2f34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e2f38: 0x0  nop
    ctx->pc = 0x3e2f38u;
    // NOP
    // 0x3e2f3c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3E2F3Cu;
    {
        const bool branch_taken_0x3e2f3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E2F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2F3Cu;
        // 0x3e2f40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2f3c) {
            ctx->pc = 0x3E2F48u;
            goto label_3e2f48;
        }
    }
    ctx->pc = 0x3E2F44u;
    // 0x3e2f44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e2f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e2f48:
    // 0x3e2f48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e2f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e2f4c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3E2F4Cu;
    {
        const bool branch_taken_0x3e2f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e2f4c) {
            ctx->pc = 0x3E2F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E2F4Cu;
            // 0x3e2f50: 0x24a5ffec  addiu       $a1, $a1, -0x14 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E2F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e2f30;
        }
    }
    ctx->pc = 0x3E2F54u;
    // 0x3e2f54: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x3e2f54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3e2f58: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3E2F58u;
    {
        const bool branch_taken_0x3e2f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2F58u;
        // 0x3e2f5c: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2f58) {
            ctx->pc = 0x3E2FF4u;
            goto label_3e2ff4;
        }
    }
    ctx->pc = 0x3E2F60u;
    // 0x3e2f60: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3e2f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3e2f64: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3e2f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3e2f68: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x3e2f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3e2f6c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3e2f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3e2f70: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3e2f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2f74: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3e2f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2f78: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x3e2f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e2f7c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x3e2f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x3e2f80: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3e2f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e2f84: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3e2f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e2f88: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x3e2f88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3e2f8c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3e2f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2f90: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x3e2f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2f94: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x3e2f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x3e2f98: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3e2f98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3e2f9c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3e2f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2fa0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3e2fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3e2fa4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3e2fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2fa8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x3e2fa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3e2fac: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3e2facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2fb0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x3e2fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3e2fb4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3e2fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2fb8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x3e2fb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3e2fbc: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x3e2fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2fc0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3e2fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2fc4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x3e2fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3e2fc8: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x3e2fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3e2fcc: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x3e2fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x3e2fd0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3e2fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2fd4: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x3e2fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3e2fd8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3e2fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2fdc: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3e2fdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3e2fe0: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x3e2fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e2fe4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3e2fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3e2fe8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x3e2fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2fec: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
    ctx->pc = 0x3E2FECu;
    {
        const bool branch_taken_0x3e2fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2FECu;
        // 0x3e2ff0: 0xe4a10010  swc1        $f1, 0x10($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2fec) {
            ctx->pc = 0x3E2EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e2ef8;
        }
    }
    ctx->pc = 0x3E2FF4u;
label_3e2ff4:
    // 0x3e2ff4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3e2ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2FF8u;
        // 0x3e2ffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3000u;
}
