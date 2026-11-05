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

// Function: sub_00336230
// Address: 0x336230 - 0x3363b0
void sub_00336230_0x336230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336230_0x336230");
#endif

    switch (ctx->pc) {
        case 0x336230u: goto label_336230;
        case 0x336234u: goto label_336234;
        case 0x336238u: goto label_336238;
        case 0x33623cu: goto label_33623c;
        case 0x336240u: goto label_336240;
        case 0x336244u: goto label_336244;
        case 0x336248u: goto label_336248;
        case 0x33624cu: goto label_33624c;
        case 0x336250u: goto label_336250;
        case 0x336254u: goto label_336254;
        case 0x336258u: goto label_336258;
        case 0x33625cu: goto label_33625c;
        case 0x336260u: goto label_336260;
        case 0x336264u: goto label_336264;
        case 0x336268u: goto label_336268;
        case 0x33626cu: goto label_33626c;
        case 0x336270u: goto label_336270;
        case 0x336274u: goto label_336274;
        case 0x336278u: goto label_336278;
        case 0x33627cu: goto label_33627c;
        case 0x336280u: goto label_336280;
        case 0x336284u: goto label_336284;
        case 0x336288u: goto label_336288;
        case 0x33628cu: goto label_33628c;
        case 0x336290u: goto label_336290;
        case 0x336294u: goto label_336294;
        case 0x336298u: goto label_336298;
        case 0x33629cu: goto label_33629c;
        case 0x3362a0u: goto label_3362a0;
        case 0x3362a4u: goto label_3362a4;
        case 0x3362a8u: goto label_3362a8;
        case 0x3362acu: goto label_3362ac;
        case 0x3362b0u: goto label_3362b0;
        case 0x3362b4u: goto label_3362b4;
        case 0x3362b8u: goto label_3362b8;
        case 0x3362bcu: goto label_3362bc;
        case 0x3362c0u: goto label_3362c0;
        case 0x3362c4u: goto label_3362c4;
        case 0x3362c8u: goto label_3362c8;
        case 0x3362ccu: goto label_3362cc;
        case 0x3362d0u: goto label_3362d0;
        case 0x3362d4u: goto label_3362d4;
        case 0x3362d8u: goto label_3362d8;
        case 0x3362dcu: goto label_3362dc;
        case 0x3362e0u: goto label_3362e0;
        case 0x3362e4u: goto label_3362e4;
        case 0x3362e8u: goto label_3362e8;
        case 0x3362ecu: goto label_3362ec;
        case 0x3362f0u: goto label_3362f0;
        case 0x3362f4u: goto label_3362f4;
        case 0x3362f8u: goto label_3362f8;
        case 0x3362fcu: goto label_3362fc;
        case 0x336300u: goto label_336300;
        case 0x336304u: goto label_336304;
        case 0x336308u: goto label_336308;
        case 0x33630cu: goto label_33630c;
        case 0x336310u: goto label_336310;
        case 0x336314u: goto label_336314;
        case 0x336318u: goto label_336318;
        case 0x33631cu: goto label_33631c;
        case 0x336320u: goto label_336320;
        case 0x336324u: goto label_336324;
        case 0x336328u: goto label_336328;
        case 0x33632cu: goto label_33632c;
        case 0x336330u: goto label_336330;
        case 0x336334u: goto label_336334;
        case 0x336338u: goto label_336338;
        case 0x33633cu: goto label_33633c;
        case 0x336340u: goto label_336340;
        case 0x336344u: goto label_336344;
        case 0x336348u: goto label_336348;
        case 0x33634cu: goto label_33634c;
        case 0x336350u: goto label_336350;
        case 0x336354u: goto label_336354;
        case 0x336358u: goto label_336358;
        case 0x33635cu: goto label_33635c;
        case 0x336360u: goto label_336360;
        case 0x336364u: goto label_336364;
        case 0x336368u: goto label_336368;
        case 0x33636cu: goto label_33636c;
        case 0x336370u: goto label_336370;
        case 0x336374u: goto label_336374;
        case 0x336378u: goto label_336378;
        case 0x33637cu: goto label_33637c;
        case 0x336380u: goto label_336380;
        case 0x336384u: goto label_336384;
        case 0x336388u: goto label_336388;
        case 0x33638cu: goto label_33638c;
        case 0x336390u: goto label_336390;
        case 0x336394u: goto label_336394;
        case 0x336398u: goto label_336398;
        case 0x33639cu: goto label_33639c;
        case 0x3363a0u: goto label_3363a0;
        case 0x3363a4u: goto label_3363a4;
        case 0x3363a8u: goto label_3363a8;
        case 0x3363acu: goto label_3363ac;
        default: break;
    }

    ctx->pc = 0x336230u;

