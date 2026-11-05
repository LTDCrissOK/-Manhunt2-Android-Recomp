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

// Function: sub_00215D80
// Address: 0x215d80 - 0x215ed0
void sub_00215D80_0x215d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215D80_0x215d80");
#endif

    switch (ctx->pc) {
        case 0x215d80u: goto label_215d80;
        case 0x215d84u: goto label_215d84;
        case 0x215d88u: goto label_215d88;
        case 0x215d8cu: goto label_215d8c;
        case 0x215d90u: goto label_215d90;
        case 0x215d94u: goto label_215d94;
        case 0x215d98u: goto label_215d98;
        case 0x215d9cu: goto label_215d9c;
        case 0x215da0u: goto label_215da0;
        case 0x215da4u: goto label_215da4;
        case 0x215da8u: goto label_215da8;
        case 0x215dacu: goto label_215dac;
        case 0x215db0u: goto label_215db0;
        case 0x215db4u: goto label_215db4;
        case 0x215db8u: goto label_215db8;
        case 0x215dbcu: goto label_215dbc;
        case 0x215dc0u: goto label_215dc0;
        case 0x215dc4u: goto label_215dc4;
        case 0x215dc8u: goto label_215dc8;
        case 0x215dccu: goto label_215dcc;
        case 0x215dd0u: goto label_215dd0;
        case 0x215dd4u: goto label_215dd4;
        case 0x215dd8u: goto label_215dd8;
        case 0x215ddcu: goto label_215ddc;
        case 0x215de0u: goto label_215de0;
        case 0x215de4u: goto label_215de4;
        case 0x215de8u: goto label_215de8;
        case 0x215decu: goto label_215dec;
        case 0x215df0u: goto label_215df0;
        case 0x215df4u: goto label_215df4;
        case 0x215df8u: goto label_215df8;
        case 0x215dfcu: goto label_215dfc;
        case 0x215e00u: goto label_215e00;
        case 0x215e04u: goto label_215e04;
        case 0x215e08u: goto label_215e08;
        case 0x215e0cu: goto label_215e0c;
        case 0x215e10u: goto label_215e10;
        case 0x215e14u: goto label_215e14;
        case 0x215e18u: goto label_215e18;
        case 0x215e1cu: goto label_215e1c;
        case 0x215e20u: goto label_215e20;
        case 0x215e24u: goto label_215e24;
        case 0x215e28u: goto label_215e28;
        case 0x215e2cu: goto label_215e2c;
        case 0x215e30u: goto label_215e30;
        case 0x215e34u: goto label_215e34;
        case 0x215e38u: goto label_215e38;
        case 0x215e3cu: goto label_215e3c;
        case 0x215e40u: goto label_215e40;
        case 0x215e44u: goto label_215e44;
        case 0x215e48u: goto label_215e48;
        case 0x215e4cu: goto label_215e4c;
        case 0x215e50u: goto label_215e50;
        case 0x215e54u: goto label_215e54;
        case 0x215e58u: goto label_215e58;
        case 0x215e5cu: goto label_215e5c;
        case 0x215e60u: goto label_215e60;
        case 0x215e64u: goto label_215e64;
        case 0x215e68u: goto label_215e68;
        case 0x215e6cu: goto label_215e6c;
        case 0x215e70u: goto label_215e70;
        case 0x215e74u: goto label_215e74;
        case 0x215e78u: goto label_215e78;
        case 0x215e7cu: goto label_215e7c;
        case 0x215e80u: goto label_215e80;
        case 0x215e84u: goto label_215e84;
        case 0x215e88u: goto label_215e88;
        case 0x215e8cu: goto label_215e8c;
        case 0x215e90u: goto label_215e90;
        case 0x215e94u: goto label_215e94;
        case 0x215e98u: goto label_215e98;
        case 0x215e9cu: goto label_215e9c;
        case 0x215ea0u: goto label_215ea0;
        case 0x215ea4u: goto label_215ea4;
        case 0x215ea8u: goto label_215ea8;
        case 0x215eacu: goto label_215eac;
        case 0x215eb0u: goto label_215eb0;
        case 0x215eb4u: goto label_215eb4;
        case 0x215eb8u: goto label_215eb8;
        case 0x215ebcu: goto label_215ebc;
        case 0x215ec0u: goto label_215ec0;
        case 0x215ec4u: goto label_215ec4;
        case 0x215ec8u: goto label_215ec8;
        case 0x215eccu: goto label_215ecc;
        default: break;
    }

    ctx->pc = 0x215d80u;

