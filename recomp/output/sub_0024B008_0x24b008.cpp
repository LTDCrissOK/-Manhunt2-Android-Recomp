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

// Function: sub_0024B008
// Address: 0x24b008 - 0x24b1e0
void sub_0024B008_0x24b008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B008_0x24b008");
#endif

    switch (ctx->pc) {
        case 0x24b008u: goto label_24b008;
        case 0x24b00cu: goto label_24b00c;
        case 0x24b010u: goto label_24b010;
        case 0x24b014u: goto label_24b014;
        case 0x24b018u: goto label_24b018;
        case 0x24b01cu: goto label_24b01c;
        case 0x24b020u: goto label_24b020;
        case 0x24b024u: goto label_24b024;
        case 0x24b028u: goto label_24b028;
        case 0x24b02cu: goto label_24b02c;
        case 0x24b030u: goto label_24b030;
        case 0x24b034u: goto label_24b034;
        case 0x24b038u: goto label_24b038;
        case 0x24b03cu: goto label_24b03c;
        case 0x24b040u: goto label_24b040;
        case 0x24b044u: goto label_24b044;
        case 0x24b048u: goto label_24b048;
        case 0x24b04cu: goto label_24b04c;
        case 0x24b050u: goto label_24b050;
        case 0x24b054u: goto label_24b054;
        case 0x24b058u: goto label_24b058;
        case 0x24b05cu: goto label_24b05c;
        case 0x24b060u: goto label_24b060;
        case 0x24b064u: goto label_24b064;
        case 0x24b068u: goto label_24b068;
        case 0x24b06cu: goto label_24b06c;
        case 0x24b070u: goto label_24b070;
        case 0x24b074u: goto label_24b074;
        case 0x24b078u: goto label_24b078;
        case 0x24b07cu: goto label_24b07c;
        case 0x24b080u: goto label_24b080;
        case 0x24b084u: goto label_24b084;
        case 0x24b088u: goto label_24b088;
        case 0x24b08cu: goto label_24b08c;
        case 0x24b090u: goto label_24b090;
        case 0x24b094u: goto label_24b094;
        case 0x24b098u: goto label_24b098;
        case 0x24b09cu: goto label_24b09c;
        case 0x24b0a0u: goto label_24b0a0;
        case 0x24b0a4u: goto label_24b0a4;
        case 0x24b0a8u: goto label_24b0a8;
        case 0x24b0acu: goto label_24b0ac;
        case 0x24b0b0u: goto label_24b0b0;
        case 0x24b0b4u: goto label_24b0b4;
        case 0x24b0b8u: goto label_24b0b8;
        case 0x24b0bcu: goto label_24b0bc;
        case 0x24b0c0u: goto label_24b0c0;
        case 0x24b0c4u: goto label_24b0c4;
        case 0x24b0c8u: goto label_24b0c8;
        case 0x24b0ccu: goto label_24b0cc;
        case 0x24b0d0u: goto label_24b0d0;
        case 0x24b0d4u: goto label_24b0d4;
        case 0x24b0d8u: goto label_24b0d8;
        case 0x24b0dcu: goto label_24b0dc;
        case 0x24b0e0u: goto label_24b0e0;
        case 0x24b0e4u: goto label_24b0e4;
        case 0x24b0e8u: goto label_24b0e8;
        case 0x24b0ecu: goto label_24b0ec;
        case 0x24b0f0u: goto label_24b0f0;
        case 0x24b0f4u: goto label_24b0f4;
        case 0x24b0f8u: goto label_24b0f8;
        case 0x24b0fcu: goto label_24b0fc;
        case 0x24b100u: goto label_24b100;
        case 0x24b104u: goto label_24b104;
        case 0x24b108u: goto label_24b108;
        case 0x24b10cu: goto label_24b10c;
        case 0x24b110u: goto label_24b110;
        case 0x24b114u: goto label_24b114;
        case 0x24b118u: goto label_24b118;
        case 0x24b11cu: goto label_24b11c;
        case 0x24b120u: goto label_24b120;
        case 0x24b124u: goto label_24b124;
        case 0x24b128u: goto label_24b128;
        case 0x24b12cu: goto label_24b12c;
        case 0x24b130u: goto label_24b130;
        case 0x24b134u: goto label_24b134;
        case 0x24b138u: goto label_24b138;
        case 0x24b13cu: goto label_24b13c;
        case 0x24b140u: goto label_24b140;
        case 0x24b144u: goto label_24b144;
        case 0x24b148u: goto label_24b148;
        case 0x24b14cu: goto label_24b14c;
        case 0x24b150u: goto label_24b150;
        case 0x24b154u: goto label_24b154;
        case 0x24b158u: goto label_24b158;
        case 0x24b15cu: goto label_24b15c;
        case 0x24b160u: goto label_24b160;
        case 0x24b164u: goto label_24b164;
        case 0x24b168u: goto label_24b168;
        case 0x24b16cu: goto label_24b16c;
        case 0x24b170u: goto label_24b170;
        case 0x24b174u: goto label_24b174;
        case 0x24b178u: goto label_24b178;
        case 0x24b17cu: goto label_24b17c;
        case 0x24b180u: goto label_24b180;
        case 0x24b184u: goto label_24b184;
        case 0x24b188u: goto label_24b188;
        case 0x24b18cu: goto label_24b18c;
        case 0x24b190u: goto label_24b190;
        case 0x24b194u: goto label_24b194;
        case 0x24b198u: goto label_24b198;
        case 0x24b19cu: goto label_24b19c;
        case 0x24b1a0u: goto label_24b1a0;
        case 0x24b1a4u: goto label_24b1a4;
        case 0x24b1a8u: goto label_24b1a8;
        case 0x24b1acu: goto label_24b1ac;
        case 0x24b1b0u: goto label_24b1b0;
        case 0x24b1b4u: goto label_24b1b4;
        case 0x24b1b8u: goto label_24b1b8;
        case 0x24b1bcu: goto label_24b1bc;
        case 0x24b1c0u: goto label_24b1c0;
        case 0x24b1c4u: goto label_24b1c4;
        case 0x24b1c8u: goto label_24b1c8;
        case 0x24b1ccu: goto label_24b1cc;
        case 0x24b1d0u: goto label_24b1d0;
        case 0x24b1d4u: goto label_24b1d4;
        case 0x24b1d8u: goto label_24b1d8;
        case 0x24b1dcu: goto label_24b1dc;
        default: break;
    }

    ctx->pc = 0x24b008u;

