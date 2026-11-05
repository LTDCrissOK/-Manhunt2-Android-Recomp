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

// Function: sub_001B2FE0
// Address: 0x1b2fe0 - 0x1b31f0
void sub_001B2FE0_0x1b2fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2FE0_0x1b2fe0");
#endif

    switch (ctx->pc) {
        case 0x1b2fe0u: goto label_1b2fe0;
        case 0x1b2fe4u: goto label_1b2fe4;
        case 0x1b2fe8u: goto label_1b2fe8;
        case 0x1b2fecu: goto label_1b2fec;
        case 0x1b2ff0u: goto label_1b2ff0;
        case 0x1b2ff4u: goto label_1b2ff4;
        case 0x1b2ff8u: goto label_1b2ff8;
        case 0x1b2ffcu: goto label_1b2ffc;
        case 0x1b3000u: goto label_1b3000;
        case 0x1b3004u: goto label_1b3004;
        case 0x1b3008u: goto label_1b3008;
        case 0x1b300cu: goto label_1b300c;
        case 0x1b3010u: goto label_1b3010;
        case 0x1b3014u: goto label_1b3014;
        case 0x1b3018u: goto label_1b3018;
        case 0x1b301cu: goto label_1b301c;
        case 0x1b3020u: goto label_1b3020;
        case 0x1b3024u: goto label_1b3024;
        case 0x1b3028u: goto label_1b3028;
        case 0x1b302cu: goto label_1b302c;
        case 0x1b3030u: goto label_1b3030;
        case 0x1b3034u: goto label_1b3034;
        case 0x1b3038u: goto label_1b3038;
        case 0x1b303cu: goto label_1b303c;
        case 0x1b3040u: goto label_1b3040;
        case 0x1b3044u: goto label_1b3044;
        case 0x1b3048u: goto label_1b3048;
        case 0x1b304cu: goto label_1b304c;
        case 0x1b3050u: goto label_1b3050;
        case 0x1b3054u: goto label_1b3054;
        case 0x1b3058u: goto label_1b3058;
        case 0x1b305cu: goto label_1b305c;
        case 0x1b3060u: goto label_1b3060;
        case 0x1b3064u: goto label_1b3064;
        case 0x1b3068u: goto label_1b3068;
        case 0x1b306cu: goto label_1b306c;
        case 0x1b3070u: goto label_1b3070;
        case 0x1b3074u: goto label_1b3074;
        case 0x1b3078u: goto label_1b3078;
        case 0x1b307cu: goto label_1b307c;
        case 0x1b3080u: goto label_1b3080;
        case 0x1b3084u: goto label_1b3084;
        case 0x1b3088u: goto label_1b3088;
        case 0x1b308cu: goto label_1b308c;
        case 0x1b3090u: goto label_1b3090;
        case 0x1b3094u: goto label_1b3094;
        case 0x1b3098u: goto label_1b3098;
        case 0x1b309cu: goto label_1b309c;
        case 0x1b30a0u: goto label_1b30a0;
        case 0x1b30a4u: goto label_1b30a4;
        case 0x1b30a8u: goto label_1b30a8;
        case 0x1b30acu: goto label_1b30ac;
        case 0x1b30b0u: goto label_1b30b0;
        case 0x1b30b4u: goto label_1b30b4;
        case 0x1b30b8u: goto label_1b30b8;
        case 0x1b30bcu: goto label_1b30bc;
        case 0x1b30c0u: goto label_1b30c0;
        case 0x1b30c4u: goto label_1b30c4;
        case 0x1b30c8u: goto label_1b30c8;
        case 0x1b30ccu: goto label_1b30cc;
        case 0x1b30d0u: goto label_1b30d0;
        case 0x1b30d4u: goto label_1b30d4;
        case 0x1b30d8u: goto label_1b30d8;
        case 0x1b30dcu: goto label_1b30dc;
        case 0x1b30e0u: goto label_1b30e0;
        case 0x1b30e4u: goto label_1b30e4;
        case 0x1b30e8u: goto label_1b30e8;
        case 0x1b30ecu: goto label_1b30ec;
        case 0x1b30f0u: goto label_1b30f0;
        case 0x1b30f4u: goto label_1b30f4;
        case 0x1b30f8u: goto label_1b30f8;
        case 0x1b30fcu: goto label_1b30fc;
        case 0x1b3100u: goto label_1b3100;
        case 0x1b3104u: goto label_1b3104;
        case 0x1b3108u: goto label_1b3108;
        case 0x1b310cu: goto label_1b310c;
        case 0x1b3110u: goto label_1b3110;
        case 0x1b3114u: goto label_1b3114;
        case 0x1b3118u: goto label_1b3118;
        case 0x1b311cu: goto label_1b311c;
        case 0x1b3120u: goto label_1b3120;
        case 0x1b3124u: goto label_1b3124;
        case 0x1b3128u: goto label_1b3128;
        case 0x1b312cu: goto label_1b312c;
        case 0x1b3130u: goto label_1b3130;
        case 0x1b3134u: goto label_1b3134;
        case 0x1b3138u: goto label_1b3138;
        case 0x1b313cu: goto label_1b313c;
        case 0x1b3140u: goto label_1b3140;
        case 0x1b3144u: goto label_1b3144;
        case 0x1b3148u: goto label_1b3148;
        case 0x1b314cu: goto label_1b314c;
        case 0x1b3150u: goto label_1b3150;
        case 0x1b3154u: goto label_1b3154;
        case 0x1b3158u: goto label_1b3158;
        case 0x1b315cu: goto label_1b315c;
        case 0x1b3160u: goto label_1b3160;
        case 0x1b3164u: goto label_1b3164;
        case 0x1b3168u: goto label_1b3168;
        case 0x1b316cu: goto label_1b316c;
        case 0x1b3170u: goto label_1b3170;
        case 0x1b3174u: goto label_1b3174;
        case 0x1b3178u: goto label_1b3178;
        case 0x1b317cu: goto label_1b317c;
        case 0x1b3180u: goto label_1b3180;
        case 0x1b3184u: goto label_1b3184;
        case 0x1b3188u: goto label_1b3188;
        case 0x1b318cu: goto label_1b318c;
        case 0x1b3190u: goto label_1b3190;
        case 0x1b3194u: goto label_1b3194;
        case 0x1b3198u: goto label_1b3198;
        case 0x1b319cu: goto label_1b319c;
        case 0x1b31a0u: goto label_1b31a0;
        case 0x1b31a4u: goto label_1b31a4;
        case 0x1b31a8u: goto label_1b31a8;
        case 0x1b31acu: goto label_1b31ac;
        case 0x1b31b0u: goto label_1b31b0;
        case 0x1b31b4u: goto label_1b31b4;
        case 0x1b31b8u: goto label_1b31b8;
        case 0x1b31bcu: goto label_1b31bc;
        case 0x1b31c0u: goto label_1b31c0;
        case 0x1b31c4u: goto label_1b31c4;
        case 0x1b31c8u: goto label_1b31c8;
        case 0x1b31ccu: goto label_1b31cc;
        case 0x1b31d0u: goto label_1b31d0;
        case 0x1b31d4u: goto label_1b31d4;
        case 0x1b31d8u: goto label_1b31d8;
        case 0x1b31dcu: goto label_1b31dc;
        case 0x1b31e0u: goto label_1b31e0;
        case 0x1b31e4u: goto label_1b31e4;
        case 0x1b31e8u: goto label_1b31e8;
        case 0x1b31ecu: goto label_1b31ec;
        default: break;
    }

    ctx->pc = 0x1b2fe0u;

