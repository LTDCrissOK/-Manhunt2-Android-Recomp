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

// Function: sub_003B30E0
// Address: 0x3b30e0 - 0x3b3448
void sub_003B30E0_0x3b30e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B30E0_0x3b30e0");
#endif

    switch (ctx->pc) {
        case 0x3b30e0u: goto label_3b30e0;
        case 0x3b30e4u: goto label_3b30e4;
        case 0x3b30e8u: goto label_3b30e8;
        case 0x3b30ecu: goto label_3b30ec;
        case 0x3b30f0u: goto label_3b30f0;
        case 0x3b30f4u: goto label_3b30f4;
        case 0x3b30f8u: goto label_3b30f8;
        case 0x3b30fcu: goto label_3b30fc;
        case 0x3b3100u: goto label_3b3100;
        case 0x3b3104u: goto label_3b3104;
        case 0x3b3108u: goto label_3b3108;
        case 0x3b310cu: goto label_3b310c;
        case 0x3b3110u: goto label_3b3110;
        case 0x3b3114u: goto label_3b3114;
        case 0x3b3118u: goto label_3b3118;
        case 0x3b311cu: goto label_3b311c;
        case 0x3b3120u: goto label_3b3120;
        case 0x3b3124u: goto label_3b3124;
        case 0x3b3128u: goto label_3b3128;
        case 0x3b312cu: goto label_3b312c;
        case 0x3b3130u: goto label_3b3130;
        case 0x3b3134u: goto label_3b3134;
        case 0x3b3138u: goto label_3b3138;
        case 0x3b313cu: goto label_3b313c;
        case 0x3b3140u: goto label_3b3140;
        case 0x3b3144u: goto label_3b3144;
        case 0x3b3148u: goto label_3b3148;
        case 0x3b314cu: goto label_3b314c;
        case 0x3b3150u: goto label_3b3150;
        case 0x3b3154u: goto label_3b3154;
        case 0x3b3158u: goto label_3b3158;
        case 0x3b315cu: goto label_3b315c;
        case 0x3b3160u: goto label_3b3160;
        case 0x3b3164u: goto label_3b3164;
        case 0x3b3168u: goto label_3b3168;
        case 0x3b316cu: goto label_3b316c;
        case 0x3b3170u: goto label_3b3170;
        case 0x3b3174u: goto label_3b3174;
        case 0x3b3178u: goto label_3b3178;
        case 0x3b317cu: goto label_3b317c;
        case 0x3b3180u: goto label_3b3180;
        case 0x3b3184u: goto label_3b3184;
        case 0x3b3188u: goto label_3b3188;
        case 0x3b318cu: goto label_3b318c;
        case 0x3b3190u: goto label_3b3190;
        case 0x3b3194u: goto label_3b3194;
        case 0x3b3198u: goto label_3b3198;
        case 0x3b319cu: goto label_3b319c;
        case 0x3b31a0u: goto label_3b31a0;
        case 0x3b31a4u: goto label_3b31a4;
        case 0x3b31a8u: goto label_3b31a8;
        case 0x3b31acu: goto label_3b31ac;
        case 0x3b31b0u: goto label_3b31b0;
        case 0x3b31b4u: goto label_3b31b4;
        case 0x3b31b8u: goto label_3b31b8;
        case 0x3b31bcu: goto label_3b31bc;
        case 0x3b31c0u: goto label_3b31c0;
        case 0x3b31c4u: goto label_3b31c4;
        case 0x3b31c8u: goto label_3b31c8;
        case 0x3b31ccu: goto label_3b31cc;
        case 0x3b31d0u: goto label_3b31d0;
        case 0x3b31d4u: goto label_3b31d4;
        case 0x3b31d8u: goto label_3b31d8;
        case 0x3b31dcu: goto label_3b31dc;
        case 0x3b31e0u: goto label_3b31e0;
        case 0x3b31e4u: goto label_3b31e4;
        case 0x3b31e8u: goto label_3b31e8;
        case 0x3b31ecu: goto label_3b31ec;
        case 0x3b31f0u: goto label_3b31f0;
        case 0x3b31f4u: goto label_3b31f4;
        case 0x3b31f8u: goto label_3b31f8;
        case 0x3b31fcu: goto label_3b31fc;
        case 0x3b3200u: goto label_3b3200;
        case 0x3b3204u: goto label_3b3204;
        case 0x3b3208u: goto label_3b3208;
        case 0x3b320cu: goto label_3b320c;
        case 0x3b3210u: goto label_3b3210;
        case 0x3b3214u: goto label_3b3214;
        case 0x3b3218u: goto label_3b3218;
        case 0x3b321cu: goto label_3b321c;
        case 0x3b3220u: goto label_3b3220;
        case 0x3b3224u: goto label_3b3224;
        case 0x3b3228u: goto label_3b3228;
        case 0x3b322cu: goto label_3b322c;
        case 0x3b3230u: goto label_3b3230;
        case 0x3b3234u: goto label_3b3234;
        case 0x3b3238u: goto label_3b3238;
        case 0x3b323cu: goto label_3b323c;
        case 0x3b3240u: goto label_3b3240;
        case 0x3b3244u: goto label_3b3244;
        case 0x3b3248u: goto label_3b3248;
        case 0x3b324cu: goto label_3b324c;
        case 0x3b3250u: goto label_3b3250;
        case 0x3b3254u: goto label_3b3254;
        case 0x3b3258u: goto label_3b3258;
        case 0x3b325cu: goto label_3b325c;
        case 0x3b3260u: goto label_3b3260;
        case 0x3b3264u: goto label_3b3264;
        case 0x3b3268u: goto label_3b3268;
        case 0x3b326cu: goto label_3b326c;
        case 0x3b3270u: goto label_3b3270;
        case 0x3b3274u: goto label_3b3274;
        case 0x3b3278u: goto label_3b3278;
        case 0x3b327cu: goto label_3b327c;
        case 0x3b3280u: goto label_3b3280;
        case 0x3b3284u: goto label_3b3284;
        case 0x3b3288u: goto label_3b3288;
        case 0x3b328cu: goto label_3b328c;
        case 0x3b3290u: goto label_3b3290;
        case 0x3b3294u: goto label_3b3294;
        case 0x3b3298u: goto label_3b3298;
        case 0x3b329cu: goto label_3b329c;
        case 0x3b32a0u: goto label_3b32a0;
        case 0x3b32a4u: goto label_3b32a4;
        case 0x3b32a8u: goto label_3b32a8;
        case 0x3b32acu: goto label_3b32ac;
        case 0x3b32b0u: goto label_3b32b0;
        case 0x3b32b4u: goto label_3b32b4;
        case 0x3b32b8u: goto label_3b32b8;
        case 0x3b32bcu: goto label_3b32bc;
        case 0x3b32c0u: goto label_3b32c0;
        case 0x3b32c4u: goto label_3b32c4;
        case 0x3b32c8u: goto label_3b32c8;
        case 0x3b32ccu: goto label_3b32cc;
        case 0x3b32d0u: goto label_3b32d0;
        case 0x3b32d4u: goto label_3b32d4;
        case 0x3b32d8u: goto label_3b32d8;
        case 0x3b32dcu: goto label_3b32dc;
        case 0x3b32e0u: goto label_3b32e0;
        case 0x3b32e4u: goto label_3b32e4;
        case 0x3b32e8u: goto label_3b32e8;
        case 0x3b32ecu: goto label_3b32ec;
        case 0x3b32f0u: goto label_3b32f0;
        case 0x3b32f4u: goto label_3b32f4;
        case 0x3b32f8u: goto label_3b32f8;
        case 0x3b32fcu: goto label_3b32fc;
        case 0x3b3300u: goto label_3b3300;
        case 0x3b3304u: goto label_3b3304;
        case 0x3b3308u: goto label_3b3308;
        case 0x3b330cu: goto label_3b330c;
        case 0x3b3310u: goto label_3b3310;
        case 0x3b3314u: goto label_3b3314;
        case 0x3b3318u: goto label_3b3318;
        case 0x3b331cu: goto label_3b331c;
        case 0x3b3320u: goto label_3b3320;
        case 0x3b3324u: goto label_3b3324;
        case 0x3b3328u: goto label_3b3328;
        case 0x3b332cu: goto label_3b332c;
        case 0x3b3330u: goto label_3b3330;
        case 0x3b3334u: goto label_3b3334;
        case 0x3b3338u: goto label_3b3338;
        case 0x3b333cu: goto label_3b333c;
        case 0x3b3340u: goto label_3b3340;
        case 0x3b3344u: goto label_3b3344;
        case 0x3b3348u: goto label_3b3348;
        case 0x3b334cu: goto label_3b334c;
        case 0x3b3350u: goto label_3b3350;
        case 0x3b3354u: goto label_3b3354;
        case 0x3b3358u: goto label_3b3358;
        case 0x3b335cu: goto label_3b335c;
        case 0x3b3360u: goto label_3b3360;
        case 0x3b3364u: goto label_3b3364;
        case 0x3b3368u: goto label_3b3368;
        case 0x3b336cu: goto label_3b336c;
        case 0x3b3370u: goto label_3b3370;
        case 0x3b3374u: goto label_3b3374;
        case 0x3b3378u: goto label_3b3378;
        case 0x3b337cu: goto label_3b337c;
        case 0x3b3380u: goto label_3b3380;
        case 0x3b3384u: goto label_3b3384;
        case 0x3b3388u: goto label_3b3388;
        case 0x3b338cu: goto label_3b338c;
        case 0x3b3390u: goto label_3b3390;
        case 0x3b3394u: goto label_3b3394;
        case 0x3b3398u: goto label_3b3398;
        case 0x3b339cu: goto label_3b339c;
        case 0x3b33a0u: goto label_3b33a0;
        case 0x3b33a4u: goto label_3b33a4;
        case 0x3b33a8u: goto label_3b33a8;
        case 0x3b33acu: goto label_3b33ac;
        case 0x3b33b0u: goto label_3b33b0;
        case 0x3b33b4u: goto label_3b33b4;
        case 0x3b33b8u: goto label_3b33b8;
        case 0x3b33bcu: goto label_3b33bc;
        case 0x3b33c0u: goto label_3b33c0;
        case 0x3b33c4u: goto label_3b33c4;
        case 0x3b33c8u: goto label_3b33c8;
        case 0x3b33ccu: goto label_3b33cc;
        case 0x3b33d0u: goto label_3b33d0;
        case 0x3b33d4u: goto label_3b33d4;
        case 0x3b33d8u: goto label_3b33d8;
        case 0x3b33dcu: goto label_3b33dc;
        case 0x3b33e0u: goto label_3b33e0;
        case 0x3b33e4u: goto label_3b33e4;
        case 0x3b33e8u: goto label_3b33e8;
        case 0x3b33ecu: goto label_3b33ec;
        case 0x3b33f0u: goto label_3b33f0;
        case 0x3b33f4u: goto label_3b33f4;
        case 0x3b33f8u: goto label_3b33f8;
        case 0x3b33fcu: goto label_3b33fc;
        case 0x3b3400u: goto label_3b3400;
        case 0x3b3404u: goto label_3b3404;
        case 0x3b3408u: goto label_3b3408;
        case 0x3b340cu: goto label_3b340c;
        case 0x3b3410u: goto label_3b3410;
        case 0x3b3414u: goto label_3b3414;
        case 0x3b3418u: goto label_3b3418;
        case 0x3b341cu: goto label_3b341c;
        case 0x3b3420u: goto label_3b3420;
        case 0x3b3424u: goto label_3b3424;
        case 0x3b3428u: goto label_3b3428;
        case 0x3b342cu: goto label_3b342c;
        case 0x3b3430u: goto label_3b3430;
        case 0x3b3434u: goto label_3b3434;
        case 0x3b3438u: goto label_3b3438;
        case 0x3b343cu: goto label_3b343c;
        case 0x3b3440u: goto label_3b3440;
        case 0x3b3444u: goto label_3b3444;
        default: break;
    }

    ctx->pc = 0x3b30e0u;

