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

// Function: sub_00189EF0
// Address: 0x189ef0 - 0x18a5d0
void sub_00189EF0_0x189ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189EF0_0x189ef0");
#endif

    switch (ctx->pc) {
        case 0x189fc8u: goto label_189fc8;
        case 0x18a034u: goto label_18a034;
        case 0x18a040u: goto label_18a040;
        case 0x18a050u: goto label_18a050;
        case 0x18a06cu: goto label_18a06c;
        case 0x18a090u: goto label_18a090;
        case 0x18a09cu: goto label_18a09c;
        case 0x18a0acu: goto label_18a0ac;
        case 0x18a0e0u: goto label_18a0e0;
        case 0x18a0f0u: goto label_18a0f0;
        case 0x18a108u: goto label_18a108;
        case 0x18a118u: goto label_18a118;
        case 0x18a25cu: goto label_18a25c;
        case 0x18a2c4u: goto label_18a2c4;
        case 0x18a384u: goto label_18a384;
        case 0x18a390u: goto label_18a390;
        case 0x18a398u: goto label_18a398;
        case 0x18a3c8u: goto label_18a3c8;
        case 0x18a3d8u: goto label_18a3d8;
        case 0x18a3e4u: goto label_18a3e4;
        case 0x18a434u: goto label_18a434;
        case 0x18a458u: goto label_18a458;
        case 0x18a464u: goto label_18a464;
        case 0x18a480u: goto label_18a480;
        case 0x18a4ecu: goto label_18a4ec;
        case 0x18a4f8u: goto label_18a4f8;
        case 0x18a51cu: goto label_18a51c;
        case 0x18a548u: goto label_18a548;
        case 0x18a594u: goto label_18a594;
        case 0x18a5a8u: goto label_18a5a8;
        case 0x18a5b4u: goto label_18a5b4;
        default: break;
    }

    ctx->pc = 0x189ef0u;

    // 0x189ef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x189ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x189ef4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x189ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x189ef8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x189ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x189efc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x189efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189f00: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x189f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x189f04: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x189f04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x189f08: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x189f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x189f0c: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x189F0Cu;
    {
        const bool branch_taken_0x189f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F0Cu;
        // 0x189f10: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f0c) {
            ctx->pc = 0x18A0B4u;
            goto label_18a0b4;
        }
    }
    ctx->pc = 0x189F14u;
    // 0x189f14: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x189f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x189f18: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x189F18u;
    {
        const bool branch_taken_0x189f18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x189F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F18u;
        // 0x189f1c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f18) {
            ctx->pc = 0x189F34u;
            goto label_189f34;
        }
    }
    ctx->pc = 0x189F20u;
    // 0x189f20: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x189f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x189f24: 0x0  nop
    ctx->pc = 0x189f24u;
    // NOP
    // 0x189f28: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x189f28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x189f2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x189F2Cu;
    {
        const bool branch_taken_0x189f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189f2c) {
            ctx->pc = 0x189F4Cu;
            goto label_189f4c;
        }
    }
    ctx->pc = 0x189F34u;
label_189f34:
    // 0x189f34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x189f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x189f38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x189f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x189f3c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x189f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x189f40: 0x0  nop
    ctx->pc = 0x189f40u;
    // NOP
    // 0x189f44: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x189f44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x189f48: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x189f48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_189f4c:
    // 0x189f4c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x189f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x189f50: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x189f50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x189f54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189f58: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x189f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189f5c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x189f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x189f60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189f64: 0x0  nop
    ctx->pc = 0x189f64u;
    // NOP
    // 0x189f68: 0x45020193  bc1fl       . + 4 + (0x193 << 2)
    ctx->pc = 0x189F68u;
    {
        const bool branch_taken_0x189f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189f68) {
            ctx->pc = 0x189F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189F68u;
            // 0x189f6c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A5B8u;
            goto label_18a5b8;
        }
    }
    ctx->pc = 0x189F70u;
    // 0x189f70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x189f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x189f74: 0x8c431050  lw          $v1, 0x1050($v0)
    ctx->pc = 0x189f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4176)));
    // 0x189f78: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x189F78u;
    {
        const bool branch_taken_0x189f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x189F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F78u;
        // 0x189f7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f78) {
            ctx->pc = 0x189FBCu;
            goto label_189fbc;
        }
    }
    ctx->pc = 0x189F80u;
    // 0x189f80: 0x8c860334  lw          $a2, 0x334($a0)
    ctx->pc = 0x189f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x189f84: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x189f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x189f88: 0x8cc20150  lw          $v0, 0x150($a2)
    ctx->pc = 0x189f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
    // 0x189f8c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x189F8Cu;
    {
        const bool branch_taken_0x189f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x189F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F8Cu;
        // 0x189f90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f8c) {
            ctx->pc = 0x189FB4u;
            goto label_189fb4;
        }
    }
    ctx->pc = 0x189F94u;
    // 0x189f94: 0x8cc201e4  lw          $v0, 0x1E4($a2)
    ctx->pc = 0x189f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
    // 0x189f98: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x189f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x189f9c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x189f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189fa0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x189fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189fa4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x189fa4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189fa8: 0x0  nop
    ctx->pc = 0x189fa8u;
    // NOP
    // 0x189fac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x189FACu;
    {
        const bool branch_taken_0x189fac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189fac) {
            ctx->pc = 0x189FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189FACu;
            // 0x189fb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189FB4u;
            goto label_189fb4;
        }
    }
    ctx->pc = 0x189FB4u;
