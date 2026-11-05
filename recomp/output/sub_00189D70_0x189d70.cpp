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

// Function: sub_00189D70
// Address: 0x189d70 - 0x189ef0
void sub_00189D70_0x189d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189D70_0x189d70");
#endif

    switch (ctx->pc) {
        case 0x189d70u: goto label_189d70;
        case 0x189d74u: goto label_189d74;
        case 0x189d78u: goto label_189d78;
        case 0x189d7cu: goto label_189d7c;
        case 0x189d80u: goto label_189d80;
        case 0x189d84u: goto label_189d84;
        case 0x189d88u: goto label_189d88;
        case 0x189d8cu: goto label_189d8c;
        case 0x189d90u: goto label_189d90;
        case 0x189d94u: goto label_189d94;
        case 0x189d98u: goto label_189d98;
        case 0x189d9cu: goto label_189d9c;
        case 0x189da0u: goto label_189da0;
        case 0x189da4u: goto label_189da4;
        case 0x189da8u: goto label_189da8;
        case 0x189dacu: goto label_189dac;
        case 0x189db0u: goto label_189db0;
        case 0x189db4u: goto label_189db4;
        case 0x189db8u: goto label_189db8;
        case 0x189dbcu: goto label_189dbc;
        case 0x189dc0u: goto label_189dc0;
        case 0x189dc4u: goto label_189dc4;
        case 0x189dc8u: goto label_189dc8;
        case 0x189dccu: goto label_189dcc;
        case 0x189dd0u: goto label_189dd0;
        case 0x189dd4u: goto label_189dd4;
        case 0x189dd8u: goto label_189dd8;
        case 0x189ddcu: goto label_189ddc;
        case 0x189de0u: goto label_189de0;
        case 0x189de4u: goto label_189de4;
        case 0x189de8u: goto label_189de8;
        case 0x189decu: goto label_189dec;
        case 0x189df0u: goto label_189df0;
        case 0x189df4u: goto label_189df4;
        case 0x189df8u: goto label_189df8;
        case 0x189dfcu: goto label_189dfc;
        case 0x189e00u: goto label_189e00;
        case 0x189e04u: goto label_189e04;
        case 0x189e08u: goto label_189e08;
        case 0x189e0cu: goto label_189e0c;
        case 0x189e10u: goto label_189e10;
        case 0x189e14u: goto label_189e14;
        case 0x189e18u: goto label_189e18;
        case 0x189e1cu: goto label_189e1c;
        case 0x189e20u: goto label_189e20;
        case 0x189e24u: goto label_189e24;
        case 0x189e28u: goto label_189e28;
        case 0x189e2cu: goto label_189e2c;
        case 0x189e30u: goto label_189e30;
        case 0x189e34u: goto label_189e34;
        case 0x189e38u: goto label_189e38;
        case 0x189e3cu: goto label_189e3c;
        case 0x189e40u: goto label_189e40;
        case 0x189e44u: goto label_189e44;
        case 0x189e48u: goto label_189e48;
        case 0x189e4cu: goto label_189e4c;
        case 0x189e50u: goto label_189e50;
        case 0x189e54u: goto label_189e54;
        case 0x189e58u: goto label_189e58;
        case 0x189e5cu: goto label_189e5c;
        case 0x189e60u: goto label_189e60;
        case 0x189e64u: goto label_189e64;
        case 0x189e68u: goto label_189e68;
        case 0x189e6cu: goto label_189e6c;
        case 0x189e70u: goto label_189e70;
        case 0x189e74u: goto label_189e74;
        case 0x189e78u: goto label_189e78;
        case 0x189e7cu: goto label_189e7c;
        case 0x189e80u: goto label_189e80;
        case 0x189e84u: goto label_189e84;
        case 0x189e88u: goto label_189e88;
        case 0x189e8cu: goto label_189e8c;
        case 0x189e90u: goto label_189e90;
        case 0x189e94u: goto label_189e94;
        case 0x189e98u: goto label_189e98;
        case 0x189e9cu: goto label_189e9c;
        case 0x189ea0u: goto label_189ea0;
        case 0x189ea4u: goto label_189ea4;
        case 0x189ea8u: goto label_189ea8;
        case 0x189eacu: goto label_189eac;
        case 0x189eb0u: goto label_189eb0;
        case 0x189eb4u: goto label_189eb4;
        case 0x189eb8u: goto label_189eb8;
        case 0x189ebcu: goto label_189ebc;
        case 0x189ec0u: goto label_189ec0;
        case 0x189ec4u: goto label_189ec4;
        case 0x189ec8u: goto label_189ec8;
        case 0x189eccu: goto label_189ecc;
        case 0x189ed0u: goto label_189ed0;
        case 0x189ed4u: goto label_189ed4;
        case 0x189ed8u: goto label_189ed8;
        case 0x189edcu: goto label_189edc;
        case 0x189ee0u: goto label_189ee0;
        case 0x189ee4u: goto label_189ee4;
        case 0x189ee8u: goto label_189ee8;
        case 0x189eecu: goto label_189eec;
        default: break;
    }

    ctx->pc = 0x189d70u;

