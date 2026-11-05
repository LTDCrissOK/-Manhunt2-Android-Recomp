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

// Function: sub_001FEDC0
// Address: 0x1fedc0 - 0x1ff018
void sub_001FEDC0_0x1fedc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEDC0_0x1fedc0");
#endif

    switch (ctx->pc) {
        case 0x1fedc0u: goto label_1fedc0;
        case 0x1fedc4u: goto label_1fedc4;
        case 0x1fedc8u: goto label_1fedc8;
        case 0x1fedccu: goto label_1fedcc;
        case 0x1fedd0u: goto label_1fedd0;
        case 0x1fedd4u: goto label_1fedd4;
        case 0x1fedd8u: goto label_1fedd8;
        case 0x1feddcu: goto label_1feddc;
        case 0x1fede0u: goto label_1fede0;
        case 0x1fede4u: goto label_1fede4;
        case 0x1fede8u: goto label_1fede8;
        case 0x1fedecu: goto label_1fedec;
        case 0x1fedf0u: goto label_1fedf0;
        case 0x1fedf4u: goto label_1fedf4;
        case 0x1fedf8u: goto label_1fedf8;
        case 0x1fedfcu: goto label_1fedfc;
        case 0x1fee00u: goto label_1fee00;
        case 0x1fee04u: goto label_1fee04;
        case 0x1fee08u: goto label_1fee08;
        case 0x1fee0cu: goto label_1fee0c;
        case 0x1fee10u: goto label_1fee10;
        case 0x1fee14u: goto label_1fee14;
        case 0x1fee18u: goto label_1fee18;
        case 0x1fee1cu: goto label_1fee1c;
        case 0x1fee20u: goto label_1fee20;
        case 0x1fee24u: goto label_1fee24;
        case 0x1fee28u: goto label_1fee28;
        case 0x1fee2cu: goto label_1fee2c;
        case 0x1fee30u: goto label_1fee30;
        case 0x1fee34u: goto label_1fee34;
        case 0x1fee38u: goto label_1fee38;
        case 0x1fee3cu: goto label_1fee3c;
        case 0x1fee40u: goto label_1fee40;
        case 0x1fee44u: goto label_1fee44;
        case 0x1fee48u: goto label_1fee48;
        case 0x1fee4cu: goto label_1fee4c;
        case 0x1fee50u: goto label_1fee50;
        case 0x1fee54u: goto label_1fee54;
        case 0x1fee58u: goto label_1fee58;
        case 0x1fee5cu: goto label_1fee5c;
        case 0x1fee60u: goto label_1fee60;
        case 0x1fee64u: goto label_1fee64;
        case 0x1fee68u: goto label_1fee68;
        case 0x1fee6cu: goto label_1fee6c;
        case 0x1fee70u: goto label_1fee70;
        case 0x1fee74u: goto label_1fee74;
        case 0x1fee78u: goto label_1fee78;
        case 0x1fee7cu: goto label_1fee7c;
        case 0x1fee80u: goto label_1fee80;
        case 0x1fee84u: goto label_1fee84;
        case 0x1fee88u: goto label_1fee88;
        case 0x1fee8cu: goto label_1fee8c;
        case 0x1fee90u: goto label_1fee90;
        case 0x1fee94u: goto label_1fee94;
        case 0x1fee98u: goto label_1fee98;
        case 0x1fee9cu: goto label_1fee9c;
        case 0x1feea0u: goto label_1feea0;
        case 0x1feea4u: goto label_1feea4;
        case 0x1feea8u: goto label_1feea8;
        case 0x1feeacu: goto label_1feeac;
        case 0x1feeb0u: goto label_1feeb0;
        case 0x1feeb4u: goto label_1feeb4;
        case 0x1feeb8u: goto label_1feeb8;
        case 0x1feebcu: goto label_1feebc;
        case 0x1feec0u: goto label_1feec0;
        case 0x1feec4u: goto label_1feec4;
        case 0x1feec8u: goto label_1feec8;
        case 0x1feeccu: goto label_1feecc;
        case 0x1feed0u: goto label_1feed0;
        case 0x1feed4u: goto label_1feed4;
        case 0x1feed8u: goto label_1feed8;
        case 0x1feedcu: goto label_1feedc;
        case 0x1feee0u: goto label_1feee0;
        case 0x1feee4u: goto label_1feee4;
        case 0x1feee8u: goto label_1feee8;
        case 0x1feeecu: goto label_1feeec;
        case 0x1feef0u: goto label_1feef0;
        case 0x1feef4u: goto label_1feef4;
        case 0x1feef8u: goto label_1feef8;
        case 0x1feefcu: goto label_1feefc;
        case 0x1fef00u: goto label_1fef00;
        case 0x1fef04u: goto label_1fef04;
        case 0x1fef08u: goto label_1fef08;
        case 0x1fef0cu: goto label_1fef0c;
        case 0x1fef10u: goto label_1fef10;
        case 0x1fef14u: goto label_1fef14;
        case 0x1fef18u: goto label_1fef18;
        case 0x1fef1cu: goto label_1fef1c;
        case 0x1fef20u: goto label_1fef20;
        case 0x1fef24u: goto label_1fef24;
        case 0x1fef28u: goto label_1fef28;
        case 0x1fef2cu: goto label_1fef2c;
        case 0x1fef30u: goto label_1fef30;
        case 0x1fef34u: goto label_1fef34;
        case 0x1fef38u: goto label_1fef38;
        case 0x1fef3cu: goto label_1fef3c;
        case 0x1fef40u: goto label_1fef40;
        case 0x1fef44u: goto label_1fef44;
        case 0x1fef48u: goto label_1fef48;
        case 0x1fef4cu: goto label_1fef4c;
        case 0x1fef50u: goto label_1fef50;
        case 0x1fef54u: goto label_1fef54;
        case 0x1fef58u: goto label_1fef58;
        case 0x1fef5cu: goto label_1fef5c;
        case 0x1fef60u: goto label_1fef60;
        case 0x1fef64u: goto label_1fef64;
        case 0x1fef68u: goto label_1fef68;
        case 0x1fef6cu: goto label_1fef6c;
        case 0x1fef70u: goto label_1fef70;
        case 0x1fef74u: goto label_1fef74;
        case 0x1fef78u: goto label_1fef78;
        case 0x1fef7cu: goto label_1fef7c;
        case 0x1fef80u: goto label_1fef80;
        case 0x1fef84u: goto label_1fef84;
        case 0x1fef88u: goto label_1fef88;
        case 0x1fef8cu: goto label_1fef8c;
        case 0x1fef90u: goto label_1fef90;
        case 0x1fef94u: goto label_1fef94;
        case 0x1fef98u: goto label_1fef98;
        case 0x1fef9cu: goto label_1fef9c;
        case 0x1fefa0u: goto label_1fefa0;
        case 0x1fefa4u: goto label_1fefa4;
        case 0x1fefa8u: goto label_1fefa8;
        case 0x1fefacu: goto label_1fefac;
        case 0x1fefb0u: goto label_1fefb0;
        case 0x1fefb4u: goto label_1fefb4;
        case 0x1fefb8u: goto label_1fefb8;
        case 0x1fefbcu: goto label_1fefbc;
        case 0x1fefc0u: goto label_1fefc0;
        case 0x1fefc4u: goto label_1fefc4;
        case 0x1fefc8u: goto label_1fefc8;
        case 0x1fefccu: goto label_1fefcc;
        case 0x1fefd0u: goto label_1fefd0;
        case 0x1fefd4u: goto label_1fefd4;
        case 0x1fefd8u: goto label_1fefd8;
        case 0x1fefdcu: goto label_1fefdc;
        case 0x1fefe0u: goto label_1fefe0;
        case 0x1fefe4u: goto label_1fefe4;
        case 0x1fefe8u: goto label_1fefe8;
        case 0x1fefecu: goto label_1fefec;
        case 0x1feff0u: goto label_1feff0;
        case 0x1feff4u: goto label_1feff4;
        case 0x1feff8u: goto label_1feff8;
        case 0x1feffcu: goto label_1feffc;
        case 0x1ff000u: goto label_1ff000;
        case 0x1ff004u: goto label_1ff004;
        case 0x1ff008u: goto label_1ff008;
        case 0x1ff00cu: goto label_1ff00c;
        case 0x1ff010u: goto label_1ff010;
        case 0x1ff014u: goto label_1ff014;
        default: break;
    }

    ctx->pc = 0x1fedc0u;

