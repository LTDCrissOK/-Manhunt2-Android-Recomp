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

// Function: sub_0039B770
// Address: 0x39b770 - 0x39b810
void sub_0039B770_0x39b770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B770_0x39b770");
#endif

    switch (ctx->pc) {
        case 0x39b770u: goto label_39b770;
        case 0x39b774u: goto label_39b774;
        case 0x39b778u: goto label_39b778;
        case 0x39b77cu: goto label_39b77c;
        case 0x39b780u: goto label_39b780;
        case 0x39b784u: goto label_39b784;
        case 0x39b788u: goto label_39b788;
        case 0x39b78cu: goto label_39b78c;
        case 0x39b790u: goto label_39b790;
        case 0x39b794u: goto label_39b794;
        case 0x39b798u: goto label_39b798;
        case 0x39b79cu: goto label_39b79c;
        case 0x39b7a0u: goto label_39b7a0;
        case 0x39b7a4u: goto label_39b7a4;
        case 0x39b7a8u: goto label_39b7a8;
        case 0x39b7acu: goto label_39b7ac;
        case 0x39b7b0u: goto label_39b7b0;
        case 0x39b7b4u: goto label_39b7b4;
        case 0x39b7b8u: goto label_39b7b8;
        case 0x39b7bcu: goto label_39b7bc;
        case 0x39b7c0u: goto label_39b7c0;
        case 0x39b7c4u: goto label_39b7c4;
        case 0x39b7c8u: goto label_39b7c8;
        case 0x39b7ccu: goto label_39b7cc;
        case 0x39b7d0u: goto label_39b7d0;
        case 0x39b7d4u: goto label_39b7d4;
        case 0x39b7d8u: goto label_39b7d8;
        case 0x39b7dcu: goto label_39b7dc;
        case 0x39b7e0u: goto label_39b7e0;
        case 0x39b7e4u: goto label_39b7e4;
        case 0x39b7e8u: goto label_39b7e8;
        case 0x39b7ecu: goto label_39b7ec;
        case 0x39b7f0u: goto label_39b7f0;
        case 0x39b7f4u: goto label_39b7f4;
        case 0x39b7f8u: goto label_39b7f8;
        case 0x39b7fcu: goto label_39b7fc;
        case 0x39b800u: goto label_39b800;
        case 0x39b804u: goto label_39b804;
        case 0x39b808u: goto label_39b808;
        case 0x39b80cu: goto label_39b80c;
        default: break;
    }

    ctx->pc = 0x39b770u;

label_39b770:
    // 0x39b770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39b770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_39b774:
    // 0x39b774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39b774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_39b778:
    // 0x39b778: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39b778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_39b77c:
    // 0x39b77c: 0xc0ebe50  jal         func_3AF940
label_39b780:
    if (ctx->pc == 0x39B780u) {
        ctx->pc = 0x39B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B77Cu;
        // 0x39b780: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B784u;
        goto label_39b784;
    }
    ctx->pc = 0x39B77Cu;
    SET_GPR_U32(ctx, 31, 0x39B784u);
    ctx->pc = 0x39B780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B77Cu;
    // 0x39b780: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x39B77Cu, 0x39B784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B784u;
label_39b784:
    // 0x39b784: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x39b784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_39b788:
    // 0x39b788: 0xc0e5f20  jal         func_397C80
label_39b78c:
    if (ctx->pc == 0x39B78Cu) {
        ctx->pc = 0x39B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B788u;
        // 0x39b78c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B790u;
        goto label_39b790;
    }
    ctx->pc = 0x39B788u;
    SET_GPR_U32(ctx, 31, 0x39B790u);
    ctx->pc = 0x39B78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B788u;
    // 0x39b78c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397C80u, 0x39B788u, 0x39B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B790u;
label_39b790:
    // 0x39b790: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x39b790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_39b794:
    // 0x39b794: 0xc0e5f26  jal         func_397C98
label_39b798:
    if (ctx->pc == 0x39B798u) {
        ctx->pc = 0x39B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B794u;
        // 0x39b798: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B79Cu;
        goto label_39b79c;
    }
    ctx->pc = 0x39B794u;
    SET_GPR_U32(ctx, 31, 0x39B79Cu);
    ctx->pc = 0x39B798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B794u;
    // 0x39b798: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397C98u, 0x39B794u, 0x39B79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B79Cu;
label_39b79c:
    // 0x39b79c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x39b79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_39b7a0:
    // 0x39b7a0: 0xc0ea648  jal         func_3A9920
label_39b7a4:
    if (ctx->pc == 0x39B7A4u) {
        ctx->pc = 0x39B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B7A0u;
        // 0x39b7a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B7A8u;
        goto label_39b7a8;
    }
    ctx->pc = 0x39B7A0u;
    SET_GPR_U32(ctx, 31, 0x39B7A8u);
    ctx->pc = 0x39B7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B7A0u;
    // 0x39b7a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9920u, 0x39B7A0u, 0x39B7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B7A8u;
