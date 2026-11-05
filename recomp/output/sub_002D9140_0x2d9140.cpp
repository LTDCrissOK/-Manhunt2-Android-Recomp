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

// Function: sub_002D9140
// Address: 0x2d9140 - 0x2d9468
void sub_002D9140_0x2d9140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9140_0x2d9140");
#endif

    switch (ctx->pc) {
        case 0x2d9140u: goto label_2d9140;
        case 0x2d9144u: goto label_2d9144;
        case 0x2d9148u: goto label_2d9148;
        case 0x2d914cu: goto label_2d914c;
        case 0x2d9150u: goto label_2d9150;
        case 0x2d9154u: goto label_2d9154;
        case 0x2d9158u: goto label_2d9158;
        case 0x2d915cu: goto label_2d915c;
        case 0x2d9160u: goto label_2d9160;
        case 0x2d9164u: goto label_2d9164;
        case 0x2d9168u: goto label_2d9168;
        case 0x2d916cu: goto label_2d916c;
        case 0x2d9170u: goto label_2d9170;
        case 0x2d9174u: goto label_2d9174;
        case 0x2d9178u: goto label_2d9178;
        case 0x2d917cu: goto label_2d917c;
        case 0x2d9180u: goto label_2d9180;
        case 0x2d9184u: goto label_2d9184;
        case 0x2d9188u: goto label_2d9188;
        case 0x2d918cu: goto label_2d918c;
        case 0x2d9190u: goto label_2d9190;
        case 0x2d9194u: goto label_2d9194;
        case 0x2d9198u: goto label_2d9198;
        case 0x2d919cu: goto label_2d919c;
        case 0x2d91a0u: goto label_2d91a0;
        case 0x2d91a4u: goto label_2d91a4;
        case 0x2d91a8u: goto label_2d91a8;
        case 0x2d91acu: goto label_2d91ac;
        case 0x2d91b0u: goto label_2d91b0;
        case 0x2d91b4u: goto label_2d91b4;
        case 0x2d91b8u: goto label_2d91b8;
        case 0x2d91bcu: goto label_2d91bc;
        case 0x2d91c0u: goto label_2d91c0;
        case 0x2d91c4u: goto label_2d91c4;
        case 0x2d91c8u: goto label_2d91c8;
        case 0x2d91ccu: goto label_2d91cc;
        case 0x2d91d0u: goto label_2d91d0;
        case 0x2d91d4u: goto label_2d91d4;
        case 0x2d91d8u: goto label_2d91d8;
        case 0x2d91dcu: goto label_2d91dc;
        case 0x2d91e0u: goto label_2d91e0;
        case 0x2d91e4u: goto label_2d91e4;
        case 0x2d91e8u: goto label_2d91e8;
        case 0x2d91ecu: goto label_2d91ec;
        case 0x2d91f0u: goto label_2d91f0;
        case 0x2d91f4u: goto label_2d91f4;
        case 0x2d91f8u: goto label_2d91f8;
        case 0x2d91fcu: goto label_2d91fc;
        case 0x2d9200u: goto label_2d9200;
        case 0x2d9204u: goto label_2d9204;
        case 0x2d9208u: goto label_2d9208;
        case 0x2d920cu: goto label_2d920c;
        case 0x2d9210u: goto label_2d9210;
        case 0x2d9214u: goto label_2d9214;
        case 0x2d9218u: goto label_2d9218;
        case 0x2d921cu: goto label_2d921c;
        case 0x2d9220u: goto label_2d9220;
        case 0x2d9224u: goto label_2d9224;
        case 0x2d9228u: goto label_2d9228;
        case 0x2d922cu: goto label_2d922c;
        case 0x2d9230u: goto label_2d9230;
        case 0x2d9234u: goto label_2d9234;
        case 0x2d9238u: goto label_2d9238;
        case 0x2d923cu: goto label_2d923c;
        case 0x2d9240u: goto label_2d9240;
        case 0x2d9244u: goto label_2d9244;
        case 0x2d9248u: goto label_2d9248;
        case 0x2d924cu: goto label_2d924c;
        case 0x2d9250u: goto label_2d9250;
        case 0x2d9254u: goto label_2d9254;
        case 0x2d9258u: goto label_2d9258;
        case 0x2d925cu: goto label_2d925c;
        case 0x2d9260u: goto label_2d9260;
        case 0x2d9264u: goto label_2d9264;
        case 0x2d9268u: goto label_2d9268;
        case 0x2d926cu: goto label_2d926c;
        case 0x2d9270u: goto label_2d9270;
        case 0x2d9274u: goto label_2d9274;
        case 0x2d9278u: goto label_2d9278;
        case 0x2d927cu: goto label_2d927c;
        case 0x2d9280u: goto label_2d9280;
        case 0x2d9284u: goto label_2d9284;
        case 0x2d9288u: goto label_2d9288;
        case 0x2d928cu: goto label_2d928c;
        case 0x2d9290u: goto label_2d9290;
        case 0x2d9294u: goto label_2d9294;
        case 0x2d9298u: goto label_2d9298;
        case 0x2d929cu: goto label_2d929c;
        case 0x2d92a0u: goto label_2d92a0;
        case 0x2d92a4u: goto label_2d92a4;
        case 0x2d92a8u: goto label_2d92a8;
        case 0x2d92acu: goto label_2d92ac;
        case 0x2d92b0u: goto label_2d92b0;
        case 0x2d92b4u: goto label_2d92b4;
        case 0x2d92b8u: goto label_2d92b8;
        case 0x2d92bcu: goto label_2d92bc;
        case 0x2d92c0u: goto label_2d92c0;
        case 0x2d92c4u: goto label_2d92c4;
        case 0x2d92c8u: goto label_2d92c8;
        case 0x2d92ccu: goto label_2d92cc;
        case 0x2d92d0u: goto label_2d92d0;
        case 0x2d92d4u: goto label_2d92d4;
        case 0x2d92d8u: goto label_2d92d8;
        case 0x2d92dcu: goto label_2d92dc;
        case 0x2d92e0u: goto label_2d92e0;
        case 0x2d92e4u: goto label_2d92e4;
        case 0x2d92e8u: goto label_2d92e8;
        case 0x2d92ecu: goto label_2d92ec;
        case 0x2d92f0u: goto label_2d92f0;
        case 0x2d92f4u: goto label_2d92f4;
        case 0x2d92f8u: goto label_2d92f8;
        case 0x2d92fcu: goto label_2d92fc;
        case 0x2d9300u: goto label_2d9300;
        case 0x2d9304u: goto label_2d9304;
        case 0x2d9308u: goto label_2d9308;
        case 0x2d930cu: goto label_2d930c;
        case 0x2d9310u: goto label_2d9310;
        case 0x2d9314u: goto label_2d9314;
        case 0x2d9318u: goto label_2d9318;
        case 0x2d931cu: goto label_2d931c;
        case 0x2d9320u: goto label_2d9320;
        case 0x2d9324u: goto label_2d9324;
        case 0x2d9328u: goto label_2d9328;
        case 0x2d932cu: goto label_2d932c;
        case 0x2d9330u: goto label_2d9330;
        case 0x2d9334u: goto label_2d9334;
        case 0x2d9338u: goto label_2d9338;
        case 0x2d933cu: goto label_2d933c;
        case 0x2d9340u: goto label_2d9340;
        case 0x2d9344u: goto label_2d9344;
        case 0x2d9348u: goto label_2d9348;
        case 0x2d934cu: goto label_2d934c;
        case 0x2d9350u: goto label_2d9350;
        case 0x2d9354u: goto label_2d9354;
        case 0x2d9358u: goto label_2d9358;
        case 0x2d935cu: goto label_2d935c;
        case 0x2d9360u: goto label_2d9360;
        case 0x2d9364u: goto label_2d9364;
        case 0x2d9368u: goto label_2d9368;
        case 0x2d936cu: goto label_2d936c;
        case 0x2d9370u: goto label_2d9370;
        case 0x2d9374u: goto label_2d9374;
        case 0x2d9378u: goto label_2d9378;
        case 0x2d937cu: goto label_2d937c;
        case 0x2d9380u: goto label_2d9380;
        case 0x2d9384u: goto label_2d9384;
        case 0x2d9388u: goto label_2d9388;
        case 0x2d938cu: goto label_2d938c;
        case 0x2d9390u: goto label_2d9390;
        case 0x2d9394u: goto label_2d9394;
        case 0x2d9398u: goto label_2d9398;
        case 0x2d939cu: goto label_2d939c;
        case 0x2d93a0u: goto label_2d93a0;
        case 0x2d93a4u: goto label_2d93a4;
        case 0x2d93a8u: goto label_2d93a8;
        case 0x2d93acu: goto label_2d93ac;
        case 0x2d93b0u: goto label_2d93b0;
        case 0x2d93b4u: goto label_2d93b4;
        case 0x2d93b8u: goto label_2d93b8;
        case 0x2d93bcu: goto label_2d93bc;
        case 0x2d93c0u: goto label_2d93c0;
        case 0x2d93c4u: goto label_2d93c4;
        case 0x2d93c8u: goto label_2d93c8;
        case 0x2d93ccu: goto label_2d93cc;
        case 0x2d93d0u: goto label_2d93d0;
        case 0x2d93d4u: goto label_2d93d4;
        case 0x2d93d8u: goto label_2d93d8;
        case 0x2d93dcu: goto label_2d93dc;
        case 0x2d93e0u: goto label_2d93e0;
        case 0x2d93e4u: goto label_2d93e4;
        case 0x2d93e8u: goto label_2d93e8;
        case 0x2d93ecu: goto label_2d93ec;
        case 0x2d93f0u: goto label_2d93f0;
        case 0x2d93f4u: goto label_2d93f4;
        case 0x2d93f8u: goto label_2d93f8;
        case 0x2d93fcu: goto label_2d93fc;
        case 0x2d9400u: goto label_2d9400;
        case 0x2d9404u: goto label_2d9404;
        case 0x2d9408u: goto label_2d9408;
        case 0x2d940cu: goto label_2d940c;
        case 0x2d9410u: goto label_2d9410;
        case 0x2d9414u: goto label_2d9414;
        case 0x2d9418u: goto label_2d9418;
        case 0x2d941cu: goto label_2d941c;
        case 0x2d9420u: goto label_2d9420;
        case 0x2d9424u: goto label_2d9424;
        case 0x2d9428u: goto label_2d9428;
        case 0x2d942cu: goto label_2d942c;
        case 0x2d9430u: goto label_2d9430;
        case 0x2d9434u: goto label_2d9434;
        case 0x2d9438u: goto label_2d9438;
        case 0x2d943cu: goto label_2d943c;
        case 0x2d9440u: goto label_2d9440;
        case 0x2d9444u: goto label_2d9444;
        case 0x2d9448u: goto label_2d9448;
        case 0x2d944cu: goto label_2d944c;
        case 0x2d9450u: goto label_2d9450;
        case 0x2d9454u: goto label_2d9454;
        case 0x2d9458u: goto label_2d9458;
        case 0x2d945cu: goto label_2d945c;
        case 0x2d9460u: goto label_2d9460;
        case 0x2d9464u: goto label_2d9464;
        default: break;
    }

    ctx->pc = 0x2d9140u;

