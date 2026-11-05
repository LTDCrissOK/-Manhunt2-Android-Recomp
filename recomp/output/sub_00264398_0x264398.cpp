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

// Function: sub_00264398
// Address: 0x264398 - 0x2644d0
void sub_00264398_0x264398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264398_0x264398");
#endif

    switch (ctx->pc) {
        case 0x264398u: goto label_264398;
        case 0x26439cu: goto label_26439c;
        case 0x2643a0u: goto label_2643a0;
        case 0x2643a4u: goto label_2643a4;
        case 0x2643a8u: goto label_2643a8;
        case 0x2643acu: goto label_2643ac;
        case 0x2643b0u: goto label_2643b0;
        case 0x2643b4u: goto label_2643b4;
        case 0x2643b8u: goto label_2643b8;
        case 0x2643bcu: goto label_2643bc;
        case 0x2643c0u: goto label_2643c0;
        case 0x2643c4u: goto label_2643c4;
        case 0x2643c8u: goto label_2643c8;
        case 0x2643ccu: goto label_2643cc;
        case 0x2643d0u: goto label_2643d0;
        case 0x2643d4u: goto label_2643d4;
        case 0x2643d8u: goto label_2643d8;
        case 0x2643dcu: goto label_2643dc;
        case 0x2643e0u: goto label_2643e0;
        case 0x2643e4u: goto label_2643e4;
        case 0x2643e8u: goto label_2643e8;
        case 0x2643ecu: goto label_2643ec;
        case 0x2643f0u: goto label_2643f0;
        case 0x2643f4u: goto label_2643f4;
        case 0x2643f8u: goto label_2643f8;
        case 0x2643fcu: goto label_2643fc;
        case 0x264400u: goto label_264400;
        case 0x264404u: goto label_264404;
        case 0x264408u: goto label_264408;
        case 0x26440cu: goto label_26440c;
        case 0x264410u: goto label_264410;
        case 0x264414u: goto label_264414;
        case 0x264418u: goto label_264418;
        case 0x26441cu: goto label_26441c;
        case 0x264420u: goto label_264420;
        case 0x264424u: goto label_264424;
        case 0x264428u: goto label_264428;
        case 0x26442cu: goto label_26442c;
        case 0x264430u: goto label_264430;
        case 0x264434u: goto label_264434;
        case 0x264438u: goto label_264438;
        case 0x26443cu: goto label_26443c;
        case 0x264440u: goto label_264440;
        case 0x264444u: goto label_264444;
        case 0x264448u: goto label_264448;
        case 0x26444cu: goto label_26444c;
        case 0x264450u: goto label_264450;
        case 0x264454u: goto label_264454;
        case 0x264458u: goto label_264458;
        case 0x26445cu: goto label_26445c;
        case 0x264460u: goto label_264460;
        case 0x264464u: goto label_264464;
        case 0x264468u: goto label_264468;
        case 0x26446cu: goto label_26446c;
        case 0x264470u: goto label_264470;
        case 0x264474u: goto label_264474;
        case 0x264478u: goto label_264478;
        case 0x26447cu: goto label_26447c;
        case 0x264480u: goto label_264480;
        case 0x264484u: goto label_264484;
        case 0x264488u: goto label_264488;
        case 0x26448cu: goto label_26448c;
        case 0x264490u: goto label_264490;
        case 0x264494u: goto label_264494;
        case 0x264498u: goto label_264498;
        case 0x26449cu: goto label_26449c;
        case 0x2644a0u: goto label_2644a0;
        case 0x2644a4u: goto label_2644a4;
        case 0x2644a8u: goto label_2644a8;
        case 0x2644acu: goto label_2644ac;
        case 0x2644b0u: goto label_2644b0;
        case 0x2644b4u: goto label_2644b4;
        case 0x2644b8u: goto label_2644b8;
        case 0x2644bcu: goto label_2644bc;
        case 0x2644c0u: goto label_2644c0;
        case 0x2644c4u: goto label_2644c4;
        case 0x2644c8u: goto label_2644c8;
        case 0x2644ccu: goto label_2644cc;
        default: break;
    }

    ctx->pc = 0x264398u;

label_264398:
    // 0x264398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x264398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_26439c:
    // 0x26439c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26439cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2643a0:
    // 0x2643a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2643a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2643a4:
    // 0x2643a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2643a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2643a8:
    // 0x2643a8: 0xc09835e  jal         func_260D78