label_39b7a8:
    // 0x39b7a8: 0xc0e606c  jal         func_3981B0
label_39b7ac:
    if (ctx->pc == 0x39B7ACu) {
        ctx->pc = 0x39B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B7A8u;
        // 0x39b7ac: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B7B0u;
        goto label_39b7b0;
    }
    ctx->pc = 0x39B7A8u;
    SET_GPR_U32(ctx, 31, 0x39B7B0u);
    ctx->pc = 0x39B7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B7A8u;
    // 0x39b7ac: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3981B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3981B0u, 0x39B7A8u, 0x39B7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B7B0u;
label_39b7b0:
    // 0x39b7b0: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x39b7b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_39b7b4:
    // 0x39b7b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39b7b8:
    // 0x39b7b8: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_39b7bc:
    if (ctx->pc == 0x39B7BCu) {
        ctx->pc = 0x39B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B7B8u;
        // 0x39b7bc: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B7C0u;
        goto label_39b7c0;
    }
    ctx->pc = 0x39B7B8u;
    {
        const bool branch_taken_0x39b7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39b7b8) {
            ctx->pc = 0x39B7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B7B8u;
            // 0x39b7bc: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B7E4u;
            goto label_39b7e4;
        }
    }
    ctx->pc = 0x39B7C0u;
label_39b7c0:
    // 0x39b7c0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x39b7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_39b7c4:
    // 0x39b7c4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_39b7c8:
    if (ctx->pc == 0x39B7C8u) {
        ctx->pc = 0x39B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B7C4u;
        // 0x39b7c8: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B7CCu;
        goto label_39b7cc;
    }
    ctx->pc = 0x39B7C4u;
    {
        const bool branch_taken_0x39b7c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b7c4) {
            ctx->pc = 0x39B7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B7C4u;
            // 0x39b7c8: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B7E4u;
            goto label_39b7e4;
        }
    }
    ctx->pc = 0x39B7CCu;
label_39b7cc:
    // 0x39b7cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39b7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39b7d0:
    // 0x39b7d0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x39b7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_39b7d4:
    // 0x39b7d4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x39b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_39b7d8:
    // 0x39b7d8: 0x40f809  jalr        $v0
label_39b7dc:
    if (ctx->pc == 0x39B7DCu) {
        ctx->pc = 0x39B7E0u;
        goto label_39b7e0;
    }
    ctx->pc = 0x39B7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39B7E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B7D8u, 0x39B7E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39B7E0u;
label_39b7e0:
    // 0x39b7e0: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x39b7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_39b7e4:
    // 0x39b7e4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_39b7e8:
    if (ctx->pc == 0x39B7E8u) {
        ctx->pc = 0x39B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B7E4u;
        // 0x39b7e8: 0xa20000ac  sb          $zero, 0xAC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B7ECu;
        goto label_39b7ec;
    }
    ctx->pc = 0x39B7E4u;
    {
        const bool branch_taken_0x39b7e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b7e4) {
            ctx->pc = 0x39B7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B7E4u;
            // 0x39b7e8: 0xa20000ac  sb          $zero, 0xAC($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B7F8u;
            goto label_39b7f8;
        }
    }
    ctx->pc = 0x39B7ECu;
label_39b7ec:
    // 0x39b7ec: 0xc0eb544  jal         func_3AD510
label_39b7f0:
    if (ctx->pc == 0x39B7F0u) {
        ctx->pc = 0x39B7F4u;
        goto label_39b7f4;
    }
    ctx->pc = 0x39B7ECu;
    SET_GPR_U32(ctx, 31, 0x39B7F4u);
    ctx->pc = 0x3AD510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD510u, 0x39B7ECu, 0x39B7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B7F4u;
label_39b7f4:
    // 0x39b7f4: 0xa20000ac  sb          $zero, 0xAC($s0)
    ctx->pc = 0x39b7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
label_39b7f8:
    // 0x39b7f8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x39b7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_39b7fc:
    // 0x39b7fc: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x39b7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_39b800:
    // 0x39b800: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39b800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39b804:
    // 0x39b804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39b804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39b808:
    // 0x39b808: 0x80ebe56  j           func_3AF958
label_39b80c:
    if (ctx->pc == 0x39B80Cu) {
        ctx->pc = 0x39B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B808u;
        // 0x39b80c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B810u;
        goto label_fallthrough_0x39b808;
    }
    ctx->pc = 0x39B808u;
    ctx->pc = 0x39B80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B808u;
    // 0x39b80c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF958u;
    sub_003AF958_0x3af958(rdram, ctx, runtime); return;
label_fallthrough_0x39b808:
    ctx->pc = 0x39B810u;
}