label_24b008:
    // 0x24b008: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x24b008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_24b00c:
    // 0x24b00c: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x24b00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
label_24b010:
    // 0x24b010: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x24b010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
label_24b014:
    // 0x24b014: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24b014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24b018:
    // 0x24b018: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x24b018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_24b01c:
    // 0x24b01c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24b01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24b020:
    // 0x24b020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24b024:
    // 0x24b024: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x24b024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_24b028:
    // 0x24b028: 0xac650160  sw          $a1, 0x160($v1)
    ctx->pc = 0x24b028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 5));
label_24b02c:
    // 0x24b02c: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x24b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_24b030:
    // 0x24b030: 0xc092b94  jal         func_24AE50
label_24b034:
    if (ctx->pc == 0x24B034u) {
        ctx->pc = 0x24B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B030u;
        // 0x24b034: 0xac400190  sw          $zero, 0x190($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B038u;
        goto label_24b038;
    }
    ctx->pc = 0x24B030u;
    SET_GPR_U32(ctx, 31, 0x24B038u);
    ctx->pc = 0x24B034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B030u;
    // 0x24b034: 0xac400190  sw          $zero, 0x190($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AE50u, 0x24B030u, 0x24B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B038u;
label_24b038:
    // 0x24b038: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x24b038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_24b03c:
    // 0x24b03c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24b03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24b040:
    // 0x24b040: 0x8c51bd50  lw          $s1, -0x42B0($v0)
    ctx->pc = 0x24b040u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_24b044:
    // 0x24b044: 0xc0b9f4e  jal         func_2E7D38
label_24b048:
    if (ctx->pc == 0x24B048u) {
        ctx->pc = 0x24B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B044u;
        // 0x24b048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B04Cu;
        goto label_24b04c;
    }
    ctx->pc = 0x24B044u;
    SET_GPR_U32(ctx, 31, 0x24B04Cu);
    ctx->pc = 0x24B048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B044u;
    // 0x24b048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7D38u, 0x24B044u, 0x24B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B04Cu;
label_24b04c:
    // 0x24b04c: 0x8e2312bc  lw          $v1, 0x12BC($s1)
    ctx->pc = 0x24b04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4796)));
label_24b050:
    // 0x24b050: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x24b050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_24b054:
    // 0x24b054: 0x5462005e  bnel        $v1, $v0, . + 4 + (0x5E << 2)
label_24b058:
    if (ctx->pc == 0x24B058u) {
        ctx->pc = 0x24B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B054u;
        // 0x24b058: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B05Cu;
        goto label_24b05c;
    }
    ctx->pc = 0x24B054u;
    {
        const bool branch_taken_0x24b054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24b054) {
            ctx->pc = 0x24B058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B054u;
            // 0x24b058: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B1D0u;
            goto label_24b1d0;
        }
    }
    ctx->pc = 0x24B05Cu;