label_3b30e0:
    // 0x3b30e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3b30e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3b30e4:
    // 0x3b30e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b30e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b30e8:
    // 0x3b30e8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x3b30e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_3b30ec:
    // 0x3b30ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b30ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b30f0:
    // 0x3b30f0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3b30f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_3b30f4:
    // 0x3b30f4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x3b30f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_3b30f8:
    // 0x3b30f8: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x3b30f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_3b30fc:
    // 0x3b30fc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3b30fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3b3100:
    // 0x3b3100: 0x82440001  lb          $a0, 0x1($s2)
    ctx->pc = 0x3b3100u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_3b3104:
    // 0x3b3104: 0x148200c9  bne         $a0, $v0, . + 4 + (0xC9 << 2)
label_3b3108:
    if (ctx->pc == 0x3B3108u) {
        ctx->pc = 0x3B3108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3104u;
        // 0x3b3108: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B310Cu;
        goto label_3b310c;
    }
    ctx->pc = 0x3B3104u;
    {
        const bool branch_taken_0x3b3104 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B3108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3104u;
        // 0x3b3108: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3104) {
            ctx->pc = 0x3B342Cu;
            goto label_3b342c;
        }
    }
    ctx->pc = 0x3B310Cu;
label_3b310c:
    // 0x3b310c: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x3b310cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_3b3110:
    // 0x3b3110: 0x14440026  bne         $v0, $a0, . + 4 + (0x26 << 2)
