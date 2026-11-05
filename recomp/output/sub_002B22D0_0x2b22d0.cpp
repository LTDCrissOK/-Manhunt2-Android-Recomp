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

// Function: sub_002B22D0
// Address: 0x2b22d0 - 0x2b23e0
void sub_002B22D0_0x2b22d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B22D0_0x2b22d0");
#endif

    switch (ctx->pc) {
        case 0x2b22d0u: goto label_2b22d0;
        case 0x2b22d4u: goto label_2b22d4;
        case 0x2b22d8u: goto label_2b22d8;
        case 0x2b22dcu: goto label_2b22dc;
        case 0x2b22e0u: goto label_2b22e0;
        case 0x2b22e4u: goto label_2b22e4;
        case 0x2b22e8u: goto label_2b22e8;
        case 0x2b22ecu: goto label_2b22ec;
        case 0x2b22f0u: goto label_2b22f0;
        case 0x2b22f4u: goto label_2b22f4;
        case 0x2b22f8u: goto label_2b22f8;
        case 0x2b22fcu: goto label_2b22fc;
        case 0x2b2300u: goto label_2b2300;
        case 0x2b2304u: goto label_2b2304;
        case 0x2b2308u: goto label_2b2308;
        case 0x2b230cu: goto label_2b230c;
        case 0x2b2310u: goto label_2b2310;
        case 0x2b2314u: goto label_2b2314;
        case 0x2b2318u: goto label_2b2318;
        case 0x2b231cu: goto label_2b231c;
        case 0x2b2320u: goto label_2b2320;
        case 0x2b2324u: goto label_2b2324;
        case 0x2b2328u: goto label_2b2328;
        case 0x2b232cu: goto label_2b232c;
        case 0x2b2330u: goto label_2b2330;
        case 0x2b2334u: goto label_2b2334;
        case 0x2b2338u: goto label_2b2338;
        case 0x2b233cu: goto label_2b233c;
        case 0x2b2340u: goto label_2b2340;
        case 0x2b2344u: goto label_2b2344;
        case 0x2b2348u: goto label_2b2348;
        case 0x2b234cu: goto label_2b234c;
        case 0x2b2350u: goto label_2b2350;
        case 0x2b2354u: goto label_2b2354;
        case 0x2b2358u: goto label_2b2358;
        case 0x2b235cu: goto label_2b235c;
        case 0x2b2360u: goto label_2b2360;
        case 0x2b2364u: goto label_2b2364;
        case 0x2b2368u: goto label_2b2368;
        case 0x2b236cu: goto label_2b236c;
        case 0x2b2370u: goto label_2b2370;
        case 0x2b2374u: goto label_2b2374;
        case 0x2b2378u: goto label_2b2378;
        case 0x2b237cu: goto label_2b237c;
        case 0x2b2380u: goto label_2b2380;
        case 0x2b2384u: goto label_2b2384;
        case 0x2b2388u: goto label_2b2388;
        case 0x2b238cu: goto label_2b238c;
        case 0x2b2390u: goto label_2b2390;
        case 0x2b2394u: goto label_2b2394;
        case 0x2b2398u: goto label_2b2398;
        case 0x2b239cu: goto label_2b239c;
        case 0x2b23a0u: goto label_2b23a0;
        case 0x2b23a4u: goto label_2b23a4;
        case 0x2b23a8u: goto label_2b23a8;
        case 0x2b23acu: goto label_2b23ac;
        case 0x2b23b0u: goto label_2b23b0;
        case 0x2b23b4u: goto label_2b23b4;
        case 0x2b23b8u: goto label_2b23b8;
        case 0x2b23bcu: goto label_2b23bc;
        case 0x2b23c0u: goto label_2b23c0;
        case 0x2b23c4u: goto label_2b23c4;
        case 0x2b23c8u: goto label_2b23c8;
        case 0x2b23ccu: goto label_2b23cc;
        case 0x2b23d0u: goto label_2b23d0;
        case 0x2b23d4u: goto label_2b23d4;
        case 0x2b23d8u: goto label_2b23d8;
        case 0x2b23dcu: goto label_2b23dc;
        default: break;
    }

    ctx->pc = 0x2b22d0u;

label_2b22d0:
    // 0x2b22d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b22d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b22d4:
    // 0x2b22d4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2b22d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_2b22d8:
    // 0x2b22d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b22d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2b22dc:
    // 0x2b22dc: 0x244238c0  addiu       $v0, $v0, 0x38C0
    ctx->pc = 0x2b22dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14528));
