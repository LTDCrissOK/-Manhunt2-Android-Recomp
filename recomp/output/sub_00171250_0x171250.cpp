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

// Function: sub_00171250
// Address: 0x171250 - 0x171390
void sub_00171250_0x171250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171250_0x171250");
#endif

    switch (ctx->pc) {
        case 0x17127cu: goto label_17127c;
        case 0x171294u: goto label_171294;
        case 0x1712a8u: goto label_1712a8;
        case 0x1712b8u: goto label_1712b8;
        case 0x1712c0u: goto label_1712c0;
        case 0x1712d8u: goto label_1712d8;
        case 0x171318u: goto label_171318;
        case 0x171328u: goto label_171328;
        case 0x171338u: goto label_171338;
        case 0x171348u: goto label_171348;
        case 0x171358u: goto label_171358;
        case 0x171368u: goto label_171368;
        case 0x171370u: goto label_171370;
        case 0x171378u: goto label_171378;
        default: break;
    }

    ctx->pc = 0x171250u;

    // 0x171250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171254: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x171254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x171258: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x171258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17125c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17125cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171260: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171264: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x171264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x171268: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x171268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x17126c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17126Cu;
    {
        const bool branch_taken_0x17126c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17126Cu;
        // 0x171270: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17126c) {
            ctx->pc = 0x171284u;
            goto label_171284;
        }
    }
    ctx->pc = 0x171274u;
    // 0x171274: 0xc05d3a2  jal         func_174E88
    ctx->pc = 0x171274u;
    SET_GPR_U32(ctx, 31, 0x17127Cu);
    ctx->pc = 0x174E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174E88u, 0x171274u, 0x17127Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17127Cu;
label_17127c:
    // 0x17127c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17127Cu;
    {
        const bool branch_taken_0x17127c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17127c) {
            ctx->pc = 0x1712B0u;
            goto label_1712b0;
        }
    }
    ctx->pc = 0x171284u;
label_171284:
    // 0x171284: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x171284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x171288: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x171288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x17128c: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x17128Cu;
    SET_GPR_U32(ctx, 31, 0x171294u);
    ctx->pc = 0x171290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17128Cu;
    // 0x171290: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x17128Cu, 0x171294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171294u;
label_171294:
    // 0x171294: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x171294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x171298: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x171298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17129c: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x17129cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x1712a0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1712A0u;
    SET_GPR_U32(ctx, 31, 0x1712A8u);
    ctx->pc = 0x1712A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1712A0u;
    // 0x1712a4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1712A0u, 0x1712A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1712A8u;
label_1712a8:
    // 0x1712a8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1712A8u;
    {
        const bool branch_taken_0x1712a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1712a8) {
            ctx->pc = 0x1712ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1712A8u;
            // 0x1712ac: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1712C8u;
            goto label_1712c8;
        }
    }
    ctx->pc = 0x1712B0u;
label_1712b0:
    // 0x1712b0: 0xc05c804  jal         func_172010
    ctx->pc = 0x1712B0u;
    SET_GPR_U32(ctx, 31, 0x1712B8u);
    ctx->pc = 0x1712B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1712B0u;
    // 0x1712b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172010u, 0x1712B0u, 0x1712B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1712B8u;
label_1712b8:
    // 0x1712b8: 0xc05c86a  jal         func_1721A8
    ctx->pc = 0x1712B8u;
    SET_GPR_U32(ctx, 31, 0x1712C0u);
    ctx->pc = 0x1712BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1712B8u;
    // 0x1712bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1721A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1721A8u, 0x1712B8u, 0x1712C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1712C0u;
label_1712c0:
    // 0x1712c0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1712C0u;
    {
        const bool branch_taken_0x1712c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1712C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1712C0u;
        // 0x1712c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1712c0) {
            ctx->pc = 0x17137Cu;
            goto label_17137c;
        }
    }
    ctx->pc = 0x1712C8u;
label_1712c8:
    // 0x1712c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1712C8u;
    {
        const bool branch_taken_0x1712c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1712c8) {
            ctx->pc = 0x1712CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1712C8u;
            // 0x1712cc: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1712DCu;
            goto label_1712dc;
        }
    }
    ctx->pc = 0x1712D0u;
    // 0x1712d0: 0xc05d304  jal         func_174C10
    ctx->pc = 0x1712D0u;
    SET_GPR_U32(ctx, 31, 0x1712D8u);
    ctx->pc = 0x1712D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1712D0u;
    // 0x1712d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174C10u, 0x1712D0u, 0x1712D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1712D8u;
