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

// Function: sub_00146680
// Address: 0x146680 - 0x1467a8
void sub_00146680_0x146680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146680_0x146680");
#endif

    switch (ctx->pc) {
        case 0x146680u: goto label_146680;
        case 0x146684u: goto label_146684;
        case 0x146688u: goto label_146688;
        case 0x14668cu: goto label_14668c;
        case 0x146690u: goto label_146690;
        case 0x146694u: goto label_146694;
        case 0x146698u: goto label_146698;
        case 0x14669cu: goto label_14669c;
        case 0x1466a0u: goto label_1466a0;
        case 0x1466a4u: goto label_1466a4;
        case 0x1466a8u: goto label_1466a8;
        case 0x1466acu: goto label_1466ac;
        case 0x1466b0u: goto label_1466b0;
        case 0x1466b4u: goto label_1466b4;
        case 0x1466b8u: goto label_1466b8;
        case 0x1466bcu: goto label_1466bc;
        case 0x1466c0u: goto label_1466c0;
        case 0x1466c4u: goto label_1466c4;
        case 0x1466c8u: goto label_1466c8;
        case 0x1466ccu: goto label_1466cc;
        case 0x1466d0u: goto label_1466d0;
        case 0x1466d4u: goto label_1466d4;
        case 0x1466d8u: goto label_1466d8;
        case 0x1466dcu: goto label_1466dc;
        case 0x1466e0u: goto label_1466e0;
        case 0x1466e4u: goto label_1466e4;
        case 0x1466e8u: goto label_1466e8;
        case 0x1466ecu: goto label_1466ec;
        case 0x1466f0u: goto label_1466f0;
        case 0x1466f4u: goto label_1466f4;
        case 0x1466f8u: goto label_1466f8;
        case 0x1466fcu: goto label_1466fc;
        case 0x146700u: goto label_146700;
        case 0x146704u: goto label_146704;
        case 0x146708u: goto label_146708;
        case 0x14670cu: goto label_14670c;
        case 0x146710u: goto label_146710;
        case 0x146714u: goto label_146714;
        case 0x146718u: goto label_146718;
        case 0x14671cu: goto label_14671c;
        case 0x146720u: goto label_146720;
        case 0x146724u: goto label_146724;
        case 0x146728u: goto label_146728;
        case 0x14672cu: goto label_14672c;
        case 0x146730u: goto label_146730;
        case 0x146734u: goto label_146734;
        case 0x146738u: goto label_146738;
        case 0x14673cu: goto label_14673c;
        case 0x146740u: goto label_146740;
        case 0x146744u: goto label_146744;
        case 0x146748u: goto label_146748;
        case 0x14674cu: goto label_14674c;
        case 0x146750u: goto label_146750;
        case 0x146754u: goto label_146754;
        case 0x146758u: goto label_146758;
        case 0x14675cu: goto label_14675c;
        case 0x146760u: goto label_146760;
        case 0x146764u: goto label_146764;
        case 0x146768u: goto label_146768;
        case 0x14676cu: goto label_14676c;
        case 0x146770u: goto label_146770;
        case 0x146774u: goto label_146774;
        case 0x146778u: goto label_146778;
        case 0x14677cu: goto label_14677c;
        case 0x146780u: goto label_146780;
        case 0x146784u: goto label_146784;
        case 0x146788u: goto label_146788;
        case 0x14678cu: goto label_14678c;
        case 0x146790u: goto label_146790;
        case 0x146794u: goto label_146794;
        case 0x146798u: goto label_146798;
        case 0x14679cu: goto label_14679c;
        case 0x1467a0u: goto label_1467a0;
        case 0x1467a4u: goto label_1467a4;
        default: break;
    }

    ctx->pc = 0x146680u;

label_146680:
    // 0x146680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x146680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_146684:
    // 0x146684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x146684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_146688:
    // 0x146688: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x146688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_14668c:
    // 0x14668c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14668cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_146690:
    // 0x146690: 0xc04d8dc  jal         func_136370
label_146694:
    if (ctx->pc == 0x146694u) {
        ctx->pc = 0x146694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146690u;
        // 0x146694: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146698u;
        goto label_146698;
    }
    ctx->pc = 0x146690u;
    SET_GPR_U32(ctx, 31, 0x146698u);
    ctx->pc = 0x146694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146690u;
    // 0x146694: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x146690u, 0x146698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146698u;
label_146698:
    // 0x146698: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x146698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14669c:
    // 0x14669c: 0x5443003e  bnel        $v0, $v1, . + 4 + (0x3E << 2)