label_3b3114:
    if (ctx->pc == 0x3B3114u) {
        ctx->pc = 0x3B3114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3110u;
        // 0x3b3114: 0x92430002  lbu         $v1, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3118u;
        goto label_3b3118;
    }
    ctx->pc = 0x3B3110u;
    {
        const bool branch_taken_0x3b3110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3B3114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3110u;
        // 0x3b3114: 0x92430002  lbu         $v1, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3110) {
            ctx->pc = 0x3B31ACu;
            goto label_3b31ac;
        }
    }
    ctx->pc = 0x3B3118u;
label_3b3118:
    // 0x3b3118: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3b3118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3b311c:
    // 0x3b311c: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x3b311cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_3b3120:
    // 0x3b3120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b3120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b3124:
    // 0x3b3124: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b3124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3128:
    // 0x3b3128: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b3128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b312c:
    // 0x3b312c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3b312cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3b3130:
    // 0x3b3130: 0x40f809  jalr        $v0
label_3b3134:
    if (ctx->pc == 0x3B3134u) {
        ctx->pc = 0x3B3134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3130u;
        // 0x3b3134: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3138u;
        goto label_3b3138;
    }
    ctx->pc = 0x3B3130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B3138u);
        ctx->pc = 0x3B3134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3130u;
        // 0x3b3134: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3130u, 0x3B3138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3138u;
label_3b3138:
    // 0x3b3138: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3b3138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3b313c:
    // 0x3b313c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3b313cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3b3140:
    // 0x3b3140: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b3140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b3144:
    // 0x3b3144: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x3b3144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_3b3148:
    // 0x3b3148: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b3148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b314c:
    // 0x3b314c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3b314cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3b3150:
    // 0x3b3150: 0x40f809  jalr        $v0
label_3b3154:
    if (ctx->pc == 0x3B3154u) {
        ctx->pc = 0x3B3154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3150u;
        // 0x3b3154: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3158u;
        goto label_3b3158;
    }
    ctx->pc = 0x3B3150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B3158u);
        ctx->pc = 0x3B3154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3150u;
        // 0x3b3154: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3150u, 0x3B3158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3158u;