label_2b22e0:
    // 0x2b22e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b22e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2b22e4:
    // 0x2b22e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b22e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b22e8:
    // 0x2b22e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b22e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2b22ec:
    // 0x2b22ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b22ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b22f0:
    // 0x2b22f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b22f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b22f4:
    // 0x2b22f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b22f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2b22f8:
    // 0x2b22f8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2b22f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2b22fc:
    // 0x2b22fc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2b22fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2b2300:
    // 0x2b2300: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b2300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b2304:
    // 0x2b2304: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_2b2308:
    if (ctx->pc == 0x2B2308u) {
        ctx->pc = 0x2B2308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2304u;
        // 0x2b2308: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B230Cu;
        goto label_2b230c;
    }
    ctx->pc = 0x2B2304u;
    {
        const bool branch_taken_0x2b2304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2304u;
        // 0x2b2308: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2304) {
            ctx->pc = 0x2B2394u;
            goto label_2b2394;
        }
    }
    ctx->pc = 0x2B230Cu;
label_2b230c:
    // 0x2b230c: 0x2414fffb  addiu       $s4, $zero, -0x5
    ctx->pc = 0x2b230cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_2b2310:
    // 0x2b2310: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2b2310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2b2314:
    // 0x2b2314: 0x0  nop
    ctx->pc = 0x2b2314u;
    // NOP
label_2b2318:
    // 0x2b2318: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x2b2318u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2b231c:
    // 0x2b231c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2b231cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b2320:
    // 0x2b2320: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b2320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b2324:
    // 0x2b2324: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
label_2b2328:
    if (ctx->pc == 0x2B2328u) {
        ctx->pc = 0x2B2328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2324u;
        // 0x2b2328: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B232Cu;
        goto label_2b232c;
    }
    ctx->pc = 0x2B2324u;
    {
        const bool branch_taken_0x2b2324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2324) {
            ctx->pc = 0x2B2328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2324u;
            // 0x2b2328: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2384u;
            goto label_2b2384;
        }
    }
    ctx->pc = 0x2B232Cu;
label_2b232c:
    // 0x2b232c: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x2b232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_2b2330:
    // 0x2b2330: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2b2330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2b2334:
    // 0x2b2334: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_2b2338:
    if (ctx->pc == 0x2B2338u) {
        ctx->pc = 0x2B2338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2334u;
        // 0x2b2338: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B233Cu;
        goto label_2b233c;
    }
    ctx->pc = 0x2B2334u;
    {
        const bool branch_taken_0x2b2334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2334) {
            ctx->pc = 0x2B2338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2334u;
            // 0x2b2338: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2360u;
            goto label_2b2360;
        }
    }
    ctx->pc = 0x2B233Cu;
label_2b233c:
    // 0x2b233c: 0xc0844ec  jal         func_2113B0
label_2b2340:
    if (ctx->pc == 0x2B2340u) {
        ctx->pc = 0x2B2344u;
        goto label_2b2344;
    }
    ctx->pc = 0x2B233Cu;
    SET_GPR_U32(ctx, 31, 0x2B2344u);
    ctx->pc = 0x2113B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2113B0u, 0x2B233Cu, 0x2B2344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2344u;
label_2b2344:
    // 0x2b2344: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2b2344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2b2348:
    // 0x2b2348: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2b2348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b234c:
    // 0x2b234c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b234cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b2350:
    // 0x2b2350: 0x8c8300c0  lw          $v1, 0xC0($a0)
    ctx->pc = 0x2b2350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_2b2354:
    // 0x2b2354: 0x741824  and         $v1, $v1, $s4
    ctx->pc = 0x2b2354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
label_2b2358:
    // 0x2b2358: 0xac8300c0  sw          $v1, 0xC0($a0)
    ctx->pc = 0x2b2358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 3));
label_2b235c:
    // 0x2b235c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2b235cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2b2360:
    // 0x2b2360: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2b2360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b2364:
    // 0x2b2364: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b2364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b2368:
    // 0x2b2368: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2b236c:
    if (ctx->pc == 0x2B236Cu) {
        ctx->pc = 0x2B236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2368u;
        // 0x2b236c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2370u;
        goto label_2b2370;
    }
    ctx->pc = 0x2B2368u;
    {
        const bool branch_taken_0x2b2368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2368) {
            ctx->pc = 0x2B236Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2368u;
            // 0x2b236c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2384u;
            goto label_2b2384;
        }
    }
    ctx->pc = 0x2B2370u;
