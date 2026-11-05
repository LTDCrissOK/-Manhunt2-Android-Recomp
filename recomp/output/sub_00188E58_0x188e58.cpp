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

// Function: sub_00188E58
// Address: 0x188e58 - 0x189178
void sub_00188E58_0x188e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188E58_0x188e58");
#endif

    switch (ctx->pc) {
        case 0x188ed4u: goto label_188ed4;
        case 0x188f0cu: goto label_188f0c;
        case 0x188f30u: goto label_188f30;
        case 0x188f38u: goto label_188f38;
        case 0x188f90u: goto label_188f90;
        case 0x188fa0u: goto label_188fa0;
        case 0x188fb4u: goto label_188fb4;
        case 0x188fc4u: goto label_188fc4;
        case 0x188ff8u: goto label_188ff8;
        case 0x189094u: goto label_189094;
        case 0x189134u: goto label_189134;
        default: break;
    }

    ctx->pc = 0x188e58u;

    // 0x188e58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x188e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x188e5c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x188e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x188e60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x188e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x188e64: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x188e64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x188e68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188e6c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x188e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x188e70: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x188E70u;
    {
        const bool branch_taken_0x188e70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x188E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E70u;
        // 0x188e74: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e70) {
            ctx->pc = 0x188E8Cu;
            goto label_188e8c;
        }
    }
    ctx->pc = 0x188E78u;
    // 0x188e78: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188e7c: 0x0  nop
    ctx->pc = 0x188e7cu;
    // NOP
    // 0x188e80: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x188e80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x188e84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x188E84u;
    {
        const bool branch_taken_0x188e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188e84) {
            ctx->pc = 0x188EA8u;
            goto label_188ea8;
        }
    }
    ctx->pc = 0x188E8Cu;
label_188e8c:
    // 0x188e8c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x188e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x188e90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x188e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x188e94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x188e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x188e98: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188e9c: 0x0  nop
    ctx->pc = 0x188e9cu;
    // NOP
    // 0x188ea0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x188ea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x188ea4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x188ea4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_188ea8:
    // 0x188ea8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x188ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x188eac: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x188eacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x188eb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x188eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188eb4: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x188eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188eb8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x188eb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x188ebc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188ebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188ec0: 0x0  nop
    ctx->pc = 0x188ec0u;
    // NOP
    // 0x188ec4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x188EC4u;
    {
        const bool branch_taken_0x188ec4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x188EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EC4u;
        // 0x188ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ec4) {
            ctx->pc = 0x188EDCu;
            goto label_188edc;
        }
    }
    ctx->pc = 0x188ECCu;
    // 0x188ecc: 0xc062974  jal         func_18A5D0
    ctx->pc = 0x188ECCu;
    SET_GPR_U32(ctx, 31, 0x188ED4u);
    ctx->pc = 0x188ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188ECCu;
    // 0x188ed0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A5D0u, 0x188ECCu, 0x188ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188ED4u;
label_188ed4:
    // 0x188ed4: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x188ED4u;
    {
        const bool branch_taken_0x188ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188ED4u;
        // 0x188ed8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ed4) {
            ctx->pc = 0x189168u;
            goto label_189168;
        }
    }
    ctx->pc = 0x188EDCu;
label_188edc:
    // 0x188edc: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x188edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188ee0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x188ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x188ee4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x188ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x188ee8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x188ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x188eec: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x188eecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188ef0: 0x0  nop
    ctx->pc = 0x188ef0u;
    // NOP
    // 0x188ef4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x188EF4u;
    {
        const bool branch_taken_0x188ef4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x188EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188EF4u;
        // 0x188ef8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ef4) {
            ctx->pc = 0x188F14u;
            goto label_188f14;
        }
    }
    ctx->pc = 0x188EFCu;
    // 0x188efc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x188efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x188f00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x188f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x188f04: 0xc06245e  jal         func_189178
    ctx->pc = 0x188F04u;
    SET_GPR_U32(ctx, 31, 0x188F0Cu);
    ctx->pc = 0x188F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188F04u;
    // 0x188f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189178u, 0x188F04u, 0x188F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188F0Cu;
label_188f0c:
    // 0x188f0c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x188F0Cu;
    {
        const bool branch_taken_0x188f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F0Cu;
        // 0x188f10: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f0c) {
            ctx->pc = 0x189168u;
            goto label_189168;
        }
    }
    ctx->pc = 0x188F14u;
