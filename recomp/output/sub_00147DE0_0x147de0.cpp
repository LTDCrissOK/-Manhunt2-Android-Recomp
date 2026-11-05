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

// Function: sub_00147DE0
// Address: 0x147de0 - 0x148000
void sub_00147DE0_0x147de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147DE0_0x147de0");
#endif

    switch (ctx->pc) {
        case 0x147e20u: goto label_147e20;
        case 0x147e3cu: goto label_147e3c;
        case 0x147e44u: goto label_147e44;
        case 0x147e60u: goto label_147e60;
        case 0x147eccu: goto label_147ecc;
        case 0x147edcu: goto label_147edc;
        case 0x147ef0u: goto label_147ef0;
        case 0x147f14u: goto label_147f14;
        case 0x147f24u: goto label_147f24;
        case 0x147f34u: goto label_147f34;
        case 0x147f44u: goto label_147f44;
        case 0x147f50u: goto label_147f50;
        case 0x147f60u: goto label_147f60;
        case 0x147f70u: goto label_147f70;
        case 0x147f84u: goto label_147f84;
        case 0x147fc4u: goto label_147fc4;
        case 0x147fd4u: goto label_147fd4;
        default: break;
    }

    ctx->pc = 0x147de0u;

    // 0x147de0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x147de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x147de4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x147de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x147de8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x147de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x147dec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x147decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147df0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x147df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x147df4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x147df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147df8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x147df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x147dfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147e00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x147e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x147e04: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x147e04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147e08: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x147e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x147e0c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x147e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x147e10: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x147e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x147e14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x147e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x147e18: 0xc046002  jal         func_118008
    ctx->pc = 0x147E18u;
    SET_GPR_U32(ctx, 31, 0x147E20u);
    ctx->pc = 0x147E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147E18u;
    // 0x147e1c: 0xae060468  sw          $a2, 0x468($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1128), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x147E18u, 0x147E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147E20u;
label_147e20:
    // 0x147e20: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x147e20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147e24: 0x8e0206a0  lw          $v0, 0x6A0($s0)
    ctx->pc = 0x147e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x147e28: 0x12e20004  beq         $s7, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x147E28u;
    {
        const bool branch_taken_0x147e28 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x147e28) {
            ctx->pc = 0x147E3Cu;
            goto label_147e3c;
        }
    }
    ctx->pc = 0x147E30u;
    // 0x147e30: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x147e30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147e34: 0xc052102  jal         func_148408
    ctx->pc = 0x147E34u;
    SET_GPR_U32(ctx, 31, 0x147E3Cu);
    ctx->pc = 0x147E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147E34u;
    // 0x147e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148408u, 0x147E34u, 0x147E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147E3Cu;
label_147e3c:
    // 0x147e3c: 0xc04611e  jal         func_118478
    ctx->pc = 0x147E3Cu;
    SET_GPR_U32(ctx, 31, 0x147E44u);
    ctx->pc = 0x147E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147E3Cu;
    // 0x147e40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118478u, 0x147E3Cu, 0x147E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147E44u;
label_147e44:
    // 0x147e44: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x147e44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147e48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x147e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147e4c: 0x8e0206e8  lw          $v0, 0x6E8($s0)
    ctx->pc = 0x147e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1768)));
    // 0x147e50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147e54: 0x2a21026  xor         $v0, $s5, $v0
    ctx->pc = 0x147e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 2));
    // 0x147e58: 0xc046086  jal         func_118218
    ctx->pc = 0x147E58u;
    SET_GPR_U32(ctx, 31, 0x147E60u);
    ctx->pc = 0x147E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147E58u;
    // 0x147e5c: 0x62a00b  movn        $s4, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x147E58u, 0x147E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147E60u;