label_1fedc0:
    // 0x1fedc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fedc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fedc4:
    // 0x1fedc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fedc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1fedc8:
    // 0x1fedc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fedc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1fedcc:
    // 0x1fedcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fedccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fedd0:
    // 0x1fedd0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1fedd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1fedd4:
    // 0x1fedd4: 0x9202004d  lbu         $v0, 0x4D($s0)
    ctx->pc = 0x1fedd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
label_1fedd8:
    // 0x1fedd8: 0x50400060  beql        $v0, $zero, . + 4 + (0x60 << 2)
label_1feddc:
    if (ctx->pc == 0x1FEDDCu) {
        ctx->pc = 0x1FEDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDD8u;
        // 0x1feddc: 0x9202004e  lbu         $v0, 0x4E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 78)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEDE0u;
        goto label_1fede0;
    }
    ctx->pc = 0x1FEDD8u;
    {
        const bool branch_taken_0x1fedd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fedd8) {
            ctx->pc = 0x1FEDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEDD8u;
            // 0x1feddc: 0x9202004e  lbu         $v0, 0x4E($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 78)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEF5Cu;
            goto label_1fef5c;
        }
    }
    ctx->pc = 0x1FEDE0u;
label_1fede0:
    // 0x1fede0: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1fede0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1fede4:
    // 0x1fede4: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