label_188f14:
    // 0x188f14: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x188f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188f18: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x188f18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188f1c: 0x0  nop
    ctx->pc = 0x188f1cu;
    // NOP
    // 0x188f20: 0x4502005e  bc1fl       . + 4 + (0x5E << 2)
    ctx->pc = 0x188F20u;
    {
        const bool branch_taken_0x188f20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188f20) {
            ctx->pc = 0x188F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188F20u;
            // 0x188f24: 0xc6000070  lwc1        $f0, 0x70($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18909Cu;
            goto label_18909c;
        }
    }
    ctx->pc = 0x188F28u;
    // 0x188f28: 0xc061a1e  jal         func_186878
    ctx->pc = 0x188F28u;
    SET_GPR_U32(ctx, 31, 0x188F30u);
    ctx->pc = 0x188F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188F28u;
    // 0x188f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x188F28u, 0x188F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188F30u;
label_188f30:
    // 0x188f30: 0xc06e0e6  jal         func_1B8398
    ctx->pc = 0x188F30u;
    SET_GPR_U32(ctx, 31, 0x188F38u);
    ctx->pc = 0x188F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188F30u;
    // 0x188f34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8398u, 0x188F30u, 0x188F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188F38u;
label_188f38:
    // 0x188f38: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x188F38u;
    {
        const bool branch_taken_0x188f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F38u;
        // 0x188f3c: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f38) {
            ctx->pc = 0x18903Cu;
            goto label_18903c;
        }
    }
    ctx->pc = 0x188F40u;
    // 0x188f40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x188f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x188f44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x188f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f48: 0x8c42036c  lw          $v0, 0x36C($v0)
    ctx->pc = 0x188f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x188f4c: 0x441824  and         $v1, $v0, $a0
    ctx->pc = 0x188f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x188f50: 0x1064002b  beq         $v1, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x188F50u;
    {
        const bool branch_taken_0x188f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x188F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F50u;
        // 0x188f54: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f50) {
            ctx->pc = 0x189000u;
            goto label_189000;
        }
    }
    ctx->pc = 0x188F58u;
    // 0x188f58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x188f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x188f5c: 0x50430029  beql        $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x188F5Cu;
    {
        const bool branch_taken_0x188f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x188f5c) {
            ctx->pc = 0x188F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188F5Cu;
            // 0x188f60: 0x8ca4036c  lw          $a0, 0x36C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189004u;
            goto label_189004;
        }
    }
    ctx->pc = 0x188F64u;
    // 0x188f64: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x188f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188f68: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x188f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x188f6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x188f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188f70: 0x0  nop
    ctx->pc = 0x188f70u;
    // NOP
    // 0x188f74: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x188f74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188f78: 0x0  nop
    ctx->pc = 0x188f78u;
    // NOP
    // 0x188f7c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x188F7Cu;
    {
        const bool branch_taken_0x188f7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x188F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F7Cu;
        // 0x188f80: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f7c) {
            ctx->pc = 0x188FA8u;
            goto label_188fa8;
        }
    }
    ctx->pc = 0x188F84u;
    // 0x188f84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x188f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188f88: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x188F88u;
    SET_GPR_U32(ctx, 31, 0x188F90u);
    ctx->pc = 0x188F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188F88u;
    // 0x188f8c: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x188F88u, 0x188F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188F90u;
label_188f90:
    // 0x188f90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x188f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x188f94: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x188f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x188f98: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x188F98u;
    SET_GPR_U32(ctx, 31, 0x188FA0u);
    ctx->pc = 0x188F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188F98u;
    // 0x188f9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x188F98u, 0x188FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188FA0u;
label_188fa0:
    // 0x188fa0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x188FA0u;
    {
        const bool branch_taken_0x188fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FA0u;
        // 0x188fa4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fa0) {
            ctx->pc = 0x188FC8u;
            goto label_188fc8;
        }
    }
    ctx->pc = 0x188FA8u;
label_188fa8:
    // 0x188fa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x188fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188fac: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x188FACu;
    SET_GPR_U32(ctx, 31, 0x188FB4u);
    ctx->pc = 0x188FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188FACu;
    // 0x188fb0: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x188FACu, 0x188FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188FB4u;
label_188fb4:
    // 0x188fb4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x188fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x188fb8: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x188fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x188fbc: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x188FBCu;
    SET_GPR_U32(ctx, 31, 0x188FC4u);
    ctx->pc = 0x188FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188FBCu;
    // 0x188fc0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x188FBCu, 0x188FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188FC4u;
label_188fc4:
    // 0x188fc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x188fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_188fc8:
    // 0x188fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188fcc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x188fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x188fd0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x188fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x188fd4: 0x8c43041c  lw          $v1, 0x41C($v0)
    ctx->pc = 0x188fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1052)));
    // 0x188fd8: 0xac40041c  sw          $zero, 0x41C($v0)
    ctx->pc = 0x188fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1052), GPR_U32(ctx, 0));
    // 0x188fdc: 0xac430420  sw          $v1, 0x420($v0)
    ctx->pc = 0x188fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1056), GPR_U32(ctx, 3));
    // 0x188fe0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x188fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x188fe4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x188fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188fe8: 0xe4a004fc  swc1        $f0, 0x4FC($a1)
    ctx->pc = 0x188fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1276), bits); }
    // 0x188fec: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x188fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188ff0: 0xc06245e  jal         func_189178
    ctx->pc = 0x188FF0u;
    SET_GPR_U32(ctx, 31, 0x188FF8u);
    ctx->pc = 0x188FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188FF0u;
    // 0x188ff4: 0xe4a10500  swc1        $f1, 0x500($a1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1280), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x189178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189178u, 0x188FF0u, 0x188FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188FF8u;