label_2d9140:
    // 0x2d9140: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d9140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2d9144:
    // 0x2d9144: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d9144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2d9148:
    // 0x2d9148: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2d9148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_2d914c:
    // 0x2d914c: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x2d914cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_2d9150:
    // 0x2d9150: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d9150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9154:
    // 0x2d9154: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x2d9154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_2d9158:
    // 0x2d9158: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2d9158u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d915c:
    // 0x2d915c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d915cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2d9160:
    // 0x2d9160: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d9160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2d9164:
    // 0x2d9164: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2d9164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2d9168:
    // 0x2d9168: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2d9168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2d916c:
    // 0x2d916c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2d916cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_2d9170:
    // 0x2d9170: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2d9170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_2d9174:
    // 0x2d9174: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2d9174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_2d9178:
    // 0x2d9178: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2d9178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_2d917c:
    // 0x2d917c: 0x8c43cba8  lw          $v1, -0x3458($v0)
    ctx->pc = 0x2d917cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953896)));
label_2d9180:
    // 0x2d9180: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2d9180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2d9184:
    // 0x2d9184: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d9184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d9188:
    // 0x2d9188: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2d9188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2d918c:
    // 0x2d918c: 0x40f809  jalr        $v0
label_2d9190:
    if (ctx->pc == 0x2D9190u) {
        ctx->pc = 0x2D9190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D918Cu;
        // 0x2d9190: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9194u;
        goto label_2d9194;
    }
    ctx->pc = 0x2D918Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D9194u);
        ctx->pc = 0x2D9190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D918Cu;
        // 0x2d9190: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D918Cu, 0x2D9194u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D9194u;