label_1b2fe0:
    // 0x1b2fe0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b2fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1b2fe4:
    // 0x1b2fe4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1b2fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1b2fe8:
    // 0x1b2fe8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1b2fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_1b2fec:
    // 0x1b2fec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b2fecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b2ff0:
    // 0x1b2ff0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1b2ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_1b2ff4:
    // 0x1b2ff4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1b2ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_1b2ff8:
    // 0x1b2ff8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b2ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1b2ffc:
    // 0x1b2ffc: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x1b2ffcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1b3000:
    // 0x1b3000: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x1b3000u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1b3004:
    // 0x1b3004: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1b3004u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1b3008:
    // 0x1b3008: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1b3008u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1b300c:
    // 0x1b300c: 0x92420030  lbu         $v0, 0x30($s2)
    ctx->pc = 0x1b300cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
label_1b3010:
    // 0x1b3010: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1b3014:
    if (ctx->pc == 0x1B3014u) {
        ctx->pc = 0x1B3014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3010u;
        // 0x1b3014: 0x26420020  addiu       $v0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3018u;
        goto label_1b3018;
    }
    ctx->pc = 0x1B3010u;
    {
        const bool branch_taken_0x1b3010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3010u;
        // 0x1b3014: 0x26420020  addiu       $v0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3010) {
            ctx->pc = 0x1B3040u;
            goto label_1b3040;
        }
    }
    ctx->pc = 0x1B3018u;