label_3b3158:
    // 0x3b3158: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3b3158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3b315c:
    // 0x3b315c: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x3b315cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_3b3160:
    // 0x3b3160: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3b3160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3b3164:
    // 0x3b3164: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x3b3164u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_3b3168:
    // 0x3b3168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b3168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b316c:
    // 0x3b316c: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x3b316cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_3b3170:
    // 0x3b3170: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_3b3174:
    if (ctx->pc == 0x3B3174u) {
        ctx->pc = 0x3B3174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3170u;
        // 0x3b3174: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3178u;
        goto label_3b3178;
    }
    ctx->pc = 0x3B3170u;
    {
        const bool branch_taken_0x3b3170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3170u;
        // 0x3b3174: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3170) {
            ctx->pc = 0x3B31A8u;
            goto label_3b31a8;
        }
    }
    ctx->pc = 0x3B3178u;
label_3b3178:
    // 0x3b3178: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b3178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3b317c:
    // 0x3b317c: 0xc0e5ebe  jal         func_397AF8
label_3b3180:
    if (ctx->pc == 0x3B3180u) {
        ctx->pc = 0x3B3180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B317Cu;
        // 0x3b3180: 0x2484ffc8  addiu       $a0, $a0, -0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3184u;
        goto label_3b3184;
    }
    ctx->pc = 0x3B317Cu;
    SET_GPR_U32(ctx, 31, 0x3B3184u);
    ctx->pc = 0x3B3180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B317Cu;
    // 0x3b3180: 0x2484ffc8  addiu       $a0, $a0, -0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3B317Cu, 0x3B3184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3184u;
label_3b3184:
    // 0x3b3184: 0x0  nop
    ctx->pc = 0x3b3184u;
    // NOP
label_3b3188:
    // 0x3b3188: 0x0  nop
    ctx->pc = 0x3b3188u;
    // NOP
label_3b318c:
    // 0x3b318c: 0x0  nop
    ctx->pc = 0x3b318cu;
    // NOP
label_3b3190:
    // 0x3b3190: 0x0  nop
    ctx->pc = 0x3b3190u;
    // NOP
label_3b3194:
    // 0x3b3194: 0x0  nop
    ctx->pc = 0x3b3194u;
    // NOP
label_3b3198:
    // 0x3b3198: 0x0  nop
    ctx->pc = 0x3b3198u;
    // NOP
label_3b319c:
    // 0x3b319c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_3b31a0:
    if (ctx->pc == 0x3B31A0u) {
        ctx->pc = 0x3B31A4u;
        goto label_3b31a4;
    }
    ctx->pc = 0x3B319Cu;
    {
        const bool branch_taken_0x3b319c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b319c) {
            ctx->pc = 0x3B3188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3188;
        }
    }
    ctx->pc = 0x3B31A4u;
label_3b31a4:
    // 0x3b31a4: 0x0  nop
    ctx->pc = 0x3b31a4u;
    // NOP
label_3b31a8:
    // 0x3b31a8: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x3b31a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_3b31ac:
    // 0x3b31ac: 0x1460009f  bnez        $v1, . + 4 + (0x9F << 2)
label_3b31b0:
    if (ctx->pc == 0x3B31B0u) {
        ctx->pc = 0x3B31B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B31ACu;
        // 0x3b31b0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B31B4u;
        goto label_3b31b4;
    }
    ctx->pc = 0x3B31ACu;
    {
        const bool branch_taken_0x3b31ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B31B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B31ACu;
        // 0x3b31b0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b31ac) {
            ctx->pc = 0x3B342Cu;
            goto label_3b342c;
        }
    }
    ctx->pc = 0x3B31B4u;
label_3b31b4:
    // 0x3b31b4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3b31b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3b31b8:
    // 0x3b31b8: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x3b31b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_3b31bc:
    // 0x3b31bc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3b31bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b31c0:
    // 0x3b31c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b31c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b31c4:
    // 0x3b31c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b31c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b31c8:
    // 0x3b31c8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3b31c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3b31cc:
    // 0x3b31cc: 0x40f809  jalr        $v0
label_3b31d0:
    if (ctx->pc == 0x3B31D0u) {
        ctx->pc = 0x3B31D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B31CCu;
        // 0x3b31d0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B31D4u;
        goto label_3b31d4;
    }
    ctx->pc = 0x3B31CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B31D4u);
        ctx->pc = 0x3B31D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B31CCu;
        // 0x3b31d0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B31CCu, 0x3B31D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B31D4u;
label_3b31d4:
    // 0x3b31d4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3b31d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3b31d8:
    // 0x3b31d8: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x3b31d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b31dc:
    // 0x3b31dc: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x3b31dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_3b31e0:
    // 0x3b31e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b31e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b31e4:
    // 0x3b31e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b31e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b31e8:
    // 0x3b31e8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3b31e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_3b31ec:
    // 0x3b31ec: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3b31ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3b31f0:
    // 0x3b31f0: 0x40f809  jalr        $v0
label_3b31f4:
    if (ctx->pc == 0x3B31F4u) {
        ctx->pc = 0x3B31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B31F0u;
        // 0x3b31f4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B31F8u;
        goto label_3b31f8;
    }
    ctx->pc = 0x3B31F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B31F8u);
        ctx->pc = 0x3B31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B31F0u;
        // 0x3b31f4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B31F0u, 0x3B31F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B31F8u;