label_2d9194:
    // 0x2d9194: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x2d9194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2d9198:
    // 0x2d9198: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x2d9198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2d919c:
    // 0x2d919c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d919cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d91a0:
    // 0x2d91a0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x2d91a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_2d91a4:
    // 0x2d91a4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2d91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2d91a8:
    // 0x2d91a8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2d91a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d91ac:
    // 0x2d91ac: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
label_2d91b0:
    if (ctx->pc == 0x2D91B0u) {
        ctx->pc = 0x2D91B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91ACu;
        // 0x2d91b0: 0x3a0b02d  daddu       $s6, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D91B4u;
        goto label_2d91b4;
    }
    ctx->pc = 0x2D91ACu;
    {
        const bool branch_taken_0x2d91ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D91B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91ACu;
        // 0x2d91b0: 0x3a0b02d  daddu       $s6, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d91ac) {
            ctx->pc = 0x2D91D4u;
            goto label_2d91d4;
        }
    }
    ctx->pc = 0x2D91B4u;
label_2d91b4:
    // 0x2d91b4: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_2d91b8:
    if (ctx->pc == 0x2D91B8u) {
        ctx->pc = 0x2D91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91B4u;
        // 0x2d91b8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D91BCu;
        goto label_2d91bc;
    }
    ctx->pc = 0x2D91B4u;
    {
        const bool branch_taken_0x2d91b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91B4u;
        // 0x2d91b8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d91b4) {
            ctx->pc = 0x2D91C0u;
            goto label_2d91c0;
        }
    }
    ctx->pc = 0x2D91BCu;
label_2d91bc:
    // 0x2d91bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d91bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d91c0:
    // 0x2d91c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d91c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d91c4:
    // 0x2d91c4: 0x26740010  addiu       $s4, $s3, 0x10
    ctx->pc = 0x2d91c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_2d91c8:
    // 0x2d91c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2d91c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2d91cc:
    // 0x2d91cc: 0x10000033  b           . + 4 + (0x33 << 2)
