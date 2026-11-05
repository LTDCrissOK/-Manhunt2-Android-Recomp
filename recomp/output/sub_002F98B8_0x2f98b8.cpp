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

// Function: sub_002F98B8
// Address: 0x2f98b8 - 0x2f9ab8
void sub_002F98B8_0x2f98b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F98B8_0x2f98b8");
#endif

    switch (ctx->pc) {
        case 0x2f98b8u: goto label_2f98b8;
        case 0x2f98bcu: goto label_2f98bc;
        case 0x2f98c0u: goto label_2f98c0;
        case 0x2f98c4u: goto label_2f98c4;
        case 0x2f98c8u: goto label_2f98c8;
        case 0x2f98ccu: goto label_2f98cc;
        case 0x2f98d0u: goto label_2f98d0;
        case 0x2f98d4u: goto label_2f98d4;
        case 0x2f98d8u: goto label_2f98d8;
        case 0x2f98dcu: goto label_2f98dc;
        case 0x2f98e0u: goto label_2f98e0;
        case 0x2f98e4u: goto label_2f98e4;
        case 0x2f98e8u: goto label_2f98e8;
        case 0x2f98ecu: goto label_2f98ec;
        case 0x2f98f0u: goto label_2f98f0;
        case 0x2f98f4u: goto label_2f98f4;
        case 0x2f98f8u: goto label_2f98f8;
        case 0x2f98fcu: goto label_2f98fc;
        case 0x2f9900u: goto label_2f9900;
        case 0x2f9904u: goto label_2f9904;
        case 0x2f9908u: goto label_2f9908;
        case 0x2f990cu: goto label_2f990c;
        case 0x2f9910u: goto label_2f9910;
        case 0x2f9914u: goto label_2f9914;
        case 0x2f9918u: goto label_2f9918;
        case 0x2f991cu: goto label_2f991c;
        case 0x2f9920u: goto label_2f9920;
        case 0x2f9924u: goto label_2f9924;
        case 0x2f9928u: goto label_2f9928;
        case 0x2f992cu: goto label_2f992c;
        case 0x2f9930u: goto label_2f9930;
        case 0x2f9934u: goto label_2f9934;
        case 0x2f9938u: goto label_2f9938;
        case 0x2f993cu: goto label_2f993c;
        case 0x2f9940u: goto label_2f9940;
        case 0x2f9944u: goto label_2f9944;
        case 0x2f9948u: goto label_2f9948;
        case 0x2f994cu: goto label_2f994c;
        case 0x2f9950u: goto label_2f9950;
        case 0x2f9954u: goto label_2f9954;
        case 0x2f9958u: goto label_2f9958;
        case 0x2f995cu: goto label_2f995c;
        case 0x2f9960u: goto label_2f9960;
        case 0x2f9964u: goto label_2f9964;
        case 0x2f9968u: goto label_2f9968;
        case 0x2f996cu: goto label_2f996c;
        case 0x2f9970u: goto label_2f9970;
        case 0x2f9974u: goto label_2f9974;
        case 0x2f9978u: goto label_2f9978;
        case 0x2f997cu: goto label_2f997c;
        case 0x2f9980u: goto label_2f9980;
        case 0x2f9984u: goto label_2f9984;
        case 0x2f9988u: goto label_2f9988;
        case 0x2f998cu: goto label_2f998c;
        case 0x2f9990u: goto label_2f9990;
        case 0x2f9994u: goto label_2f9994;
        case 0x2f9998u: goto label_2f9998;
        case 0x2f999cu: goto label_2f999c;
        case 0x2f99a0u: goto label_2f99a0;
        case 0x2f99a4u: goto label_2f99a4;
        case 0x2f99a8u: goto label_2f99a8;
        case 0x2f99acu: goto label_2f99ac;
        case 0x2f99b0u: goto label_2f99b0;
        case 0x2f99b4u: goto label_2f99b4;
        case 0x2f99b8u: goto label_2f99b8;
        case 0x2f99bcu: goto label_2f99bc;
        case 0x2f99c0u: goto label_2f99c0;
        case 0x2f99c4u: goto label_2f99c4;
        case 0x2f99c8u: goto label_2f99c8;
        case 0x2f99ccu: goto label_2f99cc;
        case 0x2f99d0u: goto label_2f99d0;
        case 0x2f99d4u: goto label_2f99d4;
        case 0x2f99d8u: goto label_2f99d8;
        case 0x2f99dcu: goto label_2f99dc;
        case 0x2f99e0u: goto label_2f99e0;
        case 0x2f99e4u: goto label_2f99e4;
        case 0x2f99e8u: goto label_2f99e8;
        case 0x2f99ecu: goto label_2f99ec;
        case 0x2f99f0u: goto label_2f99f0;
        case 0x2f99f4u: goto label_2f99f4;
        case 0x2f99f8u: goto label_2f99f8;
        case 0x2f99fcu: goto label_2f99fc;
        case 0x2f9a00u: goto label_2f9a00;
        case 0x2f9a04u: goto label_2f9a04;
        case 0x2f9a08u: goto label_2f9a08;
        case 0x2f9a0cu: goto label_2f9a0c;
        case 0x2f9a10u: goto label_2f9a10;
        case 0x2f9a14u: goto label_2f9a14;
        case 0x2f9a18u: goto label_2f9a18;
        case 0x2f9a1cu: goto label_2f9a1c;
        case 0x2f9a20u: goto label_2f9a20;
        case 0x2f9a24u: goto label_2f9a24;
        case 0x2f9a28u: goto label_2f9a28;
        case 0x2f9a2cu: goto label_2f9a2c;
        case 0x2f9a30u: goto label_2f9a30;
        case 0x2f9a34u: goto label_2f9a34;
        case 0x2f9a38u: goto label_2f9a38;
        case 0x2f9a3cu: goto label_2f9a3c;
        case 0x2f9a40u: goto label_2f9a40;
        case 0x2f9a44u: goto label_2f9a44;
        case 0x2f9a48u: goto label_2f9a48;
        case 0x2f9a4cu: goto label_2f9a4c;
        case 0x2f9a50u: goto label_2f9a50;
        case 0x2f9a54u: goto label_2f9a54;
        case 0x2f9a58u: goto label_2f9a58;
        case 0x2f9a5cu: goto label_2f9a5c;
        case 0x2f9a60u: goto label_2f9a60;
        case 0x2f9a64u: goto label_2f9a64;
        case 0x2f9a68u: goto label_2f9a68;
        case 0x2f9a6cu: goto label_2f9a6c;
        case 0x2f9a70u: goto label_2f9a70;
        case 0x2f9a74u: goto label_2f9a74;
        case 0x2f9a78u: goto label_2f9a78;
        case 0x2f9a7cu: goto label_2f9a7c;
        case 0x2f9a80u: goto label_2f9a80;
        case 0x2f9a84u: goto label_2f9a84;
        case 0x2f9a88u: goto label_2f9a88;
        case 0x2f9a8cu: goto label_2f9a8c;
        case 0x2f9a90u: goto label_2f9a90;
        case 0x2f9a94u: goto label_2f9a94;
        case 0x2f9a98u: goto label_2f9a98;
        case 0x2f9a9cu: goto label_2f9a9c;
        case 0x2f9aa0u: goto label_2f9aa0;
        case 0x2f9aa4u: goto label_2f9aa4;
        case 0x2f9aa8u: goto label_2f9aa8;
        case 0x2f9aacu: goto label_2f9aac;
        case 0x2f9ab0u: goto label_2f9ab0;
        case 0x2f9ab4u: goto label_2f9ab4;
        default: break;
    }

    ctx->pc = 0x2f98b8u;