label_336230:
    // 0x336230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x336230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_336234:
    // 0x336234: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x336234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
label_336238:
    // 0x336238: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x336238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_33623c:
    // 0x33623c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33623cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_336240:
    // 0x336240: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x336240u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_336244:
    // 0x336244: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x336244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_336248:
    // 0x336248: 0x24426ea0  addiu       $v0, $v0, 0x6EA0
    ctx->pc = 0x336248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28320));
label_33624c:
    // 0x33624c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33624cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_336250:
    // 0x336250: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x336250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_336254:
    // 0x336254: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x336254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_336258:
    // 0x336258: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x336258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33625c:
    // 0x33625c: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
label_336260:
    if (ctx->pc == 0x336260u) {
        ctx->pc = 0x336260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33625Cu;
        // 0x336260: 0xac45000c  sw          $a1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336264u;
        goto label_336264;
    }
    ctx->pc = 0x33625Cu;
    {
        const bool branch_taken_0x33625c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x33625c) {
            ctx->pc = 0x336260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33625Cu;
            // 0x336260: 0xac45000c  sw          $a1, 0xC($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33626Cu;
            goto label_33626c;
        }
    }
    ctx->pc = 0x336264u;
label_336264:
    // 0x336264: 0x10000002  b           . + 4 + (0x2 << 2)
label_336268:
    if (ctx->pc == 0x336268u) {
        ctx->pc = 0x336268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336264u;
        // 0x336268: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33626Cu;
        goto label_33626c;
    }
    ctx->pc = 0x336264u;
    {
        const bool branch_taken_0x336264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336264u;
        // 0x336268: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336264) {
            ctx->pc = 0x336270u;
            goto label_336270;
        }
    }
    ctx->pc = 0x33626Cu;
label_33626c:
    // 0x33626c: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x33626cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_336270:
    // 0x336270: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x336270u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
label_336274:
    // 0x336274: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_336278:
    if (ctx->pc == 0x336278u) {
        ctx->pc = 0x336278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336274u;
        // 0x336278: 0x3c13005b  lui         $s3, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33627Cu;
        goto label_33627c;
    }
    ctx->pc = 0x336274u;
    {
        const bool branch_taken_0x336274 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x336278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336274u;
        // 0x336278: 0x3c13005b  lui         $s3, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336274) {
            ctx->pc = 0x3362C8u;
            goto label_3362c8;
        }
    }
    ctx->pc = 0x33627Cu;
label_33627c:
    // 0x33627c: 0x8e422c7c  lw          $v0, 0x2C7C($s2)
    ctx->pc = 0x33627cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_336280:
    // 0x336280: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
label_336284:
    if (ctx->pc == 0x336284u) {
        ctx->pc = 0x336284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336280u;
        // 0x336284: 0xae402c7c  sw          $zero, 0x2C7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 11388), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336288u;
        goto label_336288;
    }
    ctx->pc = 0x336280u;
    {
        const bool branch_taken_0x336280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x336280) {
            ctx->pc = 0x336284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336280u;
            // 0x336284: 0xae402c7c  sw          $zero, 0x2C7C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 11388), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336288u;
            goto label_336288;
        }
    }
    ctx->pc = 0x336288u;
label_336288:
    // 0x336288: 0x26916ea0  addiu       $s1, $s4, 0x6EA0
    ctx->pc = 0x336288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 28320));