label_2b2370:
    // 0x2b2370: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2b2370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2b2374:
    // 0x2b2374: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2b2374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2b2378:
    // 0x2b2378: 0x40f809  jalr        $v0
label_2b237c:
    if (ctx->pc == 0x2B237Cu) {
        ctx->pc = 0x2B237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2378u;
        // 0x2b237c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2380u;
        goto label_2b2380;
    }
    ctx->pc = 0x2B2378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B2380u);
        ctx->pc = 0x2B237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2378u;
        // 0x2b237c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2378u, 0x2B2380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B2380u;
label_2b2380:
    // 0x2b2380: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b2380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b2384:
    // 0x2b2384: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b2384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b2388:
    // 0x2b2388: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2b2388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b238c:
    // 0x2b238c: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
label_2b2390:
    if (ctx->pc == 0x2B2390u) {
        ctx->pc = 0x2B2390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B238Cu;
        // 0x2b2390: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2394u;
        goto label_2b2394;
    }
    ctx->pc = 0x2B238Cu;
    {
        const bool branch_taken_0x2b238c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b238c) {
            ctx->pc = 0x2B2390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B238Cu;
            // 0x2b2390: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2318;
        }
    }
    ctx->pc = 0x2B2394u;
label_2b2394:
    // 0x2b2394: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2b2394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2b2398:
    // 0x2b2398: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2b239c:
    if (ctx->pc == 0x2B239Cu) {
        ctx->pc = 0x2B239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2398u;
        // 0x2b239c: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B23A0u;
        goto label_2b23a0;
    }
    ctx->pc = 0x2B2398u;
    {
        const bool branch_taken_0x2b2398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2398u;
        // 0x2b239c: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2398) {
            ctx->pc = 0x2B23ACu;
            goto label_2b23ac;
        }
    }
    ctx->pc = 0x2B23A0u;
label_2b23a0:
    // 0x2b23a0: 0xc0f528a  jal         func_3D4A28
label_2b23a4:
    if (ctx->pc == 0x2B23A4u) {
        ctx->pc = 0x2B23A8u;
        goto label_2b23a8;
    }
    ctx->pc = 0x2B23A0u;
    SET_GPR_U32(ctx, 31, 0x2B23A8u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2B23A0u, 0x2B23A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B23A8u;
label_2b23a8:
    // 0x2b23a8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2b23a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_2b23ac:
    // 0x2b23ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b23b0:
    if (ctx->pc == 0x2B23B0u) {
        ctx->pc = 0x2B23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23ACu;
        // 0x2b23b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B23B4u;
        goto label_2b23b4;
    }
    ctx->pc = 0x2B23ACu;
    {
        const bool branch_taken_0x2b23ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23ACu;
        // 0x2b23b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b23ac) {
            ctx->pc = 0x2B23C0u;
            goto label_2b23c0;
        }
    }
    ctx->pc = 0x2B23B4u;
label_2b23b4:
    // 0x2b23b4: 0xc0f5222  jal         func_3D4888
label_2b23b8:
    if (ctx->pc == 0x2B23B8u) {
        ctx->pc = 0x2B23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23B4u;
        // 0x2b23b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B23BCu;
        goto label_2b23bc;
    }
    ctx->pc = 0x2B23B4u;
    SET_GPR_U32(ctx, 31, 0x2B23BCu);
    ctx->pc = 0x2B23B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B23B4u;
    // 0x2b23b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2B23B4u, 0x2B23BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B23BCu;
label_2b23bc:
    // 0x2b23bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b23bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b23c0:
    // 0x2b23c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b23c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2b23c4:
    // 0x2b23c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b23c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b23c8:
    // 0x2b23c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b23c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2b23cc:
    // 0x2b23cc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b23ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b23d0:
    // 0x2b23d0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b23d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2b23d4:
    // 0x2b23d4: 0x3e00008  jr          $ra
label_2b23d8:
    if (ctx->pc == 0x2B23D8u) {
        ctx->pc = 0x2B23D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23D4u;
        // 0x2b23d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B23DCu;
        goto label_2b23dc;
    }
    ctx->pc = 0x2B23D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B23D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23D4u;
        // 0x2b23d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B23D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B23DCu;
label_2b23dc:
    // 0x2b23dc: 0x0  nop
    ctx->pc = 0x2b23dcu;
    // NOP
    ctx->pc = 0x2b23e0u;
}