label_3b31f8:
    // 0x3b31f8: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x3b31f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_3b31fc:
    // 0x3b31fc: 0x8fb10024  lw          $s1, 0x24($sp)
    ctx->pc = 0x3b31fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3b3200:
    // 0x3b3200: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3b3200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3b3204:
    // 0x3b3204: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x3b3204u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3b3208:
    // 0x3b3208: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b3208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b320c:
    // 0x3b320c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3b320cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b3210:
    // 0x3b3210: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3b3210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3214:
    // 0x3b3214: 0x111182a  slt         $v1, $t0, $s1
    ctx->pc = 0x3b3214u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3b3218:
    // 0x3b3218: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_3b321c:
    if (ctx->pc == 0x3B321Cu) {
        ctx->pc = 0x3B321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3218u;
        // 0x3b321c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3220u;
        goto label_3b3220;
    }
    ctx->pc = 0x3B3218u;
    {
        const bool branch_taken_0x3b3218 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3218) {
            ctx->pc = 0x3B321Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B3218u;
            // 0x3b321c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B3220u;
            goto label_3b3220;
        }
    }
    ctx->pc = 0x3B3220u;
label_3b3220:
    // 0x3b3220: 0x103880b  movn        $s1, $t0, $v1
    ctx->pc = 0x3b3220u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
label_3b3224:
    // 0x3b3224: 0x225001a  div         $zero, $s1, $a1
    ctx->pc = 0x3b3224u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3b3228:
    // 0x3b3228: 0x1012  mflo        $v0
    ctx->pc = 0x3b3228u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_3b322c:
    // 0x3b322c: 0x458818  mult        $s1, $v0, $a1
    ctx->pc = 0x3b322cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_3b3230:
    // 0x3b3230: 0xc0eb07e  jal         func_3AC1F8
label_3b3234:
    if (ctx->pc == 0x3B3234u) {
        ctx->pc = 0x3B3234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3230u;
        // 0x3b3234: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3238u;
        goto label_3b3238;
    }
    ctx->pc = 0x3B3230u;
    SET_GPR_U32(ctx, 31, 0x3B3238u);
    ctx->pc = 0x3B3234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3230u;
    // 0x3b3234: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC1F8u, 0x3B3230u, 0x3B3238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3238u;
label_3b3238:
    // 0x3b3238: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3b3238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3b323c:
    // 0x3b323c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b323cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3240:
    // 0x3b3240: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b3240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b3244:
    // 0x3b3244: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3b3244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3b3248:
    // 0x3b3248: 0x40f809  jalr        $v0
label_3b324c:
    if (ctx->pc == 0x3B324Cu) {
        ctx->pc = 0x3B324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3248u;
        // 0x3b324c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3250u;
        goto label_3b3250;
    }
    ctx->pc = 0x3B3248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B3250u);
        ctx->pc = 0x3B324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3248u;
        // 0x3b324c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3248u, 0x3B3250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3250u;
label_3b3250:
    // 0x3b3250: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b3250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b3254:
    // 0x3b3254: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x3b3254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b3258:
    // 0x3b3258: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b3258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b325c:
    // 0x3b325c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b325cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b3260:
    // 0x3b3260: 0xc0eb07e  jal         func_3AC1F8
label_3b3264:
    if (ctx->pc == 0x3B3264u) {
        ctx->pc = 0x3B3264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3260u;
        // 0x3b3264: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3268u;
        goto label_3b3268;
    }
    ctx->pc = 0x3B3260u;
    SET_GPR_U32(ctx, 31, 0x3B3268u);
    ctx->pc = 0x3B3264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3260u;
    // 0x3b3264: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC1F8u, 0x3B3260u, 0x3B3268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3268u;
label_3b3268:
    // 0x3b3268: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3b3268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3b326c:
    // 0x3b326c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b326cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3270:
    // 0x3b3270: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b3270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b3274:
    // 0x3b3274: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3b3274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3b3278:
    // 0x3b3278: 0x40f809  jalr        $v0
label_3b327c:
    if (ctx->pc == 0x3B327Cu) {
        ctx->pc = 0x3B327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3278u;
        // 0x3b327c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3280u;
        goto label_3b3280;
    }
    ctx->pc = 0x3B3278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B3280u);
        ctx->pc = 0x3B327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3278u;
        // 0x3b327c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3278u, 0x3B3280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3280u;
label_3b3280:
    // 0x3b3280: 0x5a20006a  blezl       $s1, . + 4 + (0x6A << 2)
label_3b3284:
    if (ctx->pc == 0x3B3284u) {
        ctx->pc = 0x3B3284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3280u;
        // 0x3b3284: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3288u;
        goto label_3b3288;
    }
    ctx->pc = 0x3B3280u;
    {
        const bool branch_taken_0x3b3280 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x3b3280) {
            ctx->pc = 0x3B3284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B3280u;
            // 0x3b3284: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B342Cu;
            goto label_3b342c;
        }
    }
    ctx->pc = 0x3B3288u;
label_3b3288:
    // 0x3b3288: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3b3288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3b328c:
    // 0x3b328c: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x3b328cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_3b3290:
    // 0x3b3290: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3b3294:
    if (ctx->pc == 0x3B3294u) {
        ctx->pc = 0x3B3294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3290u;
        // 0x3b3294: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3298u;
        goto label_3b3298;
    }
    ctx->pc = 0x3B3290u;
    {
        const bool branch_taken_0x3b3290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3290u;
        // 0x3b3294: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3290) {
            ctx->pc = 0x3B32D8u;
            goto label_3b32d8;
        }
    }
    ctx->pc = 0x3B3298u;
