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

// Function: sub_00159D98
// Address: 0x159d98 - 0x159f08
void sub_00159D98_0x159d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159D98_0x159d98");
#endif

    switch (ctx->pc) {
        case 0x159dbcu: goto label_159dbc;
        case 0x159dc8u: goto label_159dc8;
        case 0x159ddcu: goto label_159ddc;
        case 0x159dfcu: goto label_159dfc;
        case 0x159eb8u: goto label_159eb8;
        case 0x159ec4u: goto label_159ec4;
        case 0x159ed0u: goto label_159ed0;
        case 0x159edcu: goto label_159edc;
        case 0x159eecu: goto label_159eec;
        case 0x159ef4u: goto label_159ef4;
        default: break;
    }

    ctx->pc = 0x159d98u;

    // 0x159d98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x159d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x159d9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159da0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x159da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x159da4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x159da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159da8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x159da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159dac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x159dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x159db0: 0xae060218  sw          $a2, 0x218($s0)
    ctx->pc = 0x159db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 6));
    // 0x159db4: 0xc046002  jal         func_118008
    ctx->pc = 0x159DB4u;
    SET_GPR_U32(ctx, 31, 0x159DBCu);
    ctx->pc = 0x159DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159DB4u;
    // 0x159db8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x159DB4u, 0x159DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159DBCu;
label_159dbc:
    // 0x159dbc: 0xae0202e0  sw          $v0, 0x2E0($s0)
    ctx->pc = 0x159dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
    // 0x159dc0: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x159DC0u;
    SET_GPR_U32(ctx, 31, 0x159DC8u);
    ctx->pc = 0x159DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159DC0u;
    // 0x159dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x159DC0u, 0x159DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159DC8u;
label_159dc8:
    // 0x159dc8: 0x8e0202e0  lw          $v0, 0x2E0($s0)
    ctx->pc = 0x159dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x159dcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159dd0: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x159dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    // 0x159dd4: 0xc046086  jal         func_118218
    ctx->pc = 0x159DD4u;
    SET_GPR_U32(ctx, 31, 0x159DDCu);
    ctx->pc = 0x159DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159DD4u;
    // 0x159dd8: 0xae0202e4  sw          $v0, 0x2E4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x159DD4u, 0x159DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159DDCu;
label_159ddc:
    // 0x159ddc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x159DDCu;
    {
        const bool branch_taken_0x159ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159ddc) {
            ctx->pc = 0x159DF4u;
            goto label_159df4;
        }
    }
    ctx->pc = 0x159DE4u;
    // 0x159de4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x159de4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159de8: 0xfa010300  sqc2        $vf1, 0x300($s0)
    ctx->pc = 0x159de8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 768), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x159dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x159decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159df0: 0xae020310  sw          $v0, 0x310($s0)
    ctx->pc = 0x159df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 2));
label_159df4:
    // 0x159df4: 0xc046272  jal         func_1189C8
    ctx->pc = 0x159DF4u;
    SET_GPR_U32(ctx, 31, 0x159DFCu);
    ctx->pc = 0x159DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159DF4u;
    // 0x159df8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x159DF4u, 0x159DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159DFCu;
label_159dfc:
    // 0x159dfc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x159dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x159e00: 0x0  nop
    ctx->pc = 0x159e00u;
    // NOP
    // 0x159e04: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x159e04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x159e08: 0xc60002e8  lwc1        $f0, 0x2E8($s0)
    ctx->pc = 0x159e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159e0c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x159e0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159e10: 0x0  nop
    ctx->pc = 0x159e10u;
    // NOP
    // 0x159e14: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x159E14u;
    {
        const bool branch_taken_0x159e14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x159e14) {
            ctx->pc = 0x159E2Cu;
            goto label_159e2c;
        }
    }
    ctx->pc = 0x159E1Cu;
    // 0x159e1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x159e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x159e20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x159e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159e24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x159E24u;
    {
        const bool branch_taken_0x159e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E24u;
        // 0x159e28: 0x460018c0  add.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159e24) {
            ctx->pc = 0x159E50u;
            goto label_159e50;
        }
    }
    ctx->pc = 0x159E2Cu;
