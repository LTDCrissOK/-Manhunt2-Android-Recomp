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

// Function: sub_003A2350
// Address: 0x3a2350 - 0x3a2428
void sub_003A2350_0x3a2350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2350_0x3a2350");
#endif

    switch (ctx->pc) {
        case 0x3a2350u: goto label_3a2350;
        case 0x3a2354u: goto label_3a2354;
        case 0x3a2358u: goto label_3a2358;
        case 0x3a235cu: goto label_3a235c;
        case 0x3a2360u: goto label_3a2360;
        case 0x3a2364u: goto label_3a2364;
        case 0x3a2368u: goto label_3a2368;
        case 0x3a236cu: goto label_3a236c;
        case 0x3a2370u: goto label_3a2370;
        case 0x3a2374u: goto label_3a2374;
        case 0x3a2378u: goto label_3a2378;
        case 0x3a237cu: goto label_3a237c;
        case 0x3a2380u: goto label_3a2380;
        case 0x3a2384u: goto label_3a2384;
        case 0x3a2388u: goto label_3a2388;
        case 0x3a238cu: goto label_3a238c;
        case 0x3a2390u: goto label_3a2390;
        case 0x3a2394u: goto label_3a2394;
        case 0x3a2398u: goto label_3a2398;
        case 0x3a239cu: goto label_3a239c;
        case 0x3a23a0u: goto label_3a23a0;
        case 0x3a23a4u: goto label_3a23a4;
        case 0x3a23a8u: goto label_3a23a8;
        case 0x3a23acu: goto label_3a23ac;
        case 0x3a23b0u: goto label_3a23b0;
        case 0x3a23b4u: goto label_3a23b4;
        case 0x3a23b8u: goto label_3a23b8;
        case 0x3a23bcu: goto label_3a23bc;
        case 0x3a23c0u: goto label_3a23c0;
        case 0x3a23c4u: goto label_3a23c4;
        case 0x3a23c8u: goto label_3a23c8;
        case 0x3a23ccu: goto label_3a23cc;
        case 0x3a23d0u: goto label_3a23d0;
        case 0x3a23d4u: goto label_3a23d4;
        case 0x3a23d8u: goto label_3a23d8;
        case 0x3a23dcu: goto label_3a23dc;
        case 0x3a23e0u: goto label_3a23e0;
        case 0x3a23e4u: goto label_3a23e4;
        case 0x3a23e8u: goto label_3a23e8;
        case 0x3a23ecu: goto label_3a23ec;
        case 0x3a23f0u: goto label_3a23f0;
        case 0x3a23f4u: goto label_3a23f4;
        case 0x3a23f8u: goto label_3a23f8;
        case 0x3a23fcu: goto label_3a23fc;
        case 0x3a2400u: goto label_3a2400;
        case 0x3a2404u: goto label_3a2404;
        case 0x3a2408u: goto label_3a2408;
        case 0x3a240cu: goto label_3a240c;
        case 0x3a2410u: goto label_3a2410;
        case 0x3a2414u: goto label_3a2414;
        case 0x3a2418u: goto label_3a2418;
        case 0x3a241cu: goto label_3a241c;
        case 0x3a2420u: goto label_3a2420;
        case 0x3a2424u: goto label_3a2424;
        default: break;
    }

    ctx->pc = 0x3a2350u;

label_3a2350:
    // 0x3a2350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a2350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a2354:
    // 0x3a2354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a2354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3a2358:
    // 0x3a2358: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_3a235c:
    if (ctx->pc == 0x3A235Cu) {
        ctx->pc = 0x3A235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2358u;
        // 0x3a235c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2360u;
        goto label_3a2360;
    }
    ctx->pc = 0x3A2358u;
    {
        const bool branch_taken_0x3a2358 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2358u;
        // 0x3a235c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2358) {
            ctx->pc = 0x3A2378u;
            goto label_3a2378;
        }
    }
    ctx->pc = 0x3A2360u;
label_3a2360:
    // 0x3a2360: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a2360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a2364:
    // 0x3a2364: 0xc0e8688  jal         func_3A1A20