label_3b3298:
    // 0x3b3298: 0xc0e5ebe  jal         func_397AF8
label_3b329c:
    if (ctx->pc == 0x3B329Cu) {
        ctx->pc = 0x3B329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3298u;
        // 0x3b329c: 0x2484ffe8  addiu       $a0, $a0, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B32A0u;
        goto label_3b32a0;
    }
    ctx->pc = 0x3B3298u;
    SET_GPR_U32(ctx, 31, 0x3B32A0u);
    ctx->pc = 0x3B329Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3298u;
    // 0x3b329c: 0x2484ffe8  addiu       $a0, $a0, -0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3B3298u, 0x3B32A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B32A0u;
label_3b32a0:
    // 0x3b32a0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b32a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3b32a4:
    // 0x3b32a4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3b32a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3b32a8:
    // 0x3b32a8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3b32a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3b32ac:
    // 0x3b32ac: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x3b32acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3b32b0:
    // 0x3b32b0: 0xc0e5ebe  jal         func_397AF8
label_3b32b4:
    if (ctx->pc == 0x3B32B4u) {
        ctx->pc = 0x3B32B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B32B0u;
        // 0x3b32b4: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B32B8u;
        goto label_3b32b8;
    }
    ctx->pc = 0x3B32B0u;
    SET_GPR_U32(ctx, 31, 0x3B32B8u);
    ctx->pc = 0x3B32B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B32B0u;
    // 0x3b32b4: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3B32B0u, 0x3B32B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B32B8u;
label_3b32b8:
    // 0x3b32b8: 0x0  nop
    ctx->pc = 0x3b32b8u;
    // NOP
label_3b32bc:
    // 0x3b32bc: 0x0  nop
    ctx->pc = 0x3b32bcu;
    // NOP
label_3b32c0:
    // 0x3b32c0: 0x0  nop
    ctx->pc = 0x3b32c0u;
    // NOP
label_3b32c4:
    // 0x3b32c4: 0x0  nop
    ctx->pc = 0x3b32c4u;
    // NOP
label_3b32c8:
    // 0x3b32c8: 0x0  nop
    ctx->pc = 0x3b32c8u;
    // NOP
label_3b32cc:
    // 0x3b32cc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_3b32d0:
    if (ctx->pc == 0x3B32D0u) {
        ctx->pc = 0x3B32D4u;
        goto label_3b32d4;
    }
    ctx->pc = 0x3B32CCu;
    {
        const bool branch_taken_0x3b32cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b32cc) {
            ctx->pc = 0x3B32B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b32b8;
        }
    }
    ctx->pc = 0x3B32D4u;
label_3b32d4:
    // 0x3b32d4: 0x0  nop
    ctx->pc = 0x3b32d4u;
    // NOP
label_3b32d8:
    // 0x3b32d8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3b32d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3b32dc:
    // 0x3b32dc: 0x3082003f  andi        $v0, $a0, 0x3F
    ctx->pc = 0x3b32dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_3b32e0:
    // 0x3b32e0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_3b32e4:
    if (ctx->pc == 0x3B32E4u) {
        ctx->pc = 0x3B32E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B32E0u;
        // 0x3b32e4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B32E8u;
        goto label_3b32e8;
    }
    ctx->pc = 0x3B32E0u;
    {
        const bool branch_taken_0x3b32e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b32e0) {
            ctx->pc = 0x3B32E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B32E0u;
            // 0x3b32e4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B3330u;
            goto label_3b3330;
        }
    }
    ctx->pc = 0x3B32E8u;
label_3b32e8:
    // 0x3b32e8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b32e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3b32ec:
    // 0x3b32ec: 0xc0e5ebe  jal         func_397AF8
label_3b32f0:
    if (ctx->pc == 0x3B32F0u) {
        ctx->pc = 0x3B32F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B32ECu;
        // 0x3b32f0: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B32F4u;
        goto label_3b32f4;
    }
    ctx->pc = 0x3B32ECu;
    SET_GPR_U32(ctx, 31, 0x3B32F4u);
    ctx->pc = 0x3B32F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B32ECu;
    // 0x3b32f0: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3B32ECu, 0x3B32F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B32F4u;
label_3b32f4:
    // 0x3b32f4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b32f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3b32f8:
    // 0x3b32f8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3b32f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3b32fc:
    // 0x3b32fc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3b32fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3b3300:
    // 0x3b3300: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x3b3300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3b3304:
    // 0x3b3304: 0xc0e5ebe  jal         func_397AF8
label_3b3308:
    if (ctx->pc == 0x3B3308u) {
        ctx->pc = 0x3B3308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3304u;
        // 0x3b3308: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B330Cu;
        goto label_3b330c;
    }
    ctx->pc = 0x3B3304u;
    SET_GPR_U32(ctx, 31, 0x3B330Cu);
    ctx->pc = 0x3B3308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3304u;
    // 0x3b3308: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3B3304u, 0x3B330Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B330Cu;
label_3b330c:
    // 0x3b330c: 0x0  nop
    ctx->pc = 0x3b330cu;
    // NOP
label_3b3310:
    // 0x3b3310: 0x0  nop
    ctx->pc = 0x3b3310u;
    // NOP
label_3b3314:
    // 0x3b3314: 0x0  nop
    ctx->pc = 0x3b3314u;
    // NOP
label_3b3318:
    // 0x3b3318: 0x0  nop
    ctx->pc = 0x3b3318u;
    // NOP