label_2f98b8:
    // 0x2f98b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f98b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2f98bc:
    // 0x2f98bc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2f98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2f98c0:
    // 0x2f98c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f98c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f98c4:
    // 0x2f98c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f98c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f98c8:
    // 0x2f98c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f98c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2f98cc:
    // 0x2f98cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f98ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f98d0:
    // 0x2f98d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f98d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2f98d4:
    // 0x2f98d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f98d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f98d8:
    // 0x2f98d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f98d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2f98dc:
    // 0x2f98dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2f98dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2f98e0:
    // 0x2f98e0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2f98e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2f98e4:
    // 0x2f98e4: 0x8c432b00  lw          $v1, 0x2B00($v0)
    ctx->pc = 0x2f98e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_2f98e8:
    // 0x2f98e8: 0x8e0211fc  lw          $v0, 0x11FC($s0)
    ctx->pc = 0x2f98e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4604)));
label_2f98ec:
    // 0x2f98ec: 0x8e0411e8  lw          $a0, 0x11E8($s0)
    ctx->pc = 0x2f98ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4584)));
label_2f98f0:
    // 0x2f98f0: 0x2463012c  addiu       $v1, $v1, 0x12C
    ctx->pc = 0x2f98f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 300));
label_2f98f4:
    // 0x2f98f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f98f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f98f8:
    // 0x2f98f8: 0xae031360  sw          $v1, 0x1360($s0)
    ctx->pc = 0x2f98f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4960), GPR_U32(ctx, 3));