label_1b3018:
    // 0x1b3018: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x1b3018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b301c:
    // 0x1b301c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x1b301cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b3020:
    // 0x1b3020: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1b3020u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b3024:
    // 0x1b3024: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b3024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b3028:
    // 0x1b3028: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1b3028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1b302c:
    // 0x1b302c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1b302cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b3030:
    // 0x1b3030: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1b3030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1b3034:
    // 0x1b3034: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1b3034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b3038:
    // 0x1b3038: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b303c:
    if (ctx->pc == 0x1B303Cu) {
        ctx->pc = 0x1B303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3038u;
        // 0x1b303c: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3040u;
        goto label_1b3040;
    }
    ctx->pc = 0x1B3038u;
    {
        const bool branch_taken_0x1b3038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3038u;
        // 0x1b303c: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3038) {
            ctx->pc = 0x1B3058u;
            goto label_1b3058;
        }
    }
    ctx->pc = 0x1B3040u;
label_1b3040:
    // 0x1b3040: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1b3040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b3044:
    // 0x1b3044: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1b3044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1b3048:
    // 0x1b3048: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b3048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b304c:
    // 0x1b304c: 0xc0c327c  jal         func_30C9F0
label_1b3050:
    if (ctx->pc == 0x1B3050u) {
        ctx->pc = 0x1B3050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B304Cu;
        // 0x1b3050: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3054u;
        goto label_1b3054;
    }
    ctx->pc = 0x1B304Cu;
    SET_GPR_U32(ctx, 31, 0x1B3054u);
    ctx->pc = 0x1B3050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B304Cu;
    // 0x1b3050: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C9F0u, 0x1B304Cu, 0x1B3054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3054u;
label_1b3054:
    // 0x1b3054: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1b3054u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b3058:
    // 0x1b3058: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x1b3058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1b305c:
    // 0x1b305c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1b305cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_1b3060:
    // 0x1b3060: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x1b3060u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_1b3064:
    // 0x1b3064: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1b3064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1b3068:
    // 0x1b3068: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1b3068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1b306c:
    // 0x1b306c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b306cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1b3070:
    // 0x1b3070: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1b3070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1b3074:
    // 0x1b3074: 0x40f809  jalr        $v0
label_1b3078:
    if (ctx->pc == 0x1B3078u) {
        ctx->pc = 0x1B3078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3074u;
        // 0x1b3078: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B307Cu;
        goto label_1b307c;
    }
    ctx->pc = 0x1B3074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B307Cu);
        ctx->pc = 0x1B3078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3074u;
        // 0x1b3078: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3074u, 0x1B307Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B307Cu;
label_1b307c:
    // 0x1b307c: 0xc6540008  lwc1        $f20, 0x8($s2)
    ctx->pc = 0x1b307cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b3080:
    // 0x1b3080: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b3084:
    // 0x1b3084: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x1b3084u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
label_1b3088:
    // 0x1b3088: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x1b3088u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_1b308c:
    // 0x1b308c: 0xc0e3f1c  jal         func_38FC70
label_1b3090:
    if (ctx->pc == 0x1B3090u) {
        ctx->pc = 0x1B3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B308Cu;
        // 0x1b3090: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3094u;
        goto label_1b3094;
    }
    ctx->pc = 0x1B308Cu;
    SET_GPR_U32(ctx, 31, 0x1B3094u);
    ctx->pc = 0x1B3090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B308Cu;
    // 0x1b3090: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x1B308Cu, 0x1B3094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3094u;
label_1b3094:
    // 0x1b3094: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b3094u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1b3098:
    // 0x1b3098: 0xc0e3f98  jal         func_38FE60
label_1b309c:
    if (ctx->pc == 0x1B309Cu) {
        ctx->pc = 0x1B309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3098u;
        // 0x1b309c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B30A0u;
        goto label_1b30a0;
    }
    ctx->pc = 0x1B3098u;
    SET_GPR_U32(ctx, 31, 0x1B30A0u);
    ctx->pc = 0x1B309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3098u;
    // 0x1b309c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x1B3098u, 0x1B30A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30A0u;
label_1b30a0:
    // 0x1b30a0: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1b30a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b30a4:
    // 0x1b30a4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1b30a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b30a8:
    // 0x1b30a8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b30a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b30ac:
    // 0x1b30ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b30acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b30b0:
    // 0x1b30b0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1b30b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1b30b4:
    // 0x1b30b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b30b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b30b8:
    // 0x1b30b8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1b30b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b30bc:
    // 0x1b30bc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b30bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b30c0:
    // 0x1b30c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b30c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1b30c4:
    // 0x1b30c4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1b30c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1b30c8:
    // 0x1b30c8: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1b30c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b30cc:
    // 0x1b30cc: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1b30ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1b30d0:
    // 0x1b30d0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1b30d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1b30d4:
    // 0x1b30d4: 0xc0b199e  jal         func_2C6678
