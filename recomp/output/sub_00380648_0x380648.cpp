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

// Function: sub_00380648
// Address: 0x380648 - 0x380738
void sub_00380648_0x380648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380648_0x380648");
#endif

    switch (ctx->pc) {
        case 0x380670u: goto label_380670;
        case 0x380684u: goto label_380684;
        case 0x380698u: goto label_380698;
        case 0x3806acu: goto label_3806ac;
        case 0x3806c0u: goto label_3806c0;
        case 0x3806d4u: goto label_3806d4;
        case 0x3806e0u: goto label_3806e0;
        case 0x3806e8u: goto label_3806e8;
        case 0x3806fcu: goto label_3806fc;
        case 0x380710u: goto label_380710;
        case 0x380724u: goto label_380724;
        default: break;
    }

    ctx->pc = 0x380648u;

    // 0x380648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x380648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38064c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38064cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x380650: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x380650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x380654: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x380654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380658: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x380658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38065c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x38065cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x380660: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x380660u;
    {
        const bool branch_taken_0x380660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x380664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380660u;
        // 0x380664: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380660) {
            ctx->pc = 0x380670u;
            goto label_380670;
        }
    }
    ctx->pc = 0x380668u;
    // 0x380668: 0xc0df612  jal         func_37D848
    ctx->pc = 0x380668u;
    SET_GPR_U32(ctx, 31, 0x380670u);
    ctx->pc = 0x38066Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380668u;
    // 0x38066c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D848u, 0x380668u, 0x380670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380670u;
label_380670:
    // 0x380670: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x380670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x380674: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x380674u;
    {
        const bool branch_taken_0x380674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x380674) {
            ctx->pc = 0x380678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380674u;
            // 0x380678: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380688u;
            goto label_380688;
        }
    }
    ctx->pc = 0x38067Cu;
    // 0x38067c: 0xc0dfe46  jal         func_37F918
    ctx->pc = 0x38067Cu;
    SET_GPR_U32(ctx, 31, 0x380684u);
    ctx->pc = 0x380680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38067Cu;
    // 0x380680: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F918u, 0x38067Cu, 0x380684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380684u;
label_380684:
    // 0x380684: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x380684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_380688:
    // 0x380688: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x380688u;
    {
        const bool branch_taken_0x380688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x380688) {
            ctx->pc = 0x38068Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380688u;
            // 0x38068c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38069Cu;
            goto label_38069c;
        }
    }
    ctx->pc = 0x380690u;
    // 0x380690: 0xc0df0fa  jal         func_37C3E8
    ctx->pc = 0x380690u;
    SET_GPR_U32(ctx, 31, 0x380698u);
    ctx->pc = 0x380694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380690u;
    // 0x380694: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C3E8u, 0x380690u, 0x380698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380698u;
label_380698:
    // 0x380698: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x380698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_38069c:
    // 0x38069c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x38069Cu;
    {
        const bool branch_taken_0x38069c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38069c) {
            ctx->pc = 0x3806A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38069Cu;
            // 0x3806a0: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3806B0u;
            goto label_3806b0;
        }
    }
    ctx->pc = 0x3806A4u;
    // 0x3806a4: 0xc0df612  jal         func_37D848
    ctx->pc = 0x3806A4u;
    SET_GPR_U32(ctx, 31, 0x3806ACu);
    ctx->pc = 0x3806A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3806A4u;
    // 0x3806a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D848u, 0x3806A4u, 0x3806ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3806ACu;
label_3806ac:
    // 0x3806ac: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3806acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3806b0:
    // 0x3806b0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3806B0u;
    {
        const bool branch_taken_0x3806b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3806b0) {
            ctx->pc = 0x3806B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3806B0u;
            // 0x3806b4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3806C4u;
            goto label_3806c4;
        }
    }
    ctx->pc = 0x3806B8u;
    // 0x3806b8: 0xc0dfe46  jal         func_37F918
    ctx->pc = 0x3806B8u;
    SET_GPR_U32(ctx, 31, 0x3806C0u);
    ctx->pc = 0x3806BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3806B8u;
    // 0x3806bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F918u, 0x3806B8u, 0x3806C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3806C0u;
label_3806c0:
    // 0x3806c0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3806c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3806c4:
    // 0x3806c4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3806C4u;
    {
        const bool branch_taken_0x3806c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3806c4) {
            ctx->pc = 0x3806C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3806C4u;
            // 0x3806c8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3806D8u;
            goto label_3806d8;
        }
    }
    ctx->pc = 0x3806CCu;
    // 0x3806cc: 0xc0de876  jal         func_37A1D8
    ctx->pc = 0x3806CCu;
    SET_GPR_U32(ctx, 31, 0x3806D4u);
    ctx->pc = 0x3806D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3806CCu;
    // 0x3806d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A1D8u, 0x3806CCu, 0x3806D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3806D4u;
label_3806d4:
    // 0x3806d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3806d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3806d8:
    // 0x3806d8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3806D8u;
    {
        const bool branch_taken_0x3806d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3806d8) {
            ctx->pc = 0x3806DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3806D8u;
            // 0x3806dc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3806ECu;
            goto label_3806ec;
        }
    }
    ctx->pc = 0x3806E0u;
label_3806e0:
    // 0x3806e0: 0xc0df612  jal         func_37D848
    ctx->pc = 0x3806E0u;
    SET_GPR_U32(ctx, 31, 0x3806E8u);
    ctx->pc = 0x3806E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3806E0u;
    // 0x3806e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D848u, 0x3806E0u, 0x3806E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3806E8u;
label_3806e8:
    // 0x3806e8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3806e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3806ec:
    // 0x3806ec: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3806ECu;
    {
        const bool branch_taken_0x3806ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3806ec) {
            ctx->pc = 0x3806F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3806ECu;
            // 0x3806f0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380700u;
            goto label_380700;
        }
    }
    ctx->pc = 0x3806F4u;
    // 0x3806f4: 0xc0dfe46  jal         func_37F918
    ctx->pc = 0x3806F4u;
    SET_GPR_U32(ctx, 31, 0x3806FCu);
    ctx->pc = 0x3806F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3806F4u;
    // 0x3806f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F918u, 0x3806F4u, 0x3806FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3806FCu;
label_3806fc:
    // 0x3806fc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3806fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_380700:
    // 0x380700: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x380700u;
    {
        const bool branch_taken_0x380700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x380704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380700u;
        // 0x380704: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x380700) {
            ctx->pc = 0x380714u;
            goto label_380714;
        }
    }
    ctx->pc = 0x380708u;
    // 0x380708: 0xc0df32a  jal         func_37CCA8
    ctx->pc = 0x380708u;
    SET_GPR_U32(ctx, 31, 0x380710u);
    ctx->pc = 0x38070Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380708u;
    // 0x38070c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37CCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37CCA8u, 0x380708u, 0x380710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380710u;
label_380710:
    // 0x380710: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x380710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_380714:
    // 0x380714: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x380714u;
    {
        const bool branch_taken_0x380714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380714) {
            ctx->pc = 0x380718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380714u;
            // 0x380718: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380728u;
            goto label_380728;
        }
    }
    ctx->pc = 0x38071Cu;
    // 0x38071c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x38071Cu;
    SET_GPR_U32(ctx, 31, 0x380724u);
    ctx->pc = 0x380720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38071Cu;
    // 0x380720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x38071Cu, 0x380724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380724u;
label_380724:
    // 0x380724: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x380724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_380728:
    // 0x380728: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x380728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x38072c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38072cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380730: 0x3e00008  jr          $ra
    ctx->pc = 0x380730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380730u;
        // 0x380734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380738u;
}