label_189d70:
    // 0x189d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x189d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_189d74:
    // 0x189d74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x189d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_189d78:
    // 0x189d78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x189d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_189d7c:
    // 0x189d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x189d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_189d80:
    // 0x189d80: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x189d80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_189d84:
    // 0x189d84: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x189d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_189d88:
    // 0x189d88: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x189d88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_189d8c:
    // 0x189d8c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x189d8cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_189d90:
    // 0x189d90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x189d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_189d94:
    // 0x189d94: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x189d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_189d98:
    // 0x189d98: 0x1051004d  beq         $v0, $s1, . + 4 + (0x4D << 2)
label_189d9c:
    if (ctx->pc == 0x189D9Cu) {
        ctx->pc = 0x189D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189D98u;
        // 0x189d9c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x189DA0u;
        goto label_189da0;
    }
    ctx->pc = 0x189D98u;
    {
        const bool branch_taken_0x189d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x189D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189D98u;
        // 0x189d9c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x189d98) {
            ctx->pc = 0x189ED0u;
            goto label_189ed0;
        }
    }
    ctx->pc = 0x189DA0u;
label_189da0:
    // 0x189da0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x189da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_189da4:
    // 0x189da4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_189da8:
    if (ctx->pc == 0x189DA8u) {
        ctx->pc = 0x189DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189DA4u;
        // 0x189da8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189DACu;
        goto label_189dac;
    }
    ctx->pc = 0x189DA4u;
    {
        const bool branch_taken_0x189da4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189DA4u;
        // 0x189da8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189da4) {
            ctx->pc = 0x189DC0u;
            goto label_189dc0;
        }
    }
    ctx->pc = 0x189DACu;
label_189dac:
    // 0x189dac: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x189dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_189db0:
    // 0x189db0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x189db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_189db4:
    // 0x189db4: 0x40f809  jalr        $v0
label_189db8:
    if (ctx->pc == 0x189DB8u) {
        ctx->pc = 0x189DBCu;
        goto label_189dbc;
    }
    ctx->pc = 0x189DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x189DBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189DB4u, 0x189DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x189DBCu;
label_189dbc:
    // 0x189dbc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x189dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_189dc0:
    // 0x189dc0: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x189dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
label_189dc4:
    // 0x189dc4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x189dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_189dc8:
    // 0x189dc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x189dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_189dcc:
    // 0x189dcc: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x189dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_189dd0:
    // 0x189dd0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_189dd4:
    if (ctx->pc == 0x189DD4u) {
        ctx->pc = 0x189DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189DD0u;
        // 0x189dd4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189DD8u;
        goto label_189dd8;
    }
    ctx->pc = 0x189DD0u;
    {
        const bool branch_taken_0x189dd0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x189DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189DD0u;
        // 0x189dd4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189dd0) {
            ctx->pc = 0x189DECu;
            goto label_189dec;
        }
    }
    ctx->pc = 0x189DD8u;
label_189dd8:
    // 0x189dd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x189dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_189ddc:
    // 0x189ddc: 0x0  nop
    ctx->pc = 0x189ddcu;
    // NOP