label_2643ac:
    if (ctx->pc == 0x2643ACu) {
        ctx->pc = 0x2643ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643A8u;
        // 0x2643ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2643B0u;
        goto label_2643b0;
    }
    ctx->pc = 0x2643A8u;
    SET_GPR_U32(ctx, 31, 0x2643B0u);
    ctx->pc = 0x2643ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2643A8u;
    // 0x2643ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260D78u, 0x2643A8u, 0x2643B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2643B0u;
label_2643b0:
    // 0x2643b0: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x2643b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_2643b4:
    // 0x2643b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2643b8:
    if (ctx->pc == 0x2643B8u) {
        ctx->pc = 0x2643B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643B4u;
        // 0x2643b8: 0x8e040278  lw          $a0, 0x278($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2643BCu;
        goto label_2643bc;
    }
    ctx->pc = 0x2643B4u;
    {
        const bool branch_taken_0x2643b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2643b4) {
            ctx->pc = 0x2643B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2643B4u;
            // 0x2643b8: 0x8e040278  lw          $a0, 0x278($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2643D0u;
            goto label_2643d0;
        }
    }
    ctx->pc = 0x2643BCu;
label_2643bc:
    // 0x2643bc: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2643bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2643c0:
    // 0x2643c0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2643c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2643c4:
    // 0x2643c4: 0x40f809  jalr        $v0
label_2643c8:
    if (ctx->pc == 0x2643C8u) {
        ctx->pc = 0x2643C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643C4u;
        // 0x2643c8: 0x8e050234  lw          $a1, 0x234($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2643CCu;
        goto label_2643cc;
    }
    ctx->pc = 0x2643C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2643CCu);
        ctx->pc = 0x2643C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643C4u;
        // 0x2643c8: 0x8e050234  lw          $a1, 0x234($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2643C4u, 0x2643CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2643CCu;
label_2643cc:
    // 0x2643cc: 0x8e040278  lw          $a0, 0x278($s0)
    ctx->pc = 0x2643ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_2643d0:
    // 0x2643d0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2643d4:
    if (ctx->pc == 0x2643D4u) {
        ctx->pc = 0x2643D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643D0u;
        // 0x2643d4: 0x8e04027c  lw          $a0, 0x27C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2643D8u;
        goto label_2643d8;
    }
    ctx->pc = 0x2643D0u;
    {
        const bool branch_taken_0x2643d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2643d0) {
            ctx->pc = 0x2643D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2643D0u;
            // 0x2643d4: 0x8e04027c  lw          $a0, 0x27C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2643ECu;
            goto label_2643ec;
        }
    }
    ctx->pc = 0x2643D8u;
label_2643d8:
    // 0x2643d8: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2643d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2643dc:
    // 0x2643dc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2643dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2643e0:
    // 0x2643e0: 0x40f809  jalr        $v0
label_2643e4:
    if (ctx->pc == 0x2643E4u) {
        ctx->pc = 0x2643E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643E0u;
        // 0x2643e4: 0x8e050234  lw          $a1, 0x234($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2643E8u;
        goto label_2643e8;
    }
    ctx->pc = 0x2643E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2643E8u);
        ctx->pc = 0x2643E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643E0u;
        // 0x2643e4: 0x8e050234  lw          $a1, 0x234($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2643E0u, 0x2643E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2643E8u;
label_2643e8:
    // 0x2643e8: 0x8e04027c  lw          $a0, 0x27C($s0)
    ctx->pc = 0x2643e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
label_2643ec:
    // 0x2643ec: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2643f0:
    if (ctx->pc == 0x2643F0u) {
        ctx->pc = 0x2643F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643ECu;
        // 0x2643f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2643F4u;
        goto label_2643f4;
    }
    ctx->pc = 0x2643ECu;
    {
        const bool branch_taken_0x2643ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2643ec) {
            ctx->pc = 0x2643F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2643ECu;
            // 0x2643f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264408u;
            goto label_264408;
        }
    }
    ctx->pc = 0x2643F4u;
label_2643f4:
    // 0x2643f4: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2643f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2643f8:
    // 0x2643f8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2643f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2643fc:
    // 0x2643fc: 0x40f809  jalr        $v0