label_2f98fc:
    // 0x2f98fc: 0xa2061370  sb          $a2, 0x1370($s0)
    ctx->pc = 0x2f98fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4976), (uint8_t)GPR_U32(ctx, 6));
label_2f9900:
    // 0x2f9900: 0xae051368  sw          $a1, 0x1368($s0)
    ctx->pc = 0x2f9900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4968), GPR_U32(ctx, 5));
label_2f9904:
    // 0x2f9904: 0xa2021371  sb          $v0, 0x1371($s0)
    ctx->pc = 0x2f9904u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4977), (uint8_t)GPR_U32(ctx, 2));
label_2f9908:
    // 0x2f9908: 0xae041364  sw          $a0, 0x1364($s0)
    ctx->pc = 0x2f9908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4964), GPR_U32(ctx, 4));
label_2f990c:
    // 0x2f990c: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x2f990cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_2f9910:
    // 0x2f9910: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f9910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f9914:
    // 0x2f9914: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f9914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f9918:
    // 0x2f9918: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f9918u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f991c:
    // 0x2f991c: 0xfa011350  sqc2        $vf1, 0x1350($s0)
    ctx->pc = 0x2f991cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4944), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f9920:
    // 0x2f9920: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x2f9920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2f9924:
    // 0x2f9924: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f9924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9928:
    // 0x2f9928: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f9928u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f992c:
    // 0x2f992c: 0xc0b83b6  jal         func_2E0ED8
label_2f9930:
    if (ctx->pc == 0x2F9930u) {
        ctx->pc = 0x2F9930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F992Cu;
        // 0x2f9930: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9934u;
        goto label_2f9934;
    }
    ctx->pc = 0x2F992Cu;
    SET_GPR_U32(ctx, 31, 0x2F9934u);
    ctx->pc = 0x2F9930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F992Cu;
    // 0x2f9930: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0ED8u, 0x2F992Cu, 0x2F9934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9934u;
label_2f9934:
    // 0x2f9934: 0x8e110334  lw          $s1, 0x334($s0)
    ctx->pc = 0x2f9934u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2f9938:
    // 0x2f9938: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2f9938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_2f993c:
    // 0x2f993c: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2f993cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_2f9940:
    // 0x2f9940: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f9940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f9944:
    // 0x2f9944: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_2f9948:
    if (ctx->pc == 0x2F9948u) {
        ctx->pc = 0x2F9948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9944u;
        // 0x2f9948: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F994Cu;
        goto label_2f994c;
    }
    ctx->pc = 0x2F9944u;
    {
        const bool branch_taken_0x2f9944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9944) {
            ctx->pc = 0x2F9948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9944u;
            // 0x2f9948: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9984u;
            goto label_2f9984;
        }
    }
    ctx->pc = 0x2F994Cu;