label_215d80:
    // 0x215d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x215d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_215d84:
    // 0x215d84: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x215d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_215d88:
    // 0x215d88: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x215d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_215d8c:
    // 0x215d8c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x215d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_215d90:
    // 0x215d90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x215d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_215d94:
    // 0x215d94: 0x8e2400c4  lw          $a0, 0xC4($s1)
    ctx->pc = 0x215d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_215d98:
    // 0x215d98: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_215d9c:
    if (ctx->pc == 0x215D9Cu) {
        ctx->pc = 0x215D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D98u;
        // 0x215d9c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215DA0u;
        goto label_215da0;
    }
    ctx->pc = 0x215D98u;
    {
        const bool branch_taken_0x215d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D98u;
        // 0x215d9c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d98) {
            ctx->pc = 0x215DF0u;
            goto label_215df0;
        }
    }
    ctx->pc = 0x215DA0u;
label_215da0:
    // 0x215da0: 0xc0767f2  jal         func_1D9FC8
label_215da4:
    if (ctx->pc == 0x215DA4u) {
        ctx->pc = 0x215DA8u;
        goto label_215da8;
    }
    ctx->pc = 0x215DA0u;
    SET_GPR_U32(ctx, 31, 0x215DA8u);
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x215DA0u, 0x215DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215DA8u;
label_215da8:
    // 0x215da8: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x215da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_215dac:
    // 0x215dac: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x215dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_215db0:
    // 0x215db0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x215db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_215db4:
    // 0x215db4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x215db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_215db8:
    // 0x215db8: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x215db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215dbc:
    // 0x215dbc: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x215dbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_215dc0:
    // 0x215dc0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x215dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_215dc4:
    // 0x215dc4: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x215dc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_215dc8:
    // 0x215dc8: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x215dc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_215dcc:
    // 0x215dcc: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x215dccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_215dd0:
    // 0x215dd0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x215dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215dd4:
    // 0x215dd4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x215dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_215dd8:
    // 0x215dd8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x215dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_215ddc:
    // 0x215ddc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x215ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_215de0:
    // 0x215de0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x215de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215de4:
    // 0x215de4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x215de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_215de8:
    // 0x215de8: 0x10000025  b           . + 4 + (0x25 << 2)
label_215dec:
    if (ctx->pc == 0x215DECu) {
        ctx->pc = 0x215DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215DE8u;
        // 0x215dec: 0xc4a1000c  lwc1        $f1, 0xC($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x215DF0u;
        goto label_215df0;
    }
    ctx->pc = 0x215DE8u;
    {
        const bool branch_taken_0x215de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215DE8u;
        // 0x215dec: 0xc4a1000c  lwc1        $f1, 0xC($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215de8) {
            ctx->pc = 0x215E80u;
            goto label_215e80;
        }
    }
    ctx->pc = 0x215DF0u;
label_215df0:
    // 0x215df0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x215df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_215df4:
    // 0x215df4: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x215df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_215df8:
    // 0x215df8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x215df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_215dfc:
    // 0x215dfc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x215dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_215e00:
    // 0x215e00: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_215e04:
    if (ctx->pc == 0x215E04u) {
        ctx->pc = 0x215E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E00u;
        // 0x215e04: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215E08u;
        goto label_215e08;
    }
    ctx->pc = 0x215E00u;
    {
        const bool branch_taken_0x215e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x215E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E00u;
        // 0x215e04: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e00) {
            ctx->pc = 0x215E38u;
            goto label_215e38;
        }
    }
    ctx->pc = 0x215E08u;
label_215e08:
    // 0x215e08: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x215e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_215e0c:
    // 0x215e0c: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x215e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_215e10:
    // 0x215e10: 0x40f809  jalr        $v0
label_215e14:
    if (ctx->pc == 0x215E14u) {
        ctx->pc = 0x215E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E10u;
        // 0x215e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215E18u;
        goto label_215e18;
    }
    ctx->pc = 0x215E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x215E18u);
        ctx->pc = 0x215E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E10u;
        // 0x215e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215E10u, 0x215E18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215E18u;
