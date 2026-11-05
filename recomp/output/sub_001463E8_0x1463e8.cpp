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

// Function: sub_001463E8
// Address: 0x1463e8 - 0x146520
void sub_001463E8_0x1463e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001463E8_0x1463e8");
#endif

    switch (ctx->pc) {
        case 0x146404u: goto label_146404;
        case 0x14641cu: goto label_14641c;
        case 0x146430u: goto label_146430;
        case 0x146450u: goto label_146450;
        case 0x146460u: goto label_146460;
        case 0x1464b0u: goto label_1464b0;
        case 0x1464bcu: goto label_1464bc;
        case 0x1464d8u: goto label_1464d8;
        case 0x1464ecu: goto label_1464ec;
        case 0x146500u: goto label_146500;
        default: break;
    }

    ctx->pc = 0x1463e8u;

    // 0x1463e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1463e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1463ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1463ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1463f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1463f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1463f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1463f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1463f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1463f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1463fc: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x1463FCu;
    SET_GPR_U32(ctx, 31, 0x146404u);
    ctx->pc = 0x146400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1463FCu;
    // 0x146400: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x1463FCu, 0x146404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146404u;
label_146404:
    // 0x146404: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x146404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x146408: 0x14430040  bne         $v0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x146408u;
    {
        const bool branch_taken_0x146408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146408u;
        // 0x14640c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146408) {
            ctx->pc = 0x14650Cu;
            goto label_14650c;
        }
    }
    ctx->pc = 0x146410u;
    // 0x146410: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x146410u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x146414: 0xc051b40  jal         func_146D00
    ctx->pc = 0x146414u;
    SET_GPR_U32(ctx, 31, 0x14641Cu);
    ctx->pc = 0x146418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146414u;
    // 0x146418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146D00u, 0x146414u, 0x14641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14641Cu;
label_14641c:
    // 0x14641c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14641cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x146420: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x146420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146428: 0xc051b3a  jal         func_146CE8
    ctx->pc = 0x146428u;
    SET_GPR_U32(ctx, 31, 0x146430u);
    ctx->pc = 0x14642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146428u;
    // 0x14642c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146CE8u, 0x146428u, 0x146430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146430u;
label_146430:
    // 0x146430: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x146430u;
    {
        const bool branch_taken_0x146430 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x146434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146430u;
        // 0x146434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146430) {
            ctx->pc = 0x1464E0u;
            goto label_1464e0;
        }
    }
    ctx->pc = 0x146438u;
    // 0x146438: 0x620002e  bltz        $s1, . + 4 + (0x2E << 2)
    ctx->pc = 0x146438u;
    {
        const bool branch_taken_0x146438 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x14643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146438u;
        // 0x14643c: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146438) {
            ctx->pc = 0x1464F4u;
            goto label_1464f4;
        }
    }
    ctx->pc = 0x146440u;
    // 0x146440: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x146440u;
    {
        const bool branch_taken_0x146440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146440u;
        // 0x146444: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146440) {
            ctx->pc = 0x1464F8u;
            goto label_1464f8;
        }
    }
    ctx->pc = 0x146448u;
    // 0x146448: 0xc04d97a  jal         func_1365E8
    ctx->pc = 0x146448u;
    SET_GPR_U32(ctx, 31, 0x146450u);
    ctx->pc = 0x14644Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146448u;
    // 0x14644c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1365E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1365E8u, 0x146448u, 0x146450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146450u;
label_146450:
    // 0x146450: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x146450u;
    {
        const bool branch_taken_0x146450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146450u;
        // 0x146454: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146450) {
            ctx->pc = 0x1464F8u;
            goto label_1464f8;
        }
    }
    ctx->pc = 0x146458u;
    // 0x146458: 0xc04d980  jal         func_136600
    ctx->pc = 0x146458u;
    SET_GPR_U32(ctx, 31, 0x146460u);
    ctx->pc = 0x14645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146458u;
    // 0x14645c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136600u, 0x146458u, 0x146460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146460u;