label_189fb4:
    // 0x189fb4: 0x54a00102  bnel        $a1, $zero, . + 4 + (0x102 << 2)
    ctx->pc = 0x189FB4u;
    {
        const bool branch_taken_0x189fb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x189fb4) {
            ctx->pc = 0x189FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189FB4u;
            // 0x189fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A3C0u;
            goto label_18a3c0;
        }
    }
    ctx->pc = 0x189FBCu;
label_189fbc:
    // 0x189fbc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x189fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189fc0: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x189FC0u;
    SET_GPR_U32(ctx, 31, 0x189FC8u);
    ctx->pc = 0x189FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189FC0u;
    // 0x189fc4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x189FC0u, 0x189FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189FC8u;
label_189fc8:
    // 0x189fc8: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x189fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189fcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x189fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x189fd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189fd4: 0x0  nop
    ctx->pc = 0x189fd4u;
    // NOP
    // 0x189fd8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x189fd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189fdc: 0x0  nop
    ctx->pc = 0x189fdcu;
    // NOP
    // 0x189fe0: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x189FE0u;
    {
        const bool branch_taken_0x189fe0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x189FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189FE0u;
        // 0x189fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189fe0) {
            ctx->pc = 0x18A058u;
            goto label_18a058;
        }
    }
    ctx->pc = 0x189FE8u;
    // 0x189fe8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x189fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x189fec: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x189fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x189ff0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x189ff0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x189ff4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x189ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x189ff8: 0x8ca21004  lw          $v0, 0x1004($a1)
    ctx->pc = 0x189ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4100)));
    // 0x189ffc: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x189ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x18a000: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x18a000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18a004: 0xc4a00070  lwc1        $f0, 0x70($a1)
    ctx->pc = 0x18a004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a008: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x18a008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x18a00c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x18a00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18a010: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x18a010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a014: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x18a014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18a018: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x18a018u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x18a01c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x18a01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a020: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x18a020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18a024: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x18a024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18a028: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x18a028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18a02c: 0xc061a1a  jal         func_186868
    ctx->pc = 0x18A02Cu;
    SET_GPR_U32(ctx, 31, 0x18A034u);
    ctx->pc = 0x18A030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A02Cu;
    // 0x18a030: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186868u, 0x18A02Cu, 0x18A034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A034u;
label_18a034:
    // 0x18a034: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18a034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a038: 0xc072596  jal         func_1C9658
    ctx->pc = 0x18A038u;
    SET_GPR_U32(ctx, 31, 0x18A040u);
    ctx->pc = 0x18A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A038u;
    // 0x18a03c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9658u, 0x18A038u, 0x18A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A040u;
label_18a040:
    // 0x18a040: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18A040u;
    {
        const bool branch_taken_0x18a040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A040u;
        // 0x18a044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a040) {
            ctx->pc = 0x18A074u;
            goto label_18a074;
        }
    }
    ctx->pc = 0x18A048u;
    // 0x18a048: 0xc062974  jal         func_18A5D0
    ctx->pc = 0x18A048u;
    SET_GPR_U32(ctx, 31, 0x18A050u);
    ctx->pc = 0x18A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A048u;
    // 0x18a04c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A5D0u, 0x18A048u, 0x18A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A050u;
label_18a050:
    // 0x18a050: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18A050u;
    {
        const bool branch_taken_0x18a050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A050u;
        // 0x18a054: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a050) {
            ctx->pc = 0x18A0A4u;
            goto label_18a0a4;
        }
    }
    ctx->pc = 0x18A058u;
label_18a058:
    // 0x18a058: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x18a058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x18a05c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x18a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x18a060: 0x34a5fdef  ori         $a1, $a1, 0xFDEF
    ctx->pc = 0x18a060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65007);
    // 0x18a064: 0xc07a592  jal         func_1E9648
    ctx->pc = 0x18A064u;
    SET_GPR_U32(ctx, 31, 0x18A06Cu);
    ctx->pc = 0x18A068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A064u;
    // 0x18a068: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9648u, 0x18A064u, 0x18A06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A06Cu;