label_1fede8:
    if (ctx->pc == 0x1FEDE8u) {
        ctx->pc = 0x1FEDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDE4u;
        // 0x1fede8: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEDECu;
        goto label_1fedec;
    }
    ctx->pc = 0x1FEDE4u;
    {
        const bool branch_taken_0x1fede4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fede4) {
            ctx->pc = 0x1FEDE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEDE4u;
            // 0x1fede8: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEEC4u;
            goto label_1feec4;
        }
    }
    ctx->pc = 0x1FEDECu;
label_1fedec:
    // 0x1fedec: 0xc076100  jal         func_1D8400
label_1fedf0:
    if (ctx->pc == 0x1FEDF0u) {
        ctx->pc = 0x1FEDF4u;
        goto label_1fedf4;
    }
    ctx->pc = 0x1FEDECu;
    SET_GPR_U32(ctx, 31, 0x1FEDF4u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x1FEDECu, 0x1FEDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEDF4u;
label_1fedf4:
    // 0x1fedf4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1fedf8:
    if (ctx->pc == 0x1FEDF8u) {
        ctx->pc = 0x1FEDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDF4u;
        // 0x1fedf8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEDFCu;
        goto label_1fedfc;
    }
    ctx->pc = 0x1FEDF4u;
    {
        const bool branch_taken_0x1fedf4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1FEDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDF4u;
        // 0x1fedf8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fedf4) {
            ctx->pc = 0x1FEE10u;
            goto label_1fee10;
        }
    }
    ctx->pc = 0x1FEDFCu;
label_1fedfc:
    // 0x1fedfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fedfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fee00:
    // 0x1fee00: 0x0  nop
    ctx->pc = 0x1fee00u;
    // NOP
label_1fee04:
    // 0x1fee04: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fee04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fee08:
    // 0x1fee08: 0x10000007  b           . + 4 + (0x7 << 2)
