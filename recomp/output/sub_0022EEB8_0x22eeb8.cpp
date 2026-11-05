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

// Function: sub_0022EEB8
// Address: 0x22eeb8 - 0x22efd0
void sub_0022EEB8_0x22eeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EEB8_0x22eeb8");
#endif

    switch (ctx->pc) {
        case 0x22ef5cu: goto label_22ef5c;
        case 0x22efb0u: goto label_22efb0;
        default: break;
    }

    ctx->pc = 0x22eeb8u;

    // 0x22eeb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22eeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22eebc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22eebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22eec0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22eec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22eec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22eec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eec8: 0x8e020430  lw          $v0, 0x430($s0)
    ctx->pc = 0x22eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
    // 0x22eecc: 0x5440003c  bnel        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x22EECCu;
    {
        const bool branch_taken_0x22eecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22eecc) {
            ctx->pc = 0x22EED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EECCu;
            // 0x22eed0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EFC0u;
            goto label_22efc0;
        }
    }
    ctx->pc = 0x22EED4u;
    // 0x22eed4: 0x8e02042c  lw          $v0, 0x42C($s0)
    ctx->pc = 0x22eed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1068)));
    // 0x22eed8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22EED8u;
    {
        const bool branch_taken_0x22eed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EED8u;
        // 0x22eedc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eed8) {
            ctx->pc = 0x22EEFCu;
            goto label_22eefc;
        }
    }
    ctx->pc = 0x22EEE0u;
    // 0x22eee0: 0xc6010434  lwc1        $f1, 0x434($s0)
    ctx->pc = 0x22eee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22eee4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22eee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22eee8: 0x0  nop
    ctx->pc = 0x22eee8u;
    // NOP
    // 0x22eeec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22eeecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22eef0: 0x0  nop
    ctx->pc = 0x22eef0u;
    // NOP
    // 0x22eef4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22EEF4u;
    {
        const bool branch_taken_0x22eef4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22eef4) {
            ctx->pc = 0x22EF00u;
            goto label_22ef00;
        }
    }
    ctx->pc = 0x22EEFCu;
label_22eefc:
    // 0x22eefc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22eefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22ef00:
    // 0x22ef00: 0x5460002f  bnel        $v1, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x22EF00u;
    {
        const bool branch_taken_0x22ef00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ef00) {
            ctx->pc = 0x22EF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EF00u;
            // 0x22ef04: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EFC0u;
            goto label_22efc0;
        }
    }
    ctx->pc = 0x22EF08u;
    // 0x22ef08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ef08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ef0c: 0x0  nop
    ctx->pc = 0x22ef0cu;
    // NOP
    // 0x22ef10: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x22ef10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ef14: 0x0  nop
    ctx->pc = 0x22ef14u;
    // NOP
    // 0x22ef18: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x22EF18u;
    {
        const bool branch_taken_0x22ef18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ef18) {
            ctx->pc = 0x22EF30u;
            goto label_22ef30;
        }
    }
    ctx->pc = 0x22EF20u;
    // 0x22ef20: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x22ef20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x22ef24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ef24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ef28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22EF28u;
    {
        const bool branch_taken_0x22ef28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF28u;
        // 0x22ef2c: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef28) {
            ctx->pc = 0x22EF4Cu;
            goto label_22ef4c;
        }
    }
    ctx->pc = 0x22EF30u;
label_22ef30:
    // 0x22ef30: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x22ef30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x22ef34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ef34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ef38: 0x0  nop
    ctx->pc = 0x22ef38u;
    // NOP
    // 0x22ef3c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x22ef3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ef40: 0x0  nop
    ctx->pc = 0x22ef40u;
    // NOP
    // 0x22ef44: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x22EF44u;
    {
        const bool branch_taken_0x22ef44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ef44) {
            ctx->pc = 0x22EF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EF44u;
            // 0x22ef48: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EF4Cu;
            goto label_22ef4c;
        }
    }
    ctx->pc = 0x22EF4Cu;
label_22ef4c:
    // 0x22ef4c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22EF4Cu;
    {
        const bool branch_taken_0x22ef4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF4Cu;
        // 0x22ef50: 0xe60c0374  swc1        $f12, 0x374($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 884), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef4c) {
            ctx->pc = 0x22EF5Cu;
            goto label_22ef5c;
        }
    }
    ctx->pc = 0x22EF54u;
    // 0x22ef54: 0xc08bc02  jal         func_22F008
    ctx->pc = 0x22EF54u;
    SET_GPR_U32(ctx, 31, 0x22EF5Cu);
    ctx->pc = 0x22EF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EF54u;
    // 0x22ef58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F008u, 0x22EF54u, 0x22EF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EF5Cu;
label_22ef5c:
    // 0x22ef5c: 0x9202036c  lbu         $v0, 0x36C($s0)
    ctx->pc = 0x22ef5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x22ef60: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x22ef60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x22ef64: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x22EF64u;
    {
        const bool branch_taken_0x22ef64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ef64) {
            ctx->pc = 0x22EF68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EF64u;
            // 0x22ef68: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EFC0u;
            goto label_22efc0;
        }
    }
    ctx->pc = 0x22EF6Cu;
    // 0x22ef6c: 0x8e020430  lw          $v0, 0x430($s0)
    ctx->pc = 0x22ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
    // 0x22ef70: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x22EF70u;
    {
        const bool branch_taken_0x22ef70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ef70) {
            ctx->pc = 0x22EF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EF70u;
            // 0x22ef74: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EFC0u;
            goto label_22efc0;
        }
    }
    ctx->pc = 0x22EF78u;
    // 0x22ef78: 0x8e04048c  lw          $a0, 0x48C($s0)
    ctx->pc = 0x22ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1164)));
    // 0x22ef7c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x22ef7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x22ef80: 0xc60c0374  lwc1        $f12, 0x374($s0)
    ctx->pc = 0x22ef80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22ef84: 0x24a55b40  addiu       $a1, $a1, 0x5B40
    ctx->pc = 0x22ef84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
    // 0x22ef88: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x22ef88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ef8c: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x22ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x22ef90: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x22ef90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22ef94: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x22ef94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ef98: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x22ef98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22ef9c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x22ef9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22efa0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x22efa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x22efa4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x22efa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22efa8: 0xc0b1574  jal         func_2C55D0
    ctx->pc = 0x22EFA8u;
    SET_GPR_U32(ctx, 31, 0x22EFB0u);
    ctx->pc = 0x22EFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EFA8u;
    // 0x22efac: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C55D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C55D0u, 0x22EFA8u, 0x22EFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EFB0u;
label_22efb0:
    // 0x22efb0: 0x8e02048c  lw          $v0, 0x48C($s0)
    ctx->pc = 0x22efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1164)));
    // 0x22efb4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x22efb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22efb8: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x22efb8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22efbc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22efbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22efc0:
    // 0x22efc0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22efc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22efc4: 0x3e00008  jr          $ra
    ctx->pc = 0x22EFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EFC4u;
        // 0x22efc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EFCCu;
    // 0x22efcc: 0x0  nop
    ctx->pc = 0x22efccu;
    // NOP
    ctx->pc = 0x22efd0u;
}