label_215e18:
    // 0x215e18: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x215e18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_215e1c:
    // 0x215e1c: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x215e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_215e20:
    // 0x215e20: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x215e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_215e24:
    // 0x215e24: 0xc44001a4  lwc1        $f0, 0x1A4($v0)
    ctx->pc = 0x215e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215e28:
    // 0x215e28: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x215e28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_215e2c:
    // 0x215e2c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x215e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_215e30:
    // 0x215e30: 0x10000022  b           . + 4 + (0x22 << 2)
label_215e34:
    if (ctx->pc == 0x215E34u) {
        ctx->pc = 0x215E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E30u;
        // 0x215e34: 0xe6010030  swc1        $f1, 0x30($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x215E38u;
        goto label_215e38;
    }
    ctx->pc = 0x215E30u;
    {
        const bool branch_taken_0x215e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E30u;
        // 0x215e34: 0xe6010030  swc1        $f1, 0x30($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e30) {
            ctx->pc = 0x215EBCu;
            goto label_215ebc;
        }
    }
    ctx->pc = 0x215E38u;
label_215e38:
    // 0x215e38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x215e38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215e3c:
    // 0x215e3c: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x215e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_215e40:
    // 0x215e40: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x215e40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_215e44:
    // 0x215e44: 0x0  nop
    ctx->pc = 0x215e44u;
    // NOP
label_215e48:
    // 0x215e48: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_215e4c:
    if (ctx->pc == 0x215E4Cu) {
        ctx->pc = 0x215E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E48u;
        // 0x215e4c: 0x26030010  addiu       $v1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215E50u;
        goto label_215e50;
    }
    ctx->pc = 0x215E48u;
    {
        const bool branch_taken_0x215e48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E48u;
        // 0x215e4c: 0x26030010  addiu       $v1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e48) {
            ctx->pc = 0x215E94u;
            goto label_215e94;
        }
    }
    ctx->pc = 0x215E50u;
label_215e50:
    // 0x215e50: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x215e50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_215e54:
    // 0x215e54: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x215e54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_215e58:
    // 0x215e58: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x215e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_215e5c:
    // 0x215e5c: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x215e5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_215e60:
    // 0x215e60: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x215e60u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_215e64:
    // 0x215e64: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x215e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215e68:
    // 0x215e68: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x215e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_215e6c:
    // 0x215e6c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x215e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_215e70:
    // 0x215e70: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x215e70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_215e74:
    // 0x215e74: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x215e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215e78:
    // 0x215e78: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x215e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_215e7c:
    // 0x215e7c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x215e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_215e80:
    // 0x215e80: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x215e80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_215e84:
    // 0x215e84: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x215e84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_215e88:
    // 0x215e88: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x215e88u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_215e8c:
    // 0x215e8c: 0x1000000c  b           . + 4 + (0xC << 2)
label_215e90:
    if (ctx->pc == 0x215E90u) {
        ctx->pc = 0x215E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E8Cu;
        // 0x215e90: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215E94u;
        goto label_215e94;
    }
    ctx->pc = 0x215E8Cu;
    {
        const bool branch_taken_0x215e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E8Cu;
        // 0x215e90: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e8c) {
            ctx->pc = 0x215EC0u;
            goto label_215ec0;
        }
    }
    ctx->pc = 0x215E94u;
label_215e94:
    // 0x215e94: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x215e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_215e98:
    // 0x215e98: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x215e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_215e9c:
    // 0x215e9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x215e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_215ea0:
    // 0x215ea0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x215ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_215ea4:
    // 0x215ea4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x215ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_215ea8:
    // 0x215ea8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215eac:
    // 0x215eac: 0x78620070  lq          $v0, 0x70($v1)
    ctx->pc = 0x215eacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 112)));
label_215eb0:
    // 0x215eb0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x215eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_215eb4:
    // 0x215eb4: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x215eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_215eb8:
    // 0x215eb8: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x215eb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_215ebc:
    // 0x215ebc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x215ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_215ec0:
    // 0x215ec0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x215ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_215ec4:
    // 0x215ec4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x215ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_215ec8:
    // 0x215ec8: 0x3e00008  jr          $ra
label_215ecc:
    if (ctx->pc == 0x215ECCu) {
        ctx->pc = 0x215ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EC8u;
        // 0x215ecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215ED0u;
        goto label_fallthrough_0x215ec8;
    }
    ctx->pc = 0x215EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EC8u;
        // 0x215ecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x215ec8:
    ctx->pc = 0x215ED0u;
}