label_188ff8:
    // 0x188ff8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x188FF8u;
    {
        const bool branch_taken_0x188ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FF8u;
        // 0x188ffc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ff8) {
            ctx->pc = 0x189168u;
            goto label_189168;
        }
    }
    ctx->pc = 0x189000u;
label_189000:
    // 0x189000: 0x8ca4036c  lw          $a0, 0x36C($a1)
    ctx->pc = 0x189000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 876)));
label_189004:
    // 0x189004: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x189004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x189008: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x189008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18900c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18900Cu;
    {
        const bool branch_taken_0x18900c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x189010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18900Cu;
        // 0x189010: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18900c) {
            ctx->pc = 0x189020u;
            goto label_189020;
        }
    }
    ctx->pc = 0x189014u;
    // 0x189014: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x189014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x189018: 0x54430049  bnel        $v0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x189018u;
    {
        const bool branch_taken_0x189018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x189018) {
            ctx->pc = 0x18901Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189018u;
            // 0x18901c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189140u;
            goto label_189140;
        }
    }
    ctx->pc = 0x189020u;
label_189020:
    // 0x189020: 0x8ca2041c  lw          $v0, 0x41C($a1)
    ctx->pc = 0x189020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1052)));
    // 0x189024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189028: 0xaca0041c  sw          $zero, 0x41C($a1)
    ctx->pc = 0x189028u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1052), GPR_U32(ctx, 0));
    // 0x18902c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x18902cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x189030: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x189030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x189034: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x189034u;
    {
        const bool branch_taken_0x189034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189034u;
        // 0x189038: 0xaca20420  sw          $v0, 0x420($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189034) {
            ctx->pc = 0x18911Cu;
            goto label_18911c;
        }
    }
    ctx->pc = 0x18903Cu;
label_18903c:
    // 0x18903c: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x18903cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189040: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x189040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x189044: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x189044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x189048: 0x0  nop
    ctx->pc = 0x189048u;
    // NOP
    // 0x18904c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x18904cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189050: 0x0  nop
    ctx->pc = 0x189050u;
    // NOP
    // 0x189054: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x189054u;
    {
        const bool branch_taken_0x189054 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x189058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189054u;
        // 0x189058: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189054) {
            ctx->pc = 0x189074u;
            goto label_189074;
        }
    }
    ctx->pc = 0x18905Cu;
    // 0x18905c: 0x8c43036c  lw          $v1, 0x36C($v0)
    ctx->pc = 0x18905cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x189060: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x189060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x189064: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x189064u;
    {
        const bool branch_taken_0x189064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x189068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189064u;
        // 0x189068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189064) {
            ctx->pc = 0x18908Cu;
            goto label_18908c;
        }
    }
    ctx->pc = 0x18906Cu;
    // 0x18906c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x18906Cu;
    {
        const bool branch_taken_0x18906c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18906Cu;
        // 0x189070: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18906c) {
            ctx->pc = 0x18913Cu;
            goto label_18913c;
        }
    }
    ctx->pc = 0x189074u;
label_189074:
    // 0x189074: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x189074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x189078: 0x8c43036c  lw          $v1, 0x36C($v0)
    ctx->pc = 0x189078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x18907c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x18907cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x189080: 0x5464002e  bnel        $v1, $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x189080u;
    {
        const bool branch_taken_0x189080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x189080) {
            ctx->pc = 0x189084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189080u;
            // 0x189084: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18913Cu;
            goto label_18913c;
        }
    }
    ctx->pc = 0x189088u;
    // 0x189088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18908c:
    // 0x18908c: 0xc062974  jal         func_18A5D0
    ctx->pc = 0x18908Cu;
    SET_GPR_U32(ctx, 31, 0x189094u);
    ctx->pc = 0x189090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18908Cu;
    // 0x189090: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A5D0u, 0x18908Cu, 0x189094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189094u;
label_189094:
    // 0x189094: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x189094u;
    {
        const bool branch_taken_0x189094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189094u;
        // 0x189098: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189094) {
            ctx->pc = 0x189140u;
            goto label_189140;
        }
    }
    ctx->pc = 0x18909Cu;
