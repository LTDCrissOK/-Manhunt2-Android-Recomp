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

// Function: sub_00225780
// Address: 0x225780 - 0x225878
void sub_00225780_0x225780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225780_0x225780");
#endif

    switch (ctx->pc) {
        case 0x225780u: goto label_225780;
        case 0x225784u: goto label_225784;
        case 0x225788u: goto label_225788;
        case 0x22578cu: goto label_22578c;
        case 0x225790u: goto label_225790;
        case 0x225794u: goto label_225794;
        case 0x225798u: goto label_225798;
        case 0x22579cu: goto label_22579c;
        case 0x2257a0u: goto label_2257a0;
        case 0x2257a4u: goto label_2257a4;
        case 0x2257a8u: goto label_2257a8;
        case 0x2257acu: goto label_2257ac;
        case 0x2257b0u: goto label_2257b0;
        case 0x2257b4u: goto label_2257b4;
        case 0x2257b8u: goto label_2257b8;
        case 0x2257bcu: goto label_2257bc;
        case 0x2257c0u: goto label_2257c0;
        case 0x2257c4u: goto label_2257c4;
        case 0x2257c8u: goto label_2257c8;
        case 0x2257ccu: goto label_2257cc;
        case 0x2257d0u: goto label_2257d0;
        case 0x2257d4u: goto label_2257d4;
        case 0x2257d8u: goto label_2257d8;
        case 0x2257dcu: goto label_2257dc;
        case 0x2257e0u: goto label_2257e0;
        case 0x2257e4u: goto label_2257e4;
        case 0x2257e8u: goto label_2257e8;
        case 0x2257ecu: goto label_2257ec;
        case 0x2257f0u: goto label_2257f0;
        case 0x2257f4u: goto label_2257f4;
        case 0x2257f8u: goto label_2257f8;
        case 0x2257fcu: goto label_2257fc;
        case 0x225800u: goto label_225800;
        case 0x225804u: goto label_225804;
        case 0x225808u: goto label_225808;
        case 0x22580cu: goto label_22580c;
        case 0x225810u: goto label_225810;
        case 0x225814u: goto label_225814;
        case 0x225818u: goto label_225818;
        case 0x22581cu: goto label_22581c;
        case 0x225820u: goto label_225820;
        case 0x225824u: goto label_225824;
        case 0x225828u: goto label_225828;
        case 0x22582cu: goto label_22582c;
        case 0x225830u: goto label_225830;
        case 0x225834u: goto label_225834;
        case 0x225838u: goto label_225838;
        case 0x22583cu: goto label_22583c;
        case 0x225840u: goto label_225840;
        case 0x225844u: goto label_225844;
        case 0x225848u: goto label_225848;
        case 0x22584cu: goto label_22584c;
        case 0x225850u: goto label_225850;
        case 0x225854u: goto label_225854;
        case 0x225858u: goto label_225858;
        case 0x22585cu: goto label_22585c;
        case 0x225860u: goto label_225860;
        case 0x225864u: goto label_225864;
        case 0x225868u: goto label_225868;
        case 0x22586cu: goto label_22586c;
        case 0x225870u: goto label_225870;
        case 0x225874u: goto label_225874;
        default: break;
    }

    ctx->pc = 0x225780u;

label_225780:
    // 0x225780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_225784:
    // 0x225784: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x225784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_225788:
    // 0x225788: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x225788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_22578c:
    // 0x22578c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22578cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_225790:
    // 0x225790: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x225790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_225794:
    // 0x225794: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x225794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_225798:
    // 0x225798: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x225798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22579c:
    // 0x22579c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22579cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2257a0:
    // 0x2257a0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2257a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2257a4:
    // 0x2257a4: 0xc0d7384  jal         func_35CE10
label_2257a8:
    if (ctx->pc == 0x2257A8u) {
        ctx->pc = 0x2257A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2257A4u;
        // 0x2257a8: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2257ACu;
        goto label_2257ac;
    }
    ctx->pc = 0x2257A4u;
    SET_GPR_U32(ctx, 31, 0x2257ACu);
    ctx->pc = 0x2257A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2257A4u;
    // 0x2257a8: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x2257A4u, 0x2257ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2257ACu;
