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

// Function: sub_002C4028
// Address: 0x2c4028 - 0x2c4200
void sub_002C4028_0x2c4028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4028_0x2c4028");
#endif

    switch (ctx->pc) {
        case 0x2c4028u: goto label_2c4028;
        case 0x2c402cu: goto label_2c402c;
        case 0x2c4030u: goto label_2c4030;
        case 0x2c4034u: goto label_2c4034;
        case 0x2c4038u: goto label_2c4038;
        case 0x2c403cu: goto label_2c403c;
        case 0x2c4040u: goto label_2c4040;
        case 0x2c4044u: goto label_2c4044;
        case 0x2c4048u: goto label_2c4048;
        case 0x2c404cu: goto label_2c404c;
        case 0x2c4050u: goto label_2c4050;
        case 0x2c4054u: goto label_2c4054;
        case 0x2c4058u: goto label_2c4058;
        case 0x2c405cu: goto label_2c405c;
        case 0x2c4060u: goto label_2c4060;
        case 0x2c4064u: goto label_2c4064;
        case 0x2c4068u: goto label_2c4068;
        case 0x2c406cu: goto label_2c406c;
        case 0x2c4070u: goto label_2c4070;
        case 0x2c4074u: goto label_2c4074;
        case 0x2c4078u: goto label_2c4078;
        case 0x2c407cu: goto label_2c407c;
        case 0x2c4080u: goto label_2c4080;
        case 0x2c4084u: goto label_2c4084;
        case 0x2c4088u: goto label_2c4088;
        case 0x2c408cu: goto label_2c408c;
        case 0x2c4090u: goto label_2c4090;
        case 0x2c4094u: goto label_2c4094;
        case 0x2c4098u: goto label_2c4098;
        case 0x2c409cu: goto label_2c409c;
        case 0x2c40a0u: goto label_2c40a0;
        case 0x2c40a4u: goto label_2c40a4;
        case 0x2c40a8u: goto label_2c40a8;
        case 0x2c40acu: goto label_2c40ac;
        case 0x2c40b0u: goto label_2c40b0;
        case 0x2c40b4u: goto label_2c40b4;
        case 0x2c40b8u: goto label_2c40b8;
        case 0x2c40bcu: goto label_2c40bc;
        case 0x2c40c0u: goto label_2c40c0;
        case 0x2c40c4u: goto label_2c40c4;
        case 0x2c40c8u: goto label_2c40c8;
        case 0x2c40ccu: goto label_2c40cc;
        case 0x2c40d0u: goto label_2c40d0;
        case 0x2c40d4u: goto label_2c40d4;
        case 0x2c40d8u: goto label_2c40d8;
        case 0x2c40dcu: goto label_2c40dc;
        case 0x2c40e0u: goto label_2c40e0;
        case 0x2c40e4u: goto label_2c40e4;
        case 0x2c40e8u: goto label_2c40e8;
        case 0x2c40ecu: goto label_2c40ec;
        case 0x2c40f0u: goto label_2c40f0;
        case 0x2c40f4u: goto label_2c40f4;
        case 0x2c40f8u: goto label_2c40f8;
        case 0x2c40fcu: goto label_2c40fc;
        case 0x2c4100u: goto label_2c4100;
        case 0x2c4104u: goto label_2c4104;
        case 0x2c4108u: goto label_2c4108;
        case 0x2c410cu: goto label_2c410c;
        case 0x2c4110u: goto label_2c4110;
        case 0x2c4114u: goto label_2c4114;
        case 0x2c4118u: goto label_2c4118;
        case 0x2c411cu: goto label_2c411c;
        case 0x2c4120u: goto label_2c4120;
        case 0x2c4124u: goto label_2c4124;
        case 0x2c4128u: goto label_2c4128;
        case 0x2c412cu: goto label_2c412c;
        case 0x2c4130u: goto label_2c4130;
        case 0x2c4134u: goto label_2c4134;
        case 0x2c4138u: goto label_2c4138;
        case 0x2c413cu: goto label_2c413c;
        case 0x2c4140u: goto label_2c4140;
        case 0x2c4144u: goto label_2c4144;
        case 0x2c4148u: goto label_2c4148;
        case 0x2c414cu: goto label_2c414c;
        case 0x2c4150u: goto label_2c4150;
        case 0x2c4154u: goto label_2c4154;
        case 0x2c4158u: goto label_2c4158;
        case 0x2c415cu: goto label_2c415c;
        case 0x2c4160u: goto label_2c4160;
        case 0x2c4164u: goto label_2c4164;
        case 0x2c4168u: goto label_2c4168;
        case 0x2c416cu: goto label_2c416c;
        case 0x2c4170u: goto label_2c4170;
        case 0x2c4174u: goto label_2c4174;
        case 0x2c4178u: goto label_2c4178;
        case 0x2c417cu: goto label_2c417c;
        case 0x2c4180u: goto label_2c4180;
        case 0x2c4184u: goto label_2c4184;
        case 0x2c4188u: goto label_2c4188;
        case 0x2c418cu: goto label_2c418c;
        case 0x2c4190u: goto label_2c4190;
        case 0x2c4194u: goto label_2c4194;
        case 0x2c4198u: goto label_2c4198;
        case 0x2c419cu: goto label_2c419c;
        case 0x2c41a0u: goto label_2c41a0;
        case 0x2c41a4u: goto label_2c41a4;
        case 0x2c41a8u: goto label_2c41a8;
        case 0x2c41acu: goto label_2c41ac;
        case 0x2c41b0u: goto label_2c41b0;
        case 0x2c41b4u: goto label_2c41b4;
        case 0x2c41b8u: goto label_2c41b8;
        case 0x2c41bcu: goto label_2c41bc;
        case 0x2c41c0u: goto label_2c41c0;
        case 0x2c41c4u: goto label_2c41c4;
        case 0x2c41c8u: goto label_2c41c8;
        case 0x2c41ccu: goto label_2c41cc;
        case 0x2c41d0u: goto label_2c41d0;
        case 0x2c41d4u: goto label_2c41d4;
        case 0x2c41d8u: goto label_2c41d8;
        case 0x2c41dcu: goto label_2c41dc;
        case 0x2c41e0u: goto label_2c41e0;
        case 0x2c41e4u: goto label_2c41e4;
        case 0x2c41e8u: goto label_2c41e8;
        case 0x2c41ecu: goto label_2c41ec;
        case 0x2c41f0u: goto label_2c41f0;
        case 0x2c41f4u: goto label_2c41f4;
        case 0x2c41f8u: goto label_2c41f8;
        case 0x2c41fcu: goto label_2c41fc;
        default: break;
    }

    ctx->pc = 0x2c4028u;

