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

// Function: sub_001BC278
// Address: 0x1bc278 - 0x1bc3b0
void sub_001BC278_0x1bc278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC278_0x1bc278");
#endif

    switch (ctx->pc) {
        case 0x1bc278u: goto label_1bc278;
        case 0x1bc27cu: goto label_1bc27c;
        case 0x1bc280u: goto label_1bc280;
        case 0x1bc284u: goto label_1bc284;
        case 0x1bc288u: goto label_1bc288;
        case 0x1bc28cu: goto label_1bc28c;
        case 0x1bc290u: goto label_1bc290;
        case 0x1bc294u: goto label_1bc294;
        case 0x1bc298u: goto label_1bc298;
        case 0x1bc29cu: goto label_1bc29c;
        case 0x1bc2a0u: goto label_1bc2a0;
        case 0x1bc2a4u: goto label_1bc2a4;
        case 0x1bc2a8u: goto label_1bc2a8;
        case 0x1bc2acu: goto label_1bc2ac;
        case 0x1bc2b0u: goto label_1bc2b0;
        case 0x1bc2b4u: goto label_1bc2b4;
        case 0x1bc2b8u: goto label_1bc2b8;
        case 0x1bc2bcu: goto label_1bc2bc;
        case 0x1bc2c0u: goto label_1bc2c0;
        case 0x1bc2c4u: goto label_1bc2c4;
        case 0x1bc2c8u: goto label_1bc2c8;
        case 0x1bc2ccu: goto label_1bc2cc;
        case 0x1bc2d0u: goto label_1bc2d0;
        case 0x1bc2d4u: goto label_1bc2d4;
        case 0x1bc2d8u: goto label_1bc2d8;
        case 0x1bc2dcu: goto label_1bc2dc;
        case 0x1bc2e0u: goto label_1bc2e0;
        case 0x1bc2e4u: goto label_1bc2e4;
        case 0x1bc2e8u: goto label_1bc2e8;
        case 0x1bc2ecu: goto label_1bc2ec;
        case 0x1bc2f0u: goto label_1bc2f0;
        case 0x1bc2f4u: goto label_1bc2f4;
        case 0x1bc2f8u: goto label_1bc2f8;
        case 0x1bc2fcu: goto label_1bc2fc;
        case 0x1bc300u: goto label_1bc300;
        case 0x1bc304u: goto label_1bc304;
        case 0x1bc308u: goto label_1bc308;
        case 0x1bc30cu: goto label_1bc30c;
        case 0x1bc310u: goto label_1bc310;
        case 0x1bc314u: goto label_1bc314;
        case 0x1bc318u: goto label_1bc318;
        case 0x1bc31cu: goto label_1bc31c;
        case 0x1bc320u: goto label_1bc320;
        case 0x1bc324u: goto label_1bc324;
        case 0x1bc328u: goto label_1bc328;
        case 0x1bc32cu: goto label_1bc32c;
        case 0x1bc330u: goto label_1bc330;
        case 0x1bc334u: goto label_1bc334;
        case 0x1bc338u: goto label_1bc338;
        case 0x1bc33cu: goto label_1bc33c;
        case 0x1bc340u: goto label_1bc340;
        case 0x1bc344u: goto label_1bc344;
        case 0x1bc348u: goto label_1bc348;
        case 0x1bc34cu: goto label_1bc34c;
        case 0x1bc350u: goto label_1bc350;
        case 0x1bc354u: goto label_1bc354;
        case 0x1bc358u: goto label_1bc358;
        case 0x1bc35cu: goto label_1bc35c;
        case 0x1bc360u: goto label_1bc360;
        case 0x1bc364u: goto label_1bc364;
        case 0x1bc368u: goto label_1bc368;
        case 0x1bc36cu: goto label_1bc36c;
        case 0x1bc370u: goto label_1bc370;
        case 0x1bc374u: goto label_1bc374;
        case 0x1bc378u: goto label_1bc378;
        case 0x1bc37cu: goto label_1bc37c;
        case 0x1bc380u: goto label_1bc380;
        case 0x1bc384u: goto label_1bc384;
        case 0x1bc388u: goto label_1bc388;
        case 0x1bc38cu: goto label_1bc38c;
        case 0x1bc390u: goto label_1bc390;
        case 0x1bc394u: goto label_1bc394;
        case 0x1bc398u: goto label_1bc398;
        case 0x1bc39cu: goto label_1bc39c;
        case 0x1bc3a0u: goto label_1bc3a0;
        case 0x1bc3a4u: goto label_1bc3a4;
        case 0x1bc3a8u: goto label_1bc3a8;
        case 0x1bc3acu: goto label_1bc3ac;
        default: break;
    }

    ctx->pc = 0x1bc278u;