label_24b05c:
    // 0x24b05c: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x24b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_24b060:
    // 0x24b060: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x24b060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_24b064:
    // 0x24b064: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x24b064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_24b068:
    // 0x24b068: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24b068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_24b06c:
    // 0x24b06c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24b070:
    // 0x24b070: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x24b070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_24b074:
    // 0x24b074: 0xc4630060  lwc1        $f3, 0x60($v1)
    ctx->pc = 0x24b074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24b078:
    // 0x24b078: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x24b078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_24b07c:
    // 0x24b07c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x24b07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_24b080:
    // 0x24b080: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24b080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24b084:
    // 0x24b084: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x24b084u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_24b088:
    // 0x24b088: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x24b088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24b08c:
    // 0x24b08c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x24b08cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_24b090:
    // 0x24b090: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x24b090u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_24b094:
    // 0x24b094: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x24b094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_24b098:
    // 0x24b098: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x24b098u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_24b09c:
    // 0x24b09c: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x24b09cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_24b0a0:
    // 0x24b0a0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x24b0a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_24b0a4:
    // 0x24b0a4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x24b0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_24b0a8:
    // 0x24b0a8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24b0a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_24b0ac:
    // 0x24b0ac: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x24b0acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_24b0b0:
    // 0x24b0b0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24b0b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_24b0b4:
    // 0x24b0b4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x24b0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_24b0b8:
    // 0x24b0b8: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x24b0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24b0bc:
    // 0x24b0bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x24b0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_24b0c0:
    // 0x24b0c0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x24b0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24b0c4:
    // 0x24b0c4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x24b0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24b0c8:
    // 0x24b0c8: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x24b0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24b0cc:
    // 0x24b0cc: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x24b0ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_24b0d0:
    // 0x24b0d0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x24b0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_24b0d4:
    // 0x24b0d4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x24b0d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_24b0d8:
    // 0x24b0d8: 0xc0b1488  jal         func_2C5220
label_24b0dc:
    if (ctx->pc == 0x24B0DCu) {
        ctx->pc = 0x24B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0D8u;
        // 0x24b0dc: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B0E0u;
        goto label_24b0e0;
    }
    ctx->pc = 0x24B0D8u;
    SET_GPR_U32(ctx, 31, 0x24B0E0u);
    ctx->pc = 0x24B0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B0D8u;
    // 0x24b0dc: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x24B0D8u, 0x24B0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B0E0u;
label_24b0e0:
    // 0x24b0e0: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x24b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_24b0e4:
    // 0x24b0e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24b0e8:
    // 0x24b0e8: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x24b0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_24b0ec:
    // 0x24b0ec: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24b0ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_24b0f0:
    // 0x24b0f0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x24b0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_24b0f4:
    // 0x24b0f4: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x24b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_24b0f8:
    // 0x24b0f8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24b0f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_24b0fc:
    // 0x24b0fc: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x24b0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_24b100:
    // 0x24b100: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x24b100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_24b104:
    // 0x24b104: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24b104u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_24b108:
    // 0x24b108: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x24b108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_24b10c:
    // 0x24b10c: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x24b10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_24b110:
    // 0x24b110: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x24b110u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_24b114:
    // 0x24b114: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x24b114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_24b118:
    // 0x24b118: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x24b118u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24b11c:
    // 0x24b11c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x24b11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_24b120:
    // 0x24b120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24b124:
    // 0x24b124: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x24b124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_24b128:
    // 0x24b128: 0xc08fca8  jal         func_23F2A0
label_24b12c:
    if (ctx->pc == 0x24B12Cu) {
        ctx->pc = 0x24B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B128u;
        // 0x24b12c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B130u;
        goto label_24b130;
    }
    ctx->pc = 0x24B128u;
    SET_GPR_U32(ctx, 31, 0x24B130u);
    ctx->pc = 0x24B12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B128u;
    // 0x24b12c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F2A0u, 0x24B128u, 0x24B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B130u;
label_24b130:
    // 0x24b130: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
label_24b134:
    if (ctx->pc == 0x24B134u) {
        ctx->pc = 0x24B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B130u;
        // 0x24b134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B138u;
        goto label_24b138;
    }
    ctx->pc = 0x24B130u;
    {
        const bool branch_taken_0x24b130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b130) {
            ctx->pc = 0x24B134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B130u;
            // 0x24b134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B1C4u;
            goto label_24b1c4;
        }
    }
    ctx->pc = 0x24B138u;
label_24b138:
    // 0x24b138: 0xc0b1488  jal         func_2C5220