label_159e2c:
    // 0x159e2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159e2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159e30: 0x0  nop
    ctx->pc = 0x159e30u;
    // NOP
    // 0x159e34: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x159e34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159e38: 0x0  nop
    ctx->pc = 0x159e38u;
    // NOP
    // 0x159e3c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x159E3Cu;
    {
        const bool branch_taken_0x159e3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x159e3c) {
            ctx->pc = 0x159E50u;
            goto label_159e50;
        }
    }
    ctx->pc = 0x159E44u;
    // 0x159e44: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x159e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x159e48: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x159e48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x159e4c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x159e4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_159e50:
    // 0x159e50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x159e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x159e54: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x159e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x159e58: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x159e58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x159e5c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x159e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x159e60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x159e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159e64: 0x46041800  add.s       $f0, $f3, $f4
    ctx->pc = 0x159e64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x159e68: 0xe60302ec  swc1        $f3, 0x2EC($s0)
    ctx->pc = 0x159e68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 748), bits); }
    // 0x159e6c: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x159e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159e70: 0xe60202f0  swc1        $f2, 0x2F0($s0)
    ctx->pc = 0x159e70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 752), bits); }
    // 0x159e74: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x159e74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x159e78: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x159E78u;
    {
        const bool branch_taken_0x159e78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x159E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159E78u;
        // 0x159e7c: 0xe60002f4  swc1        $f0, 0x2F4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 756), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159e78) {
            ctx->pc = 0x159E88u;
            goto label_159e88;
        }
    }
    ctx->pc = 0x159E80u;
    // 0x159e80: 0x46041801  sub.s       $f0, $f3, $f4
    ctx->pc = 0x159e80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x159e84: 0xe60002ec  swc1        $f0, 0x2EC($s0)
    ctx->pc = 0x159e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 748), bits); }
label_159e88:
    // 0x159e88: 0xc60102ec  lwc1        $f1, 0x2EC($s0)
    ctx->pc = 0x159e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159e8c: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x159e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x159e90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x159e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159e94: 0x0  nop
    ctx->pc = 0x159e94u;
    // NOP
    // 0x159e98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x159e98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159e9c: 0x0  nop
    ctx->pc = 0x159e9cu;
    // NOP
    // 0x159ea0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x159EA0u;
    {
        const bool branch_taken_0x159ea0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x159EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159EA0u;
        // 0x159ea4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ea0) {
            ctx->pc = 0x159EACu;
            goto label_159eac;
        }
    }
    ctx->pc = 0x159EA8u;
    // 0x159ea8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x159ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159eac:
    // 0x159eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159eb0: 0xc0460e4  jal         func_118390
    ctx->pc = 0x159EB0u;
    SET_GPR_U32(ctx, 31, 0x159EB8u);
    ctx->pc = 0x159EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159EB0u;
    // 0x159eb4: 0xae0202f8  sw          $v0, 0x2F8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118390u, 0x159EB0u, 0x159EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159EB8u;
label_159eb8:
    // 0x159eb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ebc: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x159EBCu;
    SET_GPR_U32(ctx, 31, 0x159EC4u);
    ctx->pc = 0x159EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159EBCu;
    // 0x159ec0: 0xae020318  sw          $v0, 0x318($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 792), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x159EBCu, 0x159EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159EC4u;
label_159ec4:
    // 0x159ec4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ec8: 0xc0461b0  jal         func_1186C0
    ctx->pc = 0x159EC8u;
    SET_GPR_U32(ctx, 31, 0x159ED0u);
    ctx->pc = 0x159ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159EC8u;
    // 0x159ecc: 0xae020314  sw          $v0, 0x314($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1186C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1186C0u, 0x159EC8u, 0x159ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159ED0u;
label_159ed0:
    // 0x159ed0: 0xae020b6c  sw          $v0, 0xB6C($s0)
    ctx->pc = 0x159ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2924), GPR_U32(ctx, 2));
    // 0x159ed4: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x159ED4u;
    SET_GPR_U32(ctx, 31, 0x159EDCu);
    ctx->pc = 0x159ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159ED4u;
    // 0x159ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x159ED4u, 0x159EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159EDCu;
label_159edc:
    // 0x159edc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x159edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x159ee0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x159ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ee4: 0xc042136  jal         func_1084D8
    ctx->pc = 0x159EE4u;
    SET_GPR_U32(ctx, 31, 0x159EECu);
    ctx->pc = 0x159EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159EE4u;
    // 0x159ee8: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x159EE4u, 0x159EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159EECu;
label_159eec:
    // 0x159eec: 0xc057f88  jal         func_15FE20
    ctx->pc = 0x159EECu;
    SET_GPR_U32(ctx, 31, 0x159EF4u);
    ctx->pc = 0x159EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159EECu;
    // 0x159ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FE20u, 0x159EECu, 0x159EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159EF4u;
label_159ef4:
    // 0x159ef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x159ef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159ef8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x159ef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x159efc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x159efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159f00: 0x3e00008  jr          $ra
    ctx->pc = 0x159F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F00u;
        // 0x159f04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159F08u;
}