label_2d91d0:
    if (ctx->pc == 0x2D91D0u) {
        ctx->pc = 0x2D91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91CCu;
        // 0x2d91d0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D91D4u;
        goto label_2d91d4;
    }
    ctx->pc = 0x2D91CCu;
    {
        const bool branch_taken_0x2d91cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91CCu;
        // 0x2d91d0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d91cc) {
            ctx->pc = 0x2D929Cu;
            goto label_2d929c;
        }
    }
    ctx->pc = 0x2D91D4u;
label_2d91d4:
    // 0x2d91d4: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x2d91d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2d91d8:
    // 0x2d91d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d91dc:
    // 0x2d91dc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2d91dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2d91e0:
    // 0x2d91e0: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x2d91e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_2d91e4:
    // 0x2d91e4: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x2d91e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2d91e8:
    // 0x2d91e8: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x2d91e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_2d91ec:
    // 0x2d91ec: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2d91ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_2d91f0:
    // 0x2d91f0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2d91f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_2d91f4:
    // 0x2d91f4: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x2d91f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_2d91f8:
    // 0x2d91f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d91f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d91fc:
    // 0x2d91fc: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2d91fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d9200:
    // 0x2d9200: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2d9204:
    if (ctx->pc == 0x2D9204u) {
        ctx->pc = 0x2D9204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9200u;
        // 0x2d9204: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9208u;
        goto label_2d9208;
    }
    ctx->pc = 0x2D9200u;
    {
        const bool branch_taken_0x2d9200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9200u;
        // 0x2d9204: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9200) {
            ctx->pc = 0x2D921Cu;
            goto label_2d921c;
        }
    }
    ctx->pc = 0x2D9208u;
label_2d9208:
    // 0x2d9208: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d920c:
    // 0x2d920c: 0xc0f5240  jal         func_3D4900
label_2d9210:
    if (ctx->pc == 0x2D9210u) {
        ctx->pc = 0x2D9210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D920Cu;
        // 0x2d9210: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9214u;
        goto label_2d9214;
    }
    ctx->pc = 0x2D920Cu;
    SET_GPR_U32(ctx, 31, 0x2D9214u);
    ctx->pc = 0x2D9210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D920Cu;
    // 0x2d9210: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2D920Cu, 0x2D9214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9214u;
label_2d9214:
    // 0x2d9214: 0x10000003  b           . + 4 + (0x3 << 2)
label_2d9218:
    if (ctx->pc == 0x2D9218u) {
        ctx->pc = 0x2D9218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9214u;
        // 0x2d9218: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D921Cu;
        goto label_2d921c;
    }
    ctx->pc = 0x2D9214u;
    {
        const bool branch_taken_0x2d9214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9214u;
        // 0x2d9218: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9214) {
            ctx->pc = 0x2D9224u;
            goto label_2d9224;
        }
    }
    ctx->pc = 0x2D921Cu;
label_2d921c:
    // 0x2d921c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d921cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9220:
    // 0x2d9220: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d9220u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9224:
    // 0x2d9224: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d9224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d9228:
    // 0x2d9228: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
label_2d922c:
    if (ctx->pc == 0x2D922Cu) {
        ctx->pc = 0x2D922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9228u;
        // 0x2d922c: 0x2058023  subu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9230u;
        goto label_2d9230;
    }
    ctx->pc = 0x2D9228u;
    {
        const bool branch_taken_0x2d9228 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9228u;
        // 0x2d922c: 0x2058023  subu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9228) {
            ctx->pc = 0x2D9244u;
            goto label_2d9244;
        }
    }
    ctx->pc = 0x2D9230u;
label_2d9230:
    // 0x2d9230: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d9230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d9234:
    // 0x2d9234: 0xc0efa74  jal         func_3BE9D0
label_2d9238:
    if (ctx->pc == 0x2D9238u) {
        ctx->pc = 0x2D9238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9234u;
        // 0x2d9238: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D923Cu;
        goto label_2d923c;
    }
    ctx->pc = 0x2D9234u;
    SET_GPR_U32(ctx, 31, 0x2D923Cu);
    ctx->pc = 0x2D9238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9234u;
    // 0x2d9238: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x2D9234u, 0x2D923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D923Cu;
label_2d923c:
    // 0x2d923c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2d9240:
    if (ctx->pc == 0x2D9240u) {
        ctx->pc = 0x2D9240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D923Cu;
        // 0x2d9240: 0x501821  addu        $v1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9244u;
        goto label_2d9244;
    }
    ctx->pc = 0x2D923Cu;
    {
        const bool branch_taken_0x2d923c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D923Cu;
        // 0x2d9240: 0x501821  addu        $v1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d923c) {
            ctx->pc = 0x2D9248u;
            goto label_2d9248;
        }
    }
    ctx->pc = 0x2D9244u;
