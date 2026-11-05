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

// Function: sub_001A3F18
// Address: 0x1a3f18 - 0x1a4148
void sub_001A3F18_0x1a3f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3F18_0x1a3f18");
#endif

    switch (ctx->pc) {
        case 0x1a3f18u: goto label_1a3f18;
        case 0x1a3f1cu: goto label_1a3f1c;
        case 0x1a3f20u: goto label_1a3f20;
        case 0x1a3f24u: goto label_1a3f24;
        case 0x1a3f28u: goto label_1a3f28;
        case 0x1a3f2cu: goto label_1a3f2c;
        case 0x1a3f30u: goto label_1a3f30;
        case 0x1a3f34u: goto label_1a3f34;
        case 0x1a3f38u: goto label_1a3f38;
        case 0x1a3f3cu: goto label_1a3f3c;
        case 0x1a3f40u: goto label_1a3f40;
        case 0x1a3f44u: goto label_1a3f44;
        case 0x1a3f48u: goto label_1a3f48;
        case 0x1a3f4cu: goto label_1a3f4c;
        case 0x1a3f50u: goto label_1a3f50;
        case 0x1a3f54u: goto label_1a3f54;
        case 0x1a3f58u: goto label_1a3f58;
        case 0x1a3f5cu: goto label_1a3f5c;
        case 0x1a3f60u: goto label_1a3f60;
        case 0x1a3f64u: goto label_1a3f64;
        case 0x1a3f68u: goto label_1a3f68;
        case 0x1a3f6cu: goto label_1a3f6c;
        case 0x1a3f70u: goto label_1a3f70;
        case 0x1a3f74u: goto label_1a3f74;
        case 0x1a3f78u: goto label_1a3f78;
        case 0x1a3f7cu: goto label_1a3f7c;
        case 0x1a3f80u: goto label_1a3f80;
        case 0x1a3f84u: goto label_1a3f84;
        case 0x1a3f88u: goto label_1a3f88;
        case 0x1a3f8cu: goto label_1a3f8c;
        case 0x1a3f90u: goto label_1a3f90;
        case 0x1a3f94u: goto label_1a3f94;
        case 0x1a3f98u: goto label_1a3f98;
        case 0x1a3f9cu: goto label_1a3f9c;
        case 0x1a3fa0u: goto label_1a3fa0;
        case 0x1a3fa4u: goto label_1a3fa4;
        case 0x1a3fa8u: goto label_1a3fa8;
        case 0x1a3facu: goto label_1a3fac;
        case 0x1a3fb0u: goto label_1a3fb0;
        case 0x1a3fb4u: goto label_1a3fb4;
        case 0x1a3fb8u: goto label_1a3fb8;
        case 0x1a3fbcu: goto label_1a3fbc;
        case 0x1a3fc0u: goto label_1a3fc0;
        case 0x1a3fc4u: goto label_1a3fc4;
        case 0x1a3fc8u: goto label_1a3fc8;
        case 0x1a3fccu: goto label_1a3fcc;
        case 0x1a3fd0u: goto label_1a3fd0;
        case 0x1a3fd4u: goto label_1a3fd4;
        case 0x1a3fd8u: goto label_1a3fd8;
        case 0x1a3fdcu: goto label_1a3fdc;
        case 0x1a3fe0u: goto label_1a3fe0;
        case 0x1a3fe4u: goto label_1a3fe4;
        case 0x1a3fe8u: goto label_1a3fe8;
        case 0x1a3fecu: goto label_1a3fec;
        case 0x1a3ff0u: goto label_1a3ff0;
        case 0x1a3ff4u: goto label_1a3ff4;
        case 0x1a3ff8u: goto label_1a3ff8;
        case 0x1a3ffcu: goto label_1a3ffc;
        case 0x1a4000u: goto label_1a4000;
        case 0x1a4004u: goto label_1a4004;
        case 0x1a4008u: goto label_1a4008;
        case 0x1a400cu: goto label_1a400c;
        case 0x1a4010u: goto label_1a4010;
        case 0x1a4014u: goto label_1a4014;
        case 0x1a4018u: goto label_1a4018;
        case 0x1a401cu: goto label_1a401c;
        case 0x1a4020u: goto label_1a4020;
        case 0x1a4024u: goto label_1a4024;
        case 0x1a4028u: goto label_1a4028;
        case 0x1a402cu: goto label_1a402c;
        case 0x1a4030u: goto label_1a4030;
        case 0x1a4034u: goto label_1a4034;
        case 0x1a4038u: goto label_1a4038;
        case 0x1a403cu: goto label_1a403c;
        case 0x1a4040u: goto label_1a4040;
        case 0x1a4044u: goto label_1a4044;
        case 0x1a4048u: goto label_1a4048;
        case 0x1a404cu: goto label_1a404c;
        case 0x1a4050u: goto label_1a4050;
        case 0x1a4054u: goto label_1a4054;
        case 0x1a4058u: goto label_1a4058;
        case 0x1a405cu: goto label_1a405c;
        case 0x1a4060u: goto label_1a4060;
        case 0x1a4064u: goto label_1a4064;
        case 0x1a4068u: goto label_1a4068;
        case 0x1a406cu: goto label_1a406c;
        case 0x1a4070u: goto label_1a4070;
        case 0x1a4074u: goto label_1a4074;
        case 0x1a4078u: goto label_1a4078;
        case 0x1a407cu: goto label_1a407c;
        case 0x1a4080u: goto label_1a4080;
        case 0x1a4084u: goto label_1a4084;
        case 0x1a4088u: goto label_1a4088;
        case 0x1a408cu: goto label_1a408c;
        case 0x1a4090u: goto label_1a4090;
        case 0x1a4094u: goto label_1a4094;
        case 0x1a4098u: goto label_1a4098;
        case 0x1a409cu: goto label_1a409c;
        case 0x1a40a0u: goto label_1a40a0;
        case 0x1a40a4u: goto label_1a40a4;
        case 0x1a40a8u: goto label_1a40a8;
        case 0x1a40acu: goto label_1a40ac;
        case 0x1a40b0u: goto label_1a40b0;
        case 0x1a40b4u: goto label_1a40b4;
        case 0x1a40b8u: goto label_1a40b8;
        case 0x1a40bcu: goto label_1a40bc;
        case 0x1a40c0u: goto label_1a40c0;
        case 0x1a40c4u: goto label_1a40c4;
        case 0x1a40c8u: goto label_1a40c8;
        case 0x1a40ccu: goto label_1a40cc;
        case 0x1a40d0u: goto label_1a40d0;
        case 0x1a40d4u: goto label_1a40d4;
        case 0x1a40d8u: goto label_1a40d8;
        case 0x1a40dcu: goto label_1a40dc;
        case 0x1a40e0u: goto label_1a40e0;
        case 0x1a40e4u: goto label_1a40e4;
        case 0x1a40e8u: goto label_1a40e8;
        case 0x1a40ecu: goto label_1a40ec;
        case 0x1a40f0u: goto label_1a40f0;
        case 0x1a40f4u: goto label_1a40f4;
        case 0x1a40f8u: goto label_1a40f8;
        case 0x1a40fcu: goto label_1a40fc;
        case 0x1a4100u: goto label_1a4100;
        case 0x1a4104u: goto label_1a4104;
        case 0x1a4108u: goto label_1a4108;
        case 0x1a410cu: goto label_1a410c;
        case 0x1a4110u: goto label_1a4110;
        case 0x1a4114u: goto label_1a4114;
        case 0x1a4118u: goto label_1a4118;
        case 0x1a411cu: goto label_1a411c;
        case 0x1a4120u: goto label_1a4120;
        case 0x1a4124u: goto label_1a4124;
        case 0x1a4128u: goto label_1a4128;
        case 0x1a412cu: goto label_1a412c;
        case 0x1a4130u: goto label_1a4130;
        case 0x1a4134u: goto label_1a4134;
        case 0x1a4138u: goto label_1a4138;
        case 0x1a413cu: goto label_1a413c;
        case 0x1a4140u: goto label_1a4140;
        case 0x1a4144u: goto label_1a4144;
        default: break;
    }

    ctx->pc = 0x1a3f18u;