label_264400:
    if (ctx->pc == 0x264400u) {
        ctx->pc = 0x264400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643FCu;
        // 0x264400: 0x8e050234  lw          $a1, 0x234($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264404u;
        goto label_264404;
    }
    ctx->pc = 0x2643FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x264404u);
        ctx->pc = 0x264400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2643FCu;
        // 0x264400: 0x8e050234  lw          $a1, 0x234($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2643FCu, 0x264404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x264404u;
label_264404:
    // 0x264404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x264404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_264408:
    // 0x264408: 0xc097f26  jal         func_25FC98
label_26440c:
    if (ctx->pc == 0x26440Cu) {
        ctx->pc = 0x26440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264408u;
        // 0x26440c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264410u;
        goto label_264410;
    }
    ctx->pc = 0x264408u;
    SET_GPR_U32(ctx, 31, 0x264410u);
    ctx->pc = 0x26440Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264408u;
    // 0x26440c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x264408u, 0x264410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264410u;
label_264410:
    // 0x264410: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x264410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_264414:
    // 0x264414: 0x5043000b  beql        $v0, $v1, . + 4 + (0xB << 2)
label_264418:
    if (ctx->pc == 0x264418u) {
        ctx->pc = 0x264418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264414u;
        // 0x264418: 0x8e020298  lw          $v0, 0x298($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26441Cu;
        goto label_26441c;
    }
    ctx->pc = 0x264414u;
    {
        const bool branch_taken_0x264414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x264414) {
            ctx->pc = 0x264418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264414u;
            // 0x264418: 0x8e020298  lw          $v0, 0x298($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264444u;
            goto label_264444;
        }
    }
    ctx->pc = 0x26441Cu;
label_26441c:
    // 0x26441c: 0xc097f26  jal         func_25FC98
label_264420:
    if (ctx->pc == 0x264420u) {
        ctx->pc = 0x264420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26441Cu;
        // 0x264420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264424u;
        goto label_264424;
    }
    ctx->pc = 0x26441Cu;
    SET_GPR_U32(ctx, 31, 0x264424u);
    ctx->pc = 0x264420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26441Cu;
    // 0x264420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x26441Cu, 0x264424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264424u;
label_264424:
    // 0x264424: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x264424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_264428:
    // 0x264428: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
label_26442c:
    if (ctx->pc == 0x26442Cu) {
        ctx->pc = 0x26442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264428u;
        // 0x26442c: 0x8e020298  lw          $v0, 0x298($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264430u;
        goto label_264430;
    }
    ctx->pc = 0x264428u;
    {
        const bool branch_taken_0x264428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x264428) {
            ctx->pc = 0x26442Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264428u;
            // 0x26442c: 0x8e020298  lw          $v0, 0x298($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264444u;
            goto label_264444;
        }
    }
    ctx->pc = 0x264430u;
label_264430:
    // 0x264430: 0xc097f26  jal         func_25FC98
label_264434:
    if (ctx->pc == 0x264434u) {
        ctx->pc = 0x264434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264430u;
        // 0x264434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264438u;
        goto label_264438;
    }
    ctx->pc = 0x264430u;
    SET_GPR_U32(ctx, 31, 0x264438u);
    ctx->pc = 0x264434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264430u;
    // 0x264434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x264430u, 0x264438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264438u;
label_264438:
    // 0x264438: 0x38420083  xori        $v0, $v0, 0x83
    ctx->pc = 0x264438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)131);
label_26443c:
    // 0x26443c: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x26443cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_264440:
    // 0x264440: 0x8e020298  lw          $v0, 0x298($s0)
    ctx->pc = 0x264440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_264444:
    // 0x264444: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_264448:
    if (ctx->pc == 0x264448u) {
        ctx->pc = 0x264448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264444u;
        // 0x264448: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26444Cu;
        goto label_26444c;
    }
    ctx->pc = 0x264444u;
    {
        const bool branch_taken_0x264444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264444) {
            ctx->pc = 0x264448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264444u;
            // 0x264448: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2644C0u;
            goto label_2644c0;
        }
    }
    ctx->pc = 0x26444Cu;
label_26444c:
    // 0x26444c: 0x8e02028c  lw          $v0, 0x28C($s0)
    ctx->pc = 0x26444cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