label_1b30d8:
    if (ctx->pc == 0x1B30D8u) {
        ctx->pc = 0x1B30D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30D4u;
        // 0x1b30d8: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B30DCu;
        goto label_1b30dc;
    }
    ctx->pc = 0x1B30D4u;
    SET_GPR_U32(ctx, 31, 0x1B30DCu);
    ctx->pc = 0x1B30D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B30D4u;
    // 0x1b30d8: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6678u, 0x1B30D4u, 0x1B30DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30DCu;
label_1b30dc:
    // 0x1b30dc: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x1b30dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1b30e0:
    // 0x1b30e0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1b30e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1b30e4:
    // 0x1b30e4: 0x40f809  jalr        $v0
label_1b30e8:
    if (ctx->pc == 0x1B30E8u) {
        ctx->pc = 0x1B30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30E4u;
        // 0x1b30e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B30ECu;
        goto label_1b30ec;
    }
    ctx->pc = 0x1B30E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B30ECu);
        ctx->pc = 0x1B30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30E4u;
        // 0x1b30e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B30E4u, 0x1B30ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B30ECu;
label_1b30ec:
    // 0x1b30ec: 0xc6540004  lwc1        $f20, 0x4($s2)
    ctx->pc = 0x1b30ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b30f0:
    // 0x1b30f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b30f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b30f4:
    // 0x1b30f4: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x1b30f4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
label_1b30f8:
    // 0x1b30f8: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x1b30f8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_1b30fc:
    // 0x1b30fc: 0xc0e3f1c  jal         func_38FC70
label_1b3100:
    if (ctx->pc == 0x1B3100u) {
        ctx->pc = 0x1B3100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30FCu;
        // 0x1b3100: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3104u;
        goto label_1b3104;
    }
    ctx->pc = 0x1B30FCu;
    SET_GPR_U32(ctx, 31, 0x1B3104u);
    ctx->pc = 0x1B3100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B30FCu;
    // 0x1b3100: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x1B30FCu, 0x1B3104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3104u;
label_1b3104:
    // 0x1b3104: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b3104u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1b3108:
    // 0x1b3108: 0xc0e3f98  jal         func_38FE60
label_1b310c:
    if (ctx->pc == 0x1B310Cu) {
        ctx->pc = 0x1B310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3108u;
        // 0x1b310c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3110u;
        goto label_1b3110;
    }
    ctx->pc = 0x1B3108u;
    SET_GPR_U32(ctx, 31, 0x1B3110u);
    ctx->pc = 0x1B310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3108u;
    // 0x1b310c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x1B3108u, 0x1B3110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3110u;
label_1b3110:
    // 0x1b3110: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1b3110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b3114:
    // 0x1b3114: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b3114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b3118:
    // 0x1b3118: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b3118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b311c:
    // 0x1b311c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b311cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b3120:
    // 0x1b3120: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1b3120u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1b3124:
    // 0x1b3124: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1b3124u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b3128:
    // 0x1b3128: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b3128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b312c:
    // 0x1b312c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b312cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1b3130:
    // 0x1b3130: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1b3130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1b3134:
    // 0x1b3134: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1b3134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b3138:
    // 0x1b3138: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1b3138u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1b313c:
    // 0x1b313c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1b313cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1b3140:
    // 0x1b3140: 0xc0b199e  jal         func_2C6678
label_1b3144:
    if (ctx->pc == 0x1B3144u) {
        ctx->pc = 0x1B3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3140u;
        // 0x1b3144: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3148u;
        goto label_1b3148;
    }
    ctx->pc = 0x1B3140u;
    SET_GPR_U32(ctx, 31, 0x1B3148u);
    ctx->pc = 0x1B3144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3140u;
    // 0x1b3144: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6678u, 0x1B3140u, 0x1B3148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3148u;
label_1b3148:
    // 0x1b3148: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x1b3148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1b314c:
    // 0x1b314c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1b314cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b3150:
    // 0x1b3150: 0x40f809  jalr        $v0
label_1b3154:
    if (ctx->pc == 0x1B3154u) {
        ctx->pc = 0x1B3154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3150u;
        // 0x1b3154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3158u;
        goto label_1b3158;
    }
    ctx->pc = 0x1B3150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B3158u);
        ctx->pc = 0x1B3154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3150u;
        // 0x1b3154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3150u, 0x1B3158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B3158u;