label_24b13c:
    if (ctx->pc == 0x24B13Cu) {
        ctx->pc = 0x24B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B138u;
        // 0x24b13c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B140u;
        goto label_24b140;
    }
    ctx->pc = 0x24B138u;
    SET_GPR_U32(ctx, 31, 0x24B140u);
    ctx->pc = 0x24B13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B138u;
    // 0x24b13c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x24B138u, 0x24B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B140u;
label_24b140:
    // 0x24b140: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x24b140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_24b144:
    // 0x24b144: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24b144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24b148:
    // 0x24b148: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x24b148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_24b14c:
    // 0x24b14c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24b14cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_24b150:
    // 0x24b150: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x24b150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_24b154:
    // 0x24b154: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x24b154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_24b158:
    // 0x24b158: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24b158u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_24b15c:
    // 0x24b15c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x24b15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_24b160:
    // 0x24b160: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x24b160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_24b164:
    // 0x24b164: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24b164u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_24b168:
    // 0x24b168: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x24b168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_24b16c:
    // 0x24b16c: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x24b16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_24b170:
    // 0x24b170: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x24b170u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_24b174:
    // 0x24b174: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24b174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_24b178:
    // 0x24b178: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x24b178u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24b17c:
    // 0x24b17c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24b17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_24b180:
    // 0x24b180: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24b180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_24b184:
    // 0x24b184: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24b184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24b188:
    // 0x24b188: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x24b188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24b18c:
    // 0x24b18c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x24b18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_24b190:
    // 0x24b190: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24b190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24b194:
    // 0x24b194: 0xc08e23a  jal         func_2388E8
label_24b198:
    if (ctx->pc == 0x24B198u) {
        ctx->pc = 0x24B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B194u;
        // 0x24b198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B19Cu;
        goto label_24b19c;
    }
    ctx->pc = 0x24B194u;
    SET_GPR_U32(ctx, 31, 0x24B19Cu);
    ctx->pc = 0x24B198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B194u;
    // 0x24b198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388E8u, 0x24B194u, 0x24B19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B19Cu;
label_24b19c:
    // 0x24b19c: 0xc08e2b4  jal         func_238AD0
label_24b1a0:
    if (ctx->pc == 0x24B1A0u) {
        ctx->pc = 0x24B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B19Cu;
        // 0x24b1a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B1A4u;
        goto label_24b1a4;
    }
    ctx->pc = 0x24B19Cu;
    SET_GPR_U32(ctx, 31, 0x24B1A4u);
    ctx->pc = 0x24B1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B19Cu;
    // 0x24b1a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AD0u, 0x24B19Cu, 0x24B1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B1A4u;
label_24b1a4:
    // 0x24b1a4: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x24b1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_24b1a8:
    // 0x24b1a8: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x24b1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_24b1ac:
    // 0x24b1ac: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x24b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_24b1b0:
    // 0x24b1b0: 0x40f809  jalr        $v0
label_24b1b4:
    if (ctx->pc == 0x24B1B4u) {
        ctx->pc = 0x24B1B8u;
        goto label_24b1b8;
    }
    ctx->pc = 0x24B1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24B1B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B1B0u, 0x24B1B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B1B8u;
label_24b1b8:
    // 0x24b1b8: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x24b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_24b1bc:
    // 0x24b1bc: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x24b1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_24b1c0:
    // 0x24b1c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24b1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24b1c4:
    // 0x24b1c4: 0xc0b9f4e  jal         func_2E7D38
label_24b1c8:
    if (ctx->pc == 0x24B1C8u) {
        ctx->pc = 0x24B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B1C4u;
        // 0x24b1c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B1CCu;
        goto label_24b1cc;
    }
    ctx->pc = 0x24B1C4u;
    SET_GPR_U32(ctx, 31, 0x24B1CCu);
    ctx->pc = 0x24B1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B1C4u;
    // 0x24b1c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7D38u, 0x24B1C4u, 0x24B1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B1CCu;
label_24b1cc:
    // 0x24b1cc: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x24b1ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_24b1d0:
    // 0x24b1d0: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x24b1d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_24b1d4:
    // 0x24b1d4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x24b1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_24b1d8:
    // 0x24b1d8: 0x3e00008  jr          $ra
label_24b1dc:
    if (ctx->pc == 0x24B1DCu) {
        ctx->pc = 0x24B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B1D8u;
        // 0x24b1dc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B1E0u;
        goto label_fallthrough_0x24b1d8;
    }
    ctx->pc = 0x24B1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B1D8u;
        // 0x24b1dc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24b1d8:
    ctx->pc = 0x24B1E0u;
}