label_1a3f18:
    // 0x1a3f18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a3f1c:
    // 0x1a3f1c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1a3f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1a3f20:
    // 0x1a3f20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a3f24:
    // 0x1a3f24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a3f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a3f28:
    // 0x1a3f28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3f2c:
    // 0x1a3f2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a3f30:
    // 0x1a3f30: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a3f30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a3f34:
    // 0x1a3f34: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a3f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a3f38:
    // 0x1a3f38: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
label_1a3f3c:
    if (ctx->pc == 0x1A3F3Cu) {
        ctx->pc = 0x1A3F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F38u;
        // 0x1a3f3c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F40u;
        goto label_1a3f40;
    }
    ctx->pc = 0x1A3F38u;
    {
        const bool branch_taken_0x1a3f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A3F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F38u;
        // 0x1a3f3c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f38) {
            ctx->pc = 0x1A3F70u;
            goto label_1a3f70;
        }
    }
    ctx->pc = 0x1A3F40u;
label_1a3f40:
    // 0x1a3f40: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a3f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a3f44:
    // 0x1a3f44: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x1a3f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1a3f48:
    // 0x1a3f48: 0x14820020  bne         $a0, $v0, . + 4 + (0x20 << 2)
label_1a3f4c:
    if (ctx->pc == 0x1A3F4Cu) {
        ctx->pc = 0x1A3F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F48u;
        // 0x1a3f4c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F50u;
        goto label_1a3f50;
    }
    ctx->pc = 0x1A3F48u;
    {
        const bool branch_taken_0x1a3f48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A3F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F48u;
        // 0x1a3f4c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f48) {
            ctx->pc = 0x1A3FCCu;
            goto label_1a3fcc;
        }
    }
    ctx->pc = 0x1A3F50u;