label_2f994c:
    // 0x2f994c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2f994cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_2f9950:
    // 0x2f9950: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_2f9954:
    if (ctx->pc == 0x2F9954u) {
        ctx->pc = 0x2F9954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9950u;
        // 0x2f9954: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9958u;
        goto label_2f9958;
    }
    ctx->pc = 0x2F9950u;
    {
        const bool branch_taken_0x2f9950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9950) {
            ctx->pc = 0x2F9954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9950u;
            // 0x2f9954: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9984u;
            goto label_2f9984;
        }
    }
    ctx->pc = 0x2F9958u;
label_2f9958:
    // 0x2f9958: 0xc0924a8  jal         func_2492A0
label_2f995c:
    if (ctx->pc == 0x2F995Cu) {
        ctx->pc = 0x2F995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9958u;
        // 0x2f995c: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9960u;
        goto label_2f9960;
    }
    ctx->pc = 0x2F9958u;
    SET_GPR_U32(ctx, 31, 0x2F9960u);
    ctx->pc = 0x2F995Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9958u;
    // 0x2f995c: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2F9958u, 0x2F9960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9960u;
label_2f9960:
    // 0x2f9960: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2f9964:
    if (ctx->pc == 0x2F9964u) {
        ctx->pc = 0x2F9964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9960u;
        // 0x2f9964: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9968u;
        goto label_2f9968;
    }
    ctx->pc = 0x2F9960u;
    {
        const bool branch_taken_0x2f9960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9960) {
            ctx->pc = 0x2F9964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9960u;
            // 0x2f9964: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9984u;
            goto label_2f9984;
        }
    }
    ctx->pc = 0x2F9968u;
label_2f9968:
    // 0x2f9968: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2f9968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_2f996c:
    // 0x2f996c: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2f996cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2f9970:
    // 0x2f9970: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2f9974:
    if (ctx->pc == 0x2F9974u) {
        ctx->pc = 0x2F9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9970u;
        // 0x2f9974: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9978u;
        goto label_2f9978;
    }
    ctx->pc = 0x2F9970u;
    {
        const bool branch_taken_0x2f9970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9970u;
        // 0x2f9974: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9970) {
            ctx->pc = 0x2F9980u;
            goto label_2f9980;
        }
    }
    ctx->pc = 0x2F9978u;
label_2f9978:
    // 0x2f9978: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2f997c:
    if (ctx->pc == 0x2F997Cu) {
        ctx->pc = 0x2F9980u;
        goto label_2f9980;
    }
    ctx->pc = 0x2F9978u;
    {
        const bool branch_taken_0x2f9978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f9978) {
            ctx->pc = 0x2F9984u;
            goto label_2f9984;
        }
    }
    ctx->pc = 0x2F9980u;
label_2f9980:
    // 0x2f9980: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f9980u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9984:
    // 0x2f9984: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_2f9988:
    if (ctx->pc == 0x2F9988u) {
        ctx->pc = 0x2F998Cu;
        goto label_2f998c;
    }
    ctx->pc = 0x2F9984u;
    {
        const bool branch_taken_0x2f9984 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9984) {
            ctx->pc = 0x2F99A4u;
            goto label_2f99a4;
        }
    }
    ctx->pc = 0x2F998Cu;
label_2f998c:
    // 0x2f998c: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x2f998cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_2f9990:
    // 0x2f9990: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f9990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f9994:
    // 0x2f9994: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2f9994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2f9998:
    // 0x2f9998: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f9998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f999c:
    // 0x2f999c: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x2f999cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
label_2f99a0:
    // 0x2f99a0: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x2f99a0u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f99a4:
    // 0x2f99a4: 0x56600021  bnel        $s3, $zero, . + 4 + (0x21 << 2)
