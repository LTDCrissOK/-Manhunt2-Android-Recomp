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

// Function: sub_001683C0
// Address: 0x1683c0 - 0x168548
void sub_001683C0_0x1683c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001683C0_0x1683c0");
#endif

    switch (ctx->pc) {
        case 0x1683f8u: goto label_1683f8;
        case 0x168418u: goto label_168418;
        case 0x168428u: goto label_168428;
        case 0x168450u: goto label_168450;
        case 0x168480u: goto label_168480;
        case 0x1684a4u: goto label_1684a4;
        case 0x1684b4u: goto label_1684b4;
        case 0x1684c0u: goto label_1684c0;
        case 0x1684d0u: goto label_1684d0;
        case 0x1684e4u: goto label_1684e4;
        case 0x1684f0u: goto label_1684f0;
        case 0x168504u: goto label_168504;
        default: break;
    }

    ctx->pc = 0x1683c0u;

    // 0x1683c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1683c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1683c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1683c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1683c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1683c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1683cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1683ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1683d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1683d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1683d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1683d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1683d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1683dc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1683dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1683e0: 0x96220320  lhu         $v0, 0x320($s1)
    ctx->pc = 0x1683e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1683e4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1683E4u;
    {
        const bool branch_taken_0x1683e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1683E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683E4u;
        // 0x1683e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683e4) {
            ctx->pc = 0x168468u;
            goto label_168468;
        }
    }
    ctx->pc = 0x1683ECu;
    // 0x1683ec: 0x24130018  addiu       $s3, $zero, 0x18
    ctx->pc = 0x1683ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1683f0: 0x2532018  mult        $a0, $s2, $s3
    ctx->pc = 0x1683f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1683f4: 0x0  nop
    ctx->pc = 0x1683f4u;
    // NOP
label_1683f8:
    // 0x1683f8: 0x8e220324  lw          $v0, 0x324($s1)
    ctx->pc = 0x1683f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x1683fc: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x1683fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x168400: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x168400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168404: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x168404u;
    {
        const bool branch_taken_0x168404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168404u;
        // 0x168408: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168404) {
            ctx->pc = 0x168454u;
            goto label_168454;
        }
    }
    ctx->pc = 0x16840Cu;
    // 0x16840c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x16840cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x168410: 0xc0400be  jal         func_1002F8
    ctx->pc = 0x168410u;
    SET_GPR_U32(ctx, 31, 0x168418u);
    ctx->pc = 0x168414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168410u;
    // 0x168414: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1002F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1002F8u, 0x168410u, 0x168418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168418u;
label_168418:
    // 0x168418: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x168418u;
    {
        const bool branch_taken_0x168418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168418u;
        // 0x16841c: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168418) {
            ctx->pc = 0x168454u;
            goto label_168454;
        }
    }
    ctx->pc = 0x168420u;
    // 0x168420: 0xc0400a2  jal         func_100288
    ctx->pc = 0x168420u;
    SET_GPR_U32(ctx, 31, 0x168428u);
    ctx->pc = 0x168424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168420u;
    // 0x168424: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100288u, 0x168420u, 0x168428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168428u;
label_168428:
    // 0x168428: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x168428u;
    {
        const bool branch_taken_0x168428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168428) {
            ctx->pc = 0x16842Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168428u;
            // 0x16842c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168444u;
            goto label_168444;
        }
    }
    ctx->pc = 0x168430u;
    // 0x168430: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x168430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x168434: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x168434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x168438: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x168438u;
    {
        const bool branch_taken_0x168438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168438u;
        // 0x16843c: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168438) {
            ctx->pc = 0x168454u;
            goto label_168454;
        }
    }
    ctx->pc = 0x168440u;
    // 0x168440: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x168440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_168444:
    // 0x168444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168448: 0xc04009c  jal         func_100270
    ctx->pc = 0x168448u;
    SET_GPR_U32(ctx, 31, 0x168450u);
    ctx->pc = 0x16844Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168448u;
    // 0x16844c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100270u, 0x168448u, 0x168450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168450u;
label_168450:
    // 0x168450: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x168450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_168454:
    // 0x168454: 0x96220320  lhu         $v0, 0x320($s1)
    ctx->pc = 0x168454u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x168458: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x168458u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16845c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x16845cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x168460: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x168460u;
    {
        const bool branch_taken_0x168460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168460u;
        // 0x168464: 0x2532018  mult        $a0, $s2, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168460) {
            ctx->pc = 0x1683F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1683f8;
        }
    }
    ctx->pc = 0x168468u;