label_18a06c:
    // 0x18a06c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18A06Cu;
    {
        const bool branch_taken_0x18a06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A06Cu;
        // 0x18a070: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a06c) {
            ctx->pc = 0x18A0A4u;
            goto label_18a0a4;
        }
    }
    ctx->pc = 0x18A074u;
label_18a074:
    // 0x18a074: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x18a074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x18a078: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x18a078u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x18a07c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18a07cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18a080: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x18a080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x18a084: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x18a084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18a088: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x18A088u;
    SET_GPR_U32(ctx, 31, 0x18A090u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x18A088u, 0x18A090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A090u;
label_18a090:
    // 0x18a090: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x18a090u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x18a094: 0xc06245e  jal         func_189178
    ctx->pc = 0x18A094u;
    SET_GPR_U32(ctx, 31, 0x18A09Cu);
    ctx->pc = 0x18A098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A094u;
    // 0x18a098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189178u, 0x18A094u, 0x18A09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A09Cu;
label_18a09c:
    // 0x18a09c: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x18a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x18a0a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18a0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18a0a4:
    // 0x18a0a4: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x18A0A4u;
    SET_GPR_U32(ctx, 31, 0x18A0ACu);
    ctx->pc = 0x18A0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A0A4u;
    // 0x18a0a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x18A0A4u, 0x18A0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A0ACu;
label_18a0ac:
    // 0x18a0ac: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x18A0ACu;
    {
        const bool branch_taken_0x18a0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A0ACu;
        // 0x18a0b0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a0ac) {
            ctx->pc = 0x18A5B8u;
            goto label_18a5b8;
        }
    }
    ctx->pc = 0x18A0B4u;
label_18a0b4:
    // 0x18a0b4: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x18a0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a0b8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18a0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x18a0bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18a0bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a0c0: 0x0  nop
    ctx->pc = 0x18a0c0u;
    // NOP
    // 0x18a0c4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x18a0c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a0c8: 0x0  nop
    ctx->pc = 0x18a0c8u;
    // NOP
    // 0x18a0cc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x18A0CCu;
    {
        const bool branch_taken_0x18a0cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A0CCu;
        // 0x18a0d0: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a0cc) {
            ctx->pc = 0x18A0F8u;
            goto label_18a0f8;
        }
    }
    ctx->pc = 0x18A0D4u;
    // 0x18a0d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18a0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18a0d8: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x18A0D8u;
    SET_GPR_U32(ctx, 31, 0x18A0E0u);
    ctx->pc = 0x18A0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A0D8u;
    // 0x18a0dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x18A0D8u, 0x18A0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A0E0u;
label_18a0e0:
    // 0x18a0e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18a0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18a0e4: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x18a0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x18a0e8: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x18A0E8u;
    SET_GPR_U32(ctx, 31, 0x18A0F0u);
    ctx->pc = 0x18A0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A0E8u;
    // 0x18a0ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x18A0E8u, 0x18A0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A0F0u;
label_18a0f0:
    // 0x18a0f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18A0F0u;
    {
        const bool branch_taken_0x18a0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A0F0u;
        // 0x18a0f4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a0f0) {
            ctx->pc = 0x18A11Cu;
            goto label_18a11c;
        }
    }
    ctx->pc = 0x18A0F8u;
label_18a0f8:
    // 0x18a0f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18a0fc: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x18a0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x18a100: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x18A100u;
    SET_GPR_U32(ctx, 31, 0x18A108u);
    ctx->pc = 0x18A104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A100u;
    // 0x18a104: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x18A100u, 0x18A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A108u;
label_18a108:
    // 0x18a108: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18a108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18a10c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x18a10cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x18a110: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x18A110u;
    SET_GPR_U32(ctx, 31, 0x18A118u);
    ctx->pc = 0x18A114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A110u;
    // 0x18a114: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x18A110u, 0x18A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A118u;
label_18a118:
    // 0x18a118: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18a118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_18a11c:
    // 0x18a11c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18a11cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a120: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x18a120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x18a124: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A124u;
    {
        const bool branch_taken_0x18a124 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A124u;
        // 0x18a128: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a124) {
            ctx->pc = 0x18A140u;
            goto label_18a140;
        }
    }
    ctx->pc = 0x18A12Cu;
    // 0x18a12c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18a12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18a130: 0x0  nop
    ctx->pc = 0x18a130u;
    // NOP
    // 0x18a134: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18a134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18a138: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A138u;
    {
        const bool branch_taken_0x18a138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a138) {
            ctx->pc = 0x18A158u;
            goto label_18a158;
        }
    }
    ctx->pc = 0x18A140u;