label_1bc278:
    // 0x1bc278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bc27c:
    // 0x1bc27c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bc27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1bc280:
    // 0x1bc280: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bc284:
    // 0x1bc284: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bc284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1bc288:
    // 0x1bc288: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1bc288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1bc28c:
    // 0x1bc28c: 0xc06fa44  jal         func_1BE910
label_1bc290:
    if (ctx->pc == 0x1BC290u) {
        ctx->pc = 0x1BC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC28Cu;
        // 0x1bc290: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC294u;
        goto label_1bc294;
    }
    ctx->pc = 0x1BC28Cu;
    SET_GPR_U32(ctx, 31, 0x1BC294u);
    ctx->pc = 0x1BC290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC28Cu;
    // 0x1bc290: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE910u, 0x1BC28Cu, 0x1BC294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC294u;
label_1bc294:
    // 0x1bc294: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1bc294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_1bc298:
    // 0x1bc298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc29c:
    // 0x1bc29c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1bc29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1bc2a0:
    // 0x1bc2a0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1bc2a4:
    if (ctx->pc == 0x1BC2A4u) {
        ctx->pc = 0x1BC2A8u;
        goto label_1bc2a8;
    }
    ctx->pc = 0x1BC2A0u;
    {
        const bool branch_taken_0x1bc2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bc2a0) {
            ctx->pc = 0x1BC2BCu;
            goto label_1bc2bc;
        }
    }
    ctx->pc = 0x1BC2A8u;
label_1bc2a8:
    // 0x1bc2a8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1bc2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1bc2ac:
    // 0x1bc2ac: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x1bc2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_1bc2b0:
    // 0x1bc2b0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1bc2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1bc2b4:
    // 0x1bc2b4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1bc2b8:
    if (ctx->pc == 0x1BC2B8u) {
        ctx->pc = 0x1BC2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2B4u;
        // 0x1bc2b8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC2BCu;
        goto label_1bc2bc;
    }
    ctx->pc = 0x1BC2B4u;
    {
        const bool branch_taken_0x1bc2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2B4u;
        // 0x1bc2b8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc2b4) {
            ctx->pc = 0x1BC2E0u;
            goto label_1bc2e0;
        }
    }
    ctx->pc = 0x1BC2BCu;
label_1bc2bc:
    // 0x1bc2bc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1bc2c0:
    if (ctx->pc == 0x1BC2C0u) {
        ctx->pc = 0x1BC2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2BCu;
        // 0x1bc2c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC2C4u;
        goto label_1bc2c4;
    }
    ctx->pc = 0x1BC2BCu;
    {
        const bool branch_taken_0x1bc2bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2BCu;
        // 0x1bc2c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc2bc) {
            ctx->pc = 0x1BC2D8u;
            goto label_1bc2d8;
        }
    }
    ctx->pc = 0x1BC2C4u;
label_1bc2c4:
    // 0x1bc2c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bc2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bc2c8:
    // 0x1bc2c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1bc2cc:
    if (ctx->pc == 0x1BC2CCu) {
        ctx->pc = 0x1BC2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2C8u;
        // 0x1bc2cc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC2D0u;
        goto label_1bc2d0;
    }
    ctx->pc = 0x1BC2C8u;
    {
        const bool branch_taken_0x1bc2c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2C8u;
        // 0x1bc2cc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc2c8) {
            ctx->pc = 0x1BC2D8u;
            goto label_1bc2d8;
        }
    }
    ctx->pc = 0x1BC2D0u;
label_1bc2d0:
    // 0x1bc2d0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1bc2d4:
    if (ctx->pc == 0x1BC2D4u) {
        ctx->pc = 0x1BC2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2D0u;
        // 0x1bc2d4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC2D8u;
        goto label_1bc2d8;
    }
    ctx->pc = 0x1BC2D0u;
    {
        const bool branch_taken_0x1bc2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BC2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2D0u;
        // 0x1bc2d4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc2d0) {
            ctx->pc = 0x1BC2E0u;
            goto label_1bc2e0;
        }
    }
    ctx->pc = 0x1BC2D8u;
label_1bc2d8:
    // 0x1bc2d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bc2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc2dc:
    // 0x1bc2dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bc2dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc2e0:
    // 0x1bc2e0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_1bc2e4:
    if (ctx->pc == 0x1BC2E4u) {
        ctx->pc = 0x1BC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2E0u;
        // 0x1bc2e4: 0x262300f0  addiu       $v1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC2E8u;
        goto label_1bc2e8;
    }
    ctx->pc = 0x1BC2E0u;
    {
        const bool branch_taken_0x1bc2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2E0u;
        // 0x1bc2e4: 0x262300f0  addiu       $v1, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc2e0) {
            ctx->pc = 0x1BC394u;
            goto label_1bc394;
        }
    }
    ctx->pc = 0x1BC2E8u;
