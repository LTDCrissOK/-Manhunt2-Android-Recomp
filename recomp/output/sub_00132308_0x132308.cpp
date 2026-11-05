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

// Function: sub_00132308
// Address: 0x132308 - 0x1323d8
void sub_00132308_0x132308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132308_0x132308");
#endif

    switch (ctx->pc) {
        case 0x132308u: goto label_132308;
        case 0x13230cu: goto label_13230c;
        case 0x132310u: goto label_132310;
        case 0x132314u: goto label_132314;
        case 0x132318u: goto label_132318;
        case 0x13231cu: goto label_13231c;
        case 0x132320u: goto label_132320;
        case 0x132324u: goto label_132324;
        case 0x132328u: goto label_132328;
        case 0x13232cu: goto label_13232c;
        case 0x132330u: goto label_132330;
        case 0x132334u: goto label_132334;
        case 0x132338u: goto label_132338;
        case 0x13233cu: goto label_13233c;
        case 0x132340u: goto label_132340;
        case 0x132344u: goto label_132344;
        case 0x132348u: goto label_132348;
        case 0x13234cu: goto label_13234c;
        case 0x132350u: goto label_132350;
        case 0x132354u: goto label_132354;
        case 0x132358u: goto label_132358;
        case 0x13235cu: goto label_13235c;
        case 0x132360u: goto label_132360;
        case 0x132364u: goto label_132364;
        case 0x132368u: goto label_132368;
        case 0x13236cu: goto label_13236c;
        case 0x132370u: goto label_132370;
        case 0x132374u: goto label_132374;
        case 0x132378u: goto label_132378;
        case 0x13237cu: goto label_13237c;
        case 0x132380u: goto label_132380;
        case 0x132384u: goto label_132384;
        case 0x132388u: goto label_132388;
        case 0x13238cu: goto label_13238c;
        case 0x132390u: goto label_132390;
        case 0x132394u: goto label_132394;
        case 0x132398u: goto label_132398;
        case 0x13239cu: goto label_13239c;
        case 0x1323a0u: goto label_1323a0;
        case 0x1323a4u: goto label_1323a4;
        case 0x1323a8u: goto label_1323a8;
        case 0x1323acu: goto label_1323ac;
        case 0x1323b0u: goto label_1323b0;
        case 0x1323b4u: goto label_1323b4;
        case 0x1323b8u: goto label_1323b8;
        case 0x1323bcu: goto label_1323bc;
        case 0x1323c0u: goto label_1323c0;
        case 0x1323c4u: goto label_1323c4;
        case 0x1323c8u: goto label_1323c8;
        case 0x1323ccu: goto label_1323cc;
        case 0x1323d0u: goto label_1323d0;
        case 0x1323d4u: goto label_1323d4;
        default: break;
    }

    ctx->pc = 0x132308u;

label_132308:
    // 0x132308: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x132308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13230c:
    // 0x13230c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13230cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_132310:
    // 0x132310: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x132310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_132314:
    // 0x132314: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x132314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_132318:
    // 0x132318: 0x59100  sll         $s2, $a1, 4
    ctx->pc = 0x132318u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_13231c:
    // 0x13231c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13231cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_132320:
    // 0x132320: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x132320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_132324:
    // 0x132324: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x132324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_132328:
    // 0x132328: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x132328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_13232c:
    // 0x13232c: 0x8c530024  lw          $s3, 0x24($v0)
    ctx->pc = 0x13232cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_132330:
    // 0x132330: 0xc04615c  jal         func_118570
label_132334:
    if (ctx->pc == 0x132334u) {
        ctx->pc = 0x132334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132330u;
        // 0x132334: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132338u;
        goto label_132338;
    }
    ctx->pc = 0x132330u;
    SET_GPR_U32(ctx, 31, 0x132338u);
    ctx->pc = 0x132334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132330u;
    // 0x132334: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118570u, 0x132330u, 0x132338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132338u;
label_132338:
    // 0x132338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x132338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13233c:
    // 0x13233c: 0xc04c77a  jal         func_131DE8
label_132340:
    if (ctx->pc == 0x132340u) {
        ctx->pc = 0x132340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13233Cu;
        // 0x132340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132344u;
        goto label_132344;
    }
    ctx->pc = 0x13233Cu;
    SET_GPR_U32(ctx, 31, 0x132344u);
    ctx->pc = 0x132340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13233Cu;
    // 0x132340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131DE8u, 0x13233Cu, 0x132344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132344u;
label_132344:
    // 0x132344: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x132344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132348:
    // 0x132348: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x132348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13234c:
    // 0x13234c: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x13234cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_132350:
    // 0x132350: 0x1203000e  beq         $s0, $v1, . + 4 + (0xE << 2)
label_132354:
    if (ctx->pc == 0x132354u) {
        ctx->pc = 0x132354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132350u;
        // 0x132354: 0xac450018  sw          $a1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132358u;
        goto label_132358;
    }
    ctx->pc = 0x132350u;
    {
        const bool branch_taken_0x132350 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x132354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132350u;
        // 0x132354: 0xac450018  sw          $a1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132350) {
            ctx->pc = 0x13238Cu;
            goto label_13238c;
        }
    }
    ctx->pc = 0x132358u;