label_147e60:
    // 0x147e60: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x147E60u;
    {
        const bool branch_taken_0x147e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147e60) {
            ctx->pc = 0x147E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147E60u;
            // 0x147e64: 0xc60006b0  lwc1        $f0, 0x6B0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x147E74u;
            goto label_147e74;
        }
    }
    ctx->pc = 0x147E68u;
    // 0x147e68: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x147e68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x147e6c: 0xfa0106b0  sqc2        $vf1, 0x6B0($s0)
    ctx->pc = 0x147e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1712), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x147e70: 0xc60006b0  lwc1        $f0, 0x6B0($s0)
    ctx->pc = 0x147e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_147e74:
    // 0x147e74: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x147e74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147e78: 0x0  nop
    ctx->pc = 0x147e78u;
    // NOP
    // 0x147e7c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x147e7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147e80: 0x0  nop
    ctx->pc = 0x147e80u;
    // NOP
    // 0x147e84: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x147E84u;
    {
        const bool branch_taken_0x147e84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x147E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147E84u;
        // 0x147e88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147e84) {
            ctx->pc = 0x147EBCu;
            goto label_147ebc;
        }
    }
    ctx->pc = 0x147E8Cu;
    // 0x147e8c: 0xc60006b4  lwc1        $f0, 0x6B4($s0)
    ctx->pc = 0x147e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147e90: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x147e90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147e94: 0x0  nop
    ctx->pc = 0x147e94u;
    // NOP
    // 0x147e98: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x147E98u;
    {
        const bool branch_taken_0x147e98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x147e98) {
            ctx->pc = 0x147E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147E98u;
            // 0x147e9c: 0xae0206c0  sw          $v0, 0x6C0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147EC0u;
            goto label_147ec0;
        }
    }
    ctx->pc = 0x147EA0u;
    // 0x147ea0: 0xc60006b8  lwc1        $f0, 0x6B8($s0)
    ctx->pc = 0x147ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147ea4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x147ea4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147ea8: 0x0  nop
    ctx->pc = 0x147ea8u;
    // NOP
    // 0x147eac: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x147EACu;
    {
        const bool branch_taken_0x147eac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x147eac) {
            ctx->pc = 0x147EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147EACu;
            // 0x147eb0: 0xae0206c0  sw          $v0, 0x6C0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147EC0u;
            goto label_147ec0;
        }
    }
    ctx->pc = 0x147EB4u;
    // 0x147eb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x147EB4u;
    {
        const bool branch_taken_0x147eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147EB4u;
        // 0x147eb8: 0xae0006c0  sw          $zero, 0x6C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147eb4) {
            ctx->pc = 0x147EC0u;
            goto label_147ec0;
        }
    }
    ctx->pc = 0x147EBCu;
label_147ebc:
    // 0x147ebc: 0xae0206c0  sw          $v0, 0x6C0($s0)
    ctx->pc = 0x147ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 2));
label_147ec0:
    // 0x147ec0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147ec4: 0xc0460e4  jal         func_118390
    ctx->pc = 0x147EC4u;
    SET_GPR_U32(ctx, 31, 0x147ECCu);
    ctx->pc = 0x147EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147EC4u;
    // 0x147ec8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118390u, 0x147EC4u, 0x147ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147ECCu;
label_147ecc:
    // 0x147ecc: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x147eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147ed0: 0xae0206ec  sw          $v0, 0x6EC($s0)
    ctx->pc = 0x147ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1772), GPR_U32(ctx, 2));
    // 0x147ed4: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x147ED4u;
    SET_GPR_U32(ctx, 31, 0x147EDCu);
    ctx->pc = 0x147ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147ED4u;
    // 0x147ed8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x147ED4u, 0x147EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147EDCu;
label_147edc:
    // 0x147edc: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x147edcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x147ee0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x147EE0u;
    {
        const bool branch_taken_0x147ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147EE0u;
        // 0x147ee4: 0xe60006e4  swc1        $f0, 0x6E4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1764), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ee0) {
            ctx->pc = 0x147FA4u;
            goto label_147fa4;
        }
    }
    ctx->pc = 0x147EE8u;
    // 0x147ee8: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x147ee8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x147eec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x147eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_147ef0:
    // 0x147ef0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x147ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x147ef4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x147ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x147ef8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x147ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147efc: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x147EFCu;
    {
        const bool branch_taken_0x147efc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x147F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147EFCu;
        // 0x147f00: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147efc) {
            ctx->pc = 0x147F84u;
            goto label_147f84;
        }
    }
    ctx->pc = 0x147F04u;
    // 0x147f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147f08: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x147f08u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x147f0c: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x147F0Cu;
    SET_GPR_U32(ctx, 31, 0x147F14u);
    ctx->pc = 0x147F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147F0Cu;
    // 0x147f10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x147F0Cu, 0x147F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F14u;
label_147f14:
    // 0x147f14: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x147F14u;
    {
        const bool branch_taken_0x147f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147F14u;
        // 0x147f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147f14) {
            ctx->pc = 0x147F84u;
            goto label_147f84;
        }
    }
    ctx->pc = 0x147F1Cu;
    // 0x147f1c: 0xc0523de  jal         func_148F78
    ctx->pc = 0x147F1Cu;
    SET_GPR_U32(ctx, 31, 0x147F24u);
    ctx->pc = 0x147F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147F1Cu;
    // 0x147f20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148F78u, 0x147F1Cu, 0x147F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F24u;
label_147f24:
    // 0x147f24: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x147F24u;
    {
        const bool branch_taken_0x147f24 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x147F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147F24u;
        // 0x147f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147f24) {
            ctx->pc = 0x147F68u;
            goto label_147f68;
        }
    }
    ctx->pc = 0x147F2Cu;
    // 0x147f2c: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x147F2Cu;
    SET_GPR_U32(ctx, 31, 0x147F34u);
    ctx->pc = 0x147F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147F2Cu;
    // 0x147f30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1361A0u, 0x147F2Cu, 0x147F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F34u;