label_1a3f50:
    // 0x1a3f50: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1a3f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1a3f54:
    // 0x1a3f54: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1a3f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_1a3f58:
    // 0x1a3f58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a3f5c:
    if (ctx->pc == 0x1A3F5Cu) {
        ctx->pc = 0x1A3F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F58u;
        // 0x1a3f5c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F60u;
        goto label_1a3f60;
    }
    ctx->pc = 0x1A3F58u;
    {
        const bool branch_taken_0x1a3f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F58u;
        // 0x1a3f5c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f58) {
            ctx->pc = 0x1A3F70u;
            goto label_1a3f70;
        }
    }
    ctx->pc = 0x1A3F60u;
label_1a3f60:
    // 0x1a3f60: 0xc065976  jal         func_1965D8
label_1a3f64:
    if (ctx->pc == 0x1A3F64u) {
        ctx->pc = 0x1A3F68u;
        goto label_1a3f68;
    }
    ctx->pc = 0x1A3F60u;
    SET_GPR_U32(ctx, 31, 0x1A3F68u);
    ctx->pc = 0x1965D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1965D8u, 0x1A3F60u, 0x1A3F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3F68u;
label_1a3f68:
    // 0x1a3f68: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1a3f6c:
    if (ctx->pc == 0x1A3F6Cu) {
        ctx->pc = 0x1A3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F68u;
        // 0x1a3f6c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F70u;
        goto label_1a3f70;
    }
    ctx->pc = 0x1A3F68u;
    {
        const bool branch_taken_0x1a3f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F68u;
        // 0x1a3f6c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f68) {
            ctx->pc = 0x1A3FCCu;
            goto label_1a3fcc;
        }
    }
    ctx->pc = 0x1A3F70u;
label_1a3f70:
    // 0x1a3f70: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a3f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1a3f74:
    // 0x1a3f74: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a3f78:
    if (ctx->pc == 0x1A3F78u) {
        ctx->pc = 0x1A3F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F74u;
        // 0x1a3f78: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F7Cu;
        goto label_1a3f7c;
    }
    ctx->pc = 0x1A3F74u;
    {
        const bool branch_taken_0x1a3f74 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A3F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F74u;
        // 0x1a3f78: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f74) {
            ctx->pc = 0x1A3F90u;
            goto label_1a3f90;
        }
    }
    ctx->pc = 0x1A3F7Cu;