label_2c4028:
    // 0x2c4028: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c4028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c402c:
    // 0x2c402c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2c402cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
label_2c4030:
    // 0x2c4030: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c4034:
    // 0x2c4034: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c4034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c4038:
    // 0x2c4038: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c4038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c403c:
    // 0x2c403c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2c403cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2c4040:
    // 0x2c4040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c4040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c4044:
    // 0x2c4044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c4044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c4048:
    // 0x2c4048: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2c4048u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_2c404c:
    // 0x2c404c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c404cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c4050:
    // 0x2c4050: 0xe62c005c  swc1        $f12, 0x5C($s1)
    ctx->pc = 0x2c4050u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
label_2c4054:
    // 0x2c4054: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c4054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c4058:
    // 0x2c4058: 0x82230051  lb          $v1, 0x51($s1)
    ctx->pc = 0x2c4058u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 81)));
label_2c405c:
    // 0x2c405c: 0x94820010  lhu         $v0, 0x10($a0)
    ctx->pc = 0x2c405cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
label_2c4060:
    // 0x2c4060: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c4060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c4064:
    // 0x2c4064: 0x0  nop
    ctx->pc = 0x2c4064u;
    // NOP
label_2c4068:
    // 0x2c4068: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c4068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2c406c:
    // 0x2c406c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c406cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2c4070:
    // 0x2c4070: 0x1065005c  beq         $v1, $a1, . + 4 + (0x5C << 2)
label_2c4074:
    if (ctx->pc == 0x2C4074u) {
        ctx->pc = 0x2C4074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4070u;
        // 0x2c4074: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4078u;
        goto label_2c4078;
    }
    ctx->pc = 0x2C4070u;
    {
        const bool branch_taken_0x2c4070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C4074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4070u;
        // 0x2c4074: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4070) {
            ctx->pc = 0x2C41E4u;
            goto label_2c41e4;
        }
    }
    ctx->pc = 0x2C4078u;