label_3b331c:
    // 0x3b331c: 0x0  nop
    ctx->pc = 0x3b331cu;
    // NOP
label_3b3320:
    // 0x3b3320: 0x0  nop
    ctx->pc = 0x3b3320u;
    // NOP
label_3b3324:
    // 0x3b3324: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_3b3328:
    if (ctx->pc == 0x3B3328u) {
        ctx->pc = 0x3B332Cu;
        goto label_3b332c;
    }
    ctx->pc = 0x3B3324u;
    {
        const bool branch_taken_0x3b3324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3324) {
            ctx->pc = 0x3B3310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3310;
        }
    }
    ctx->pc = 0x3B332Cu;
label_3b332c:
    // 0x3b332c: 0x0  nop
    ctx->pc = 0x3b332cu;
    // NOP
label_3b3330:
    // 0x3b3330: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x3b3330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_3b3334:
    // 0x3b3334: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_3b3338:
    if (ctx->pc == 0x3B3338u) {
        ctx->pc = 0x3B3338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3334u;
        // 0x3b3338: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B333Cu;
        goto label_3b333c;
    }
    ctx->pc = 0x3B3334u;
    {
        const bool branch_taken_0x3b3334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3334u;
        // 0x3b3338: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3334) {
            ctx->pc = 0x3B3380u;
            goto label_3b3380;
        }
    }
    ctx->pc = 0x3B333Cu;
label_3b333c:
    // 0x3b333c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b333cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3b3340:
    // 0x3b3340: 0xc0e5ebe  jal         func_397AF8
label_3b3344:
    if (ctx->pc == 0x3B3344u) {
        ctx->pc = 0x3B3344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3340u;
        // 0x3b3344: 0x24840068  addiu       $a0, $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3348u;
        goto label_3b3348;
    }
    ctx->pc = 0x3B3340u;
    SET_GPR_U32(ctx, 31, 0x3B3348u);
    ctx->pc = 0x3B3344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3340u;
    // 0x3b3344: 0x24840068  addiu       $a0, $a0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3B3340u, 0x3B3348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3348u;
label_3b3348:
    // 0x3b3348: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b3348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3b334c:
    // 0x3b334c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3b334cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3b3350:
    // 0x3b3350: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3b3350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3b3354:
    // 0x3b3354: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x3b3354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3b3358:
    // 0x3b3358: 0xc0e5ebe  jal         func_397AF8
label_3b335c:
    if (ctx->pc == 0x3B335Cu) {
        ctx->pc = 0x3B335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3358u;
        // 0x3b335c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3360u;
        goto label_3b3360;
    }
    ctx->pc = 0x3B3358u;
    SET_GPR_U32(ctx, 31, 0x3B3360u);
    ctx->pc = 0x3B335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3358u;
    // 0x3b335c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3B3358u, 0x3B3360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3360u;
label_3b3360:
    // 0x3b3360: 0x0  nop
    ctx->pc = 0x3b3360u;
    // NOP
label_3b3364:
    // 0x3b3364: 0x0  nop
    ctx->pc = 0x3b3364u;
    // NOP
label_3b3368:
    // 0x3b3368: 0x0  nop
    ctx->pc = 0x3b3368u;
    // NOP
label_3b336c:
    // 0x3b336c: 0x0  nop
    ctx->pc = 0x3b336cu;
    // NOP
label_3b3370:
    // 0x3b3370: 0x0  nop
    ctx->pc = 0x3b3370u;
    // NOP
label_3b3374:
    // 0x3b3374: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_3b3378:
    if (ctx->pc == 0x3B3378u) {
        ctx->pc = 0x3B337Cu;
        goto label_3b337c;
    }
    ctx->pc = 0x3B3374u;
    {
        const bool branch_taken_0x3b3374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3374) {
            ctx->pc = 0x3B3360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3360;
        }
    }
    ctx->pc = 0x3B337Cu;
label_3b337c:
    // 0x3b337c: 0x0  nop
    ctx->pc = 0x3b337cu;
    // NOP
label_3b3380:
    // 0x3b3380: 0xc0f2878  jal         func_3CA1E0
label_3b3384:
    if (ctx->pc == 0x3B3384u) {
        ctx->pc = 0x3B3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3380u;
        // 0x3b3384: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3388u;
        goto label_3b3388;
    }
    ctx->pc = 0x3B3380u;
    SET_GPR_U32(ctx, 31, 0x3B3388u);
    ctx->pc = 0x3B3384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3380u;
    // 0x3b3384: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA1E0u, 0x3B3380u, 0x3B3388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3388u;
label_3b3388:
    // 0x3b3388: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x3b3388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_3b338c:
    // 0x3b338c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3b338cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3b3390:
    // 0x3b3390: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3b3390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3b3394:
    // 0x3b3394: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x3b3394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3b3398:
    // 0x3b3398: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x3b3398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_3b339c:
    // 0x3b339c: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x3b339cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3b33a0:
    // 0x3b33a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3b33a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3b33a4:
    // 0x3b33a4: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x3b33a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_3b33a8:
    // 0x3b33a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b33a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b33ac:
    // 0x3b33ac: 0xae470020  sw          $a3, 0x20($s2)
    ctx->pc = 0x3b33acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 7));
label_3b33b0:
    // 0x3b33b0: 0xae460024  sw          $a2, 0x24($s2)
    ctx->pc = 0x3b33b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 6));