label_1fee0c:
    if (ctx->pc == 0x1FEE0Cu) {
        ctx->pc = 0x1FEE10u;
        goto label_1fee10;
    }
    ctx->pc = 0x1FEE08u;
    {
        const bool branch_taken_0x1fee08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fee08) {
            ctx->pc = 0x1FEE28u;
            goto label_1fee28;
        }
    }
    ctx->pc = 0x1FEE10u;
label_1fee10:
    // 0x1fee10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fee10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1fee14:
    // 0x1fee14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fee14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1fee18:
    // 0x1fee18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fee18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fee1c:
    // 0x1fee1c: 0x0  nop
    ctx->pc = 0x1fee1cu;
    // NOP
label_1fee20:
    // 0x1fee20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fee20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fee24:
    // 0x1fee24: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1fee24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1fee28:
    // 0x1fee28: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1fee28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1fee2c:
    // 0x1fee2c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1fee2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1fee30:
    // 0x1fee30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fee30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fee34:
    // 0x1fee34: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1fee34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_1fee38:
    // 0x1fee38: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1fee3c:
    if (ctx->pc == 0x1FEE3Cu) {
        ctx->pc = 0x1FEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE38u;
        // 0x1fee3c: 0x46000882  mul.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEE40u;
        goto label_1fee40;
    }
    ctx->pc = 0x1FEE38u;
    {
        const bool branch_taken_0x1fee38 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1FEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE38u;
        // 0x1fee3c: 0x46000882  mul.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee38) {
            ctx->pc = 0x1FEE54u;
            goto label_1fee54;
        }
    }
    ctx->pc = 0x1FEE40u;
label_1fee40:
    // 0x1fee40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fee40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fee44:
    // 0x1fee44: 0x0  nop
    ctx->pc = 0x1fee44u;
    // NOP
label_1fee48:
    // 0x1fee48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fee48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fee4c:
    // 0x1fee4c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1fee50:
    if (ctx->pc == 0x1FEE50u) {
        ctx->pc = 0x1FEE54u;
        goto label_1fee54;
    }
    ctx->pc = 0x1FEE4Cu;
    {
        const bool branch_taken_0x1fee4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fee4c) {
            ctx->pc = 0x1FEE70u;
            goto label_1fee70;
        }
    }
    ctx->pc = 0x1FEE54u;
label_1fee54:
    // 0x1fee54: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1fee54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1fee58:
    // 0x1fee58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fee58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1fee5c:
    // 0x1fee5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fee5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1fee60:
    // 0x1fee60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fee60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fee64:
    // 0x1fee64: 0x0  nop
    ctx->pc = 0x1fee64u;
    // NOP
label_1fee68:
    // 0x1fee68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fee68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fee6c:
    // 0x1fee6c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1fee6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1fee70:
    // 0x1fee70: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1fee70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_1fee74:
    // 0x1fee74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fee74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fee78:
    // 0x1fee78: 0x0  nop
    ctx->pc = 0x1fee78u;
    // NOP
label_1fee7c:
    // 0x1fee7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fee7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fee80:
    // 0x1fee80: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1fee80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fee84:
    // 0x1fee84: 0x0  nop
    ctx->pc = 0x1fee84u;
    // NOP
label_1fee88:
    // 0x1fee88: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1fee8c:
    if (ctx->pc == 0x1FEE8Cu) {
        ctx->pc = 0x1FEE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE88u;
        // 0x1fee8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEE90u;
        goto label_1fee90;
    }
    ctx->pc = 0x1FEE88u;
    {
        const bool branch_taken_0x1fee88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FEE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE88u;
        // 0x1fee8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee88) {
            ctx->pc = 0x1FEEC0u;
            goto label_1feec0;
        }
    }
    ctx->pc = 0x1FEE90u;
label_1fee90:
    // 0x1fee90: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1fee90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1fee94:
    // 0x1fee94: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x1fee94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