label_1a3f7c:
    // 0x1a3f7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3f80:
    // 0x1a3f80: 0x0  nop
    ctx->pc = 0x1a3f80u;
    // NOP
label_1a3f84:
    // 0x1a3f84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3f84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a3f88:
    // 0x1a3f88: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a3f8c:
    if (ctx->pc == 0x1A3F8Cu) {
        ctx->pc = 0x1A3F90u;
        goto label_1a3f90;
    }
    ctx->pc = 0x1A3F88u;
    {
        const bool branch_taken_0x1a3f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3f88) {
            ctx->pc = 0x1A3FA8u;
            goto label_1a3fa8;
        }
    }
    ctx->pc = 0x1A3F90u;
label_1a3f90:
    // 0x1a3f90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a3f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a3f94:
    // 0x1a3f94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a3f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a3f98:
    // 0x1a3f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3f9c:
    // 0x1a3f9c: 0x0  nop
    ctx->pc = 0x1a3f9cu;
    // NOP
label_1a3fa0:
    // 0x1a3fa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3fa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a3fa4:
    // 0x1a3fa4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a3fa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a3fa8:
    // 0x1a3fa8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a3fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a3fac:
    // 0x1a3fac: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a3facu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a3fb0:
    // 0x1a3fb0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a3fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a3fb4:
    // 0x1a3fb4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1a3fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_1a3fb8:
    // 0x1a3fb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a3fb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a3fbc:
    // 0x1a3fbc: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1a3fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_1a3fc0:
    // 0x1a3fc0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a3fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a3fc4:
    // 0x1a3fc4: 0x10000017  b           . + 4 + (0x17 << 2)
label_1a3fc8:
    if (ctx->pc == 0x1A3FC8u) {
        ctx->pc = 0x1A3FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FC4u;
        // 0x1a3fc8: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3FCCu;
        goto label_1a3fcc;
    }
    ctx->pc = 0x1A3FC4u;
    {
        const bool branch_taken_0x1a3fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FC4u;
        // 0x1a3fc8: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3fc4) {
            ctx->pc = 0x1A4024u;
            goto label_1a4024;
        }
    }
    ctx->pc = 0x1A3FCCu;
label_1a3fcc:
    // 0x1a3fcc: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a3fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1a3fd0:
    // 0x1a3fd0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a3fd4:
    if (ctx->pc == 0x1A3FD4u) {
        ctx->pc = 0x1A3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FD0u;
        // 0x1a3fd4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3FD8u;
        goto label_1a3fd8;
    }
    ctx->pc = 0x1A3FD0u;
    {
        const bool branch_taken_0x1a3fd0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FD0u;
        // 0x1a3fd4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3fd0) {
            ctx->pc = 0x1A3FECu;
            goto label_1a3fec;
        }
    }
    ctx->pc = 0x1A3FD8u;
label_1a3fd8:
    // 0x1a3fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3fdc:
    // 0x1a3fdc: 0x0  nop
    ctx->pc = 0x1a3fdcu;
    // NOP
label_1a3fe0:
    // 0x1a3fe0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a3fe4:
    // 0x1a3fe4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a3fe8:
    if (ctx->pc == 0x1A3FE8u) {
        ctx->pc = 0x1A3FECu;
        goto label_1a3fec;
    }
    ctx->pc = 0x1A3FE4u;
    {
        const bool branch_taken_0x1a3fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3fe4) {
            ctx->pc = 0x1A4004u;
            goto label_1a4004;
        }
    }
    ctx->pc = 0x1A3FECu;
label_1a3fec:
    // 0x1a3fec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a3fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a3ff0:
    // 0x1a3ff0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a3ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a3ff4:
    // 0x1a3ff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3ff8:
    // 0x1a3ff8: 0x0  nop
    ctx->pc = 0x1a3ff8u;
    // NOP