label_18909c:
    // 0x18909c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18909cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1890a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1890a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1890a4: 0x0  nop
    ctx->pc = 0x1890a4u;
    // NOP
    // 0x1890a8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1890a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1890ac: 0x0  nop
    ctx->pc = 0x1890acu;
    // NOP
    // 0x1890b0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1890B0u;
    {
        const bool branch_taken_0x1890b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1890B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890B0u;
        // 0x1890b4: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890b0) {
            ctx->pc = 0x1890E8u;
            goto label_1890e8;
        }
    }
    ctx->pc = 0x1890B8u;
    // 0x1890b8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1890b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1890bc: 0x8ca2036c  lw          $v0, 0x36C($a1)
    ctx->pc = 0x1890bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 876)));
    // 0x1890c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1890c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1890c4: 0x5443001d  bnel        $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1890C4u;
    {
        const bool branch_taken_0x1890c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1890c4) {
            ctx->pc = 0x1890C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1890C4u;
            // 0x1890c8: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18913Cu;
            goto label_18913c;
        }
    }
    ctx->pc = 0x1890CCu;
    // 0x1890cc: 0x8ca2041c  lw          $v0, 0x41C($a1)
    ctx->pc = 0x1890ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1052)));
    // 0x1890d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1890d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1890d4: 0xaca0041c  sw          $zero, 0x41C($a1)
    ctx->pc = 0x1890d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1052), GPR_U32(ctx, 0));
    // 0x1890d8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1890d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1890dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1890dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1890e0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1890E0u;
    {
        const bool branch_taken_0x1890e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890E0u;
        // 0x1890e4: 0xaca20420  sw          $v0, 0x420($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890e0) {
            ctx->pc = 0x18911Cu;
            goto label_18911c;
        }
    }
    ctx->pc = 0x1890E8u;
label_1890e8:
    // 0x1890e8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1890e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1890ec: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1890ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1890f0: 0x8ca2036c  lw          $v0, 0x36C($a1)
    ctx->pc = 0x1890f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 876)));
    // 0x1890f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1890f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1890f8: 0x54430010  bnel        $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1890F8u;
    {
        const bool branch_taken_0x1890f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1890f8) {
            ctx->pc = 0x1890FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1890F8u;
            // 0x1890fc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18913Cu;
            goto label_18913c;
        }
    }
    ctx->pc = 0x189100u;
    // 0x189100: 0x8ca2041c  lw          $v0, 0x41C($a1)
    ctx->pc = 0x189100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1052)));
    // 0x189104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189108: 0xaca0041c  sw          $zero, 0x41C($a1)
    ctx->pc = 0x189108u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1052), GPR_U32(ctx, 0));
    // 0x18910c: 0xaca20420  sw          $v0, 0x420($a1)
    ctx->pc = 0x18910cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1056), GPR_U32(ctx, 2));
    // 0x189110: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x189110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x189114: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x189114u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x189118: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x189118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18911c:
    // 0x18911c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18911cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x189120: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x189120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189124: 0xe44004fc  swc1        $f0, 0x4FC($v0)
    ctx->pc = 0x189124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1276), bits); }
    // 0x189128: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x189128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18912c: 0xc06245e  jal         func_189178
    ctx->pc = 0x18912Cu;
    SET_GPR_U32(ctx, 31, 0x189134u);
    ctx->pc = 0x189130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18912Cu;
    // 0x189130: 0xe4410500  swc1        $f1, 0x500($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1280), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x189178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189178u, 0x18912Cu, 0x189134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189134u;
label_189134:
    // 0x189134: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x189134u;
    {
        const bool branch_taken_0x189134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189134u;
        // 0x189138: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189134) {
            ctx->pc = 0x189168u;
            goto label_189168;
        }
    }
    ctx->pc = 0x18913Cu;
label_18913c:
    // 0x18913c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_189140:
    // 0x189140: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x189140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189144: 0x8c44041c  lw          $a0, 0x41C($v0)
    ctx->pc = 0x189144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1052)));
    // 0x189148: 0xac43041c  sw          $v1, 0x41C($v0)
    ctx->pc = 0x189148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1052), GPR_U32(ctx, 3));
    // 0x18914c: 0xac440420  sw          $a0, 0x420($v0)
    ctx->pc = 0x18914cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1056), GPR_U32(ctx, 4));
    // 0x189150: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x189150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x189154: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x189154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189158: 0xe46004fc  swc1        $f0, 0x4FC($v1)
    ctx->pc = 0x189158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1276), bits); }
    // 0x18915c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x18915cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189160: 0xe4610500  swc1        $f1, 0x500($v1)
    ctx->pc = 0x189160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1280), bits); }
    // 0x189164: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x189164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_189168:
    // 0x189168: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x189168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18916c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x18916cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x189170: 0x3e00008  jr          $ra
    ctx->pc = 0x189170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189170u;
        // 0x189174: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189178u;
}