label_1fee98:
    // 0x1fee98: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1fee98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_1fee9c:
    // 0x1fee9c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fee9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1feea0:
    // 0x1feea0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1feea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_1feea4:
    // 0x1feea4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1feea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1feea8:
    // 0x1feea8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1feea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1feeac:
    // 0x1feeac: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1feeacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1feeb0:
    // 0x1feeb0: 0xc08246e  jal         func_2091B8
label_1feeb4:
    if (ctx->pc == 0x1FEEB4u) {
        ctx->pc = 0x1FEEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEEB0u;
        // 0x1feeb4: 0xc48c001c  lwc1        $f12, 0x1C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEEB8u;
        goto label_1feeb8;
    }
    ctx->pc = 0x1FEEB0u;
    SET_GPR_U32(ctx, 31, 0x1FEEB8u);
    ctx->pc = 0x1FEEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEEB0u;
    // 0x1feeb4: 0xc48c001c  lwc1        $f12, 0x1C($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2091B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2091B8u, 0x1FEEB0u, 0x1FEEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEEB8u;
label_1feeb8:
    // 0x1feeb8: 0x10000053  b           . + 4 + (0x53 << 2)
label_1feebc:
    if (ctx->pc == 0x1FEEBCu) {
        ctx->pc = 0x1FEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEEB8u;
        // 0x1feebc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEEC0u;
        goto label_1feec0;
    }
    ctx->pc = 0x1FEEB8u;
    {
        const bool branch_taken_0x1feeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEEB8u;
        // 0x1feebc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feeb8) {
            ctx->pc = 0x1FF008u;
            goto label_1ff008;
        }
    }
    ctx->pc = 0x1FEEC0u;
label_1feec0:
    // 0x1feec0: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1feec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1feec4:
    // 0x1feec4: 0x50400050  beql        $v0, $zero, . + 4 + (0x50 << 2)
label_1feec8:
    if (ctx->pc == 0x1FEEC8u) {
        ctx->pc = 0x1FEEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEEC4u;
        // 0x1feec8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEECCu;
        goto label_1feecc;
    }
    ctx->pc = 0x1FEEC4u;
    {
        const bool branch_taken_0x1feec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feec4) {
            ctx->pc = 0x1FEEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEEC4u;
            // 0x1feec8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF008u;
            goto label_1ff008;
        }
    }
    ctx->pc = 0x1FEECCu;
label_1feecc:
    // 0x1feecc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1feeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1feed0:
    // 0x1feed0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1feed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1feed4:
    // 0x1feed4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1feed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1feed8:
    // 0x1feed8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1feed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1feedc:
    // 0x1feedc: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1feedcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1feee0:
    // 0x1feee0: 0x0  nop
    ctx->pc = 0x1feee0u;
    // NOP
label_1feee4:
    // 0x1feee4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1feee8:
    if (ctx->pc == 0x1FEEE8u) {
        ctx->pc = 0x1FEEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEEE4u;
        // 0x1feee8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEEECu;
        goto label_1feeec;
    }
    ctx->pc = 0x1FEEE4u;
    {
        const bool branch_taken_0x1feee4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FEEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEEE4u;
        // 0x1feee8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feee4) {
            ctx->pc = 0x1FEEF0u;
            goto label_1feef0;
        }
    }
    ctx->pc = 0x1FEEECu;
label_1feeec:
    // 0x1feeec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1feeecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1feef0:
    // 0x1feef0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1feef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1feef4:
    // 0x1feef4: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
label_1feef8:
    if (ctx->pc == 0x1FEEF8u) {
        ctx->pc = 0x1FEEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEEF4u;
        // 0x1feef8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEEFCu;
        goto label_1feefc;
    }
    ctx->pc = 0x1FEEF4u;
    {
        const bool branch_taken_0x1feef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feef4) {
            ctx->pc = 0x1FEEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEEF4u;
            // 0x1feef8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF008u;
            goto label_1ff008;
        }
    }
    ctx->pc = 0x1FEEFCu;