label_2c4078:
    // 0x2c4078: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c4078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c407c:
    // 0x2c407c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_2c4080:
    if (ctx->pc == 0x2C4080u) {
        ctx->pc = 0x2C4080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C407Cu;
        // 0x2c4080: 0x80820012  lb          $v0, 0x12($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4084u;
        goto label_2c4084;
    }
    ctx->pc = 0x2C407Cu;
    {
        const bool branch_taken_0x2c407c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c407c) {
            ctx->pc = 0x2C4080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C407Cu;
            // 0x2c4080: 0x80820012  lb          $v0, 0x12($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C408Cu;
            goto label_2c408c;
        }
    }
    ctx->pc = 0x2C4084u;
label_2c4084:
    // 0x2c4084: 0x10000056  b           . + 4 + (0x56 << 2)
label_2c4088:
    if (ctx->pc == 0x2C4088u) {
        ctx->pc = 0x2C4088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4084u;
        // 0x2c4088: 0xa2250051  sb          $a1, 0x51($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C408Cu;
        goto label_2c408c;
    }
    ctx->pc = 0x2C4084u;
    {
        const bool branch_taken_0x2c4084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4084u;
        // 0x2c4088: 0xa2250051  sb          $a1, 0x51($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4084) {
            ctx->pc = 0x2C41E0u;
            goto label_2c41e0;
        }
    }
    ctx->pc = 0x2C408Cu;
label_2c408c:
    // 0x2c408c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2c4090:
    if (ctx->pc == 0x2C4090u) {
        ctx->pc = 0x2C4090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C408Cu;
        // 0x2c4090: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4094u;
        goto label_2c4094;
    }
    ctx->pc = 0x2C408Cu;
    {
        const bool branch_taken_0x2c408c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C408Cu;
        // 0x2c4090: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c408c) {
            ctx->pc = 0x2C40B4u;
            goto label_2c40b4;
        }
    }
    ctx->pc = 0x2C4094u;
label_2c4094:
    // 0x2c4094: 0x460c0836  c.le.s      $f1, $f12
    ctx->pc = 0x2c4094u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c4098:
    // 0x2c4098: 0x0  nop
    ctx->pc = 0x2c4098u;
    // NOP
label_2c409c:
    // 0x2c409c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_2c40a0:
    if (ctx->pc == 0x2C40A0u) {
        ctx->pc = 0x2C40A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C409Cu;
        // 0x2c40a0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C40A4u;
        goto label_2c40a4;
    }
    ctx->pc = 0x2C409Cu;
    {
        const bool branch_taken_0x2c409c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c409c) {
            ctx->pc = 0x2C40A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C409Cu;
            // 0x2c40a0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C40B4u;
            goto label_2c40b4;
        }
    }
    ctx->pc = 0x2C40A4u;
label_2c40a4:
    // 0x2c40a4: 0xc0b0ff2  jal         func_2C3FC8
label_2c40a8:
    if (ctx->pc == 0x2C40A8u) {
        ctx->pc = 0x2C40A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C40A4u;
        // 0x2c40a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C40ACu;
        goto label_2c40ac;
    }
    ctx->pc = 0x2C40A4u;
    SET_GPR_U32(ctx, 31, 0x2C40ACu);
    ctx->pc = 0x2C40A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C40A4u;
    // 0x2c40a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3FC8u, 0x2C40A4u, 0x2C40ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40ACu;
label_2c40ac:
    // 0x2c40ac: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2c40b0:
    if (ctx->pc == 0x2C40B0u) {
        ctx->pc = 0x2C40B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C40ACu;
        // 0x2c40b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C40B4u;
        goto label_2c40b4;
    }
    ctx->pc = 0x2C40ACu;
    {
        const bool branch_taken_0x2c40ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c40ac) {
            ctx->pc = 0x2C40B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C40ACu;
            // 0x2c40b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C40B4u;
            goto label_2c40b4;
        }
    }
    ctx->pc = 0x2C40B4u;
label_2c40b4:
    // 0x2c40b4: 0x1600004b  bnez        $s0, . + 4 + (0x4B << 2)