label_18a140:
    // 0x18a140: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18a140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18a144: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18a144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18a148: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18a148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18a14c: 0x0  nop
    ctx->pc = 0x18a14cu;
    // NOP
    // 0x18a150: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18a150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18a154: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x18a154u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_18a158:
    // 0x18a158: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18a158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x18a15c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18a15cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x18a160: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18a160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a164: 0xc6010088  lwc1        $f1, 0x88($s0)
    ctx->pc = 0x18a164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a168: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18a168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x18a16c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18a16cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a170: 0x0  nop
    ctx->pc = 0x18a170u;
    // NOP
    // 0x18a174: 0x45000058  bc1f        . + 4 + (0x58 << 2)
    ctx->pc = 0x18A174u;
    {
        const bool branch_taken_0x18a174 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A174u;
        // 0x18a178: 0x8e222b00  lw          $v0, 0x2B00($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a174) {
            ctx->pc = 0x18A2D8u;
            goto label_18a2d8;
        }
    }
    ctx->pc = 0x18A17Cu;
    // 0x18a17c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18a180: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x18a180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x18a184: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18a184u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18a188: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18a188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18a18c: 0xc4401074  lwc1        $f0, 0x1074($v0)
    ctx->pc = 0x18a18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a190: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18a190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a194: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x18a194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
    // 0x18a198: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A198u;
    {
        const bool branch_taken_0x18a198 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A198u;
        // 0x18a19c: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a198) {
            ctx->pc = 0x18A1B4u;
            goto label_18a1b4;
        }
    }
    ctx->pc = 0x18A1A0u;
    // 0x18a1a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18a1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18a1a4: 0x0  nop
    ctx->pc = 0x18a1a4u;
    // NOP
    // 0x18a1a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18a1a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18a1ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18A1ACu;
    {
        const bool branch_taken_0x18a1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a1ac) {
            ctx->pc = 0x18A1D0u;
            goto label_18a1d0;
        }
    }
    ctx->pc = 0x18A1B4u;
label_18a1b4:
    // 0x18a1b4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x18a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x18a1b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18a1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18a1bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18a1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18a1c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18a1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18a1c4: 0x0  nop
    ctx->pc = 0x18a1c4u;
    // NOP
    // 0x18a1c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18a1c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18a1cc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18a1ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18a1d0:
    // 0x18a1d0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18a1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x18a1d4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18a1d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x18a1d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18a1d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a1dc: 0x0  nop
    ctx->pc = 0x18a1dcu;
    // NOP
    // 0x18a1e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18a1e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18a1e4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x18a1e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a1e8: 0x0  nop
    ctx->pc = 0x18a1e8u;
    // NOP
    // 0x18a1ec: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x18A1ECu;
    {
        const bool branch_taken_0x18a1ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1ECu;
        // 0x18a1f0: 0x8e222b00  lw          $v0, 0x2B00($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a1ec) {
            ctx->pc = 0x18A254u;
            goto label_18a254;
        }
    }
    ctx->pc = 0x18A1F4u;
    // 0x18a1f4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A1F4u;
    {
        const bool branch_taken_0x18a1f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1F4u;
        // 0x18a1f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a1f4) {
            ctx->pc = 0x18A210u;
            goto label_18a210;
        }
    }
    ctx->pc = 0x18A1FCu;
    // 0x18a1fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a200: 0x0  nop
    ctx->pc = 0x18a200u;
    // NOP
    // 0x18a204: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18a204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18a208: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A208u;
    {
        const bool branch_taken_0x18a208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a208) {
            ctx->pc = 0x18A228u;
            goto label_18a228;
        }
    }
    ctx->pc = 0x18A210u;
label_18a210:
    // 0x18a210: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18a210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18a214: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18a214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18a218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a21c: 0x0  nop
    ctx->pc = 0x18a21cu;
    // NOP
    // 0x18a220: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18a220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18a224: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x18a224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_18a228:
    // 0x18a228: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18a228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x18a22c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18a22cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x18a230: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18a230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18a234: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x18a234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x18a238: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18a238u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18a23c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18a23cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18a240: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x18a240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x18a244: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x18a244u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x18a248: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x18a248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18a24c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x18A24Cu;
    {
        const bool branch_taken_0x18a24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A24Cu;
        // 0x18a250: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a24c) {
            ctx->pc = 0x18A2BCu;
            goto label_18a2bc;
        }
    }
    ctx->pc = 0x18A254u;
label_18a254:
    // 0x18a254: 0xc064b7a  jal         func_192DE8
    ctx->pc = 0x18A254u;
    SET_GPR_U32(ctx, 31, 0x18A25Cu);
    ctx->pc = 0x192DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192DE8u, 0x18A254u, 0x18A25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A25Cu;