label_2f99a8:
    if (ctx->pc == 0x2F99A8u) {
        ctx->pc = 0x2F99A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F99A4u;
        // 0x2f99a8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F99ACu;
        goto label_2f99ac;
    }
    ctx->pc = 0x2F99A4u;
    {
        const bool branch_taken_0x2f99a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f99a4) {
            ctx->pc = 0x2F99A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F99A4u;
            // 0x2f99a8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9A2Cu;
            goto label_2f9a2c;
        }
    }
    ctx->pc = 0x2F99ACu;
label_2f99ac:
    // 0x2f99ac: 0x8e110334  lw          $s1, 0x334($s0)
    ctx->pc = 0x2f99acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2f99b0:
    // 0x2f99b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f99b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f99b4:
    // 0x2f99b4: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2f99b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_2f99b8:
    // 0x2f99b8: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2f99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_2f99bc:
    // 0x2f99bc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f99bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f99c0:
    // 0x2f99c0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2f99c4:
    if (ctx->pc == 0x2F99C4u) {
        ctx->pc = 0x2F99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F99C0u;
        // 0x2f99c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F99C8u;
        goto label_2f99c8;
    }
    ctx->pc = 0x2F99C0u;
    {
        const bool branch_taken_0x2f99c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F99C0u;
        // 0x2f99c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f99c0) {
            ctx->pc = 0x2F99FCu;
            goto label_2f99fc;
        }
    }
    ctx->pc = 0x2F99C8u;
label_2f99c8:
    // 0x2f99c8: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2f99c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_2f99cc:
    // 0x2f99cc: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_2f99d0:
    if (ctx->pc == 0x2F99D0u) {
        ctx->pc = 0x2F99D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F99CCu;
        // 0x2f99d0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F99D4u;
        goto label_2f99d4;
    }
    ctx->pc = 0x2F99CCu;
    {
        const bool branch_taken_0x2f99cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f99cc) {
            ctx->pc = 0x2F99D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F99CCu;
            // 0x2f99d0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9A00u;
            goto label_2f9a00;
        }
    }
    ctx->pc = 0x2F99D4u;
label_2f99d4:
    // 0x2f99d4: 0xc0924a8  jal         func_2492A0
label_2f99d8:
    if (ctx->pc == 0x2F99D8u) {
        ctx->pc = 0x2F99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F99D4u;
        // 0x2f99d8: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F99DCu;
        goto label_2f99dc;
    }
    ctx->pc = 0x2F99D4u;
    SET_GPR_U32(ctx, 31, 0x2F99DCu);
    ctx->pc = 0x2F99D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F99D4u;
    // 0x2f99d8: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2F99D4u, 0x2F99DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F99DCu;
label_2f99dc:
    // 0x2f99dc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2f99e0:
    if (ctx->pc == 0x2F99E0u) {
        ctx->pc = 0x2F99E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F99DCu;
        // 0x2f99e0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F99E4u;
        goto label_2f99e4;
    }
    ctx->pc = 0x2F99DCu;
    {
        const bool branch_taken_0x2f99dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f99dc) {
            ctx->pc = 0x2F99E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F99DCu;
            // 0x2f99e0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9A00u;
            goto label_2f9a00;
        }
    }
    ctx->pc = 0x2F99E4u;
label_2f99e4:
    // 0x2f99e4: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2f99e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_2f99e8:
    // 0x2f99e8: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2f99e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_2f99ec:
    // 0x2f99ec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2f99f0:
    if (ctx->pc == 0x2F99F0u) {
        ctx->pc = 0x2F99F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F99ECu;
        // 0x2f99f0: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F99F4u;
        goto label_2f99f4;
    }
    ctx->pc = 0x2F99ECu;
    {
        const bool branch_taken_0x2f99ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F99F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F99ECu;
        // 0x2f99f0: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f99ec) {
            ctx->pc = 0x2F99FCu;
            goto label_2f99fc;
        }
    }
    ctx->pc = 0x2F99F4u;