label_1466a0:
    if (ctx->pc == 0x1466A0u) {
        ctx->pc = 0x1466A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14669Cu;
        // 0x1466a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1466A4u;
        goto label_1466a4;
    }
    ctx->pc = 0x14669Cu;
    {
        const bool branch_taken_0x14669c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14669c) {
            ctx->pc = 0x1466A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14669Cu;
            // 0x1466a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146798u;
            goto label_146798;
        }
    }
    ctx->pc = 0x1466A4u;
label_1466a4:
    // 0x1466a4: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1466a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1466a8:
    // 0x1466a8: 0xc051b40  jal         func_146D00
label_1466ac:
    if (ctx->pc == 0x1466ACu) {
        ctx->pc = 0x1466ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1466A8u;
        // 0x1466ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1466B0u;
        goto label_1466b0;
    }
    ctx->pc = 0x1466A8u;
    SET_GPR_U32(ctx, 31, 0x1466B0u);
    ctx->pc = 0x1466ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1466A8u;
    // 0x1466ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146D00u, 0x1466A8u, 0x1466B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1466B0u;
label_1466b0:
    // 0x1466b0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1466b4:
    if (ctx->pc == 0x1466B4u) {
        ctx->pc = 0x1466B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1466B0u;
        // 0x1466b4: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1466B8u;
        goto label_1466b8;
    }
    ctx->pc = 0x1466B0u;
    {
        const bool branch_taken_0x1466b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1466b0) {
            ctx->pc = 0x1466B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1466B0u;
            // 0x1466b4: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1466D0u;
            goto label_1466d0;
        }
    }
    ctx->pc = 0x1466B8u;
label_1466b8:
    // 0x1466b8: 0x440002d  bltz        $v0, . + 4 + (0x2D << 2)
label_1466bc:
    if (ctx->pc == 0x1466BCu) {
        ctx->pc = 0x1466BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1466B8u;
        // 0x1466bc: 0x28420004  slti        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1466C0u;
        goto label_1466c0;
    }
    ctx->pc = 0x1466B8u;
    {
        const bool branch_taken_0x1466b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1466BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1466B8u;
        // 0x1466bc: 0x28420004  slti        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1466b8) {
            ctx->pc = 0x146770u;
            goto label_146770;
        }
    }
    ctx->pc = 0x1466C0u;
label_1466c0:
    // 0x1466c0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_1466c4:
    if (ctx->pc == 0x1466C4u) {
        ctx->pc = 0x1466C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1466C0u;
        // 0x1466c4: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1466C8u;
        goto label_1466c8;
    }
    ctx->pc = 0x1466C0u;
    {
        const bool branch_taken_0x1466c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1466C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1466C0u;
        // 0x1466c4: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1466c0) {
            ctx->pc = 0x146774u;
            goto label_146774;
        }
    }
    ctx->pc = 0x1466C8u;
label_1466c8:
    // 0x1466c8: 0x10000014  b           . + 4 + (0x14 << 2)
label_1466cc:
    if (ctx->pc == 0x1466CCu) {
        ctx->pc = 0x1466D0u;
        goto label_1466d0;
    }
    ctx->pc = 0x1466C8u;
    {
        const bool branch_taken_0x1466c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1466c8) {
            ctx->pc = 0x14671Cu;
            goto label_14671c;
        }
    }
    ctx->pc = 0x1466D0u;
label_1466d0:
    // 0x1466d0: 0xc051e4c  jal         func_147930
label_1466d4:
    if (ctx->pc == 0x1466D4u) {
        ctx->pc = 0x1466D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1466D0u;
        // 0x1466d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1466D8u;
        goto label_1466d8;
    }
    ctx->pc = 0x1466D0u;
    SET_GPR_U32(ctx, 31, 0x1466D8u);
    ctx->pc = 0x1466D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1466D0u;
    // 0x1466d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147930u, 0x1466D0u, 0x1466D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1466D8u;
label_1466d8:
    // 0x1466d8: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_1466dc:
    if (ctx->pc == 0x1466DCu) {
        ctx->pc = 0x1466DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1466D8u;
        // 0x1466dc: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1466E0u;
        goto label_1466e0;
    }
    ctx->pc = 0x1466D8u;
    {
        const bool branch_taken_0x1466d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1466d8) {
            ctx->pc = 0x1466DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1466D8u;
            // 0x1466dc: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146758u;
            goto label_146758;
        }
    }
    ctx->pc = 0x1466E0u;
label_1466e0:
    // 0x1466e0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1466e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_1466e4:
    // 0x1466e4: 0x8c430790  lw          $v1, 0x790($v0)
    ctx->pc = 0x1466e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1936)));