label_2d9244:
    // 0x2d9244: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2d9244u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d9248:
    // 0x2d9248: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2d9248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2d924c:
    // 0x2d924c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2d924cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d9250:
    // 0x2d9250: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d9250u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9254:
    // 0x2d9254: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2d9258:
    if (ctx->pc == 0x2D9258u) {
        ctx->pc = 0x2D9258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9254u;
        // 0x2d9258: 0x26740010  addiu       $s4, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D925Cu;
        goto label_2d925c;
    }
    ctx->pc = 0x2D9254u;
    {
        const bool branch_taken_0x2d9254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9254u;
        // 0x2d9258: 0x26740010  addiu       $s4, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9254) {
            ctx->pc = 0x2D9278u;
            goto label_2d9278;
        }
    }
    ctx->pc = 0x2D925Cu;
label_2d925c:
    // 0x2d925c: 0x0  nop
    ctx->pc = 0x2d925cu;
    // NOP
label_2d9260:
    // 0x2d9260: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2d9260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2d9264:
    // 0x2d9264: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d9264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2d9268:
    // 0x2d9268: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d9268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d926c:
    // 0x2d926c: 0x0  nop
    ctx->pc = 0x2d926cu;
    // NOP
label_2d9270:
    // 0x2d9270: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_2d9274:
    if (ctx->pc == 0x2D9274u) {
        ctx->pc = 0x2D9274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9270u;
        // 0x2d9274: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9278u;
        goto label_2d9278;
    }
    ctx->pc = 0x2D9270u;
    {
        const bool branch_taken_0x2d9270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9270u;
        // 0x2d9274: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9270) {
            ctx->pc = 0x2D9260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9260;
        }
    }
    ctx->pc = 0x2D9278u;
label_2d9278:
    // 0x2d9278: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d9278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d927c:
    // 0x2d927c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2d9280:
    if (ctx->pc == 0x2D9280u) {
        ctx->pc = 0x2D9280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D927Cu;
        // 0x2d9280: 0x2b21021  addu        $v0, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9284u;
        goto label_2d9284;
    }
    ctx->pc = 0x2D927Cu;
    {
        const bool branch_taken_0x2d927c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D927Cu;
        // 0x2d9280: 0x2b21021  addu        $v0, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d927c) {
            ctx->pc = 0x2D9290u;
            goto label_2d9290;
        }
    }
    ctx->pc = 0x2D9284u;
label_2d9284:
    // 0x2d9284: 0xc0f5222  jal         func_3D4888
label_2d9288:
    if (ctx->pc == 0x2D9288u) {
        ctx->pc = 0x2D928Cu;
        goto label_2d928c;
    }
    ctx->pc = 0x2D9284u;
    SET_GPR_U32(ctx, 31, 0x2D928Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D9284u, 0x2D928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D928Cu;
label_2d928c:
    // 0x2d928c: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x2d928cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_2d9290:
    // 0x2d9290: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x2d9290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_2d9294:
    // 0x2d9294: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2d9294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2d9298:
    // 0x2d9298: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2d9298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2d929c:
    // 0x2d929c: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x2d929cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d92a0:
    // 0x2d92a0: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x2d92a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d92a4:
    // 0x2d92a4: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2d92a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2d92a8:
    // 0x2d92a8: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_2d92ac:
    if (ctx->pc == 0x2D92ACu) {
        ctx->pc = 0x2D92ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92A8u;
        // 0x2d92ac: 0xae900004  sw          $s0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D92B0u;
        goto label_2d92b0;
    }
    ctx->pc = 0x2D92A8u;
    {
        const bool branch_taken_0x2d92a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D92ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92A8u;
        // 0x2d92ac: 0xae900004  sw          $s0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d92a8) {
            ctx->pc = 0x2D92CCu;
            goto label_2d92cc;
        }
    }
    ctx->pc = 0x2D92B0u;
label_2d92b0:
    // 0x2d92b0: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_2d92b4:
    if (ctx->pc == 0x2D92B4u) {
        ctx->pc = 0x2D92B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92B0u;
        // 0x2d92b4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D92B8u;
        goto label_2d92b8;
    }
    ctx->pc = 0x2D92B0u;
    {
        const bool branch_taken_0x2d92b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D92B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92B0u;
        // 0x2d92b4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d92b0) {
            ctx->pc = 0x2D92BCu;
            goto label_2d92bc;
        }
    }
    ctx->pc = 0x2D92B8u;
label_2d92b8:
    // 0x2d92b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d92b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d92bc:
    // 0x2d92bc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2d92bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2d92c0:
    // 0x2d92c0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2d92c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2d92c4:
    // 0x2d92c4: 0x10000031  b           . + 4 + (0x31 << 2)
label_2d92c8:
    if (ctx->pc == 0x2D92C8u) {
        ctx->pc = 0x2D92C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92C4u;
        // 0x2d92c8: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D92CCu;
        goto label_2d92cc;
    }
    ctx->pc = 0x2D92C4u;
    {
        const bool branch_taken_0x2d92c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D92C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92C4u;
        // 0x2d92c8: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d92c4) {
            ctx->pc = 0x2D938Cu;
            goto label_2d938c;
        }
    }
    ctx->pc = 0x2D92CCu;
