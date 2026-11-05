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

// Function: sub_002BFD08
// Address: 0x2bfd08 - 0x2bfdf8
void sub_002BFD08_0x2bfd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFD08_0x2bfd08");
#endif

    switch (ctx->pc) {
        case 0x2bfd28u: goto label_2bfd28;
        case 0x2bfd80u: goto label_2bfd80;
        case 0x2bfd8cu: goto label_2bfd8c;
        case 0x2bfde4u: goto label_2bfde4;
        default: break;
    }

    ctx->pc = 0x2bfd08u;

    // 0x2bfd08: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2bfd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2bfd0c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2bfd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2bfd10: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2bfd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2bfd14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bfd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd18: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2bfd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x2bfd1c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2bfd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2bfd20: 0xc0b0098  jal         func_2C0260
    ctx->pc = 0x2BFD20u;
    SET_GPR_U32(ctx, 31, 0x2BFD28u);
    ctx->pc = 0x2BFD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFD20u;
    // 0x2bfd24: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0260u, 0x2BFD20u, 0x2BFD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFD28u;
label_2bfd28:
    // 0x2bfd28: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2bfd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfd2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bfd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfd30: 0xc7a80000  lwc1        $f8, 0x0($sp)
    ctx->pc = 0x2bfd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2bfd34: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2bfd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bfd38: 0xc7a70004  lwc1        $f7, 0x4($sp)
    ctx->pc = 0x2bfd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2bfd3c: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x2bfd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bfd40: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2bfd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bfd44: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x2bfd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bfd48: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x2bfd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bfd4c: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x2bfd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bfd50: 0xc7a60020  lwc1        $f6, 0x20($sp)
    ctx->pc = 0x2bfd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bfd54: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x2bfd54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x2bfd58: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2bfd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2bfd5c: 0xe6080060  swc1        $f8, 0x60($s0)
    ctx->pc = 0x2bfd5cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2bfd60: 0xe6070064  swc1        $f7, 0x64($s0)
    ctx->pc = 0x2bfd60u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2bfd64: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x2bfd64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2bfd68: 0xe6020074  swc1        $f2, 0x74($s0)
    ctx->pc = 0x2bfd68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2bfd6c: 0xe6030078  swc1        $f3, 0x78($s0)
    ctx->pc = 0x2bfd6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2bfd70: 0xe6040080  swc1        $f4, 0x80($s0)
    ctx->pc = 0x2bfd70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x2bfd74: 0xe6050084  swc1        $f5, 0x84($s0)
    ctx->pc = 0x2bfd74u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2bfd78: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BFD78u;
    SET_GPR_U32(ctx, 31, 0x2BFD80u);
    ctx->pc = 0x2BFD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFD78u;
    // 0x2bfd7c: 0xe6060088  swc1        $f6, 0x88($s0) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BFD78u, 0x2BFD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFD80u;
label_2bfd80:
    // 0x2bfd80: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x2bfd80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bfd84: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BFD84u;
    SET_GPR_U32(ctx, 31, 0x2BFD8Cu);
    ctx->pc = 0x2BFD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFD84u;
    // 0x2bfd88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BFD84u, 0x2BFD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFD8Cu;
label_2bfd8c:
    // 0x2bfd8c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2bfd8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2bfd90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bfd90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfd94: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2bfd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2bfd98: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2bfd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2bfd9c: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2bfd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x2bfda0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2bfda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2bfda4: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x2bfda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x2bfda8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bfda8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bfdac: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2bfdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bfdb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bfdb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bfdb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bfdb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfdb8: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2bfdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2bfdbc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2bfdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2bfdc0: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2bfdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x2bfdc4: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x2bfdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x2bfdc8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bfdc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bfdcc: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2bfdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bfdd0: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x2bfdd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2bfdd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bfdd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfdd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bfdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfddc: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x2BFDDCu;
    SET_GPR_U32(ctx, 31, 0x2BFDE4u);
    ctx->pc = 0x2BFDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFDDCu;
    // 0x2bfde0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x2BFDDCu, 0x2BFDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFDE4u;
label_2bfde4:
    // 0x2bfde4: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2bfde4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bfde8: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x2bfde8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2bfdec: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2bfdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bfdf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDF0u;
        // 0x2bfdf4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFDF8u;
}