label_1a3ffc:
    // 0x1a3ffc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a4000:
    // 0x1a4000: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a4000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a4004:
    // 0x1a4004: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a4004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a4008:
    // 0x1a4008: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a4008u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a400c:
    // 0x1a400c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a400cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a4010:
    // 0x1a4010: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1a4010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1a4014:
    // 0x1a4014: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a4014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4018:
    // 0x1a4018: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x1a4018u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1a401c:
    // 0x1a401c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1a401cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_1a4020:
    // 0x1a4020: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a4020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a4024:
    // 0x1a4024: 0xc0b12b0  jal         func_2C4AC0
label_1a4028:
    if (ctx->pc == 0x1A4028u) {
        ctx->pc = 0x1A4028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4024u;
        // 0x1a4028: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A402Cu;
        goto label_1a402c;
    }
    ctx->pc = 0x1A4024u;
    SET_GPR_U32(ctx, 31, 0x1A402Cu);
    ctx->pc = 0x1A4028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4024u;
    // 0x1a4028: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1A4024u, 0x1A402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A402Cu;
label_1a402c:
    // 0x1a402c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a402cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1a4030:
    // 0x1a4030: 0xe6140028  swc1        $f20, 0x28($s0)
    ctx->pc = 0x1a4030u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_1a4034:
    // 0x1a4034: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a4034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a4038:
    // 0x1a4038: 0x5051003e  beql        $v0, $s1, . + 4 + (0x3E << 2)
label_1a403c:
    if (ctx->pc == 0x1A403Cu) {
        ctx->pc = 0x1A403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4038u;
        // 0x1a403c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4040u;
        goto label_1a4040;
    }
    ctx->pc = 0x1A4038u;
    {
        const bool branch_taken_0x1a4038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1a4038) {
            ctx->pc = 0x1A403Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4038u;
            // 0x1a403c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4134u;
            goto label_1a4134;
        }
    }
    ctx->pc = 0x1A4040u;
label_1a4040:
    // 0x1a4040: 0xc0691d6  jal         func_1A4758
label_1a4044:
    if (ctx->pc == 0x1A4044u) {
        ctx->pc = 0x1A4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4040u;
        // 0x1a4044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4048u;
        goto label_1a4048;
    }
    ctx->pc = 0x1A4040u;
    SET_GPR_U32(ctx, 31, 0x1A4048u);
    ctx->pc = 0x1A4044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4040u;
    // 0x1a4044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4758u, 0x1A4040u, 0x1A4048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4048u;
label_1a4048:
    // 0x1a4048: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a4048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a404c:
    // 0x1a404c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a4050:
    if (ctx->pc == 0x1A4050u) {
        ctx->pc = 0x1A4050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A404Cu;
        // 0x1a4050: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4054u;
        goto label_1a4054;
    }
    ctx->pc = 0x1A404Cu;
    {
        const bool branch_taken_0x1a404c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A404Cu;
        // 0x1a4050: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a404c) {
            ctx->pc = 0x1A4064u;
            goto label_1a4064;
        }
    }
    ctx->pc = 0x1A4054u;
label_1a4054:
    // 0x1a4054: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a4054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a4058:
    // 0x1a4058: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a4058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a405c:
    // 0x1a405c: 0x40f809  jalr        $v0
label_1a4060:
    if (ctx->pc == 0x1A4060u) {
        ctx->pc = 0x1A4064u;
        goto label_1a4064;
    }
    ctx->pc = 0x1A405Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4064u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A405Cu, 0x1A4064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4064u;
label_1a4064:
    // 0x1a4064: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x1a4064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_1a4068:
    // 0x1a4068: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1a4068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a406c:
    // 0x1a406c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a406cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a4070:
    // 0x1a4070: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4074:
    // 0x1a4074: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1a4074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_1a4078:
    // 0x1a4078: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a4078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a407c:
    // 0x1a407c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a407cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a4080:
    // 0x1a4080: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a4080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1a4084:
    // 0x1a4084: 0x40f809  jalr        $v0