label_18a25c:
    // 0x18a25c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18A25Cu;
    {
        const bool branch_taken_0x18a25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A25Cu;
        // 0x18a260: 0x8e222b00  lw          $v0, 0x2B00($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a25c) {
            ctx->pc = 0x18A2D8u;
            goto label_18a2d8;
        }
    }
    ctx->pc = 0x18A264u;
    // 0x18a264: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A264u;
    {
        const bool branch_taken_0x18a264 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A264u;
        // 0x18a268: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a264) {
            ctx->pc = 0x18A280u;
            goto label_18a280;
        }
    }
    ctx->pc = 0x18A26Cu;
    // 0x18a26c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a26cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a270: 0x0  nop
    ctx->pc = 0x18a270u;
    // NOP
    // 0x18a274: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18a274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18a278: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A278u;
    {
        const bool branch_taken_0x18a278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a278) {
            ctx->pc = 0x18A298u;
            goto label_18a298;
        }
    }
    ctx->pc = 0x18A280u;
label_18a280:
    // 0x18a280: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18a280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18a284: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18a284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18a288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a28c: 0x0  nop
    ctx->pc = 0x18a28cu;
    // NOP
    // 0x18a290: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18a290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18a294: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x18a294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_18a298:
    // 0x18a298: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18a298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x18a29c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18a29cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x18a2a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18a2a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18a2a4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x18a2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x18a2a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18a2a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18a2ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18a2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18a2b0: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x18a2b0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x18a2b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18a2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18a2b8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x18a2b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_18a2bc:
    // 0x18a2bc: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x18A2BCu;
    SET_GPR_U32(ctx, 31, 0x18A2C4u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x18A2BCu, 0x18A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A2C4u;
label_18a2c4:
    // 0x18a2c4: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x18a2c4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x18a2c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a2cc: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x18a2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x18a2d0: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x18A2D0u;
    {
        const bool branch_taken_0x18a2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A2D0u;
        // 0x18a2d4: 0xe6140098  swc1        $f20, 0x98($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a2d0) {
            ctx->pc = 0x18A5B4u;
            goto label_18a5b4;
        }
    }
    ctx->pc = 0x18A2D8u;
label_18a2d8:
    // 0x18a2d8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A2D8u;
    {
        const bool branch_taken_0x18a2d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A2D8u;
        // 0x18a2dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a2d8) {
            ctx->pc = 0x18A2F4u;
            goto label_18a2f4;
        }
    }
    ctx->pc = 0x18A2E0u;
    // 0x18a2e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18a2e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18a2e4: 0x0  nop
    ctx->pc = 0x18a2e4u;
    // NOP
    // 0x18a2e8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18a2e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18a2ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A2ECu;
    {
        const bool branch_taken_0x18a2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a2ec) {
            ctx->pc = 0x18A30Cu;
            goto label_18a30c;
        }
    }
    ctx->pc = 0x18A2F4u;
label_18a2f4:
    // 0x18a2f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18a2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18a2f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18a2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18a2fc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18a2fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18a300: 0x0  nop
    ctx->pc = 0x18a300u;
    // NOP
    // 0x18a304: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18a304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x18a308: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x18a308u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_18a30c:
    // 0x18a30c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18a30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x18a310: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18a310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x18a314: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18a314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a318: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x18a318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a31c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18a31cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x18a320: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18a320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a324: 0x0  nop
    ctx->pc = 0x18a324u;
    // NOP
    // 0x18a328: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x18A328u;
    {
        const bool branch_taken_0x18a328 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a328) {
            ctx->pc = 0x18A3D0u;
            goto label_18a3d0;
        }
    }
    ctx->pc = 0x18A330u;
    // 0x18a330: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18a330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18a334: 0x8c621050  lw          $v0, 0x1050($v1)
    ctx->pc = 0x18a334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4176)));
    // 0x18a338: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18A338u;
    {
        const bool branch_taken_0x18a338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a338) {
            ctx->pc = 0x18A37Cu;
            goto label_18a37c;
        }
    }
    ctx->pc = 0x18A340u;
    // 0x18a340: 0x8c640334  lw          $a0, 0x334($v1)
    ctx->pc = 0x18a340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    // 0x18a344: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x18a344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x18a348: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x18a348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x18a34c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18A34Cu;
    {
        const bool branch_taken_0x18a34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A34Cu;
        // 0x18a350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a34c) {
            ctx->pc = 0x18A374u;
            goto label_18a374;
        }
    }
    ctx->pc = 0x18A354u;
    // 0x18a354: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x18a354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x18a358: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x18a358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18a35c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x18a35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a360: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x18a360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a364: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18a364u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a368: 0x0  nop
    ctx->pc = 0x18a368u;
    // NOP
    // 0x18a36c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x18A36Cu;
    {
        const bool branch_taken_0x18a36c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a36c) {
            ctx->pc = 0x18A370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A36Cu;
            // 0x18a370: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A374u;
            goto label_18a374;
        }
    }
    ctx->pc = 0x18A374u;
label_18a374:
    // 0x18a374: 0x54a00012  bnel        $a1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x18A374u;
    {
        const bool branch_taken_0x18a374 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a374) {
            ctx->pc = 0x18A378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A374u;
            // 0x18a378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A3C0u;
            goto label_18a3c0;
        }
    }
    ctx->pc = 0x18A37Cu;