label_132358:
    // 0x132358: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x132358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_13235c:
    // 0x13235c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_132360:
    if (ctx->pc == 0x132360u) {
        ctx->pc = 0x132360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13235Cu;
        // 0x132360: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132364u;
        goto label_132364;
    }
    ctx->pc = 0x13235Cu;
    {
        const bool branch_taken_0x13235c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13235Cu;
        // 0x132360: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13235c) {
            ctx->pc = 0x132374u;
            goto label_132374;
        }
    }
    ctx->pc = 0x132364u;
label_132364:
    // 0x132364: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_132368:
    if (ctx->pc == 0x132368u) {
        ctx->pc = 0x132368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132364u;
        // 0x132368: 0x2321021  addu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13236Cu;
        goto label_13236c;
    }
    ctx->pc = 0x132364u;
    {
        const bool branch_taken_0x132364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x132368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132364u;
        // 0x132368: 0x2321021  addu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132364) {
            ctx->pc = 0x132384u;
            goto label_132384;
        }
    }
    ctx->pc = 0x13236Cu;
label_13236c:
    // 0x13236c: 0x1000000d  b           . + 4 + (0xD << 2)
label_132370:
    if (ctx->pc == 0x132370u) {
        ctx->pc = 0x132370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13236Cu;
        // 0x132370: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132374u;
        goto label_132374;
    }
    ctx->pc = 0x13236Cu;
    {
        const bool branch_taken_0x13236c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13236Cu;
        // 0x132370: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13236c) {
            ctx->pc = 0x1323A4u;
            goto label_1323a4;
        }
    }
    ctx->pc = 0x132374u;
label_132374:
    // 0x132374: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_132378:
    if (ctx->pc == 0x132378u) {
        ctx->pc = 0x132378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132374u;
        // 0x132378: 0x2321821  addu        $v1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13237Cu;
        goto label_13237c;
    }
    ctx->pc = 0x132374u;
    {
        const bool branch_taken_0x132374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x132378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132374u;
        // 0x132378: 0x2321821  addu        $v1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132374) {
            ctx->pc = 0x132398u;
            goto label_132398;
        }
    }
    ctx->pc = 0x13237Cu;
label_13237c:
    // 0x13237c: 0x10000009  b           . + 4 + (0x9 << 2)
label_132380:
    if (ctx->pc == 0x132380u) {
        ctx->pc = 0x132380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13237Cu;
        // 0x132380: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132384u;
        goto label_132384;
    }
    ctx->pc = 0x13237Cu;
    {
        const bool branch_taken_0x13237c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13237Cu;
        // 0x132380: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13237c) {
            ctx->pc = 0x1323A4u;
            goto label_1323a4;
        }
    }
    ctx->pc = 0x132384u;
label_132384:
    // 0x132384: 0x10000006  b           . + 4 + (0x6 << 2)
label_132388:
    if (ctx->pc == 0x132388u) {
        ctx->pc = 0x132388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132384u;
        // 0x132388: 0xac43001c  sw          $v1, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13238Cu;
        goto label_13238c;
    }
    ctx->pc = 0x132384u;
    {
        const bool branch_taken_0x132384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132384u;
        // 0x132388: 0xac43001c  sw          $v1, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132384) {
            ctx->pc = 0x1323A0u;
            goto label_1323a0;
        }
    }
    ctx->pc = 0x13238Cu;
label_13238c:
    // 0x13238c: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x13238cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_132390:
    // 0x132390: 0x10000002  b           . + 4 + (0x2 << 2)
label_132394:
    if (ctx->pc == 0x132394u) {
        ctx->pc = 0x132394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132390u;
        // 0x132394: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132398u;
        goto label_132398;
    }
    ctx->pc = 0x132390u;
    {
        const bool branch_taken_0x132390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132390u;
        // 0x132394: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132390) {
            ctx->pc = 0x13239Cu;
            goto label_13239c;
        }
    }
    ctx->pc = 0x132398u;
label_132398:
    // 0x132398: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x132398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_13239c:
    // 0x13239c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x13239cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_1323a0:
    // 0x1323a0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1323a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1323a4:
    // 0x1323a4: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1323a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1323a8:
    // 0x1323a8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1323a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1323ac:
    // 0x1323ac: 0x40f809  jalr        $v0
label_1323b0:
    if (ctx->pc == 0x1323B0u) {
        ctx->pc = 0x1323B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323ACu;
        // 0x1323b0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1323B4u;
        goto label_1323b4;
    }
    ctx->pc = 0x1323ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1323B4u);
        ctx->pc = 0x1323B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323ACu;
        // 0x1323b0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1323ACu, 0x1323B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1323B4u;
label_1323b4:
    // 0x1323b4: 0xae200220  sw          $zero, 0x220($s1)
    ctx->pc = 0x1323b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 0));
label_1323b8:
    // 0x1323b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1323b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1323bc:
    // 0x1323bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1323bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1323c0:
    // 0x1323c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1323c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1323c4:
    // 0x1323c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1323c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1323c8:
    // 0x1323c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1323c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1323cc:
    // 0x1323cc: 0x3e00008  jr          $ra
label_1323d0:
    if (ctx->pc == 0x1323D0u) {
        ctx->pc = 0x1323D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323CCu;
        // 0x1323d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1323D4u;
        goto label_1323d4;
    }
    ctx->pc = 0x1323CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1323D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323CCu;
        // 0x1323d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1323CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1323D4u;
label_1323d4:
    // 0x1323d4: 0x0  nop
    ctx->pc = 0x1323d4u;
    // NOP
    ctx->pc = 0x1323d8u;
}