label_146460:
    // 0x146460: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x146460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146464: 0x54c00024  bnel        $a2, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x146464u;
    {
        const bool branch_taken_0x146464 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x146464) {
            ctx->pc = 0x146468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146464u;
            // 0x146468: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1464F8u;
            goto label_1464f8;
        }
    }
    ctx->pc = 0x14646Cu;
    // 0x14646c: 0x9207046c  lbu         $a3, 0x46C($s0)
    ctx->pc = 0x14646cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x146470: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x146470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x146474: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x146474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x146478: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x146478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x14647c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x14647cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x146480: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x146480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x146484: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x146484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146488: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x146488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14648c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x14648cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x146490: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x146490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x146494: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x146494u;
    {
        const bool branch_taken_0x146494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146494) {
            ctx->pc = 0x1464C0u;
            goto label_1464c0;
        }
    }
    ctx->pc = 0x14649Cu;
    // 0x14649c: 0x8c420120  lw          $v0, 0x120($v0)
    ctx->pc = 0x14649cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x1464a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1464A0u;
    {
        const bool branch_taken_0x1464a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1464A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1464A0u;
        // 0x1464a4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1464a0) {
            ctx->pc = 0x1464C0u;
            goto label_1464c0;
        }
    }
    ctx->pc = 0x1464A8u;
    // 0x1464a8: 0xc04e0c0  jal         func_138300
    ctx->pc = 0x1464A8u;
    SET_GPR_U32(ctx, 31, 0x1464B0u);
    ctx->pc = 0x1464ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1464A8u;
    // 0x1464ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138300u, 0x1464A8u, 0x1464B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1464B0u;
label_1464b0:
    // 0x1464b0: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1464b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1464b4: 0xc04d974  jal         func_1365D0
    ctx->pc = 0x1464B4u;
    SET_GPR_U32(ctx, 31, 0x1464BCu);
    ctx->pc = 0x1464B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1464B4u;
    // 0x1464b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1365D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1365D0u, 0x1464B4u, 0x1464BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1464BCu;
label_1464bc:
    // 0x1464bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1464bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1464c0:
    // 0x1464c0: 0x54c0000d  bnel        $a2, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1464C0u;
    {
        const bool branch_taken_0x1464c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1464c0) {
            ctx->pc = 0x1464C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1464C0u;
            // 0x1464c4: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1464F8u;
            goto label_1464f8;
        }
    }
    ctx->pc = 0x1464C8u;
    // 0x1464c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1464c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1464cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1464ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1464d0: 0xc051b3a  jal         func_146CE8
    ctx->pc = 0x1464D0u;
    SET_GPR_U32(ctx, 31, 0x1464D8u);
    ctx->pc = 0x1464D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1464D0u;
    // 0x1464d4: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146CE8u, 0x1464D0u, 0x1464D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1464D8u;
label_1464d8:
    // 0x1464d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1464D8u;
    {
        const bool branch_taken_0x1464d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1464DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1464D8u;
        // 0x1464dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1464d8) {
            ctx->pc = 0x14650Cu;
            goto label_14650c;
        }
    }
    ctx->pc = 0x1464E0u;
label_1464e0:
    // 0x1464e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1464e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1464e4: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x1464E4u;
    SET_GPR_U32(ctx, 31, 0x1464ECu);
    ctx->pc = 0x1464E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1464E4u;
    // 0x1464e8: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x1464E4u, 0x1464ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1464ECu;
label_1464ec:
    // 0x1464ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1464ECu;
    {
        const bool branch_taken_0x1464ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1464F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1464ECu;
        // 0x1464f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1464ec) {
            ctx->pc = 0x14650Cu;
            goto label_14650c;
        }
    }
    ctx->pc = 0x1464F4u;
label_1464f4:
    // 0x1464f4: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1464f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1464f8:
    // 0x1464f8: 0xc04da5c  jal         func_136970
    ctx->pc = 0x1464F8u;
    SET_GPR_U32(ctx, 31, 0x146500u);
    ctx->pc = 0x1464FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1464F8u;
    // 0x1464fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136970u, 0x1464F8u, 0x146500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146500u;
label_146500:
    // 0x146500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x146500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146508: 0xae030570  sw          $v1, 0x570($s0)
    ctx->pc = 0x146508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1392), GPR_U32(ctx, 3));
label_14650c:
    // 0x14650c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14650cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146510: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x146510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x146514: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x146514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146518: 0x3e00008  jr          $ra
    ctx->pc = 0x146518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146518u;
        // 0x14651c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146520u;
}