label_33628c:
    // 0x33628c: 0x8e0501b8  lw          $a1, 0x1B8($s0)
    ctx->pc = 0x33628cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_336290:
    // 0x336290: 0xc0fbab6  jal         func_3EEAD8
label_336294:
    if (ctx->pc == 0x336294u) {
        ctx->pc = 0x336294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336290u;
        // 0x336294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336298u;
        goto label_336298;
    }
    ctx->pc = 0x336290u;
    SET_GPR_U32(ctx, 31, 0x336298u);
    ctx->pc = 0x336294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336290u;
    // 0x336294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EEAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EEAD8u, 0x336290u, 0x336298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336298u;
label_336298:
    // 0x336298: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x336298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
label_33629c:
    // 0x33629c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33629cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3362a0:
    // 0x3362a0: 0xc0fbadc  jal         func_3EEB70
label_3362a4:
    if (ctx->pc == 0x3362A4u) {
        ctx->pc = 0x3362A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3362A0u;
        // 0x3362a4: 0x26646eb0  addiu       $a0, $s3, 0x6EB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 28336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3362A8u;
        goto label_3362a8;
    }
    ctx->pc = 0x3362A0u;
    SET_GPR_U32(ctx, 31, 0x3362A8u);
    ctx->pc = 0x3362A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3362A0u;
    // 0x3362a4: 0x26646eb0  addiu       $a0, $s3, 0x6EB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 28336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EEB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EEB70u, 0x3362A0u, 0x3362A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3362A8u;
label_3362a8:
    // 0x3362a8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3362a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3362ac:
    // 0x3362ac: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
label_3362b0:
    if (ctx->pc == 0x3362B0u) {
        ctx->pc = 0x3362B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3362ACu;
        // 0x3362b0: 0xae25000c  sw          $a1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3362B4u;
        goto label_3362b4;
    }
    ctx->pc = 0x3362ACu;
    {
        const bool branch_taken_0x3362ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3362ac) {
            ctx->pc = 0x3362B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3362ACu;
            // 0x3362b0: 0xae25000c  sw          $a1, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3362BCu;
            goto label_3362bc;
        }
    }
    ctx->pc = 0x3362B4u;
label_3362b4:
    // 0x3362b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3362b8:
    if (ctx->pc == 0x3362B8u) {
        ctx->pc = 0x3362B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3362B4u;
        // 0x3362b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3362BCu;
        goto label_3362bc;
    }
    ctx->pc = 0x3362B4u;
    {
        const bool branch_taken_0x3362b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3362B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3362B4u;
        // 0x3362b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3362b4) {
            ctx->pc = 0x3362C0u;
            goto label_3362c0;
        }
    }
    ctx->pc = 0x3362BCu;
label_3362bc:
    // 0x3362bc: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x3362bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3362c0:
    // 0x3362c0: 0x1600ffef  bnez        $s0, . + 4 + (-0x11 << 2)
label_3362c4:
    if (ctx->pc == 0x3362C4u) {
        ctx->pc = 0x3362C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3362C0u;
        // 0x3362c4: 0x8e422c7c  lw          $v0, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3362C8u;
        goto label_3362c8;
    }
    ctx->pc = 0x3362C0u;
    {
        const bool branch_taken_0x3362c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3362C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3362C0u;
        // 0x3362c4: 0x8e422c7c  lw          $v0, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3362c0) {
            ctx->pc = 0x336280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336280;
        }
    }
    ctx->pc = 0x3362C8u;
label_3362c8:
    // 0x3362c8: 0x8e422c7c  lw          $v0, 0x2C7C($s2)
    ctx->pc = 0x3362c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
label_3362cc:
    // 0x3362cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3362d0:
    if (ctx->pc == 0x3362D0u) {
        ctx->pc = 0x3362D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3362CCu;
        // 0x3362d0: 0x26646eb0  addiu       $a0, $s3, 0x6EB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 28336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3362D4u;
        goto label_3362d4;
    }
    ctx->pc = 0x3362CCu;
    {
        const bool branch_taken_0x3362cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3362D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3362CCu;
        // 0x3362d0: 0x26646eb0  addiu       $a0, $s3, 0x6EB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 28336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3362cc) {
            ctx->pc = 0x3362E4u;
            goto label_3362e4;
        }
    }
    ctx->pc = 0x3362D4u;