label_3a2368:
    if (ctx->pc == 0x3A2368u) {
        ctx->pc = 0x3A2368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2364u;
        // 0x3a2368: 0x2484c7e8  addiu       $a0, $a0, -0x3818 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A236Cu;
        goto label_3a236c;
    }
    ctx->pc = 0x3A2364u;
    SET_GPR_U32(ctx, 31, 0x3A236Cu);
    ctx->pc = 0x3A2368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2364u;
    // 0x3a2368: 0x2484c7e8  addiu       $a0, $a0, -0x3818 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1A20u, 0x3A2364u, 0x3A236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A236Cu;
label_3a236c:
    // 0x3a236c: 0x1000000e  b           . + 4 + (0xE << 2)
label_3a2370:
    if (ctx->pc == 0x3A2370u) {
        ctx->pc = 0x3A2370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A236Cu;
        // 0x3a2370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2374u;
        goto label_3a2374;
    }
    ctx->pc = 0x3A236Cu;
    {
        const bool branch_taken_0x3a236c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A236Cu;
        // 0x3a2370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a236c) {
            ctx->pc = 0x3A23A8u;
            goto label_3a23a8;
        }
    }
    ctx->pc = 0x3A2374u;
label_3a2374:
    // 0x3a2374: 0x0  nop
    ctx->pc = 0x3a2374u;
    // NOP
label_3a2378:
    // 0x3a2378: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a2378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a237c:
    // 0x3a237c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x3a237cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3a2380:
    // 0x3a2380: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3a2384:
    if (ctx->pc == 0x3A2384u) {
        ctx->pc = 0x3A2384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2380u;
        // 0x3a2384: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2388u;
        goto label_3a2388;
    }
    ctx->pc = 0x3A2380u;
    {
        const bool branch_taken_0x3a2380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2380) {
            ctx->pc = 0x3A2384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2380u;
            // 0x3a2384: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2398u;
            goto label_3a2398;
        }
    }
    ctx->pc = 0x3A2388u;
label_3a2388:
    // 0x3a2388: 0x40f809  jalr        $v0
label_3a238c:
    if (ctx->pc == 0x3A238Cu) {
        ctx->pc = 0x3A238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2388u;
        // 0x3a238c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2390u;
        goto label_3a2390;
    }
    ctx->pc = 0x3A2388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A2390u);
        ctx->pc = 0x3A238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2388u;
        // 0x3a238c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2388u, 0x3A2390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2390u;
label_3a2390:
    // 0x3a2390: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a2394:
    if (ctx->pc == 0x3A2394u) {
        ctx->pc = 0x3A2394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2390u;
        // 0x3a2394: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2398u;
        goto label_3a2398;
    }
    ctx->pc = 0x3A2390u;
    {
        const bool branch_taken_0x3a2390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2390u;
        // 0x3a2394: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2390) {
            ctx->pc = 0x3A23A4u;
            goto label_3a23a4;
        }
    }
    ctx->pc = 0x3A2398u;
label_3a2398:
    // 0x3a2398: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a2398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a239c:
    // 0x3a239c: 0xc0e8688  jal         func_3A1A20
label_3a23a0:
    if (ctx->pc == 0x3A23A0u) {
        ctx->pc = 0x3A23A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A239Cu;
        // 0x3a23a0: 0x2484c808  addiu       $a0, $a0, -0x37F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A23A4u;
        goto label_3a23a4;
    }
    ctx->pc = 0x3A239Cu;
    SET_GPR_U32(ctx, 31, 0x3A23A4u);
    ctx->pc = 0x3A23A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A239Cu;
    // 0x3a23a0: 0x2484c808  addiu       $a0, $a0, -0x37F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1A20u, 0x3A239Cu, 0x3A23A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A23A4u;
label_3a23a4:
    // 0x3a23a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a23a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a23a8:
    // 0x3a23a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a23a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a23ac:
    // 0x3a23ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a23acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3a23b0:
    // 0x3a23b0: 0x3e00008  jr          $ra