label_2d92cc:
    // 0x2d92cc: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x2d92ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d92d0:
    // 0x2d92d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d92d4:
    // 0x2d92d4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2d92d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2d92d8:
    // 0x2d92d8: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x2d92d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_2d92dc:
    // 0x2d92dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2d92dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2d92e0:
    // 0x2d92e0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2d92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2d92e4:
    // 0x2d92e4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d92e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d92e8:
    // 0x2d92e8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d92e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2d92ec:
    // 0x2d92ec: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2d92ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_2d92f0:
    // 0x2d92f0: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x2d92f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_2d92f4:
    // 0x2d92f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d92f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d92f8:
    // 0x2d92f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d92f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d92fc:
    // 0x2d92fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2d9300:
    if (ctx->pc == 0x2D9300u) {
        ctx->pc = 0x2D9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92FCu;
        // 0x2d9300: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9304u;
        goto label_2d9304;
    }
    ctx->pc = 0x2D92FCu;
    {
        const bool branch_taken_0x2d92fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92FCu;
        // 0x2d9300: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d92fc) {
            ctx->pc = 0x2D9318u;
            goto label_2d9318;
        }
    }
    ctx->pc = 0x2D9304u;
label_2d9304:
    // 0x2d9304: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9308:
    // 0x2d9308: 0xc0f5240  jal         func_3D4900
label_2d930c:
    if (ctx->pc == 0x2D930Cu) {
        ctx->pc = 0x2D930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9308u;
        // 0x2d930c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9310u;
        goto label_2d9310;
    }
    ctx->pc = 0x2D9308u;
    SET_GPR_U32(ctx, 31, 0x2D9310u);
    ctx->pc = 0x2D930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9308u;
    // 0x2d930c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2D9308u, 0x2D9310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9310u;
label_2d9310:
    // 0x2d9310: 0x10000003  b           . + 4 + (0x3 << 2)
label_2d9314:
    if (ctx->pc == 0x2D9314u) {
        ctx->pc = 0x2D9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9310u;
        // 0x2d9314: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9318u;
        goto label_2d9318;
    }
    ctx->pc = 0x2D9310u;
    {
        const bool branch_taken_0x2d9310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9310u;
        // 0x2d9314: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9310) {
            ctx->pc = 0x2D9320u;
            goto label_2d9320;
        }
    }
    ctx->pc = 0x2D9318u;
label_2d9318:
    // 0x2d9318: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d9318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d931c:
    // 0x2d931c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d931cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9320:
    // 0x2d9320: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2d9320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2d9324:
    // 0x2d9324: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
label_2d9328:
    if (ctx->pc == 0x2D9328u) {
        ctx->pc = 0x2D9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9324u;
        // 0x2d9328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D932Cu;
        goto label_2d932c;
    }
    ctx->pc = 0x2D9324u;
    {
        const bool branch_taken_0x2d9324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9324u;
        // 0x2d9328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9324) {
            ctx->pc = 0x2D9340u;
            goto label_2d9340;
        }
    }
    ctx->pc = 0x2D932Cu;
label_2d932c:
    // 0x2d932c: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x2d932cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2d9330:
    // 0x2d9330: 0xc0efa74  jal         func_3BE9D0
label_2d9334:
    if (ctx->pc == 0x2D9334u) {
        ctx->pc = 0x2D9334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9330u;
        // 0x2d9334: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9338u;
        goto label_2d9338;
    }
    ctx->pc = 0x2D9330u;
    SET_GPR_U32(ctx, 31, 0x2D9338u);
    ctx->pc = 0x2D9334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9330u;
    // 0x2d9334: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x2D9330u, 0x2D9338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9338u;
label_2d9338:
    // 0x2d9338: 0x10000002  b           . + 4 + (0x2 << 2)
label_2d933c:
    if (ctx->pc == 0x2D933Cu) {
        ctx->pc = 0x2D933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9338u;
        // 0x2d933c: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9340u;
        goto label_2d9340;
    }
    ctx->pc = 0x2D9338u;
    {
        const bool branch_taken_0x2d9338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9338u;
        // 0x2d933c: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9338) {
            ctx->pc = 0x2D9344u;
            goto label_2d9344;
        }
    }
    ctx->pc = 0x2D9340u;
label_2d9340:
    // 0x2d9340: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d9340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d9344:
    // 0x2d9344: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2d9344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9348:
    // 0x2d9348: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2d934c:
    if (ctx->pc == 0x2D934Cu) {
        ctx->pc = 0x2D934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9348u;
        // 0x2d934c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9350u;
        goto label_2d9350;
    }
    ctx->pc = 0x2D9348u;
    {
        const bool branch_taken_0x2d9348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9348u;
        // 0x2d934c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9348) {
            ctx->pc = 0x2D9368u;
            goto label_2d9368;
        }
    }
    ctx->pc = 0x2D9350u;
label_2d9350:
    // 0x2d9350: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2d9350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2d9354:
    // 0x2d9354: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d9354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2d9358:
    // 0x2d9358: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d9358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d935c:
    // 0x2d935c: 0x0  nop
    ctx->pc = 0x2d935cu;
    // NOP
