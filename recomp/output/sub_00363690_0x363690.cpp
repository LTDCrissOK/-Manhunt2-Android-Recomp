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

// Function: sub_00363690
// Address: 0x363690 - 0x363788
void sub_00363690_0x363690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363690_0x363690");
#endif

    switch (ctx->pc) {
        case 0x363690u: goto label_363690;
        case 0x363694u: goto label_363694;
        case 0x363698u: goto label_363698;
        case 0x36369cu: goto label_36369c;
        case 0x3636a0u: goto label_3636a0;
        case 0x3636a4u: goto label_3636a4;
        case 0x3636a8u: goto label_3636a8;
        case 0x3636acu: goto label_3636ac;
        case 0x3636b0u: goto label_3636b0;
        case 0x3636b4u: goto label_3636b4;
        case 0x3636b8u: goto label_3636b8;
        case 0x3636bcu: goto label_3636bc;
        case 0x3636c0u: goto label_3636c0;
        case 0x3636c4u: goto label_3636c4;
        case 0x3636c8u: goto label_3636c8;
        case 0x3636ccu: goto label_3636cc;
        case 0x3636d0u: goto label_3636d0;
        case 0x3636d4u: goto label_3636d4;
        case 0x3636d8u: goto label_3636d8;
        case 0x3636dcu: goto label_3636dc;
        case 0x3636e0u: goto label_3636e0;
        case 0x3636e4u: goto label_3636e4;
        case 0x3636e8u: goto label_3636e8;
        case 0x3636ecu: goto label_3636ec;
        case 0x3636f0u: goto label_3636f0;
        case 0x3636f4u: goto label_3636f4;
        case 0x3636f8u: goto label_3636f8;
        case 0x3636fcu: goto label_3636fc;
        case 0x363700u: goto label_363700;
        case 0x363704u: goto label_363704;
        case 0x363708u: goto label_363708;
        case 0x36370cu: goto label_36370c;
        case 0x363710u: goto label_363710;
        case 0x363714u: goto label_363714;
        case 0x363718u: goto label_363718;
        case 0x36371cu: goto label_36371c;
        case 0x363720u: goto label_363720;
        case 0x363724u: goto label_363724;
        case 0x363728u: goto label_363728;
        case 0x36372cu: goto label_36372c;
        case 0x363730u: goto label_363730;
        case 0x363734u: goto label_363734;
        case 0x363738u: goto label_363738;
        case 0x36373cu: goto label_36373c;
        case 0x363740u: goto label_363740;
        case 0x363744u: goto label_363744;
        case 0x363748u: goto label_363748;
        case 0x36374cu: goto label_36374c;
        case 0x363750u: goto label_363750;
        case 0x363754u: goto label_363754;
        case 0x363758u: goto label_363758;
        case 0x36375cu: goto label_36375c;
        case 0x363760u: goto label_363760;
        case 0x363764u: goto label_363764;
        case 0x363768u: goto label_363768;
        case 0x36376cu: goto label_36376c;
        case 0x363770u: goto label_363770;
        case 0x363774u: goto label_363774;
        case 0x363778u: goto label_363778;
        case 0x36377cu: goto label_36377c;
        case 0x363780u: goto label_363780;
        case 0x363784u: goto label_363784;
        default: break;
    }

    ctx->pc = 0x363690u;

label_363690:
    // 0x363690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x363690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_363694:
    // 0x363694: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x363694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_363698:
    // 0x363698: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x363698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_36369c:
    // 0x36369c: 0x24424668  addiu       $v0, $v0, 0x4668
    ctx->pc = 0x36369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18024));
label_3636a0:
    // 0x3636a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3636a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_3636a4:
    // 0x3636a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3636a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3636a8:
    // 0x3636a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3636a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3636ac:
    // 0x3636ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3636acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3636b0:
    // 0x3636b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3636b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3636b4:
    // 0x3636b4: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x3636b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
label_3636b8:
    // 0x3636b8: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x3636b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_3636bc:
    // 0x3636bc: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_3636c0:
    if (ctx->pc == 0x3636C0u) {
        ctx->pc = 0x3636C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3636BCu;
        // 0x3636c0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3636C4u;
        goto label_3636c4;
    }
    ctx->pc = 0x3636BCu;
    {
        const bool branch_taken_0x3636bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3636C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3636BCu;
        // 0x3636c0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3636bc) {
            ctx->pc = 0x363754u;
            goto label_363754;
        }
    }
    ctx->pc = 0x3636C4u;
label_3636c4:
    // 0x3636c4: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_3636c8:
    if (ctx->pc == 0x3636C8u) {
        ctx->pc = 0x3636C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3636C4u;
        // 0x3636c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3636CCu;
        goto label_3636cc;
    }
    ctx->pc = 0x3636C4u;
    {
        const bool branch_taken_0x3636c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3636C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3636C4u;
        // 0x3636c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3636c4) {
            ctx->pc = 0x363740u;
            goto label_363740;
        }
    }
    ctx->pc = 0x3636CCu;
label_3636cc:
    // 0x3636cc: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x3636ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3636d0:
    // 0x3636d0: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x3636d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3636d4:
    // 0x3636d4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3636d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3636d8:
    // 0x3636d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3636d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3636dc:
    // 0x3636dc: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
label_3636e0:
    if (ctx->pc == 0x3636E0u) {
        ctx->pc = 0x3636E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3636DCu;
        // 0x3636e0: 0x8e42003c  lw          $v0, 0x3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3636E4u;
        goto label_3636e4;
    }
    ctx->pc = 0x3636DCu;
    {
        const bool branch_taken_0x3636dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3636dc) {
            ctx->pc = 0x3636E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3636DCu;
            // 0x3636e0: 0x8e42003c  lw          $v0, 0x3C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363730u;
            goto label_363730;
        }
    }
    ctx->pc = 0x3636E4u;