label_2f99f4:
    // 0x2f99f4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2f99f8:
    if (ctx->pc == 0x2F99F8u) {
        ctx->pc = 0x2F99FCu;
        goto label_2f99fc;
    }
    ctx->pc = 0x2F99F4u;
    {
        const bool branch_taken_0x2f99f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f99f4) {
            ctx->pc = 0x2F9A00u;
            goto label_2f9a00;
        }
    }
    ctx->pc = 0x2F99FCu;
label_2f99fc:
    // 0x2f99fc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f99fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9a00:
    // 0x2f9a00: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_2f9a04:
    if (ctx->pc == 0x2F9A04u) {
        ctx->pc = 0x2F9A08u;
        goto label_2f9a08;
    }
    ctx->pc = 0x2F9A00u;
    {
        const bool branch_taken_0x2f9a00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9a00) {
            ctx->pc = 0x2F9A20u;
            goto label_2f9a20;
        }
    }
    ctx->pc = 0x2F9A08u;
label_2f9a08:
    // 0x2f9a08: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x2f9a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_2f9a0c:
    // 0x2f9a0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f9a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f9a10:
    // 0x2f9a10: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2f9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2f9a14:
    // 0x2f9a14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f9a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f9a18:
    // 0x2f9a18: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x2f9a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
label_2f9a1c:
    // 0x2f9a1c: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x2f9a1cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f9a20:
    // 0x2f9a20: 0x52600003  beql        $s3, $zero, . + 4 + (0x3 << 2)
label_2f9a24:
    if (ctx->pc == 0x2F9A24u) {
        ctx->pc = 0x2F9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A20u;
        // 0x2f9a24: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9A28u;
        goto label_2f9a28;
    }
    ctx->pc = 0x2F9A20u;
    {
        const bool branch_taken_0x2f9a20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9a20) {
            ctx->pc = 0x2F9A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9A20u;
            // 0x2f9a24: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9A30u;
            goto label_2f9a30;
        }
    }
    ctx->pc = 0x2F9A28u;
label_2f9a28:
    // 0x2f9a28: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2f9a28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f9a2c:
    // 0x2f9a2c: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2f9a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_2f9a30:
    // 0x2f9a30: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2f9a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_2f9a34:
    // 0x2f9a34: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2f9a38:
    if (ctx->pc == 0x2F9A38u) {
        ctx->pc = 0x2F9A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A34u;
        // 0x2f9a38: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9A3Cu;
        goto label_2f9a3c;
    }
    ctx->pc = 0x2F9A34u;
    {
        const bool branch_taken_0x2f9a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A34u;
        // 0x2f9a38: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9a34) {
            ctx->pc = 0x2F9A60u;
            goto label_2f9a60;
        }
    }
    ctx->pc = 0x2F9A3Cu;
label_2f9a3c:
    // 0x2f9a3c: 0xc092e70  jal         func_24B9C0
label_2f9a40:
    if (ctx->pc == 0x2F9A40u) {
        ctx->pc = 0x2F9A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A3Cu;
        // 0x2f9a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9A44u;
        goto label_2f9a44;
    }
    ctx->pc = 0x2F9A3Cu;
    SET_GPR_U32(ctx, 31, 0x2F9A44u);
    ctx->pc = 0x2F9A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9A3Cu;
    // 0x2f9a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B9C0u, 0x2F9A3Cu, 0x2F9A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9A44u;
label_2f9a44:
    // 0x2f9a44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2f9a48:
    if (ctx->pc == 0x2F9A48u) {
        ctx->pc = 0x2F9A4Cu;
        goto label_2f9a4c;
    }
    ctx->pc = 0x2F9A44u;
    {
        const bool branch_taken_0x2f9a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9a44) {
            ctx->pc = 0x2F9A60u;
            goto label_2f9a60;
        }
    }
    ctx->pc = 0x2F9A4Cu;
label_2f9a4c:
    // 0x2f9a4c: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x2f9a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2f9a50:
    // 0x2f9a50: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2f9a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2f9a54:
    // 0x2f9a54: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2f9a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2f9a58:
    // 0x2f9a58: 0x40f809  jalr        $v0