label_147f34:
    // 0x147f34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x147f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147f3c: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x147F3Cu;
    SET_GPR_U32(ctx, 31, 0x147F44u);
    ctx->pc = 0x147F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147F3Cu;
    // 0x147f40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x147F3Cu, 0x147F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F44u;
label_147f44:
    // 0x147f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147f48: 0xc05242e  jal         func_1490B8
    ctx->pc = 0x147F48u;
    SET_GPR_U32(ctx, 31, 0x147F50u);
    ctx->pc = 0x147F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147F48u;
    // 0x147f4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1490B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1490B8u, 0x147F48u, 0x147F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F50u;
label_147f50:
    // 0x147f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147f54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x147f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147f58: 0xc052440  jal         func_149100
    ctx->pc = 0x147F58u;
    SET_GPR_U32(ctx, 31, 0x147F60u);
    ctx->pc = 0x147F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147F58u;
    // 0x147f5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149100u, 0x147F58u, 0x147F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F60u;
label_147f60:
    // 0x147f60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x147F60u;
    {
        const bool branch_taken_0x147f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147F60u;
        // 0x147f64: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147f60) {
            ctx->pc = 0x147F88u;
            goto label_147f88;
        }
    }
    ctx->pc = 0x147F68u;
label_147f68:
    // 0x147f68: 0xc05238e  jal         func_148E38
    ctx->pc = 0x147F68u;
    SET_GPR_U32(ctx, 31, 0x147F70u);
    ctx->pc = 0x147F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147F68u;
    // 0x147f6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E38u, 0x147F68u, 0x147F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F70u;
label_147f70:
    // 0x147f70: 0x14560005  bne         $v0, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x147F70u;
    {
        const bool branch_taken_0x147f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x147F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147F70u;
        // 0x147f74: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147f70) {
            ctx->pc = 0x147F88u;
            goto label_147f88;
        }
    }
    ctx->pc = 0x147F78u;
    // 0x147f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147f7c: 0xc052394  jal         func_148E50
    ctx->pc = 0x147F7Cu;
    SET_GPR_U32(ctx, 31, 0x147F84u);
    ctx->pc = 0x147F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147F7Cu;
    // 0x147f80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E50u, 0x147F7Cu, 0x147F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F84u;
label_147f84:
    // 0x147f84: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x147f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_147f88:
    // 0x147f88: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x147f88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x147f8c: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x147f8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x147f90: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x147F90u;
    {
        const bool branch_taken_0x147f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x147f90) {
            ctx->pc = 0x147FA4u;
            goto label_147fa4;
        }
    }
    ctx->pc = 0x147F98u;
    // 0x147f98: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x147f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x147f9c: 0x5662ffd4  bnel        $s3, $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x147F9Cu;
    {
        const bool branch_taken_0x147f9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x147f9c) {
            ctx->pc = 0x147FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147F9Cu;
            // 0x147fa0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147ef0;
        }
    }
    ctx->pc = 0x147FA4u;
label_147fa4:
    // 0x147fa4: 0x52800004  beql        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x147FA4u;
    {
        const bool branch_taken_0x147fa4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x147fa4) {
            ctx->pc = 0x147FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147FA4u;
            // 0x147fa8: 0x8e420080  lw          $v0, 0x80($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147FB8u;
            goto label_147fb8;
        }
    }
    ctx->pc = 0x147FACu;
    // 0x147fac: 0xae1706a0  sw          $s7, 0x6A0($s0)
    ctx->pc = 0x147facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1696), GPR_U32(ctx, 23));
    // 0x147fb0: 0xae1506e8  sw          $s5, 0x6E8($s0)
    ctx->pc = 0x147fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1768), GPR_U32(ctx, 21));
    // 0x147fb4: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x147fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_147fb8:
    // 0x147fb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147fbc: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x147FBCu;
    SET_GPR_U32(ctx, 31, 0x147FC4u);
    ctx->pc = 0x147FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147FBCu;
    // 0x147fc0: 0xae0204c4  sw          $v0, 0x4C4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1220), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x147FBCu, 0x147FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147FC4u;
label_147fc4:
    // 0x147fc4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x147fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x147fc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x147fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147fcc: 0xc042136  jal         func_1084D8
    ctx->pc = 0x147FCCu;
    SET_GPR_U32(ctx, 31, 0x147FD4u);
    ctx->pc = 0x147FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147FCCu;
    // 0x147fd0: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x147FCCu, 0x147FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147FD4u;
label_147fd4:
    // 0x147fd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x147fd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147fd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x147fd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x147fdc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x147fdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147fe0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x147fe0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x147fe4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x147fe4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147fe8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x147fe8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x147fec: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x147fecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147ff0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x147ff0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147ff4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x147ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x147FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147FF8u;
        // 0x147ffc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148000u;
}