label_189de0:
    // 0x189de0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x189de0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_189de4:
    // 0x189de4: 0x10000007  b           . + 4 + (0x7 << 2)
label_189de8:
    if (ctx->pc == 0x189DE8u) {
        ctx->pc = 0x189DECu;
        goto label_189dec;
    }
    ctx->pc = 0x189DE4u;
    {
        const bool branch_taken_0x189de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189de4) {
            ctx->pc = 0x189E04u;
            goto label_189e04;
        }
    }
    ctx->pc = 0x189DECu;
label_189dec:
    // 0x189dec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x189decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_189df0:
    // 0x189df0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x189df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_189df4:
    // 0x189df4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x189df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_189df8:
    // 0x189df8: 0x0  nop
    ctx->pc = 0x189df8u;
    // NOP
label_189dfc:
    // 0x189dfc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x189dfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_189e00:
    // 0x189e00: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x189e00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_189e04:
    // 0x189e04: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x189e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_189e08:
    // 0x189e08: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x189e08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_189e0c:
    // 0x189e0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189e10:
    // 0x189e10: 0x0  nop
    ctx->pc = 0x189e10u;
    // NOP
label_189e14:
    // 0x189e14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x189e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_189e18:
    // 0x189e18: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x189e18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_189e1c:
    // 0x189e1c: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x189e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_189e20:
    // 0x189e20: 0x8c822b00  lw          $v0, 0x2B00($a0)
    ctx->pc = 0x189e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11008)));
label_189e24:
    // 0x189e24: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_189e28:
    if (ctx->pc == 0x189E28u) {
        ctx->pc = 0x189E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E24u;
        // 0x189e28: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189E2Cu;
        goto label_189e2c;
    }
    ctx->pc = 0x189E24u;
    {
        const bool branch_taken_0x189e24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x189E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E24u;
        // 0x189e28: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e24) {
            ctx->pc = 0x189E40u;
            goto label_189e40;
        }
    }
    ctx->pc = 0x189E2Cu;
label_189e2c:
    // 0x189e2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x189e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_189e30:
    // 0x189e30: 0x0  nop
    ctx->pc = 0x189e30u;
    // NOP
label_189e34:
    // 0x189e34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x189e34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_189e38:
    // 0x189e38: 0x10000007  b           . + 4 + (0x7 << 2)
label_189e3c:
    if (ctx->pc == 0x189E3Cu) {
        ctx->pc = 0x189E40u;
        goto label_189e40;
    }
    ctx->pc = 0x189E38u;
    {
        const bool branch_taken_0x189e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189e38) {
            ctx->pc = 0x189E58u;
            goto label_189e58;
        }
    }
    ctx->pc = 0x189E40u;
label_189e40:
    // 0x189e40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x189e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_189e44:
    // 0x189e44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x189e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_189e48:
    // 0x189e48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x189e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_189e4c:
    // 0x189e4c: 0x0  nop
    ctx->pc = 0x189e4cu;
    // NOP
label_189e50:
    // 0x189e50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x189e50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_189e54:
    // 0x189e54: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x189e54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_189e58:
    // 0x189e58: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x189e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_189e5c:
    // 0x189e5c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x189e5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_189e60:
    // 0x189e60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x189e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189e64:
    // 0x189e64: 0xc6020070  lwc1        $f2, 0x70($s0)
    ctx->pc = 0x189e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_189e68:
    // 0x189e68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x189e68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_189e6c:
    // 0x189e6c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x189e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_189e70:
    // 0x189e70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x189e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_189e74:
    // 0x189e74: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x189e74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_189e78:
    // 0x189e78: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x189e78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_189e7c:
    // 0x189e7c: 0x0  nop
    ctx->pc = 0x189e7cu;
    // NOP
label_189e80:
    // 0x189e80: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_189e84:
    if (ctx->pc == 0x189E84u) {
        ctx->pc = 0x189E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E80u;
        // 0x189e84: 0xe6000088  swc1        $f0, 0x88($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x189E88u;
        goto label_189e88;
    }
    ctx->pc = 0x189E80u;
    {
        const bool branch_taken_0x189e80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x189E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E80u;
        // 0x189e84: 0xe6000088  swc1        $f0, 0x88($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e80) {
            ctx->pc = 0x189EB0u;
            goto label_189eb0;
        }
    }
    ctx->pc = 0x189E88u;