label_3636e4:
    // 0x3636e4: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x3636e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3636e8:
    // 0x3636e8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3636e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3636ec:
    // 0x3636ec: 0x40f809  jalr        $v0
label_3636f0:
    if (ctx->pc == 0x3636F0u) {
        ctx->pc = 0x3636F4u;
        goto label_3636f4;
    }
    ctx->pc = 0x3636ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3636F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3636ECu, 0x3636F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3636F4u;
label_3636f4:
    // 0x3636f4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_3636f8:
    if (ctx->pc == 0x3636F8u) {
        ctx->pc = 0x3636F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3636F4u;
        // 0x3636f8: 0x8e42003c  lw          $v0, 0x3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3636FCu;
        goto label_3636fc;
    }
    ctx->pc = 0x3636F4u;
    {
        const bool branch_taken_0x3636f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3636f4) {
            ctx->pc = 0x3636F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3636F4u;
            // 0x3636f8: 0x8e42003c  lw          $v0, 0x3C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363730u;
            goto label_363730;
        }
    }
    ctx->pc = 0x3636FCu;
label_3636fc:
    // 0x3636fc: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x3636fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_363700:
    // 0x363700: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x363700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_363704:
    // 0x363704: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x363704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_363708:
    // 0x363708: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_36370c:
    if (ctx->pc == 0x36370Cu) {
        ctx->pc = 0x36370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363708u;
        // 0x36370c: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363710u;
        goto label_363710;
    }
    ctx->pc = 0x363708u;
    {
        const bool branch_taken_0x363708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x363708) {
            ctx->pc = 0x36370Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363708u;
            // 0x36370c: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363724u;
            goto label_363724;
        }
    }
    ctx->pc = 0x363710u;
label_363710:
    // 0x363710: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x363710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_363714:
    // 0x363714: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x363714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_363718:
    // 0x363718: 0x40f809  jalr        $v0
label_36371c:
    if (ctx->pc == 0x36371Cu) {
        ctx->pc = 0x36371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363718u;
        // 0x36371c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363720u;
        goto label_363720;
    }
    ctx->pc = 0x363718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x363720u);
        ctx->pc = 0x36371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363718u;
        // 0x36371c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363718u, 0x363720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x363720u;
label_363720:
    // 0x363720: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x363720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_363724:
    // 0x363724: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x363724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_363728:
    // 0x363728: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x363728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_36372c:
    // 0x36372c: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x36372cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_363730:
    // 0x363730: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x363730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_363734:
    // 0x363734: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x363734u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_363738:
    // 0x363738: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
label_36373c:
    if (ctx->pc == 0x36373Cu) {
        ctx->pc = 0x36373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363738u;
        // 0x36373c: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363740u;
        goto label_363740;
    }
    ctx->pc = 0x363738u;
    {
        const bool branch_taken_0x363738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x363738) {
            ctx->pc = 0x36373Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363738u;
            // 0x36373c: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3636D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3636d0;
        }
    }
    ctx->pc = 0x363740u;
label_363740:
    // 0x363740: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x363740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_363744:
    // 0x363744: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_363748:
    if (ctx->pc == 0x363748u) {
        ctx->pc = 0x363748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363744u;
        // 0x363748: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x36374Cu;
        goto label_36374c;
    }
    ctx->pc = 0x363744u;
    {
        const bool branch_taken_0x363744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x363748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363744u;
        // 0x363748: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x363744) {
            ctx->pc = 0x363758u;
            goto label_363758;
        }
    }
    ctx->pc = 0x36374Cu;
label_36374c:
    // 0x36374c: 0xc0f528a  jal         func_3D4A28
label_363750:
    if (ctx->pc == 0x363750u) {
        ctx->pc = 0x363754u;
        goto label_363754;
    }
    ctx->pc = 0x36374Cu;
    SET_GPR_U32(ctx, 31, 0x363754u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x36374Cu, 0x363754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363754u;
label_363754:
    // 0x363754: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x363754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_363758:
    // 0x363758: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_36375c:
    if (ctx->pc == 0x36375Cu) {
        ctx->pc = 0x36375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363758u;
        // 0x36375c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363760u;
        goto label_363760;
    }
    ctx->pc = 0x363758u;
    {
        const bool branch_taken_0x363758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363758u;
        // 0x36375c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363758) {
            ctx->pc = 0x36376Cu;
            goto label_36376c;
        }
    }
    ctx->pc = 0x363760u;
label_363760:
    // 0x363760: 0xc0f5222  jal         func_3D4888
label_363764:
    if (ctx->pc == 0x363764u) {
        ctx->pc = 0x363764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363760u;
        // 0x363764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363768u;
        goto label_363768;
    }
    ctx->pc = 0x363760u;
    SET_GPR_U32(ctx, 31, 0x363768u);
    ctx->pc = 0x363764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363760u;
    // 0x363764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x363760u, 0x363768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363768u;
label_363768:
    // 0x363768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x363768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36376c:
    // 0x36376c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36376cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_363770:
    // 0x363770: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x363770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_363774:
    // 0x363774: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x363774u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_363778:
    // 0x363778: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x363778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_36377c:
    // 0x36377c: 0x3e00008  jr          $ra
label_363780:
    if (ctx->pc == 0x363780u) {
        ctx->pc = 0x363780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36377Cu;
        // 0x363780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363784u;
        goto label_363784;
    }
    ctx->pc = 0x36377Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36377Cu;
        // 0x363780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36377Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363784u;
label_363784:
    // 0x363784: 0x0  nop
    ctx->pc = 0x363784u;
    // NOP
    ctx->pc = 0x363788u;
}