label_1feefc:
    // 0x1feefc: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1feefcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_1fef00:
    // 0x1fef00: 0xc07fae6  jal         func_1FEB98
label_1fef04:
    if (ctx->pc == 0x1FEF04u) {
        ctx->pc = 0x1FEF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF00u;
        // 0x1fef04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF08u;
        goto label_1fef08;
    }
    ctx->pc = 0x1FEF00u;
    SET_GPR_U32(ctx, 31, 0x1FEF08u);
    ctx->pc = 0x1FEF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEF00u;
    // 0x1fef04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEB98u, 0x1FEF00u, 0x1FEF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEF08u;
label_1fef08:
    // 0x1fef08: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1fef08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_1fef0c:
    // 0x1fef0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fef0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fef10:
    // 0x1fef10: 0x24c60708  addiu       $a2, $a2, 0x708
    ctx->pc = 0x1fef10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1800));
label_1fef14:
    // 0x1fef14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fef14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fef18:
    // 0x1fef18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fef18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fef1c:
    // 0x1fef1c: 0xc07f982  jal         func_1FE608
label_1fef20:
    if (ctx->pc == 0x1FEF20u) {
        ctx->pc = 0x1FEF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF1Cu;
        // 0x1fef20: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF24u;
        goto label_1fef24;
    }
    ctx->pc = 0x1FEF1Cu;
    SET_GPR_U32(ctx, 31, 0x1FEF24u);
    ctx->pc = 0x1FEF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEF1Cu;
    // 0x1fef20: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE608u, 0x1FEF1Cu, 0x1FEF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEF24u;
label_1fef24:
    // 0x1fef24: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1fef24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1fef28:
    // 0x1fef28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fef28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fef2c:
    // 0x1fef2c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1fef2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_1fef30:
    // 0x1fef30: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1fef30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1fef34:
    // 0x1fef34: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1fef34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_1fef38:
    // 0x1fef38: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1fef38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1fef3c:
    // 0x1fef3c: 0xc08246e  jal         func_2091B8
label_1fef40:
    if (ctx->pc == 0x1FEF40u) {
        ctx->pc = 0x1FEF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF3Cu;
        // 0x1fef40: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF44u;
        goto label_1fef44;
    }
    ctx->pc = 0x1FEF3Cu;
    SET_GPR_U32(ctx, 31, 0x1FEF44u);
    ctx->pc = 0x1FEF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEF3Cu;
    // 0x1fef40: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2091B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2091B8u, 0x1FEF3Cu, 0x1FEF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEF44u;
label_1fef44:
    // 0x1fef44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fef44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fef48:
    // 0x1fef48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fef48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fef4c:
    // 0x1fef4c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1fef4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_1fef50:
    // 0x1fef50: 0xa203004e  sb          $v1, 0x4E($s0)
    ctx->pc = 0x1fef50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 3));
label_1fef54:
    // 0x1fef54: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1fef58:
    if (ctx->pc == 0x1FEF58u) {
        ctx->pc = 0x1FEF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF54u;
        // 0x1fef58: 0xa200004d  sb          $zero, 0x4D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF5Cu;
        goto label_1fef5c;
    }
    ctx->pc = 0x1FEF54u;
    {
        const bool branch_taken_0x1fef54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF54u;
        // 0x1fef58: 0xa200004d  sb          $zero, 0x4D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef54) {
            ctx->pc = 0x1FF004u;
            goto label_1ff004;
        }
    }
    ctx->pc = 0x1FEF5Cu;
label_1fef5c:
    // 0x1fef5c: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
label_1fef60:
    if (ctx->pc == 0x1FEF60u) {
        ctx->pc = 0x1FEF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF5Cu;
        // 0x1fef60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF64u;
        goto label_1fef64;
    }
    ctx->pc = 0x1FEF5Cu;
    {
        const bool branch_taken_0x1fef5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fef5c) {
            ctx->pc = 0x1FEF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEF5Cu;
            // 0x1fef60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF008u;
            goto label_1ff008;
        }
    }
    ctx->pc = 0x1FEF64u;