label_3362d4:
    // 0x3362d4: 0xac4001b8  sw          $zero, 0x1B8($v0)
    ctx->pc = 0x3362d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 440), GPR_U32(ctx, 0));
label_3362d8:
    // 0x3362d8: 0xc0fbadc  jal         func_3EEB70
label_3362dc:
    if (ctx->pc == 0x3362DCu) {
        ctx->pc = 0x3362DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3362D8u;
        // 0x3362dc: 0x8e452c7c  lw          $a1, 0x2C7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3362E0u;
        goto label_3362e0;
    }
    ctx->pc = 0x3362D8u;
    SET_GPR_U32(ctx, 31, 0x3362E0u);
    ctx->pc = 0x3362DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3362D8u;
    // 0x3362dc: 0x8e452c7c  lw          $a1, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EEB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EEB70u, 0x3362D8u, 0x3362E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3362E0u;
label_3362e0:
    // 0x3362e0: 0xae402c7c  sw          $zero, 0x2C7C($s2)
    ctx->pc = 0x3362e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11388), GPR_U32(ctx, 0));
label_3362e4:
    // 0x3362e4: 0x26636eb0  addiu       $v1, $s3, 0x6EB0
    ctx->pc = 0x3362e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 28336));
label_3362e8:
    // 0x3362e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3362e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3362ec:
    // 0x3362ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3362ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3362f0:
    // 0x3362f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3362f4:
    if (ctx->pc == 0x3362F4u) {
        ctx->pc = 0x3362F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3362F0u;
        // 0x3362f4: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3362F8u;
        goto label_3362f8;
    }
    ctx->pc = 0x3362F0u;
    {
        const bool branch_taken_0x3362f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3362F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3362F0u;
        // 0x3362f4: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3362f0) {
            ctx->pc = 0x3362FCu;
            goto label_3362fc;
        }
    }
    ctx->pc = 0x3362F8u;
label_3362f8:
    // 0x3362f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3362f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3362fc:
    // 0x3362fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_336300:
    if (ctx->pc == 0x336300u) {
        ctx->pc = 0x336304u;
        goto label_336304;
    }
    ctx->pc = 0x3362FCu;
    {
        const bool branch_taken_0x3362fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3362fc) {
            ctx->pc = 0x33630Cu;
            goto label_33630c;
        }
    }
    ctx->pc = 0x336304u;
label_336304:
    // 0x336304: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x336304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_336308:
    // 0x336308: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x336308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_33630c:
    // 0x33630c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_336310:
    if (ctx->pc == 0x336310u) {
        ctx->pc = 0x336310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33630Cu;
        // 0x336310: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336314u;
        goto label_336314;
    }
    ctx->pc = 0x33630Cu;
    {
        const bool branch_taken_0x33630c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x336310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33630Cu;
        // 0x336310: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33630c) {
            ctx->pc = 0x336350u;
            goto label_336350;
        }
    }
    ctx->pc = 0x336314u;
label_336314:
    // 0x336314: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x336314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_336318:
    // 0x336318: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x336318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_33631c:
    // 0x33631c: 0x40f809  jalr        $v0
label_336320:
    if (ctx->pc == 0x336320u) {
        ctx->pc = 0x336320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33631Cu;
        // 0x336320: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336324u;
        goto label_336324;
    }
    ctx->pc = 0x33631Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x336324u);
        ctx->pc = 0x336320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33631Cu;
        // 0x336320: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33631Cu, 0x336324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x336324u;
label_336324:
    // 0x336324: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x336324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_336328:
    // 0x336328: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_33632c:
    if (ctx->pc == 0x33632Cu) {
        ctx->pc = 0x33632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336328u;
        // 0x33632c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336330u;
        goto label_336330;
    }
    ctx->pc = 0x336328u;
    {
        const bool branch_taken_0x336328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336328) {
            ctx->pc = 0x33632Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336328u;
            // 0x33632c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336338u;
            goto label_336338;
        }
    }
    ctx->pc = 0x336330u;