label_1bc2e8:
    // 0x1bc2e8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1bc2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1bc2ec:
    // 0x1bc2ec: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_1bc2f0:
    if (ctx->pc == 0x1BC2F0u) {
        ctx->pc = 0x1BC2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2ECu;
        // 0x1bc2f0: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC2F4u;
        goto label_1bc2f4;
    }
    ctx->pc = 0x1BC2ECu;
    {
        const bool branch_taken_0x1bc2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2ECu;
        // 0x1bc2f0: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc2ec) {
            ctx->pc = 0x1BC334u;
            goto label_1bc334;
        }
    }
    ctx->pc = 0x1BC2F4u;
label_1bc2f4:
    // 0x1bc2f4: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x1bc2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1bc2f8:
    // 0x1bc2f8: 0xc095368  jal         func_254DA0
label_1bc2fc:
    if (ctx->pc == 0x1BC2FCu) {
        ctx->pc = 0x1BC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC2F8u;
        // 0x1bc2fc: 0x263000d0  addiu       $s0, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC300u;
        goto label_1bc300;
    }
    ctx->pc = 0x1BC2F8u;
    SET_GPR_U32(ctx, 31, 0x1BC300u);
    ctx->pc = 0x1BC2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC2F8u;
    // 0x1bc2fc: 0x263000d0  addiu       $s0, $s1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x1BC2F8u, 0x1BC300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC300u;
label_1bc300:
    // 0x1bc300: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bc300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bc304:
    // 0x1bc304: 0xc06fb38  jal         func_1BECE0
label_1bc308:
    if (ctx->pc == 0x1BC308u) {
        ctx->pc = 0x1BC308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC304u;
        // 0x1bc308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC30Cu;
        goto label_1bc30c;
    }
    ctx->pc = 0x1BC304u;
    SET_GPR_U32(ctx, 31, 0x1BC30Cu);
    ctx->pc = 0x1BC308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC304u;
    // 0x1bc308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x1BC304u, 0x1BC30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC30Cu;
label_1bc30c:
    // 0x1bc30c: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x1bc30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1bc310:
    // 0x1bc310: 0xc06fb64  jal         func_1BED90
label_1bc314:
    if (ctx->pc == 0x1BC314u) {
        ctx->pc = 0x1BC314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC310u;
        // 0x1bc314: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC318u;
        goto label_1bc318;
    }
    ctx->pc = 0x1BC310u;
    SET_GPR_U32(ctx, 31, 0x1BC318u);
    ctx->pc = 0x1BC314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC310u;
    // 0x1bc314: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x1BC310u, 0x1BC318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC318u;
label_1bc318:
    // 0x1bc318: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1bc318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_1bc31c:
    // 0x1bc31c: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x1bc31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1bc320:
    // 0x1bc320: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1bc320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1bc324:
    // 0x1bc324: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_1bc328:
    if (ctx->pc == 0x1BC328u) {
        ctx->pc = 0x1BC32Cu;
        goto label_1bc32c;
    }
    ctx->pc = 0x1BC324u;
    {
        const bool branch_taken_0x1bc324 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bc324) {
            ctx->pc = 0x1BC334u;
            goto label_1bc334;
        }
    }
    ctx->pc = 0x1BC32Cu;
label_1bc32c:
    // 0x1bc32c: 0xc06fb64  jal         func_1BED90
label_1bc330:
    if (ctx->pc == 0x1BC330u) {
        ctx->pc = 0x1BC334u;
        goto label_1bc334;
    }
    ctx->pc = 0x1BC32Cu;
    SET_GPR_U32(ctx, 31, 0x1BC334u);
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x1BC32Cu, 0x1BC334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC334u;
label_1bc334:
    // 0x1bc334: 0xc06f132  jal         func_1BC4C8
label_1bc338:
    if (ctx->pc == 0x1BC338u) {
        ctx->pc = 0x1BC338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC334u;
        // 0x1bc338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC33Cu;
        goto label_1bc33c;
    }
    ctx->pc = 0x1BC334u;
    SET_GPR_U32(ctx, 31, 0x1BC33Cu);
    ctx->pc = 0x1BC338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC334u;
    // 0x1bc338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC4C8u, 0x1BC334u, 0x1BC33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC33Cu;