label_2c40b8:
    if (ctx->pc == 0x2C40B8u) {
        ctx->pc = 0x2C40B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C40B4u;
        // 0x2c40b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C40BCu;
        goto label_2c40bc;
    }
    ctx->pc = 0x2C40B4u;
    {
        const bool branch_taken_0x2c40b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C40B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C40B4u;
        // 0x2c40b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c40b4) {
            ctx->pc = 0x2C41E4u;
            goto label_2c41e4;
        }
    }
    ctx->pc = 0x2C40BCu;
label_2c40bc:
    // 0x2c40bc: 0x82220050  lb          $v0, 0x50($s1)
    ctx->pc = 0x2c40bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
label_2c40c0:
    // 0x2c40c0: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
label_2c40c4:
    if (ctx->pc == 0x2C40C4u) {
        ctx->pc = 0x2C40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C40C0u;
        // 0x2c40c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C40C8u;
        goto label_2c40c8;
    }
    ctx->pc = 0x2C40C0u;
    {
        const bool branch_taken_0x2c40c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C40C0u;
        // 0x2c40c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c40c0) {
            ctx->pc = 0x2C41E4u;
            goto label_2c41e4;
        }
    }
    ctx->pc = 0x2C40C8u;
label_2c40c8:
    // 0x2c40c8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2c40c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_2c40cc:
    // 0x2c40cc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2c40ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_2c40d0:
    // 0x2c40d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c40d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c40d4:
    // 0x2c40d4: 0x96220064  lhu         $v0, 0x64($s1)
    ctx->pc = 0x2c40d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
label_2c40d8:
    // 0x2c40d8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2c40d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_2c40dc:
    // 0x2c40dc: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2c40dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2c40e0:
    // 0x2c40e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c40e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c40e4:
    // 0x2c40e4: 0x0  nop
    ctx->pc = 0x2c40e4u;
    // NOP
label_2c40e8:
    // 0x2c40e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c40e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2c40ec:
    // 0x2c40ec: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2c40f0:
    if (ctx->pc == 0x2C40F0u) {
        ctx->pc = 0x2C40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C40ECu;
        // 0x2c40f0: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C40F4u;
        goto label_2c40f4;
    }
    ctx->pc = 0x2C40ECu;
    {
        const bool branch_taken_0x2c40ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C40ECu;
        // 0x2c40f0: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c40ec) {
            ctx->pc = 0x2C4114u;
            goto label_2c4114;
        }
    }
    ctx->pc = 0x2C40F4u;
label_2c40f4:
    // 0x2c40f4: 0x96220060  lhu         $v0, 0x60($s1)
    ctx->pc = 0x2c40f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
label_2c40f8:
    // 0x2c40f8: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2c40f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
label_2c40fc:
    // 0x2c40fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c40fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c4100:
    // 0x2c4100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c4104:
    // 0x2c4104: 0x0  nop
    ctx->pc = 0x2c4104u;
    // NOP
label_2c4108:
    // 0x2c4108: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2c410c:
    // 0x2c410c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2c4110:
    if (ctx->pc == 0x2C4110u) {
        ctx->pc = 0x2C4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C410Cu;
        // 0x2c4110: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4114u;
        goto label_2c4114;
    }
    ctx->pc = 0x2C410Cu;
    {
        const bool branch_taken_0x2c410c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C410Cu;
        // 0x2c4110: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c410c) {
            ctx->pc = 0x2C411Cu;
            goto label_2c411c;
        }
    }
    ctx->pc = 0x2C4114u;
label_2c4114:
    // 0x2c4114: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x2c4114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c4118:
    // 0x2c4118: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2c4118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2c411c:
    // 0x2c411c: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x2c411cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
label_2c4120:
    // 0x2c4120: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2c4120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c4124:
    // 0x2c4124: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x2c4124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c4128:
    // 0x2c4128: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2c4128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c412c:
    // 0x2c412c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c412cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c4130:
    // 0x2c4130: 0x0  nop
    ctx->pc = 0x2c4130u;
    // NOP
label_2c4134:
    // 0x2c4134: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
label_2c4138:
    if (ctx->pc == 0x2C4138u) {
        ctx->pc = 0x2C4138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4134u;
        // 0x2c4138: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C413Cu;
        goto label_2c413c;
    }
    ctx->pc = 0x2C4134u;
    {
        const bool branch_taken_0x2c4134 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4134) {
            ctx->pc = 0x2C4138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4134u;
            // 0x2c4138: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4194u;
            goto label_2c4194;
        }
    }
    ctx->pc = 0x2C413Cu;