label_2d9360:
    // 0x2d9360: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_2d9364:
    if (ctx->pc == 0x2D9364u) {
        ctx->pc = 0x2D9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9360u;
        // 0x2d9364: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9368u;
        goto label_2d9368;
    }
    ctx->pc = 0x2D9360u;
    {
        const bool branch_taken_0x2d9360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9360u;
        // 0x2d9364: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9360) {
            ctx->pc = 0x2D9350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9350;
        }
    }
    ctx->pc = 0x2D9368u;
label_2d9368:
    // 0x2d9368: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2d9368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2d936c:
    // 0x2d936c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2d9370:
    if (ctx->pc == 0x2D9370u) {
        ctx->pc = 0x2D9370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D936Cu;
        // 0x2d9370: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9374u;
        goto label_2d9374;
    }
    ctx->pc = 0x2D936Cu;
    {
        const bool branch_taken_0x2d936c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D936Cu;
        // 0x2d9370: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d936c) {
            ctx->pc = 0x2D9380u;
            goto label_2d9380;
        }
    }
    ctx->pc = 0x2D9374u;
label_2d9374:
    // 0x2d9374: 0xc0f5222  jal         func_3D4888
label_2d9378:
    if (ctx->pc == 0x2D9378u) {
        ctx->pc = 0x2D937Cu;
        goto label_2d937c;
    }
    ctx->pc = 0x2D9374u;
    SET_GPR_U32(ctx, 31, 0x2D937Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D9374u, 0x2D937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D937Cu;
label_2d937c:
    // 0x2d937c: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x2d937cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_2d9380:
    // 0x2d9380: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x2d9380u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
label_2d9384:
    // 0x2d9384: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x2d9384u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_2d9388:
    // 0x2d9388: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x2d9388u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_2d938c:
    // 0x2d938c: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x2d938cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d9390:
    // 0x2d9390: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x2d9390u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2d9394:
    // 0x2d9394: 0x12510008  beq         $s2, $s1, . + 4 + (0x8 << 2)
label_2d9398:
    if (ctx->pc == 0x2D9398u) {
        ctx->pc = 0x2D9398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9394u;
        // 0x2d9398: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D939Cu;
        goto label_2d939c;
    }
    ctx->pc = 0x2D9394u;
    {
        const bool branch_taken_0x2d9394 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x2D9398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9394u;
        // 0x2d9398: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9394) {
            ctx->pc = 0x2D93B8u;
            goto label_2d93b8;
        }
    }
    ctx->pc = 0x2D939Cu;
label_2d939c:
    // 0x2d939c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d939cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d93a0:
    // 0x2d93a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2d93a4:
    if (ctx->pc == 0x2D93A4u) {
        ctx->pc = 0x2D93A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93A0u;
        // 0x2d93a4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D93A8u;
        goto label_2d93a8;
    }
    ctx->pc = 0x2D93A0u;
    {
        const bool branch_taken_0x2d93a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D93A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93A0u;
        // 0x2d93a4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d93a0) {
            ctx->pc = 0x2D93B0u;
            goto label_2d93b0;
        }
    }
    ctx->pc = 0x2D93A8u;
label_2d93a8:
    // 0x2d93a8: 0xc0f5222  jal         func_3D4888
label_2d93ac:
    if (ctx->pc == 0x2D93ACu) {
        ctx->pc = 0x2D93B0u;
        goto label_2d93b0;
    }
    ctx->pc = 0x2D93A8u;
    SET_GPR_U32(ctx, 31, 0x2D93B0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D93A8u, 0x2D93B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D93B0u;
label_2d93b0:
    // 0x2d93b0: 0x5611fffb  bnel        $s0, $s1, . + 4 + (-0x5 << 2)
label_2d93b4:
    if (ctx->pc == 0x2D93B4u) {
        ctx->pc = 0x2D93B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93B0u;
        // 0x2d93b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D93B8u;
        goto label_2d93b8;
    }
    ctx->pc = 0x2D93B0u;
    {
        const bool branch_taken_0x2d93b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x2d93b0) {
            ctx->pc = 0x2D93B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D93B0u;
            // 0x2d93b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D93A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d93a0;
        }
    }
    ctx->pc = 0x2D93B8u;
label_2d93b8:
    // 0x2d93b8: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2d93b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_2d93bc:
    // 0x2d93bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d93bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d93c0:
    // 0x2d93c0: 0xc0fb736  jal         func_3EDCD8
label_2d93c4:
    if (ctx->pc == 0x2D93C4u) {
        ctx->pc = 0x2D93C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93C0u;
        // 0x2d93c4: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D93C8u;
        goto label_2d93c8;
    }
    ctx->pc = 0x2D93C0u;
    SET_GPR_U32(ctx, 31, 0x2D93C8u);
    ctx->pc = 0x2D93C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D93C0u;
    // 0x2d93c4: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDCD8u, 0x2D93C0u, 0x2D93C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D93C8u;
label_2d93c8:
    // 0x2d93c8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d93c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2d93cc:
    // 0x2d93cc: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2d93ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2d93d0:
    // 0x2d93d0: 0xc0b63fc  jal         func_2D8FF0