label_1fef64:
    // 0x1fef64: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1fef64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1fef68:
    // 0x1fef68: 0x904394a4  lbu         $v1, -0x6B5C($v0)
    ctx->pc = 0x1fef68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939812)));
label_1fef6c:
    // 0x1fef6c: 0x50600026  beql        $v1, $zero, . + 4 + (0x26 << 2)
label_1fef70:
    if (ctx->pc == 0x1FEF70u) {
        ctx->pc = 0x1FEF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF6Cu;
        // 0x1fef70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF74u;
        goto label_1fef74;
    }
    ctx->pc = 0x1FEF6Cu;
    {
        const bool branch_taken_0x1fef6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fef6c) {
            ctx->pc = 0x1FEF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEF6Cu;
            // 0x1fef70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF008u;
            goto label_1ff008;
        }
    }
    ctx->pc = 0x1FEF74u;
label_1fef74:
    // 0x1fef74: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1fef74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1fef78:
    // 0x1fef78: 0x50800023  beql        $a0, $zero, . + 4 + (0x23 << 2)
label_1fef7c:
    if (ctx->pc == 0x1FEF7Cu) {
        ctx->pc = 0x1FEF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF78u;
        // 0x1fef7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF80u;
        goto label_1fef80;
    }
    ctx->pc = 0x1FEF78u;
    {
        const bool branch_taken_0x1fef78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fef78) {
            ctx->pc = 0x1FEF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEF78u;
            // 0x1fef7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF008u;
            goto label_1ff008;
        }
    }
    ctx->pc = 0x1FEF80u;
label_1fef80:
    // 0x1fef80: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1fef80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fef84:
    // 0x1fef84: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1fef84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1fef88:
    // 0x1fef88: 0x40f809  jalr        $v0
label_1fef8c:
    if (ctx->pc == 0x1FEF8Cu) {
        ctx->pc = 0x1FEF90u;
        goto label_1fef90;
    }
    ctx->pc = 0x1FEF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FEF90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEF88u, 0x1FEF90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FEF90u;
label_1fef90:
    // 0x1fef90: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_1fef94:
    if (ctx->pc == 0x1FEF94u) {
        ctx->pc = 0x1FEF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF90u;
        // 0x1fef94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEF98u;
        goto label_1fef98;
    }
    ctx->pc = 0x1FEF90u;
    {
        const bool branch_taken_0x1fef90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fef90) {
            ctx->pc = 0x1FEF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEF90u;
            // 0x1fef94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF008u;
            goto label_1ff008;
        }
    }
    ctx->pc = 0x1FEF98u;
label_1fef98:
    // 0x1fef98: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x1fef98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_1fef9c:
    // 0x1fef9c: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_1fefa0:
    if (ctx->pc == 0x1FEFA0u) {
        ctx->pc = 0x1FEFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF9Cu;
        // 0x1fefa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEFA4u;
        goto label_1fefa4;
    }
    ctx->pc = 0x1FEF9Cu;
    {
        const bool branch_taken_0x1fef9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fef9c) {
            ctx->pc = 0x1FEFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEF9Cu;
            // 0x1fefa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF008u;
            goto label_1ff008;
        }
    }
    ctx->pc = 0x1FEFA4u;
label_1fefa4:
    // 0x1fefa4: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1fefa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_1fefa8:
    // 0x1fefa8: 0xc07f53a  jal         func_1FD4E8
label_1fefac:
    if (ctx->pc == 0x1FEFACu) {
        ctx->pc = 0x1FEFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFA8u;
        // 0x1fefac: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEFB0u;
        goto label_1fefb0;
    }
    ctx->pc = 0x1FEFA8u;
    SET_GPR_U32(ctx, 31, 0x1FEFB0u);
    ctx->pc = 0x1FEFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEFA8u;
    // 0x1fefac: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD4E8u, 0x1FEFA8u, 0x1FEFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEFB0u;