label_189e88:
    // 0x189e88: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x189e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_189e8c:
    // 0x189e8c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x189e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_189e90:
    // 0x189e90: 0xc08fed2  jal         func_23FB48
label_189e94:
    if (ctx->pc == 0x189E94u) {
        ctx->pc = 0x189E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E90u;
        // 0x189e94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189E98u;
        goto label_189e98;
    }
    ctx->pc = 0x189E90u;
    SET_GPR_U32(ctx, 31, 0x189E98u);
    ctx->pc = 0x189E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189E90u;
    // 0x189e94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x189E90u, 0x189E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189E98u;
label_189e98:
    // 0x189e98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x189e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_189e9c:
    // 0x189e9c: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x189e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_189ea0:
    // 0x189ea0: 0xc08fed2  jal         func_23FB48
label_189ea4:
    if (ctx->pc == 0x189EA4u) {
        ctx->pc = 0x189EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189EA0u;
        // 0x189ea4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189EA8u;
        goto label_189ea8;
    }
    ctx->pc = 0x189EA0u;
    SET_GPR_U32(ctx, 31, 0x189EA8u);
    ctx->pc = 0x189EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189EA0u;
    // 0x189ea4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x189EA0u, 0x189EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189EA8u;
label_189ea8:
    // 0x189ea8: 0x1000000a  b           . + 4 + (0xA << 2)
label_189eac:
    if (ctx->pc == 0x189EACu) {
        ctx->pc = 0x189EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189EA8u;
        // 0x189eac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189EB0u;
        goto label_189eb0;
    }
    ctx->pc = 0x189EA8u;
    {
        const bool branch_taken_0x189ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189EA8u;
        // 0x189eac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ea8) {
            ctx->pc = 0x189ED4u;
            goto label_189ed4;
        }
    }
    ctx->pc = 0x189EB0u;
label_189eb0:
    // 0x189eb0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x189eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_189eb4:
    // 0x189eb4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x189eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_189eb8:
    // 0x189eb8: 0xc08fed2  jal         func_23FB48
label_189ebc:
    if (ctx->pc == 0x189EBCu) {
        ctx->pc = 0x189EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189EB8u;
        // 0x189ebc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189EC0u;
        goto label_189ec0;
    }
    ctx->pc = 0x189EB8u;
    SET_GPR_U32(ctx, 31, 0x189EC0u);
    ctx->pc = 0x189EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189EB8u;
    // 0x189ebc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x189EB8u, 0x189EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189EC0u;
label_189ec0:
    // 0x189ec0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x189ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_189ec4:
    // 0x189ec4: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x189ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_189ec8:
    // 0x189ec8: 0xc08fed2  jal         func_23FB48
label_189ecc:
    if (ctx->pc == 0x189ECCu) {
        ctx->pc = 0x189ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189EC8u;
        // 0x189ecc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189ED0u;
        goto label_189ed0;
    }
    ctx->pc = 0x189EC8u;
    SET_GPR_U32(ctx, 31, 0x189ED0u);
    ctx->pc = 0x189ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189EC8u;
    // 0x189ecc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x189EC8u, 0x189ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189ED0u;
label_189ed0:
    // 0x189ed0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x189ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_189ed4:
    // 0x189ed4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x189ed4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_189ed8:
    // 0x189ed8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x189ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_189edc:
    // 0x189edc: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x189edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_189ee0:
    // 0x189ee0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x189ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_189ee4:
    // 0x189ee4: 0x3e00008  jr          $ra
label_189ee8:
    if (ctx->pc == 0x189EE8u) {
        ctx->pc = 0x189EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189EE4u;
        // 0x189ee8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189EECu;
        goto label_189eec;
    }
    ctx->pc = 0x189EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189EE4u;
        // 0x189ee8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189EECu;
label_189eec:
    // 0x189eec: 0x0  nop
    ctx->pc = 0x189eecu;
    // NOP
    ctx->pc = 0x189ef0u;
}