label_18a37c:
    // 0x18a37c: 0xc061a1e  jal         func_186878
    ctx->pc = 0x18A37Cu;
    SET_GPR_U32(ctx, 31, 0x18A384u);
    ctx->pc = 0x18A380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A37Cu;
    // 0x18a380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x18A37Cu, 0x18A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A384u;
label_18a384:
    // 0x18a384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a388: 0xc061a1e  jal         func_186878
    ctx->pc = 0x18A388u;
    SET_GPR_U32(ctx, 31, 0x18A390u);
    ctx->pc = 0x18A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A388u;
    // 0x18a38c: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x18A388u, 0x18A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A390u;
label_18a390:
    // 0x18a390: 0xc06e0e6  jal         func_1B8398
    ctx->pc = 0x18A390u;
    SET_GPR_U32(ctx, 31, 0x18A398u);
    ctx->pc = 0x18A394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A390u;
    // 0x18a394: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8398u, 0x18A390u, 0x18A398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A398u;
label_18a398:
    // 0x18a398: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18A398u;
    {
        const bool branch_taken_0x18a398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a398) {
            ctx->pc = 0x18A3D0u;
            goto label_18a3d0;
        }
    }
    ctx->pc = 0x18A3A0u;
    // 0x18a3a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18a3a4: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x18a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x18a3a8: 0x8c640334  lw          $a0, 0x334($v1)
    ctx->pc = 0x18a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    // 0x18a3ac: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x18a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x18a3b0: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x18a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x18a3b4: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x18a3b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x18a3b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A3B8u;
    {
        const bool branch_taken_0x18a3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3B8u;
        // 0x18a3bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a3b8) {
            ctx->pc = 0x18A3D0u;
            goto label_18a3d0;
        }
    }
    ctx->pc = 0x18A3C0u;
label_18a3c0:
    // 0x18a3c0: 0xc062974  jal         func_18A5D0
    ctx->pc = 0x18A3C0u;
    SET_GPR_U32(ctx, 31, 0x18A3C8u);
    ctx->pc = 0x18A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A3C0u;
    // 0x18a3c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A5D0u, 0x18A3C0u, 0x18A3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A3C8u;
label_18a3c8:
    // 0x18a3c8: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x18A3C8u;
    {
        const bool branch_taken_0x18a3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3C8u;
        // 0x18a3cc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a3c8) {
            ctx->pc = 0x18A5B8u;
            goto label_18a5b8;
        }
    }
    ctx->pc = 0x18A3D0u;
label_18a3d0:
    // 0x18a3d0: 0xc061a26  jal         func_186898
    ctx->pc = 0x18A3D0u;
    SET_GPR_U32(ctx, 31, 0x18A3D8u);
    ctx->pc = 0x18A3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A3D0u;
    // 0x18a3d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x18A3D0u, 0x18A3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A3D8u;
label_18a3d8:
    // 0x18a3d8: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x18a3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x18a3dc: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x18A3DCu;
    SET_GPR_U32(ctx, 31, 0x18A3E4u);
    ctx->pc = 0x18A3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A3DCu;
    // 0x18a3e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x18A3DCu, 0x18A3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A3E4u;
label_18a3e4:
    // 0x18a3e4: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x18A3E4u;
    {
        const bool branch_taken_0x18a3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a3e4) {
            ctx->pc = 0x18A3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A3E4u;
            // 0x18a3e8: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A468u;
            goto label_18a468;
        }
    }
    ctx->pc = 0x18A3ECu;
    // 0x18a3ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18a3f0: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x18a3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x18a3f4: 0x8c420334  lw          $v0, 0x334($v0)
    ctx->pc = 0x18a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x18a3f8: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x18a3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x18a3fc: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18A3FCu;
    {
        const bool branch_taken_0x18a3fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x18A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3FCu;
        // 0x18a400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a3fc) {
            ctx->pc = 0x18A424u;
            goto label_18a424;
        }
    }
    ctx->pc = 0x18A404u;
    // 0x18a404: 0x8c4201e4  lw          $v0, 0x1E4($v0)
    ctx->pc = 0x18a404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
    // 0x18a408: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x18a408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18a40c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x18a40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a410: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x18a410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a414: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18a414u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a418: 0x0  nop
    ctx->pc = 0x18a418u;
    // NOP
    // 0x18a41c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x18A41Cu;
    {
        const bool branch_taken_0x18a41c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a41c) {
            ctx->pc = 0x18A420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A41Cu;
            // 0x18a420: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A424u;
            goto label_18a424;
        }
    }
    ctx->pc = 0x18A424u;