label_3a23b4:
    if (ctx->pc == 0x3A23B4u) {
        ctx->pc = 0x3A23B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A23B0u;
        // 0x3a23b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A23B8u;
        goto label_3a23b8;
    }
    ctx->pc = 0x3A23B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A23B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A23B0u;
        // 0x3a23b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A23B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A23B8u;
label_3a23b8:
    // 0x3a23b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a23b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a23bc:
    // 0x3a23bc: 0x0  nop
    ctx->pc = 0x3a23bcu;
    // NOP
label_3a23c0:
    // 0x3a23c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a23c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a23c4:
    // 0x3a23c4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3a23c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3a23c8:
    // 0x3a23c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a23c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3a23cc:
    // 0x3a23cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a23ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3a23d0:
    // 0x3a23d0: 0x24506768  addiu       $s0, $v0, 0x6768
    ctx->pc = 0x3a23d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 26472));
label_3a23d4:
    // 0x3a23d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a23d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3a23d8:
    // 0x3a23d8: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x3a23d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_3a23dc:
    // 0x3a23dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a23dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a23e0:
    // 0x3a23e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3a23e4:
    if (ctx->pc == 0x3A23E4u) {
        ctx->pc = 0x3A23E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A23E0u;
        // 0x3a23e4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A23E8u;
        goto label_3a23e8;
    }
    ctx->pc = 0x3A23E0u;
    {
        const bool branch_taken_0x3a23e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A23E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A23E0u;
        // 0x3a23e4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a23e0) {
            ctx->pc = 0x3A23FCu;
            goto label_3a23fc;
        }
    }
    ctx->pc = 0x3A23E8u;
label_3a23e8:
    // 0x3a23e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a23e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a23ec:
    // 0x3a23ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3a23f0:
    if (ctx->pc == 0x3A23F0u) {
        ctx->pc = 0x3A23F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A23ECu;
        // 0x3a23f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A23F4u;
        goto label_3a23f4;
    }
    ctx->pc = 0x3A23ECu;
    {
        const bool branch_taken_0x3a23ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a23ec) {
            ctx->pc = 0x3A23F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A23ECu;
            // 0x3a23f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2400u;
            goto label_3a2400;
        }
    }
    ctx->pc = 0x3A23F4u;
label_3a23f4:
    // 0x3a23f4: 0x40f809  jalr        $v0
label_3a23f8:
    if (ctx->pc == 0x3A23F8u) {
        ctx->pc = 0x3A23FCu;
        goto label_3a23fc;
    }
    ctx->pc = 0x3A23F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A23FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A23F4u, 0x3A23FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A23FCu;
label_3a23fc:
    // 0x3a23fc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3a23fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3a2400:
    // 0x3a2400: 0x623fff7  bgezl       $s1, . + 4 + (-0x9 << 2)
label_3a2404:
    if (ctx->pc == 0x3A2404u) {
        ctx->pc = 0x3A2404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2400u;
        // 0x3a2404: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2408u;
        goto label_3a2408;
    }
    ctx->pc = 0x3A2400u;
    {
        const bool branch_taken_0x3a2400 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x3a2400) {
            ctx->pc = 0x3A2404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2400u;
            // 0x3a2404: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A23E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a23e0;
        }
    }
    ctx->pc = 0x3A2408u;
label_3a2408:
    // 0x3a2408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a2408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a240c:
    // 0x3a240c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a240cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3a2410:
    // 0x3a2410: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a2410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a2414:
    // 0x3a2414: 0x3e00008  jr          $ra
label_3a2418:
    if (ctx->pc == 0x3A2418u) {
        ctx->pc = 0x3A2418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2414u;
        // 0x3a2418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A241Cu;
        goto label_3a241c;
    }
    ctx->pc = 0x3A2414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2414u;
        // 0x3a2418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A241Cu;
label_3a241c:
    // 0x3a241c: 0x0  nop
    ctx->pc = 0x3a241cu;
    // NOP
label_3a2420:
    // 0x3a2420: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3a2420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a2424:
    // 0x3a2424: 0x0  nop
    ctx->pc = 0x3a2424u;
    // NOP
    ctx->pc = 0x3a2428u;
}