label_1466e8:
    // 0x1466e8: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_1466ec:
    if (ctx->pc == 0x1466ECu) {
        ctx->pc = 0x1466ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1466E8u;
        // 0x1466ec: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1466F0u;
        goto label_1466f0;
    }
    ctx->pc = 0x1466E8u;
    {
        const bool branch_taken_0x1466e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1466ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1466E8u;
        // 0x1466ec: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1466e8) {
            ctx->pc = 0x146774u;
            goto label_146774;
        }
    }
    ctx->pc = 0x1466F0u;
label_1466f0:
    // 0x1466f0: 0xc051e7a  jal         func_1479E8
label_1466f4:
    if (ctx->pc == 0x1466F4u) {
        ctx->pc = 0x1466F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1466F0u;
        // 0x1466f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1466F8u;
        goto label_1466f8;
    }
    ctx->pc = 0x1466F0u;
    SET_GPR_U32(ctx, 31, 0x1466F8u);
    ctx->pc = 0x1466F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1466F0u;
    // 0x1466f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1479E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1479E8u, 0x1466F0u, 0x1466F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1466F8u;
label_1466f8:
    // 0x1466f8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1466fc:
    if (ctx->pc == 0x1466FCu) {
        ctx->pc = 0x1466FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1466F8u;
        // 0x1466fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146700u;
        goto label_146700;
    }
    ctx->pc = 0x1466F8u;
    {
        const bool branch_taken_0x1466f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1466FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1466F8u;
        // 0x1466fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1466f8) {
            ctx->pc = 0x146770u;
            goto label_146770;
        }
    }
    ctx->pc = 0x146700u;
label_146700:
    // 0x146700: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x146700u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_146704:
    // 0x146704: 0xc051b3a  jal         func_146CE8
label_146708:
    if (ctx->pc == 0x146708u) {
        ctx->pc = 0x146708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146704u;
        // 0x146708: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14670Cu;
        goto label_14670c;
    }
    ctx->pc = 0x146704u;
    SET_GPR_U32(ctx, 31, 0x14670Cu);
    ctx->pc = 0x146708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146704u;
    // 0x146708: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146CE8u, 0x146704u, 0x14670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14670Cu;
label_14670c:
    // 0x14670c: 0xc051d6c  jal         func_1475B0
label_146710:
    if (ctx->pc == 0x146710u) {
        ctx->pc = 0x146710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14670Cu;
        // 0x146710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146714u;
        goto label_146714;
    }
    ctx->pc = 0x14670Cu;
    SET_GPR_U32(ctx, 31, 0x146714u);
    ctx->pc = 0x146710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14670Cu;
    // 0x146710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1475B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1475B0u, 0x14670Cu, 0x146714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146714u;
label_146714:
    // 0x146714: 0x10000020  b           . + 4 + (0x20 << 2)
label_146718:
    if (ctx->pc == 0x146718u) {
        ctx->pc = 0x146718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146714u;
        // 0x146718: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14671Cu;
        goto label_14671c;
    }
    ctx->pc = 0x146714u;
    {
        const bool branch_taken_0x146714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146714u;
        // 0x146718: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146714) {
            ctx->pc = 0x146798u;
            goto label_146798;
        }
    }
    ctx->pc = 0x14671Cu;
label_14671c:
    // 0x14671c: 0xc04df04  jal         func_137C10
label_146720:
    if (ctx->pc == 0x146720u) {
        ctx->pc = 0x146720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14671Cu;
        // 0x146720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146724u;
        goto label_146724;
    }
    ctx->pc = 0x14671Cu;
    SET_GPR_U32(ctx, 31, 0x146724u);
    ctx->pc = 0x146720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14671Cu;
    // 0x146720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137C10u, 0x14671Cu, 0x146724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146724u;
label_146724:
    // 0x146724: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_146728:
    if (ctx->pc == 0x146728u) {
        ctx->pc = 0x146728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146724u;
        // 0x146728: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14672Cu;
        goto label_14672c;
    }
    ctx->pc = 0x146724u;
    {
        const bool branch_taken_0x146724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146724u;
        // 0x146728: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146724) {
            ctx->pc = 0x146774u;
            goto label_146774;
        }
    }
    ctx->pc = 0x14672Cu;
label_14672c:
    // 0x14672c: 0xc051b7a  jal         func_146DE8
label_146730:
    if (ctx->pc == 0x146730u) {
        ctx->pc = 0x146730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14672Cu;
        // 0x146730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146734u;
        goto label_146734;
    }
    ctx->pc = 0x14672Cu;
    SET_GPR_U32(ctx, 31, 0x146734u);
    ctx->pc = 0x146730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14672Cu;
    // 0x146730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146DE8u, 0x14672Cu, 0x146734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146734u;
label_146734:
    // 0x146734: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x146734u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_146738:
    // 0x146738: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x146738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14673c:
    // 0x14673c: 0xc04df1e  jal         func_137C78