label_1b3158:
    // 0x1b3158: 0xc6540000  lwc1        $f20, 0x0($s2)
    ctx->pc = 0x1b3158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b315c:
    // 0x1b315c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b315cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b3160:
    // 0x1b3160: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x1b3160u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
label_1b3164:
    // 0x1b3164: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x1b3164u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_1b3168:
    // 0x1b3168: 0xc0e3f1c  jal         func_38FC70
label_1b316c:
    if (ctx->pc == 0x1B316Cu) {
        ctx->pc = 0x1B316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3168u;
        // 0x1b316c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3170u;
        goto label_1b3170;
    }
    ctx->pc = 0x1B3168u;
    SET_GPR_U32(ctx, 31, 0x1B3170u);
    ctx->pc = 0x1B316Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3168u;
    // 0x1b316c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x1B3168u, 0x1B3170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3170u;
label_1b3170:
    // 0x1b3170: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b3170u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1b3174:
    // 0x1b3174: 0xc0e3f98  jal         func_38FE60
label_1b3178:
    if (ctx->pc == 0x1B3178u) {
        ctx->pc = 0x1B3178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3174u;
        // 0x1b3178: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B317Cu;
        goto label_1b317c;
    }
    ctx->pc = 0x1B3174u;
    SET_GPR_U32(ctx, 31, 0x1B317Cu);
    ctx->pc = 0x1B3178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3174u;
    // 0x1b3178: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x1B3174u, 0x1B317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B317Cu;
label_1b317c:
    // 0x1b317c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1b317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b3180:
    // 0x1b3180: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b3180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b3184:
    // 0x1b3184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b3188:
    // 0x1b3188: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b3188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b318c:
    // 0x1b318c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1b318cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1b3190:
    // 0x1b3190: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1b3190u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b3194:
    // 0x1b3194: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b3194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b3198:
    // 0x1b3198: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b3198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1b319c:
    // 0x1b319c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1b319cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1b31a0:
    // 0x1b31a0: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1b31a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b31a4:
    // 0x1b31a4: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1b31a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1b31a8:
    // 0x1b31a8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1b31a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1b31ac:
    // 0x1b31ac: 0xc0b199e  jal         func_2C6678
label_1b31b0:
    if (ctx->pc == 0x1B31B0u) {
        ctx->pc = 0x1B31B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31ACu;
        // 0x1b31b0: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B31B4u;
        goto label_1b31b4;
    }
    ctx->pc = 0x1B31ACu;
    SET_GPR_U32(ctx, 31, 0x1B31B4u);
    ctx->pc = 0x1B31B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B31ACu;
    // 0x1b31b0: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6678u, 0x1B31ACu, 0x1B31B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B31B4u;
label_1b31b4:
    // 0x1b31b4: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x1b31b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1b31b8:
    // 0x1b31b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b31b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b31bc:
    // 0x1b31bc: 0xc0c32a0  jal         func_30CA80
label_1b31c0:
    if (ctx->pc == 0x1B31C0u) {
        ctx->pc = 0x1B31C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31BCu;
        // 0x1b31c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B31C4u;
        goto label_1b31c4;
    }
    ctx->pc = 0x1B31BCu;
    SET_GPR_U32(ctx, 31, 0x1B31C4u);
    ctx->pc = 0x1B31C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B31BCu;
    // 0x1b31c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CA80u, 0x1B31BCu, 0x1B31C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B31C4u;
label_1b31c4:
    // 0x1b31c4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1b31c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b31c8:
    // 0x1b31c8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1b31c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1b31cc:
    // 0x1b31cc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1b31ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b31d0:
    // 0x1b31d0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1b31d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1b31d4:
    // 0x1b31d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b31d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b31d8:
    // 0x1b31d8: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x1b31d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1b31dc:
    // 0x1b31dc: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x1b31dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1b31e0:
    // 0x1b31e0: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x1b31e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b31e4:
    // 0x1b31e4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1b31e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b31e8:
    // 0x1b31e8: 0x3e00008  jr          $ra
label_1b31ec:
    if (ctx->pc == 0x1B31ECu) {
        ctx->pc = 0x1B31ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31E8u;
        // 0x1b31ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B31F0u;
        goto label_fallthrough_0x1b31e8;
    }
    ctx->pc = 0x1B31E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B31ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31E8u;
        // 0x1b31ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B31E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b31e8:
    ctx->pc = 0x1B31F0u;
}