label_168468:
    // 0x168468: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x168468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x16846c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x16846Cu;
    {
        const bool branch_taken_0x16846c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16846Cu;
        // 0x168470: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16846c) {
            ctx->pc = 0x168524u;
            goto label_168524;
        }
    }
    ctx->pc = 0x168474u;
    // 0x168474: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x168474u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168478: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x168478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16847c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x16847cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_168480:
    // 0x168480: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x168480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x168484: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x168484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168488: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x168488u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16848c: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x16848Cu;
    {
        const bool branch_taken_0x16848c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x168490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16848Cu;
        // 0x168490: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16848c) {
            ctx->pc = 0x168504u;
            goto label_168504;
        }
    }
    ctx->pc = 0x168494u;
    // 0x168494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168498: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x168498u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16849c: 0xc04f1ae  jal         func_13C6B8
    ctx->pc = 0x16849Cu;
    SET_GPR_U32(ctx, 31, 0x1684A4u);
    ctx->pc = 0x1684A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16849Cu;
    // 0x1684a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6B8u, 0x16849Cu, 0x1684A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1684A4u;
label_1684a4:
    // 0x1684a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1684A4u;
    {
        const bool branch_taken_0x1684a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1684A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684A4u;
        // 0x1684a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684a4) {
            ctx->pc = 0x1684B4u;
            goto label_1684b4;
        }
    }
    ctx->pc = 0x1684ACu;
    // 0x1684ac: 0xc04f452  jal         func_13D148
    ctx->pc = 0x1684ACu;
    SET_GPR_U32(ctx, 31, 0x1684B4u);
    ctx->pc = 0x1684B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1684ACu;
    // 0x1684b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D148u, 0x1684ACu, 0x1684B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1684B4u;
label_1684b4:
    // 0x1684b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1684b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684b8: 0xc04f112  jal         func_13C448
    ctx->pc = 0x1684B8u;
    SET_GPR_U32(ctx, 31, 0x1684C0u);
    ctx->pc = 0x1684BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1684B8u;
    // 0x1684bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x1684B8u, 0x1684C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1684C0u;
label_1684c0:
    // 0x1684c0: 0x14540009  bne         $v0, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1684C0u;
    {
        const bool branch_taken_0x1684c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1684C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684C0u;
        // 0x1684c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684c0) {
            ctx->pc = 0x1684E8u;
            goto label_1684e8;
        }
    }
    ctx->pc = 0x1684C8u;
    // 0x1684c8: 0xc05a180  jal         func_168600
    ctx->pc = 0x1684C8u;
    SET_GPR_U32(ctx, 31, 0x1684D0u);
    ctx->pc = 0x1684CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1684C8u;
    // 0x1684cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168600u, 0x1684C8u, 0x1684D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1684D0u;
label_1684d0:
    // 0x1684d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1684D0u;
    {
        const bool branch_taken_0x1684d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1684D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684D0u;
        // 0x1684d4: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684d0) {
            ctx->pc = 0x168508u;
            goto label_168508;
        }
    }
    ctx->pc = 0x1684D8u;
    // 0x1684d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1684d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684dc: 0xc05a1a0  jal         func_168680
    ctx->pc = 0x1684DCu;
    SET_GPR_U32(ctx, 31, 0x1684E4u);
    ctx->pc = 0x1684E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1684DCu;
    // 0x1684e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168680u, 0x1684DCu, 0x1684E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1684E4u;
label_1684e4:
    // 0x1684e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1684e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1684e8:
    // 0x1684e8: 0xc04f112  jal         func_13C448
    ctx->pc = 0x1684E8u;
    SET_GPR_U32(ctx, 31, 0x1684F0u);
    ctx->pc = 0x1684ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1684E8u;
    // 0x1684ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x1684E8u, 0x1684F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1684F0u;
label_1684f0:
    // 0x1684f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1684F0u;
    {
        const bool branch_taken_0x1684f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1684F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684F0u;
        // 0x1684f4: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684f0) {
            ctx->pc = 0x168508u;
            goto label_168508;
        }
    }
    ctx->pc = 0x1684F8u;
    // 0x1684f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1684f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1684fc: 0xc04f576  jal         func_13D5D8
    ctx->pc = 0x1684FCu;
    SET_GPR_U32(ctx, 31, 0x168504u);
    ctx->pc = 0x168500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1684FCu;
    // 0x168500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D5D8u, 0x1684FCu, 0x168504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168504u;
label_168504:
    // 0x168504: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x168504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_168508:
    // 0x168508: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x168508u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16850c: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x16850cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x168510: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x168510u;
    {
        const bool branch_taken_0x168510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168510) {
            ctx->pc = 0x168514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168510u;
            // 0x168514: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168528u;
            goto label_168528;
        }
    }
    ctx->pc = 0x168518u;
    // 0x168518: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x168518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x16851c: 0x5662ffd8  bnel        $s3, $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x16851Cu;
    {
        const bool branch_taken_0x16851c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x16851c) {
            ctx->pc = 0x168520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16851Cu;
            // 0x168520: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168480;
        }
    }
    ctx->pc = 0x168524u;
label_168524:
    // 0x168524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x168524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_168528:
    // 0x168528: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x168528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16852c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16852cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168530: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x168530u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168534: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x168534u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168538: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x168538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16853c: 0x3e00008  jr          $ra
    ctx->pc = 0x16853Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16853Cu;
        // 0x168540: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16853Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168544u;
    // 0x168544: 0x0  nop
    ctx->pc = 0x168544u;
    // NOP
    ctx->pc = 0x168548u;
}