label_18a424:
    // 0x18a424: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x18A424u;
    {
        const bool branch_taken_0x18a424 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a424) {
            ctx->pc = 0x18A428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A424u;
            // 0x18a428: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A468u;
            goto label_18a468;
        }
    }
    ctx->pc = 0x18A42Cu;
    // 0x18a42c: 0xc061a1e  jal         func_186878
    ctx->pc = 0x18A42Cu;
    SET_GPR_U32(ctx, 31, 0x18A434u);
    ctx->pc = 0x18A430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A42Cu;
    // 0x18a430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x18A42Cu, 0x18A434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A434u;
label_18a434:
    // 0x18a434: 0x8c43021c  lw          $v1, 0x21C($v0)
    ctx->pc = 0x18a434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
    // 0x18a438: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x18A438u;
    {
        const bool branch_taken_0x18a438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a438) {
            ctx->pc = 0x18A43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A438u;
            // 0x18a43c: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A468u;
            goto label_18a468;
        }
    }
    ctx->pc = 0x18A440u;
    // 0x18a440: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x18a440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x18a444: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x18a444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18a448: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x18a448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x18a44c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x18a44cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18a450: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x18A450u;
    SET_GPR_U32(ctx, 31, 0x18A458u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x18A450u, 0x18A458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A458u;
label_18a458:
    // 0x18a458: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x18a458u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x18a45c: 0xc06245e  jal         func_189178
    ctx->pc = 0x18A45Cu;
    SET_GPR_U32(ctx, 31, 0x18A464u);
    ctx->pc = 0x18A460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A45Cu;
    // 0x18a460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189178u, 0x18A45Cu, 0x18A464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A464u;
label_18a464:
    // 0x18a464: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x18a464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_18a468:
    // 0x18a468: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18a468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18a46c: 0x54620052  bnel        $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x18A46Cu;
    {
        const bool branch_taken_0x18a46c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18a46c) {
            ctx->pc = 0x18A470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A46Cu;
            // 0x18a470: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A5B8u;
            goto label_18a5b8;
        }
    }
    ctx->pc = 0x18A474u;
    // 0x18a474: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18a474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18a478: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x18A478u;
    SET_GPR_U32(ctx, 31, 0x18A480u);
    ctx->pc = 0x18A47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A478u;
    // 0x18a47c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x18A478u, 0x18A480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A480u;
label_18a480:
    // 0x18a480: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x18a480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a484: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18a484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18a488: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18a488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a48c: 0x0  nop
    ctx->pc = 0x18a48cu;
    // NOP
    // 0x18a490: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x18a490u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a494: 0x0  nop
    ctx->pc = 0x18a494u;
    // NOP
    // 0x18a498: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x18A498u;
    {
        const bool branch_taken_0x18a498 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A498u;
        // 0x18a49c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a498) {
            ctx->pc = 0x18A508u;
            goto label_18a508;
        }
    }
    ctx->pc = 0x18A4A0u;
    // 0x18a4a0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18a4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18a4a4: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x18a4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x18a4a8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x18a4a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x18a4ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18a4acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18a4b0: 0x8ca21004  lw          $v0, 0x1004($a1)
    ctx->pc = 0x18a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4100)));
    // 0x18a4b4: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x18a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x18a4b8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x18a4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18a4bc: 0xc4a00070  lwc1        $f0, 0x70($a1)
    ctx->pc = 0x18a4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a4c0: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x18a4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x18a4c4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x18a4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18a4c8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x18a4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18a4cc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x18a4ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18a4d0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x18a4d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x18a4d4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x18a4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a4d8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x18a4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18a4dc: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x18a4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18a4e0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x18a4e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18a4e4: 0xc061a1a  jal         func_186868
    ctx->pc = 0x18A4E4u;
    SET_GPR_U32(ctx, 31, 0x18A4ECu);
    ctx->pc = 0x18A4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A4E4u;
    // 0x18a4e8: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186868u, 0x18A4E4u, 0x18A4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A4ECu;
label_18a4ec:
    // 0x18a4ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18a4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a4f0: 0xc072596  jal         func_1C9658
    ctx->pc = 0x18A4F0u;
    SET_GPR_U32(ctx, 31, 0x18A4F8u);
    ctx->pc = 0x18A4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A4F0u;
    // 0x18a4f4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9658u, 0x18A4F0u, 0x18A4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A4F8u;
label_18a4f8:
    // 0x18a4f8: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x18A4F8u;
    {
        const bool branch_taken_0x18a4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4F8u;
        // 0x18a4fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a4f8) {
            ctx->pc = 0x18A5ACu;
            goto label_18a5ac;
        }
    }
    ctx->pc = 0x18A500u;
    // 0x18a500: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x18A500u;
    {
        const bool branch_taken_0x18a500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A500u;
        // 0x18a504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a500) {
            ctx->pc = 0x18A58Cu;
            goto label_18a58c;
        }
    }
    ctx->pc = 0x18A508u;