label_1a4088:
    if (ctx->pc == 0x1A4088u) {
        ctx->pc = 0x1A4088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4084u;
        // 0x1a4088: 0x8cc51004  lw          $a1, 0x1004($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A408Cu;
        goto label_1a408c;
    }
    ctx->pc = 0x1A4084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A408Cu);
        ctx->pc = 0x1A4088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4084u;
        // 0x1a4088: 0x8cc51004  lw          $a1, 0x1004($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4084u, 0x1A408Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A408Cu;
label_1a408c:
    // 0x1a408c: 0xc061a16  jal         func_186858
label_1a4090:
    if (ctx->pc == 0x1A4090u) {
        ctx->pc = 0x1A4090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A408Cu;
        // 0x1a4090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4094u;
        goto label_1a4094;
    }
    ctx->pc = 0x1A408Cu;
    SET_GPR_U32(ctx, 31, 0x1A4094u);
    ctx->pc = 0x1A4090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A408Cu;
    // 0x1a4090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A408Cu, 0x1A4094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4094u;
label_1a4094:
    // 0x1a4094: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1a4094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_1a4098:
    // 0x1a4098: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1a4098u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1a409c:
    // 0x1a409c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a409cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a40a0:
    // 0x1a40a0: 0xc06ee70  jal         func_1BB9C0
label_1a40a4:
    if (ctx->pc == 0x1A40A4u) {
        ctx->pc = 0x1A40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40A0u;
        // 0x1a40a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A40A8u;
        goto label_1a40a8;
    }
    ctx->pc = 0x1A40A0u;
    SET_GPR_U32(ctx, 31, 0x1A40A8u);
    ctx->pc = 0x1A40A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A40A0u;
    // 0x1a40a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9C0u, 0x1A40A0u, 0x1A40A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A40A8u;
label_1a40a8:
    // 0x1a40a8: 0xc061a16  jal         func_186858
label_1a40ac:
    if (ctx->pc == 0x1A40ACu) {
        ctx->pc = 0x1A40ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40A8u;
        // 0x1a40ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A40B0u;
        goto label_1a40b0;
    }
    ctx->pc = 0x1A40A8u;
    SET_GPR_U32(ctx, 31, 0x1A40B0u);
    ctx->pc = 0x1A40ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A40A8u;
    // 0x1a40ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A40A8u, 0x1A40B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A40B0u;
label_1a40b0:
    // 0x1a40b0: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1a40b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_1a40b4:
    // 0x1a40b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a40b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a40b8:
    // 0x1a40b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a40b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a40bc:
    // 0x1a40bc: 0xe454004c  swc1        $f20, 0x4C($v0)
    ctx->pc = 0x1a40bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_1a40c0:
    // 0x1a40c0: 0xc061a16  jal         func_186858
label_1a40c4:
    if (ctx->pc == 0x1A40C4u) {
        ctx->pc = 0x1A40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40C0u;
        // 0x1a40c4: 0xe4400058  swc1        $f0, 0x58($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A40C8u;
        goto label_1a40c8;
    }
    ctx->pc = 0x1A40C0u;
    SET_GPR_U32(ctx, 31, 0x1A40C8u);
    ctx->pc = 0x1A40C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A40C0u;
    // 0x1a40c4: 0xe4400058  swc1        $f0, 0x58($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A40C0u, 0x1A40C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A40C8u;
label_1a40c8:
    // 0x1a40c8: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1a40c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_1a40cc:
    // 0x1a40cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a40ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1a40d0:
    // 0x1a40d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a40d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a40d4:
    // 0x1a40d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a40d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a40d8:
    // 0x1a40d8: 0xc061a16  jal         func_186858
label_1a40dc:
    if (ctx->pc == 0x1A40DCu) {
        ctx->pc = 0x1A40DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40D8u;
        // 0x1a40dc: 0xe4400050  swc1        $f0, 0x50($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A40E0u;
        goto label_1a40e0;
    }
    ctx->pc = 0x1A40D8u;
    SET_GPR_U32(ctx, 31, 0x1A40E0u);
    ctx->pc = 0x1A40DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A40D8u;
    // 0x1a40dc: 0xe4400050  swc1        $f0, 0x50($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A40D8u, 0x1A40E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A40E0u;