label_2c413c:
    // 0x2c413c: 0x80430012  lb          $v1, 0x12($v0)
    ctx->pc = 0x2c413cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_2c4140:
    // 0x2c4140: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_2c4144:
    if (ctx->pc == 0x2C4144u) {
        ctx->pc = 0x2C4144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4140u;
        // 0x2c4144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4148u;
        goto label_2c4148;
    }
    ctx->pc = 0x2C4140u;
    {
        const bool branch_taken_0x2c4140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4140u;
        // 0x2c4144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4140) {
            ctx->pc = 0x2C4178u;
            goto label_2c4178;
        }
    }
    ctx->pc = 0x2C4148u;
label_2c4148:
    // 0x2c4148: 0x82230051  lb          $v1, 0x51($s1)
    ctx->pc = 0x2c4148u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 81)));
label_2c414c:
    // 0x2c414c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_2c4150:
    if (ctx->pc == 0x2C4150u) {
        ctx->pc = 0x2C4154u;
        goto label_2c4154;
    }
    ctx->pc = 0x2C414Cu;
    {
        const bool branch_taken_0x2c414c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c414c) {
            ctx->pc = 0x2C4168u;
            goto label_2c4168;
        }
    }
    ctx->pc = 0x2C4154u;
label_2c4154:
    // 0x2c4154: 0xc0b0ed2  jal         func_2C3B48
label_2c4158:
    if (ctx->pc == 0x2C4158u) {
        ctx->pc = 0x2C4158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4154u;
        // 0x2c4158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C415Cu;
        goto label_2c415c;
    }
    ctx->pc = 0x2C4154u;
    SET_GPR_U32(ctx, 31, 0x2C415Cu);
    ctx->pc = 0x2C4158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4154u;
    // 0x2c4158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3B48u, 0x2C4154u, 0x2C415Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C415Cu;
label_2c415c:
    // 0x2c415c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c4160:
    // 0x2c4160: 0x1000000b  b           . + 4 + (0xB << 2)
label_2c4164:
    if (ctx->pc == 0x2C4164u) {
        ctx->pc = 0x2C4164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4160u;
        // 0x2c4164: 0xa2220051  sb          $v0, 0x51($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4168u;
        goto label_2c4168;
    }
    ctx->pc = 0x2C4160u;
    {
        const bool branch_taken_0x2c4160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4160u;
        // 0x2c4164: 0xa2220051  sb          $v0, 0x51($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4160) {
            ctx->pc = 0x2C4190u;
            goto label_2c4190;
        }
    }
    ctx->pc = 0x2C4168u;
label_2c4168:
    // 0x2c4168: 0xc0b0ed2  jal         func_2C3B48
label_2c416c:
    if (ctx->pc == 0x2C416Cu) {
        ctx->pc = 0x2C416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4168u;
        // 0x2c416c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4170u;
        goto label_2c4170;
    }
    ctx->pc = 0x2C4168u;
    SET_GPR_U32(ctx, 31, 0x2C4170u);
    ctx->pc = 0x2C416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4168u;
    // 0x2c416c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3B48u, 0x2C4168u, 0x2C4170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4170u;
label_2c4170:
    // 0x2c4170: 0x10000008  b           . + 4 + (0x8 << 2)
label_2c4174:
    if (ctx->pc == 0x2C4174u) {
        ctx->pc = 0x2C4174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4170u;
        // 0x2c4174: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4178u;
        goto label_2c4178;
    }
    ctx->pc = 0x2C4170u;
    {
        const bool branch_taken_0x2c4170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4170u;
        // 0x2c4174: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4170) {
            ctx->pc = 0x2C4194u;
            goto label_2c4194;
        }
    }
    ctx->pc = 0x2C4178u;
label_2c4178:
    // 0x2c4178: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2c417c:
    if (ctx->pc == 0x2C417Cu) {
        ctx->pc = 0x2C417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4178u;
        // 0x2c417c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4180u;
        goto label_2c4180;
    }
    ctx->pc = 0x2C4178u;
    {
        const bool branch_taken_0x2c4178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4178u;
        // 0x2c417c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4178) {
            ctx->pc = 0x2C418Cu;
            goto label_2c418c;
        }
    }
    ctx->pc = 0x2C4180u;