label_336330:
    // 0x336330: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x336330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_336334:
    // 0x336334: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x336334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_336338:
    // 0x336338: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_33633c:
    if (ctx->pc == 0x33633Cu) {
        ctx->pc = 0x336340u;
        goto label_336340;
    }
    ctx->pc = 0x336338u;
    {
        const bool branch_taken_0x336338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336338) {
            ctx->pc = 0x336348u;
            goto label_336348;
        }
    }
    ctx->pc = 0x336340u;
label_336340:
    // 0x336340: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x336340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_336344:
    // 0x336344: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x336344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_336348:
    // 0x336348: 0x5480fff3  bnel        $a0, $zero, . + 4 + (-0xD << 2)
label_33634c:
    if (ctx->pc == 0x33634Cu) {
        ctx->pc = 0x33634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336348u;
        // 0x33634c: 0x8c83020c  lw          $v1, 0x20C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336350u;
        goto label_336350;
    }
    ctx->pc = 0x336348u;
    {
        const bool branch_taken_0x336348 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x336348) {
            ctx->pc = 0x33634Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336348u;
            // 0x33634c: 0x8c83020c  lw          $v1, 0x20C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336318;
        }
    }
    ctx->pc = 0x336350u;
label_336350:
    // 0x336350: 0x26706eb0  addiu       $s0, $s3, 0x6EB0
    ctx->pc = 0x336350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 28336));
label_336354:
    // 0x336354: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x336354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_336358:
    // 0x336358: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_33635c:
    if (ctx->pc == 0x33635Cu) {
        ctx->pc = 0x33635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336358u;
        // 0x33635c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336360u;
        goto label_336360;
    }
    ctx->pc = 0x336358u;
    {
        const bool branch_taken_0x336358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336358u;
        // 0x33635c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336358) {
            ctx->pc = 0x336380u;
            goto label_336380;
        }
    }
    ctx->pc = 0x336360u;
label_336360:
    // 0x336360: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x336360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_336364:
    // 0x336364: 0x0  nop
    ctx->pc = 0x336364u;
    // NOP
label_336368:
    // 0x336368: 0xc0fbab6  jal         func_3EEAD8
label_33636c:
    if (ctx->pc == 0x33636Cu) {
        ctx->pc = 0x33636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336368u;
        // 0x33636c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336370u;
        goto label_336370;
    }
    ctx->pc = 0x336368u;
    SET_GPR_U32(ctx, 31, 0x336370u);
    ctx->pc = 0x33636Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336368u;
    // 0x33636c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EEAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EEAD8u, 0x336368u, 0x336370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336370u;
label_336370:
    // 0x336370: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x336370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_336374:
    // 0x336374: 0x0  nop
    ctx->pc = 0x336374u;
    // NOP
label_336378:
    // 0x336378: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_33637c:
    if (ctx->pc == 0x33637Cu) {
        ctx->pc = 0x33637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336378u;
        // 0x33637c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336380u;
        goto label_336380;
    }
    ctx->pc = 0x336378u;
    {
        const bool branch_taken_0x336378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336378) {
            ctx->pc = 0x33637Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336378u;
            // 0x33637c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336368;
        }
    }
    ctx->pc = 0x336380u;
label_336380:
    // 0x336380: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x336380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_336384:
    // 0x336384: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x336384u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_336388:
    // 0x336388: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x336388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_33638c:
    // 0x33638c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x33638cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_336390:
    // 0x336390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_336394:
    // 0x336394: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x336394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_336398:
    // 0x336398: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x336398u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33639c:
    // 0x33639c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33639cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3363a0:
    // 0x3363a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3363a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3363a4:
    // 0x3363a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3363a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3363a8:
    // 0x3363a8: 0x3e00008  jr          $ra
label_3363ac:
    if (ctx->pc == 0x3363ACu) {
        ctx->pc = 0x3363ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3363A8u;
        // 0x3363ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3363B0u;
        goto label_fallthrough_0x3363a8;
    }
    ctx->pc = 0x3363A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3363ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3363A8u;
        // 0x3363ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3363A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3363a8:
    ctx->pc = 0x3363B0u;
}