label_1fefb0:
    // 0x1fefb0: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_1fefb4:
    if (ctx->pc == 0x1FEFB4u) {
        ctx->pc = 0x1FEFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFB0u;
        // 0x1fefb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEFB8u;
        goto label_1fefb8;
    }
    ctx->pc = 0x1FEFB0u;
    {
        const bool branch_taken_0x1fefb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fefb0) {
            ctx->pc = 0x1FEFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEFB0u;
            // 0x1fefb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF008u;
            goto label_1ff008;
        }
    }
    ctx->pc = 0x1FEFB8u;
label_1fefb8:
    // 0x1fefb8: 0xc07fae6  jal         func_1FEB98
label_1fefbc:
    if (ctx->pc == 0x1FEFBCu) {
        ctx->pc = 0x1FEFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFB8u;
        // 0x1fefbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEFC0u;
        goto label_1fefc0;
    }
    ctx->pc = 0x1FEFB8u;
    SET_GPR_U32(ctx, 31, 0x1FEFC0u);
    ctx->pc = 0x1FEFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEFB8u;
    // 0x1fefbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEB98u, 0x1FEFB8u, 0x1FEFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEFC0u;
label_1fefc0:
    // 0x1fefc0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1fefc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_1fefc4:
    // 0x1fefc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fefc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fefc8:
    // 0x1fefc8: 0x24c60710  addiu       $a2, $a2, 0x710
    ctx->pc = 0x1fefc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1808));
label_1fefcc:
    // 0x1fefcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fefccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fefd0:
    // 0x1fefd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fefd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fefd4:
    // 0x1fefd4: 0xc07f982  jal         func_1FE608
label_1fefd8:
    if (ctx->pc == 0x1FEFD8u) {
        ctx->pc = 0x1FEFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFD4u;
        // 0x1fefd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEFDCu;
        goto label_1fefdc;
    }
    ctx->pc = 0x1FEFD4u;
    SET_GPR_U32(ctx, 31, 0x1FEFDCu);
    ctx->pc = 0x1FEFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEFD4u;
    // 0x1fefd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE608u, 0x1FEFD4u, 0x1FEFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEFDCu;
label_1fefdc:
    // 0x1fefdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fefdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1fefe0:
    // 0x1fefe0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1fefe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1fefe4:
    // 0x1fefe4: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1fefe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1fefe8:
    // 0x1fefe8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fefe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fefec:
    // 0x1fefec: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1fefecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_1feff0:
    // 0x1feff0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1feff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1feff4:
    // 0x1feff4: 0xc08246e  jal         func_2091B8
label_1feff8:
    if (ctx->pc == 0x1FEFF8u) {
        ctx->pc = 0x1FEFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFF4u;
        // 0x1feff8: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEFFCu;
        goto label_1feffc;
    }
    ctx->pc = 0x1FEFF4u;
    SET_GPR_U32(ctx, 31, 0x1FEFFCu);
    ctx->pc = 0x1FEFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEFF4u;
    // 0x1feff8: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2091B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2091B8u, 0x1FEFF4u, 0x1FEFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEFFCu;
label_1feffc:
    // 0x1feffc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1feffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ff000:
    // 0x1ff000: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1ff000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_1ff004:
    // 0x1ff004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff008:
    // 0x1ff008: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ff008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ff00c:
    // 0x1ff00c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1ff00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ff010:
    // 0x1ff010: 0x3e00008  jr          $ra
label_1ff014:
    if (ctx->pc == 0x1FF014u) {
        ctx->pc = 0x1FF014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF010u;
        // 0x1ff014: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF018u;
        goto label_fallthrough_0x1ff010;
    }
    ctx->pc = 0x1FF010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF010u;
        // 0x1ff014: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ff010:
    ctx->pc = 0x1FF018u;
}