label_264450:
    // 0x264450: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_264454:
    if (ctx->pc == 0x264454u) {
        ctx->pc = 0x264454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264450u;
        // 0x264454: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264458u;
        goto label_264458;
    }
    ctx->pc = 0x264450u;
    {
        const bool branch_taken_0x264450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264450) {
            ctx->pc = 0x264454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264450u;
            // 0x264454: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2644C0u;
            goto label_2644c0;
        }
    }
    ctx->pc = 0x264458u;
label_264458:
    // 0x264458: 0x52200019  beql        $s1, $zero, . + 4 + (0x19 << 2)
label_26445c:
    if (ctx->pc == 0x26445Cu) {
        ctx->pc = 0x26445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264458u;
        // 0x26445c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264460u;
        goto label_264460;
    }
    ctx->pc = 0x264458u;
    {
        const bool branch_taken_0x264458 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x264458) {
            ctx->pc = 0x26445Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264458u;
            // 0x26445c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2644C0u;
            goto label_2644c0;
        }
    }
    ctx->pc = 0x264460u;
label_264460:
    // 0x264460: 0xc0f5240  jal         func_3D4900
label_264464:
    if (ctx->pc == 0x264464u) {
        ctx->pc = 0x264464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264460u;
        // 0x264464: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264468u;
        goto label_264468;
    }
    ctx->pc = 0x264460u;
    SET_GPR_U32(ctx, 31, 0x264468u);
    ctx->pc = 0x264464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264460u;
    // 0x264464: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x264460u, 0x264468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264468u;
label_264468:
    // 0x264468: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x264468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26446c:
    // 0x26446c: 0xc0c49dc  jal         func_312770
label_264470:
    if (ctx->pc == 0x264470u) {
        ctx->pc = 0x264470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26446Cu;
        // 0x264470: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264474u;
        goto label_264474;
    }
    ctx->pc = 0x26446Cu;
    SET_GPR_U32(ctx, 31, 0x264474u);
    ctx->pc = 0x264470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26446Cu;
    // 0x264470: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312770u, 0x26446Cu, 0x264474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264474u;
label_264474:
    // 0x264474: 0xae020298  sw          $v0, 0x298($s0)
    ctx->pc = 0x264474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 2));
label_264478:
    // 0x264478: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x264478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_26447c:
    // 0x26447c: 0x3484fffc  ori         $a0, $a0, 0xFFFC
    ctx->pc = 0x26447cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65532);
label_264480:
    // 0x264480: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x264480u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_264484:
    // 0x264484: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x264484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_264488:
    // 0x264488: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x264488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26448c:
    // 0x26448c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x26448cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_264490:
    // 0x264490: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x264490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_264494:
    // 0x264494: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x264494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_264498:
    // 0x264498: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x264498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_26449c:
    // 0x26449c: 0x8e020298  lw          $v0, 0x298($s0)
    ctx->pc = 0x26449cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_2644a0:
    // 0x2644a0: 0xacc5bce4  sw          $a1, -0x431C($a2)
    ctx->pc = 0x2644a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294950116), GPR_U32(ctx, 5));
label_2644a4:
    // 0x2644a4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2644a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_2644a8:
    // 0x2644a8: 0x8e03028c  lw          $v1, 0x28C($s0)
    ctx->pc = 0x2644a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
label_2644ac:
    // 0x2644ac: 0x8e040298  lw          $a0, 0x298($s0)
    ctx->pc = 0x2644acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
label_2644b0:
    // 0x2644b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2644b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2644b4:
    // 0x2644b4: 0xacc5bce4  sw          $a1, -0x431C($a2)
    ctx->pc = 0x2644b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294950116), GPR_U32(ctx, 5));
label_2644b8:
    // 0x2644b8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2644b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2644bc:
    // 0x2644bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2644bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2644c0:
    // 0x2644c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2644c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2644c4:
    // 0x2644c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2644c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2644c8:
    // 0x2644c8: 0x3e00008  jr          $ra
label_2644cc:
    if (ctx->pc == 0x2644CCu) {
        ctx->pc = 0x2644CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644C8u;
        // 0x2644cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2644D0u;
        goto label_fallthrough_0x2644c8;
    }
    ctx->pc = 0x2644C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2644CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644C8u;
        // 0x2644cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2644C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2644c8:
    ctx->pc = 0x2644D0u;
}