label_2f9a5c:
    if (ctx->pc == 0x2F9A5Cu) {
        ctx->pc = 0x2F9A60u;
        goto label_2f9a60;
    }
    ctx->pc = 0x2F9A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F9A60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9A58u, 0x2F9A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F9A60u;
label_2f9a60:
    // 0x2f9a60: 0xc0899bc  jal         func_2266F0
label_2f9a64:
    if (ctx->pc == 0x2F9A64u) {
        ctx->pc = 0x2F9A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A60u;
        // 0x2f9a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9A68u;
        goto label_2f9a68;
    }
    ctx->pc = 0x2F9A60u;
    SET_GPR_U32(ctx, 31, 0x2F9A68u);
    ctx->pc = 0x2F9A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9A60u;
    // 0x2f9a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F9A60u, 0x2F9A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9A68u;
label_2f9a68:
    // 0x2f9a68: 0xc09876c  jal         func_261DB0
label_2f9a6c:
    if (ctx->pc == 0x2F9A6Cu) {
        ctx->pc = 0x2F9A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A68u;
        // 0x2f9a6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9A70u;
        goto label_2f9a70;
    }
    ctx->pc = 0x2F9A68u;
    SET_GPR_U32(ctx, 31, 0x2F9A70u);
    ctx->pc = 0x2F9A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9A68u;
    // 0x2f9a6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261DB0u, 0x2F9A68u, 0x2F9A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9A70u;
label_2f9a70:
    // 0x2f9a70: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2f9a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2f9a74:
    // 0x2f9a74: 0x38460056  xori        $a2, $v0, 0x56
    ctx->pc = 0x2f9a74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)86);
label_2f9a78:
    // 0x2f9a78: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x2f9a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2f9a7c:
    // 0x2f9a7c: 0x8c64bd30  lw          $a0, -0x42D0($v1)
    ctx->pc = 0x2f9a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2f9a80:
    // 0x2f9a80: 0x46280b  movn        $a1, $v0, $a2
    ctx->pc = 0x2f9a80u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_2f9a84:
    // 0x2f9a84: 0xc0b5bf2  jal         func_2D6FC8
label_2f9a88:
    if (ctx->pc == 0x2F9A88u) {
        ctx->pc = 0x2F9A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A84u;
        // 0x2f9a88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9A8Cu;
        goto label_2f9a8c;
    }
    ctx->pc = 0x2F9A84u;
    SET_GPR_U32(ctx, 31, 0x2F9A8Cu);
    ctx->pc = 0x2F9A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9A84u;
    // 0x2f9a88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6FC8u, 0x2F9A84u, 0x2F9A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9A8Cu;
label_2f9a8c:
    // 0x2f9a8c: 0xc6000374  lwc1        $f0, 0x374($s0)
    ctx->pc = 0x2f9a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f9a90:
    // 0x2f9a90: 0xae021380  sw          $v0, 0x1380($s0)
    ctx->pc = 0x2f9a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4992), GPR_U32(ctx, 2));
label_2f9a94:
    // 0x2f9a94: 0xe60011ec  swc1        $f0, 0x11EC($s0)
    ctx->pc = 0x2f9a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4588), bits); }
label_2f9a98:
    // 0x2f9a98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f9a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9a9c:
    // 0x2f9a9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f9a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f9aa0:
    // 0x2f9aa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f9aa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f9aa4:
    // 0x2f9aa4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f9aa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2f9aa8:
    // 0x2f9aa8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f9aa8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f9aac:
    // 0x2f9aac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2f9aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2f9ab0:
    // 0x2f9ab0: 0x3e00008  jr          $ra
label_2f9ab4:
    if (ctx->pc == 0x2F9AB4u) {
        ctx->pc = 0x2F9AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AB0u;
        // 0x2f9ab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9AB8u;
        goto label_fallthrough_0x2f9ab0;
    }
    ctx->pc = 0x2F9AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9AB0u;
        // 0x2f9ab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f9ab0:
    ctx->pc = 0x2F9AB8u;
}