label_2257ac:
    // 0x2257ac: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2257acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2257b0:
    // 0x2257b0: 0xc097c12  jal         func_25F048
label_2257b4:
    if (ctx->pc == 0x2257B4u) {
        ctx->pc = 0x2257B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2257B0u;
        // 0x2257b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2257B8u;
        goto label_2257b8;
    }
    ctx->pc = 0x2257B0u;
    SET_GPR_U32(ctx, 31, 0x2257B8u);
    ctx->pc = 0x2257B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2257B0u;
    // 0x2257b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F048u, 0x2257B0u, 0x2257B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2257B8u;
label_2257b8:
    // 0x2257b8: 0xc085d2a  jal         func_2174A8
label_2257bc:
    if (ctx->pc == 0x2257BCu) {
        ctx->pc = 0x2257BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2257B8u;
        // 0x2257bc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2257C0u;
        goto label_2257c0;
    }
    ctx->pc = 0x2257B8u;
    SET_GPR_U32(ctx, 31, 0x2257C0u);
    ctx->pc = 0x2257BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2257B8u;
    // 0x2257bc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x2257B8u, 0x2257C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2257C0u;
label_2257c0:
    // 0x2257c0: 0xc083072  jal         func_20C1C8
label_2257c4:
    if (ctx->pc == 0x2257C4u) {
        ctx->pc = 0x2257C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2257C0u;
        // 0x2257c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2257C8u;
        goto label_2257c8;
    }
    ctx->pc = 0x2257C0u;
    SET_GPR_U32(ctx, 31, 0x2257C8u);
    ctx->pc = 0x2257C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2257C0u;
    // 0x2257c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x2257C0u, 0x2257C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2257C8u;
label_2257c8:
    // 0x2257c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2257c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2257cc:
    // 0x2257cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2257ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2257d0:
    // 0x2257d0: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2257d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2257d4:
    // 0x2257d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2257d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2257d8:
    // 0x2257d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2257d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2257dc:
    // 0x2257dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2257dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2257e0:
    // 0x2257e0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2257e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_2257e4:
    // 0x2257e4: 0x40f809  jalr        $v0
label_2257e8:
    if (ctx->pc == 0x2257E8u) {
        ctx->pc = 0x2257E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2257E4u;
        // 0x2257e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2257ECu;
        goto label_2257ec;
    }
    ctx->pc = 0x2257E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2257ECu);
        ctx->pc = 0x2257E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2257E4u;
        // 0x2257e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2257E4u, 0x2257ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2257ECu;
label_2257ec:
    // 0x2257ec: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_2257f0:
    if (ctx->pc == 0x2257F0u) {
        ctx->pc = 0x2257F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2257ECu;
        // 0x2257f0: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2257F4u;
        goto label_2257f4;
    }
    ctx->pc = 0x2257ECu;
    {
        const bool branch_taken_0x2257ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2257ec) {
            ctx->pc = 0x2257F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2257ECu;
            // 0x2257f0: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225820u;
            goto label_225820;
        }
    }
    ctx->pc = 0x2257F4u;
label_2257f4:
    // 0x2257f4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2257f8:
    if (ctx->pc == 0x2257F8u) {
        ctx->pc = 0x2257F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2257F4u;
        // 0x2257f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2257FCu;
        goto label_2257fc;
    }
    ctx->pc = 0x2257F4u;
    {
        const bool branch_taken_0x2257f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2257F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2257F4u;
        // 0x2257f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2257f4) {
            ctx->pc = 0x22580Cu;
            goto label_22580c;
        }
    }
    ctx->pc = 0x2257FCu;
label_2257fc:
    // 0x2257fc: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2257fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_225800:
    // 0x225800: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x225800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_225804:
    // 0x225804: 0x40f809  jalr        $v0
label_225808:
    if (ctx->pc == 0x225808u) {
        ctx->pc = 0x225808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225804u;
        // 0x225808: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22580Cu;
        goto label_22580c;
    }
    ctx->pc = 0x225804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22580Cu);
        ctx->pc = 0x225808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225804u;
        // 0x225808: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225804u, 0x22580Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22580Cu;