label_1712d8:
    // 0x1712d8: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x1712d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_1712dc:
    // 0x1712dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1712dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1712e0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1712E0u;
    {
        const bool branch_taken_0x1712e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1712E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1712E0u;
        // 0x1712e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1712e0) {
            ctx->pc = 0x171308u;
            goto label_171308;
        }
    }
    ctx->pc = 0x1712E8u;
    // 0x1712e8: 0x9242001c  lbu         $v0, 0x1C($s2)
    ctx->pc = 0x1712e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1712ec: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1712ECu;
    {
        const bool branch_taken_0x1712ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1712F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1712ECu;
        // 0x1712f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1712ec) {
            ctx->pc = 0x17137Cu;
            goto label_17137c;
        }
    }
    ctx->pc = 0x1712F4u;
    // 0x1712f4: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x1712f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x1712f8: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1712F8u;
    {
        const bool branch_taken_0x1712f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1712f8) {
            ctx->pc = 0x1712FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1712F8u;
            // 0x1712fc: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171380u;
            goto label_171380;
        }
    }
    ctx->pc = 0x171300u;
    // 0x171300: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x171300u;
    {
        const bool branch_taken_0x171300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171300) {
            ctx->pc = 0x171310u;
            goto label_171310;
        }
    }
    ctx->pc = 0x171308u;
label_171308:
    // 0x171308: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x171308u;
    {
        const bool branch_taken_0x171308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171308u;
        // 0x17130c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171308) {
            ctx->pc = 0x171330u;
            goto label_171330;
        }
    }
    ctx->pc = 0x171310u;
label_171310:
    // 0x171310: 0xc05c804  jal         func_172010
    ctx->pc = 0x171310u;
    SET_GPR_U32(ctx, 31, 0x171318u);
    ctx->pc = 0x171314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171310u;
    // 0x171314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172010u, 0x171310u, 0x171318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171318u;
label_171318:
    // 0x171318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17131c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17131cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171320: 0xc05c720  jal         func_171C80
    ctx->pc = 0x171320u;
    SET_GPR_U32(ctx, 31, 0x171328u);
    ctx->pc = 0x171324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171320u;
    // 0x171324: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171C80u, 0x171320u, 0x171328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171328u;
label_171328:
    // 0x171328: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x171328u;
    {
        const bool branch_taken_0x171328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171328u;
        // 0x17132c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171328) {
            ctx->pc = 0x17137Cu;
            goto label_17137c;
        }
    }
    ctx->pc = 0x171330u;
label_171330:
    // 0x171330: 0xc05d2b2  jal         func_174AC8
    ctx->pc = 0x171330u;
    SET_GPR_U32(ctx, 31, 0x171338u);
    ctx->pc = 0x171334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171330u;
    // 0x171334: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174AC8u, 0x171330u, 0x171338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171338u;
label_171338:
    // 0x171338: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x171338u;
    {
        const bool branch_taken_0x171338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171338) {
            ctx->pc = 0x171350u;
            goto label_171350;
        }
    }
    ctx->pc = 0x171340u;
    // 0x171340: 0xc05d304  jal         func_174C10
    ctx->pc = 0x171340u;
    SET_GPR_U32(ctx, 31, 0x171348u);
    ctx->pc = 0x171344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171340u;
    // 0x171344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174C10u, 0x171340u, 0x171348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171348u;
label_171348:
    // 0x171348: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x171348u;
    {
        const bool branch_taken_0x171348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171348u;
        // 0x17134c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171348) {
            ctx->pc = 0x17137Cu;
            goto label_17137c;
        }
    }
    ctx->pc = 0x171350u;
label_171350:
    // 0x171350: 0xc05d342  jal         func_174D08
    ctx->pc = 0x171350u;
    SET_GPR_U32(ctx, 31, 0x171358u);
    ctx->pc = 0x171354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171350u;
    // 0x171354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174D08u, 0x171350u, 0x171358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171358u;
label_171358:
    // 0x171358: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x171358u;
    {
        const bool branch_taken_0x171358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171358u;
        // 0x17135c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171358) {
            ctx->pc = 0x17137Cu;
            goto label_17137c;
        }
    }
    ctx->pc = 0x171360u;
    // 0x171360: 0xc05d4da  jal         func_175368
    ctx->pc = 0x171360u;
    SET_GPR_U32(ctx, 31, 0x171368u);
    ctx->pc = 0x171364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171360u;
    // 0x171364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175368u, 0x171360u, 0x171368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171368u;
label_171368:
    // 0x171368: 0xc05c804  jal         func_172010
    ctx->pc = 0x171368u;
    SET_GPR_U32(ctx, 31, 0x171370u);
    ctx->pc = 0x17136Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171368u;
    // 0x17136c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172010u, 0x171368u, 0x171370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171370u;
label_171370:
    // 0x171370: 0xc05c86a  jal         func_1721A8
    ctx->pc = 0x171370u;
    SET_GPR_U32(ctx, 31, 0x171378u);
    ctx->pc = 0x171374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171370u;
    // 0x171374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1721A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1721A8u, 0x171370u, 0x171378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171378u;
label_171378:
    // 0x171378: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17137c:
    // 0x17137c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17137cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_171380:
    // 0x171380: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x171380u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171384: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x171384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x171388: 0x3e00008  jr          $ra
    ctx->pc = 0x171388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171388u;
        // 0x17138c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171390u;
}