label_2d93d4:
    if (ctx->pc == 0x2D93D4u) {
        ctx->pc = 0x2D93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93D0u;
        // 0x2d93d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D93D8u;
        goto label_2d93d8;
    }
    ctx->pc = 0x2D93D0u;
    SET_GPR_U32(ctx, 31, 0x2D93D8u);
    ctx->pc = 0x2D93D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D93D0u;
    // 0x2d93d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FF0u, 0x2D93D0u, 0x2D93D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D93D8u;
label_2d93d8:
    // 0x2d93d8: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x2d93d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d93dc:
    // 0x2d93dc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2d93dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d93e0:
    // 0x2d93e0: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x2d93e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2d93e4:
    // 0x2d93e4: 0x12510008  beq         $s2, $s1, . + 4 + (0x8 << 2)
label_2d93e8:
    if (ctx->pc == 0x2D93E8u) {
        ctx->pc = 0x2D93E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93E4u;
        // 0x2d93e8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D93ECu;
        goto label_2d93ec;
    }
    ctx->pc = 0x2D93E4u;
    {
        const bool branch_taken_0x2d93e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x2D93E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93E4u;
        // 0x2d93e8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d93e4) {
            ctx->pc = 0x2D9408u;
            goto label_2d9408;
        }
    }
    ctx->pc = 0x2D93ECu;
label_2d93ec:
    // 0x2d93ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d93ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d93f0:
    // 0x2d93f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2d93f4:
    if (ctx->pc == 0x2D93F4u) {
        ctx->pc = 0x2D93F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93F0u;
        // 0x2d93f4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D93F8u;
        goto label_2d93f8;
    }
    ctx->pc = 0x2D93F0u;
    {
        const bool branch_taken_0x2d93f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D93F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93F0u;
        // 0x2d93f4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d93f0) {
            ctx->pc = 0x2D9400u;
            goto label_2d9400;
        }
    }
    ctx->pc = 0x2D93F8u;
label_2d93f8:
    // 0x2d93f8: 0xc0f5222  jal         func_3D4888
label_2d93fc:
    if (ctx->pc == 0x2D93FCu) {
        ctx->pc = 0x2D9400u;
        goto label_2d9400;
    }
    ctx->pc = 0x2D93F8u;
    SET_GPR_U32(ctx, 31, 0x2D9400u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D93F8u, 0x2D9400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9400u;
label_2d9400:
    // 0x2d9400: 0x5611fffb  bnel        $s0, $s1, . + 4 + (-0x5 << 2)
label_2d9404:
    if (ctx->pc == 0x2D9404u) {
        ctx->pc = 0x2D9404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9400u;
        // 0x2d9404: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9408u;
        goto label_2d9408;
    }
    ctx->pc = 0x2D9400u;
    {
        const bool branch_taken_0x2d9400 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x2d9400) {
            ctx->pc = 0x2D9404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9400u;
            // 0x2d9404: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D93F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d93f0;
        }
    }
    ctx->pc = 0x2D9408u;
label_2d9408:
    // 0x2d9408: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x2d9408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d940c:
    // 0x2d940c: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x2d940cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
label_2d9410:
    // 0x2d9410: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x2d9410u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_2d9414:
    // 0x2d9414: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2d9414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2d9418:
    // 0x2d9418: 0x8c62cba8  lw          $v0, -0x3458($v1)
    ctx->pc = 0x2d9418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953896)));
label_2d941c:
    // 0x2d941c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2d941cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2d9420:
    // 0x2d9420: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d9420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d9424:
    // 0x2d9424: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2d9424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2d9428:
    // 0x2d9428: 0x40f809  jalr        $v0
label_2d942c:
    if (ctx->pc == 0x2D942Cu) {
        ctx->pc = 0x2D9430u;
        goto label_2d9430;
    }
    ctx->pc = 0x2D9428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D9430u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9428u, 0x2D9430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D9430u;
label_2d9430:
    // 0x2d9430: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2d9430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d9434:
    // 0x2d9434: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d9434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9438:
    // 0x2d9438: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d9438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d943c:
    // 0x2d943c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2d943cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d9440:
    // 0x2d9440: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2d9440u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d9444:
    // 0x2d9444: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2d9444u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d9448:
    // 0x2d9448: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2d9448u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2d944c:
    // 0x2d944c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2d944cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2d9450:
    // 0x2d9450: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x2d9450u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2d9454:
    // 0x2d9454: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x2d9454u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2d9458:
    // 0x2d9458: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2d9458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_2d945c:
    // 0x2d945c: 0x3e00008  jr          $ra
label_2d9460:
    if (ctx->pc == 0x2D9460u) {
        ctx->pc = 0x2D9460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D945Cu;
        // 0x2d9460: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9464u;
        goto label_2d9464;
    }
    ctx->pc = 0x2D945Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D945Cu;
        // 0x2d9460: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D945Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9464u;
label_2d9464:
    // 0x2d9464: 0x0  nop
    ctx->pc = 0x2d9464u;
    // NOP
    ctx->pc = 0x2d9468u;
}