label_22580c:
    // 0x22580c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22580cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_225810:
    // 0x225810: 0xc0d7412  jal         func_35D048
label_225814:
    if (ctx->pc == 0x225814u) {
        ctx->pc = 0x225814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225810u;
        // 0x225814: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225818u;
        goto label_225818;
    }
    ctx->pc = 0x225810u;
    SET_GPR_U32(ctx, 31, 0x225818u);
    ctx->pc = 0x225814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225810u;
    // 0x225814: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x225810u, 0x225818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225818u;
label_225818:
    // 0x225818: 0x1000000c  b           . + 4 + (0xC << 2)
label_22581c:
    if (ctx->pc == 0x22581Cu) {
        ctx->pc = 0x22581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225818u;
        // 0x22581c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225820u;
        goto label_225820;
    }
    ctx->pc = 0x225818u;
    {
        const bool branch_taken_0x225818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225818u;
        // 0x22581c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225818) {
            ctx->pc = 0x22584Cu;
            goto label_22584c;
        }
    }
    ctx->pc = 0x225820u;
label_225820:
    // 0x225820: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x225820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_225824:
    // 0x225824: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_225828:
    if (ctx->pc == 0x225828u) {
        ctx->pc = 0x225828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225824u;
        // 0x225828: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22582Cu;
        goto label_22582c;
    }
    ctx->pc = 0x225824u;
    {
        const bool branch_taken_0x225824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225824u;
        // 0x225828: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225824) {
            ctx->pc = 0x225840u;
            goto label_225840;
        }
    }
    ctx->pc = 0x22582Cu;
label_22582c:
    // 0x22582c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_225830:
    if (ctx->pc == 0x225830u) {
        ctx->pc = 0x225834u;
        goto label_225834;
    }
    ctx->pc = 0x22582Cu;
    {
        const bool branch_taken_0x22582c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22582c) {
            ctx->pc = 0x225840u;
            goto label_225840;
        }
    }
    ctx->pc = 0x225834u;
label_225834:
    // 0x225834: 0xc0a2dce  jal         func_28B738
label_225838:
    if (ctx->pc == 0x225838u) {
        ctx->pc = 0x225838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225834u;
        // 0x225838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22583Cu;
        goto label_22583c;
    }
    ctx->pc = 0x225834u;
    SET_GPR_U32(ctx, 31, 0x22583Cu);
    ctx->pc = 0x225838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225834u;
    // 0x225838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B738u, 0x225834u, 0x22583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22583Cu;
label_22583c:
    // 0x22583c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22583cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_225840:
    // 0x225840: 0xc0d7412  jal         func_35D048
label_225844:
    if (ctx->pc == 0x225844u) {
        ctx->pc = 0x225844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225840u;
        // 0x225844: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225848u;
        goto label_225848;
    }
    ctx->pc = 0x225840u;
    SET_GPR_U32(ctx, 31, 0x225848u);
    ctx->pc = 0x225844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225840u;
    // 0x225844: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x225840u, 0x225848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225848u;
label_225848:
    // 0x225848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22584c:
    // 0x22584c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22584cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225850:
    // 0x225850: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x225850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_225854:
    // 0x225854: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x225854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_225858:
    // 0x225858: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x225858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_22585c:
    // 0x22585c: 0x3e00008  jr          $ra
label_225860:
    if (ctx->pc == 0x225860u) {
        ctx->pc = 0x225860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22585Cu;
        // 0x225860: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225864u;
        goto label_225864;
    }
    ctx->pc = 0x22585Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22585Cu;
        // 0x225860: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22585Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225864u;
label_225864:
    // 0x225864: 0x0  nop
    ctx->pc = 0x225864u;
    // NOP
label_225868:
    // 0x225868: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x225868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_22586c:
    // 0x22586c: 0x0  nop
    ctx->pc = 0x22586cu;
    // NOP
label_225870:
    // 0x225870: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x225870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_225874:
    // 0x225874: 0x0  nop
    ctx->pc = 0x225874u;
    // NOP
    ctx->pc = 0x225878u;
}