label_146740:
    if (ctx->pc == 0x146740u) {
        ctx->pc = 0x146740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14673Cu;
        // 0x146740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146744u;
        goto label_146744;
    }
    ctx->pc = 0x14673Cu;
    SET_GPR_U32(ctx, 31, 0x146744u);
    ctx->pc = 0x146740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14673Cu;
    // 0x146740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137C78u, 0x14673Cu, 0x146744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146744u;
label_146744:
    // 0x146744: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_146748:
    if (ctx->pc == 0x146748u) {
        ctx->pc = 0x146748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146744u;
        // 0x146748: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14674Cu;
        goto label_14674c;
    }
    ctx->pc = 0x146744u;
    {
        const bool branch_taken_0x146744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146744) {
            ctx->pc = 0x146748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146744u;
            // 0x146748: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146774u;
            goto label_146774;
        }
    }
    ctx->pc = 0x14674Cu;
label_14674c:
    // 0x14674c: 0xc04df94  jal         func_137E50
label_146750:
    if (ctx->pc == 0x146750u) {
        ctx->pc = 0x146750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14674Cu;
        // 0x146750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146754u;
        goto label_146754;
    }
    ctx->pc = 0x14674Cu;
    SET_GPR_U32(ctx, 31, 0x146754u);
    ctx->pc = 0x146750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14674Cu;
    // 0x146750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137E50u, 0x14674Cu, 0x146754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146754u;
label_146754:
    // 0x146754: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x146754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_146758:
    // 0x146758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14675c:
    // 0x14675c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x14675cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_146760:
    // 0x146760: 0x40f809  jalr        $v0
label_146764:
    if (ctx->pc == 0x146764u) {
        ctx->pc = 0x146764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146760u;
        // 0x146764: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146768u;
        goto label_146768;
    }
    ctx->pc = 0x146760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x146768u);
        ctx->pc = 0x146764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146760u;
        // 0x146764: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146760u, 0x146768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x146768u;
label_146768:
    // 0x146768: 0x1000000b  b           . + 4 + (0xB << 2)
label_14676c:
    if (ctx->pc == 0x14676Cu) {
        ctx->pc = 0x14676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146768u;
        // 0x14676c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146770u;
        goto label_146770;
    }
    ctx->pc = 0x146768u;
    {
        const bool branch_taken_0x146768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146768u;
        // 0x14676c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146768) {
            ctx->pc = 0x146798u;
            goto label_146798;
        }
    }
    ctx->pc = 0x146770u;
label_146770:
    // 0x146770: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x146770u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_146774:
    // 0x146774: 0xc051ea8  jal         func_147AA0
label_146778:
    if (ctx->pc == 0x146778u) {
        ctx->pc = 0x146778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146774u;
        // 0x146778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14677Cu;
        goto label_14677c;
    }
    ctx->pc = 0x146774u;
    SET_GPR_U32(ctx, 31, 0x14677Cu);
    ctx->pc = 0x146778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146774u;
    // 0x146778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147AA0u, 0x146774u, 0x14677Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14677Cu;
label_14677c:
    // 0x14677c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_146780:
    if (ctx->pc == 0x146780u) {
        ctx->pc = 0x146780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14677Cu;
        // 0x146780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146784u;
        goto label_146784;
    }
    ctx->pc = 0x14677Cu;
    {
        const bool branch_taken_0x14677c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14677Cu;
        // 0x146780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14677c) {
            ctx->pc = 0x146794u;
            goto label_146794;
        }
    }
    ctx->pc = 0x146784u;
label_146784:
    // 0x146784: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x146784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_146788:
    // 0x146788: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x146788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_14678c:
    // 0x14678c: 0x40f809  jalr        $v0
label_146790:
    if (ctx->pc == 0x146790u) {
        ctx->pc = 0x146790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14678Cu;
        // 0x146790: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146794u;
        goto label_146794;
    }
    ctx->pc = 0x14678Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x146794u);
        ctx->pc = 0x146790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14678Cu;
        // 0x146790: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14678Cu, 0x146794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x146794u;
label_146794:
    // 0x146794: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x146794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_146798:
    // 0x146798: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x146798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14679c:
    // 0x14679c: 0x3e00008  jr          $ra
label_1467a0:
    if (ctx->pc == 0x1467A0u) {
        ctx->pc = 0x1467A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14679Cu;
        // 0x1467a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1467A4u;
        goto label_1467a4;
    }
    ctx->pc = 0x14679Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1467A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14679Cu;
        // 0x1467a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14679Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1467A4u;
label_1467a4:
    // 0x1467a4: 0x0  nop
    ctx->pc = 0x1467a4u;
    // NOP
    ctx->pc = 0x1467a8u;
}