label_1bc33c:
    // 0x1bc33c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1bc340:
    if (ctx->pc == 0x1BC340u) {
        ctx->pc = 0x1BC340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC33Cu;
        // 0x1bc340: 0x26240260  addiu       $a0, $s1, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC344u;
        goto label_1bc344;
    }
    ctx->pc = 0x1BC33Cu;
    {
        const bool branch_taken_0x1bc33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC33Cu;
        // 0x1bc340: 0x26240260  addiu       $a0, $s1, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc33c) {
            ctx->pc = 0x1BC360u;
            goto label_1bc360;
        }
    }
    ctx->pc = 0x1BC344u;
label_1bc344:
    // 0x1bc344: 0x8e230394  lw          $v1, 0x394($s1)
    ctx->pc = 0x1bc344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
label_1bc348:
    // 0x1bc348: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1bc348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1bc34c:
    // 0x1bc34c: 0x40f809  jalr        $v0
label_1bc350:
    if (ctx->pc == 0x1BC350u) {
        ctx->pc = 0x1BC350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC34Cu;
        // 0x1bc350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC354u;
        goto label_1bc354;
    }
    ctx->pc = 0x1BC34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC354u);
        ctx->pc = 0x1BC350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC34Cu;
        // 0x1bc350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC34Cu, 0x1BC354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC354u;
label_1bc354:
    // 0x1bc354: 0xc06f162  jal         func_1BC588
label_1bc358:
    if (ctx->pc == 0x1BC358u) {
        ctx->pc = 0x1BC358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC354u;
        // 0x1bc358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC35Cu;
        goto label_1bc35c;
    }
    ctx->pc = 0x1BC354u;
    SET_GPR_U32(ctx, 31, 0x1BC35Cu);
    ctx->pc = 0x1BC358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC354u;
    // 0x1bc358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC588u, 0x1BC354u, 0x1BC35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC35Cu;
label_1bc35c:
    // 0x1bc35c: 0x26240260  addiu       $a0, $s1, 0x260
    ctx->pc = 0x1bc35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
label_1bc360:
    // 0x1bc360: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1bc360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_1bc364:
    // 0x1bc364: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bc364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1bc368:
    // 0x1bc368: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bc368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bc36c:
    // 0x1bc36c: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x1bc36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc370:
    // 0x1bc370: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bc370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc374:
    // 0x1bc374: 0x0  nop
    ctx->pc = 0x1bc374u;
    // NOP
label_1bc378:
    // 0x1bc378: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1bc37c:
    if (ctx->pc == 0x1BC37Cu) {
        ctx->pc = 0x1BC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC378u;
        // 0x1bc37c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC380u;
        goto label_1bc380;
    }
    ctx->pc = 0x1BC378u;
    {
        const bool branch_taken_0x1bc378 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC378u;
        // 0x1bc37c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc378) {
            ctx->pc = 0x1BC398u;
            goto label_1bc398;
        }
    }
    ctx->pc = 0x1BC380u;
label_1bc380:
    // 0x1bc380: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1bc380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1bc384:
    // 0x1bc384: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1bc388:
    if (ctx->pc == 0x1BC388u) {
        ctx->pc = 0x1BC388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC384u;
        // 0x1bc388: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC38Cu;
        goto label_1bc38c;
    }
    ctx->pc = 0x1BC384u;
    {
        const bool branch_taken_0x1bc384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC384u;
        // 0x1bc388: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc384) {
            ctx->pc = 0x1BC39Cu;
            goto label_1bc39c;
        }
    }
    ctx->pc = 0x1BC38Cu;
label_1bc38c:
    // 0x1bc38c: 0xc06fcc8  jal         func_1BF320
label_1bc390:
    if (ctx->pc == 0x1BC390u) {
        ctx->pc = 0x1BC394u;
        goto label_1bc394;
    }
    ctx->pc = 0x1BC38Cu;
    SET_GPR_U32(ctx, 31, 0x1BC394u);
    ctx->pc = 0x1BF320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF320u, 0x1BC38Cu, 0x1BC394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC394u;
label_1bc394:
    // 0x1bc394: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc398:
    // 0x1bc398: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bc39c:
    // 0x1bc39c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bc39cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bc3a0:
    // 0x1bc3a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bc3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1bc3a4:
    // 0x1bc3a4: 0x3e00008  jr          $ra
label_1bc3a8:
    if (ctx->pc == 0x1BC3A8u) {
        ctx->pc = 0x1BC3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC3A4u;
        // 0x1bc3a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC3ACu;
        goto label_1bc3ac;
    }
    ctx->pc = 0x1BC3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC3A4u;
        // 0x1bc3a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC3ACu;
label_1bc3ac:
    // 0x1bc3ac: 0x0  nop
    ctx->pc = 0x1bc3acu;
    // NOP
    ctx->pc = 0x1bc3b0u;
}