label_3b33b4:
    // 0x3b33b4: 0xc0f2758  jal         func_3C9D60
label_3b33b8:
    if (ctx->pc == 0x3B33B8u) {
        ctx->pc = 0x3B33B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B33B4u;
        // 0x3b33b8: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B33BCu;
        goto label_3b33bc;
    }
    ctx->pc = 0x3B33B4u;
    SET_GPR_U32(ctx, 31, 0x3B33BCu);
    ctx->pc = 0x3B33B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B33B4u;
    // 0x3b33b8: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9D60u, 0x3B33B4u, 0x3B33BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B33BCu;
label_3b33bc:
    // 0x3b33bc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_3b33c0:
    if (ctx->pc == 0x3B33C0u) {
        ctx->pc = 0x3B33C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B33BCu;
        // 0x3b33c0: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B33C4u;
        goto label_3b33c4;
    }
    ctx->pc = 0x3B33BCu;
    {
        const bool branch_taken_0x3b33bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B33C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B33BCu;
        // 0x3b33c0: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b33bc) {
            ctx->pc = 0x3B3400u;
            goto label_3b3400;
        }
    }
    ctx->pc = 0x3B33C4u;
label_3b33c4:
    // 0x3b33c4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3b33c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3b33c8:
    // 0x3b33c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b33c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b33cc:
    // 0x3b33cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b33ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b33d0:
    // 0x3b33d0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3b33d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3b33d4:
    // 0x3b33d4: 0x40f809  jalr        $v0
label_3b33d8:
    if (ctx->pc == 0x3B33D8u) {
        ctx->pc = 0x3B33D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B33D4u;
        // 0x3b33d8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B33DCu;
        goto label_3b33dc;
    }
    ctx->pc = 0x3B33D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B33DCu);
        ctx->pc = 0x3B33D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B33D4u;
        // 0x3b33d8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B33D4u, 0x3B33DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B33DCu;
label_3b33dc:
    // 0x3b33dc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3b33dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3b33e0:
    // 0x3b33e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b33e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b33e4:
    // 0x3b33e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b33e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b33e8:
    // 0x3b33e8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3b33e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3b33ec:
    // 0x3b33ec: 0x40f809  jalr        $v0
label_3b33f0:
    if (ctx->pc == 0x3B33F0u) {
        ctx->pc = 0x3B33F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B33ECu;
        // 0x3b33f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B33F4u;
        goto label_3b33f4;
    }
    ctx->pc = 0x3B33ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B33F4u);
        ctx->pc = 0x3B33F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B33ECu;
        // 0x3b33f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B33ECu, 0x3B33F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B33F4u;
label_3b33f4:
    // 0x3b33f4: 0x1000000d  b           . + 4 + (0xD << 2)
label_3b33f8:
    if (ctx->pc == 0x3B33F8u) {
        ctx->pc = 0x3B33F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B33F4u;
        // 0x3b33f8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B33FCu;
        goto label_3b33fc;
    }
    ctx->pc = 0x3B33F4u;
    {
        const bool branch_taken_0x3b33f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B33F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B33F4u;
        // 0x3b33f8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b33f4) {
            ctx->pc = 0x3B342Cu;
            goto label_3b342c;
        }
    }
    ctx->pc = 0x3B33FCu;
label_3b33fc:
    // 0x3b33fc: 0x0  nop
    ctx->pc = 0x3b33fcu;
    // NOP
label_3b3400:
    // 0x3b3400: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x3b3400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3b3404:
    // 0x3b3404: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x3b3404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3b3408:
    // 0x3b3408: 0xb2440013  sdl         $a0, 0x13($s2)
    ctx->pc = 0x3b3408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b340c:
    // 0x3b340c: 0xb644000c  sdr         $a0, 0xC($s2)
    ctx->pc = 0x3b340cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b3410:
    // 0x3b3410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b3410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b3414:
    // 0x3b3414: 0x6a640007  ldl         $a0, 0x7($s3)
    ctx->pc = 0x3b3414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3b3418:
    // 0x3b3418: 0x6e640000  ldr         $a0, 0x0($s3)
    ctx->pc = 0x3b3418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3b341c:
    // 0x3b341c: 0xb244001b  sdl         $a0, 0x1B($s2)
    ctx->pc = 0x3b341cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b3420:
    // 0x3b3420: 0xb6440014  sdr         $a0, 0x14($s2)
    ctx->pc = 0x3b3420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3b3424:
    // 0x3b3424: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x3b3424u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
label_3b3428:
    // 0x3b3428: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3b3428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3b342c:
    // 0x3b342c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x3b342cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3b3430:
    // 0x3b3430: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x3b3430u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3b3434:
    // 0x3b3434: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x3b3434u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_3b3438:
    // 0x3b3438: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3b3438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3b343c:
    // 0x3b343c: 0x3e00008  jr          $ra
label_3b3440:
    if (ctx->pc == 0x3B3440u) {
        ctx->pc = 0x3B3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B343Cu;
        // 0x3b3440: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3444u;
        goto label_3b3444;
    }
    ctx->pc = 0x3B343Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B343Cu;
        // 0x3b3440: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B343Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3444u;
label_3b3444:
    // 0x3b3444: 0x0  nop
    ctx->pc = 0x3b3444u;
    // NOP
    ctx->pc = 0x3b3448u;
}