label_1a40e0:
    // 0x1a40e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a40e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a40e4:
    // 0x1a40e4: 0xc061a16  jal         func_186858
label_1a40e8:
    if (ctx->pc == 0x1A40E8u) {
        ctx->pc = 0x1A40E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40E4u;
        // 0x1a40e8: 0xe4540054  swc1        $f20, 0x54($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A40ECu;
        goto label_1a40ec;
    }
    ctx->pc = 0x1A40E4u;
    SET_GPR_U32(ctx, 31, 0x1A40ECu);
    ctx->pc = 0x1A40E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A40E4u;
    // 0x1a40e8: 0xe4540054  swc1        $f20, 0x54($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A40E4u, 0x1A40ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A40ECu;
label_1a40ec:
    // 0x1a40ec: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1a40ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1a40f0:
    // 0x1a40f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a40f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a40f4:
    // 0x1a40f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a40f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a40f8:
    // 0x1a40f8: 0xc061a16  jal         func_186858
label_1a40fc:
    if (ctx->pc == 0x1A40FCu) {
        ctx->pc = 0x1A40FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40F8u;
        // 0x1a40fc: 0xe4400058  swc1        $f0, 0x58($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4100u;
        goto label_1a4100;
    }
    ctx->pc = 0x1A40F8u;
    SET_GPR_U32(ctx, 31, 0x1A4100u);
    ctx->pc = 0x1A40FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A40F8u;
    // 0x1a40fc: 0xe4400058  swc1        $f0, 0x58($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A40F8u, 0x1A4100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4100u;
label_1a4100:
    // 0x1a4100: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4104:
    // 0x1a4104: 0xc06eebe  jal         func_1BBAF8
label_1a4108:
    if (ctx->pc == 0x1A4108u) {
        ctx->pc = 0x1A4108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4104u;
        // 0x1a4108: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A410Cu;
        goto label_1a410c;
    }
    ctx->pc = 0x1A4104u;
    SET_GPR_U32(ctx, 31, 0x1A410Cu);
    ctx->pc = 0x1A4108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4104u;
    // 0x1a4108: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x1A4104u, 0x1A410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A410Cu;
label_1a410c:
    // 0x1a410c: 0xc061a16  jal         func_186858
label_1a4110:
    if (ctx->pc == 0x1A4110u) {
        ctx->pc = 0x1A4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A410Cu;
        // 0x1a4110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4114u;
        goto label_1a4114;
    }
    ctx->pc = 0x1A410Cu;
    SET_GPR_U32(ctx, 31, 0x1A4114u);
    ctx->pc = 0x1A4110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A410Cu;
    // 0x1a4110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A410Cu, 0x1A4114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4114u;
label_1a4114:
    // 0x1a4114: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1a4114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_1a4118:
    // 0x1a4118: 0xc061a16  jal         func_186858
label_1a411c:
    if (ctx->pc == 0x1A411Cu) {
        ctx->pc = 0x1A411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4118u;
        // 0x1a411c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4120u;
        goto label_1a4120;
    }
    ctx->pc = 0x1A4118u;
    SET_GPR_U32(ctx, 31, 0x1A4120u);
    ctx->pc = 0x1A411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4118u;
    // 0x1a411c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A4118u, 0x1A4120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4120u;
label_1a4120:
    // 0x1a4120: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1a4120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1a4124:
    // 0x1a4124: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a4124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4128:
    // 0x1a4128: 0x0  nop
    ctx->pc = 0x1a4128u;
    // NOP
label_1a412c:
    // 0x1a412c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1a412cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1a4130:
    // 0x1a4130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4134:
    // 0x1a4134: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4138:
    // 0x1a4138: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a413c:
    // 0x1a413c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a413cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a4140:
    // 0x1a4140: 0x3e00008  jr          $ra
label_1a4144:
    if (ctx->pc == 0x1A4144u) {
        ctx->pc = 0x1A4144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4140u;
        // 0x1a4144: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4148u;
        goto label_fallthrough_0x1a4140;
    }
    ctx->pc = 0x1A4140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4140u;
        // 0x1a4144: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a4140:
    ctx->pc = 0x1A4148u;
}