label_18a508:
    // 0x18a508: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x18a508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x18a50c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x18a50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x18a510: 0x34a5fdef  ori         $a1, $a1, 0xFDEF
    ctx->pc = 0x18a510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65007);
    // 0x18a514: 0xc07a592  jal         func_1E9648
    ctx->pc = 0x18A514u;
    SET_GPR_U32(ctx, 31, 0x18A51Cu);
    ctx->pc = 0x18A518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A514u;
    // 0x18a518: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9648u, 0x18A514u, 0x18A51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A51Cu;
label_18a51c:
    // 0x18a51c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x18A51Cu;
    {
        const bool branch_taken_0x18a51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A51Cu;
        // 0x18a520: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a51c) {
            ctx->pc = 0x18A5A8u;
            goto label_18a5a8;
        }
    }
    ctx->pc = 0x18A524u;
    // 0x18a524: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18a524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a528: 0x8c432b1c  lw          $v1, 0x2B1C($v0)
    ctx->pc = 0x18a528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11036)));
    // 0x18a52c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x18A52Cu;
    {
        const bool branch_taken_0x18a52c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A52Cu;
        // 0x18a530: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a52c) {
            ctx->pc = 0x18A584u;
            goto label_18a584;
        }
    }
    ctx->pc = 0x18A534u;
    // 0x18a534: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18a534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18a538: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x18a538u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a53c: 0x8c452b20  lw          $a1, 0x2B20($v0)
    ctx->pc = 0x18a53cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482B20u));
    // 0x18a540: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x18a540u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a544: 0x0  nop
    ctx->pc = 0x18a544u;
    // NOP
label_18a548:
    // 0x18a548: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18a548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18a54c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x18a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x18a550: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x18a550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x18a554: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18A554u;
    {
        const bool branch_taken_0x18a554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A554u;
        // 0x18a558: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a554) {
            ctx->pc = 0x18A560u;
            goto label_18a560;
        }
    }
    ctx->pc = 0x18A55Cu;
    // 0x18a55c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x18a55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18a560:
    // 0x18a560: 0x8c820334  lw          $v0, 0x334($a0)
    ctx->pc = 0x18a560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x18a564: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18a564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18a568: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x18a568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x18a56c: 0xe8202b  sltu        $a0, $a3, $t0
    ctx->pc = 0x18a56cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x18a570: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x18a570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x18a574: 0x2463ffcf  addiu       $v1, $v1, -0x31
    ctx->pc = 0x18a574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
    // 0x18a578: 0x2c630007  sltiu       $v1, $v1, 0x7
    ctx->pc = 0x18a578u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x18a57c: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x18A57Cu;
    {
        const bool branch_taken_0x18a57c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A57Cu;
        // 0x18a580: 0x123300b  movn        $a2, $t1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a57c) {
            ctx->pc = 0x18A548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a548;
        }
    }
    ctx->pc = 0x18A584u;
label_18a584:
    // 0x18a584: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A584u;
    {
        const bool branch_taken_0x18a584 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A584u;
        // 0x18a588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a584) {
            ctx->pc = 0x18A59Cu;
            goto label_18a59c;
        }
    }
    ctx->pc = 0x18A58Cu;
label_18a58c:
    // 0x18a58c: 0xc062974  jal         func_18A5D0
    ctx->pc = 0x18A58Cu;
    SET_GPR_U32(ctx, 31, 0x18A594u);
    ctx->pc = 0x18A590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A58Cu;
    // 0x18a590: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A5D0u, 0x18A58Cu, 0x18A594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A594u;
label_18a594:
    // 0x18a594: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18A594u;
    {
        const bool branch_taken_0x18a594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A594u;
        // 0x18a598: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a594) {
            ctx->pc = 0x18A5ACu;
            goto label_18a5ac;
        }
    }
    ctx->pc = 0x18A59Cu;
label_18a59c:
    // 0x18a59c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18a59cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18a5a0: 0xc06275c  jal         func_189D70
    ctx->pc = 0x18A5A0u;
    SET_GPR_U32(ctx, 31, 0x18A5A8u);
    ctx->pc = 0x18A5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A5A0u;
    // 0x18a5a4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x189D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189D70u, 0x18A5A0u, 0x18A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A5A8u;
label_18a5a8:
    // 0x18a5a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18a5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18a5ac:
    // 0x18a5ac: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x18A5ACu;
    SET_GPR_U32(ctx, 31, 0x18A5B4u);
    ctx->pc = 0x18A5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A5ACu;
    // 0x18a5b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x18A5ACu, 0x18A5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A5B4u;
label_18a5b4:
    // 0x18a5b4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x18a5b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18a5b8:
    // 0x18a5b8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x18a5b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18a5bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18a5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a5c0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x18a5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18a5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x18A5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5C4u;
        // 0x18a5c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A5CCu;
    // 0x18a5cc: 0x0  nop
    ctx->pc = 0x18a5ccu;
    // NOP
    ctx->pc = 0x18a5d0u;
}