label_2c4180:
    // 0x2c4180: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_2c4184:
    if (ctx->pc == 0x2C4184u) {
        ctx->pc = 0x2C4184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4180u;
        // 0x2c4184: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4188u;
        goto label_2c4188;
    }
    ctx->pc = 0x2C4180u;
    {
        const bool branch_taken_0x2c4180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c4180) {
            ctx->pc = 0x2C4184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4180u;
            // 0x2c4184: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4194u;
            goto label_2c4194;
        }
    }
    ctx->pc = 0x2C4188u;
label_2c4188:
    // 0x2c4188: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c4188u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2c418c:
    // 0x2c418c: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x2c418cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
label_2c4190:
    // 0x2c4190: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2c4190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c4194:
    // 0x2c4194: 0x80620018  lb          $v0, 0x18($v1)
    ctx->pc = 0x2c4194u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_2c4198:
    // 0x2c4198: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_2c419c:
    if (ctx->pc == 0x2C419Cu) {
        ctx->pc = 0x2C419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4198u;
        // 0x2c419c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C41A0u;
        goto label_2c41a0;
    }
    ctx->pc = 0x2C4198u;
    {
        const bool branch_taken_0x2c4198 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4198u;
        // 0x2c419c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4198) {
            ctx->pc = 0x2C41E0u;
            goto label_2c41e0;
        }
    }
    ctx->pc = 0x2C41A0u;
label_2c41a0:
    // 0x2c41a0: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x2c41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2c41a4:
    // 0x2c41a4: 0x0  nop
    ctx->pc = 0x2c41a4u;
    // NOP
label_2c41a8:
    // 0x2c41a8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2c41ac:
    // 0x2c41ac: 0xc62c0058  lwc1        $f12, 0x58($s1)
    ctx->pc = 0x2c41acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c41b0:
    // 0x2c41b0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2c41b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2c41b4:
    // 0x2c41b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c41b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c41b8:
    // 0x2c41b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c41b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c41bc:
    // 0x2c41bc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2c41bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2c41c0:
    // 0x2c41c0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2c41c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2c41c4:
    // 0x2c41c4: 0x40f809  jalr        $v0
label_2c41c8:
    if (ctx->pc == 0x2C41C8u) {
        ctx->pc = 0x2C41C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41C4u;
        // 0x2c41c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C41CCu;
        goto label_2c41cc;
    }
    ctx->pc = 0x2C41C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C41CCu);
        ctx->pc = 0x2C41C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41C4u;
        // 0x2c41c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C41C4u, 0x2C41CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C41CCu;
label_2c41cc:
    // 0x2c41cc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2c41ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c41d0:
    // 0x2c41d0: 0x80620018  lb          $v0, 0x18($v1)
    ctx->pc = 0x2c41d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_2c41d4:
    // 0x2c41d4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2c41d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2c41d8:
    // 0x2c41d8: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_2c41dc:
    if (ctx->pc == 0x2C41DCu) {
        ctx->pc = 0x2C41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41D8u;
        // 0x2c41dc: 0x8e230084  lw          $v1, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C41E0u;
        goto label_2c41e0;
    }
    ctx->pc = 0x2C41D8u;
    {
        const bool branch_taken_0x2c41d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c41d8) {
            ctx->pc = 0x2C41DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C41D8u;
            // 0x2c41dc: 0x8e230084  lw          $v1, 0x84($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C41A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c41a8;
        }
    }
    ctx->pc = 0x2C41E0u;
label_2c41e0:
    // 0x2c41e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c41e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c41e4:
    // 0x2c41e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c41e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c41e8:
    // 0x2c41e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c41e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c41ec:
    // 0x2c41ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c41ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c41f0:
    // 0x2c41f0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2c41f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c41f4:
    // 0x2c41f4: 0x3e00008  jr          $ra
label_2c41f8:
    if (ctx->pc == 0x2C41F8u) {
        ctx->pc = 0x2C41F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41F4u;
        // 0x2c41f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C41FCu;
        goto label_2c41fc;
    }
    ctx->pc = 0x2C41F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C41F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41F4u;
        // 0x2c41f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C41F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C41FCu;
label_2c41fc:
    // 0x2c41fc: 0x0  nop
    ctx->pc = 0x2c41fcu;
    // NOP
    ctx->pc = 0x2c4200u;
}
