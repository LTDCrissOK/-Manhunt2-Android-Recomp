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

// Function: sub_0027A450
// Address: 0x27a450 - 0x27a518
void sub_0027A450_0x27a450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A450_0x27a450");
#endif

    switch (ctx->pc) {
        case 0x27a480u: goto label_27a480;
        case 0x27a488u: goto label_27a488;
        case 0x27a494u: goto label_27a494;
        case 0x27a4b0u: goto label_27a4b0;
        case 0x27a4c0u: goto label_27a4c0;
        case 0x27a4d0u: goto label_27a4d0;
        case 0x27a4e8u: goto label_27a4e8;
        case 0x27a4f8u: goto label_27a4f8;
        default: break;
    }

    ctx->pc = 0x27a450u;

    // 0x27a450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27a450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27a454: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x27a454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x27a458: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27a458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27a45c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27a45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27a460: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x27a460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a464: 0x8c629e48  lw          $v0, -0x61B8($v1)
    ctx->pc = 0x27a464u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9E48u));
    // 0x27a468: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27a468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a46c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27a46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27a470: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27A470u;
    {
        const bool branch_taken_0x27a470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A470u;
        // 0x27a474: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a470) {
            ctx->pc = 0x27A4A0u;
            goto label_27a4a0;
        }
    }
    ctx->pc = 0x27A478u;
    // 0x27a478: 0x26309e48  addiu       $s0, $s1, -0x61B8
    ctx->pc = 0x27a478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942280));
    // 0x27a47c: 0x0  nop
    ctx->pc = 0x27a47cu;
    // NOP
label_27a480:
    // 0x27a480: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x27A480u;
    SET_GPR_U32(ctx, 31, 0x27A488u);
    ctx->pc = 0x27A484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A480u;
    // 0x27a484: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x27A480u, 0x27A488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A488u;
label_27a488:
    // 0x27a488: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x27a488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27a48c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x27A48Cu;
    SET_GPR_U32(ctx, 31, 0x27A494u);
    ctx->pc = 0x27A490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A48Cu;
    // 0x27a490: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x27A48Cu, 0x27A494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A494u;
label_27a494:
    // 0x27a494: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27a494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27a498: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x27A498u;
    {
        const bool branch_taken_0x27a498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a498) {
            ctx->pc = 0x27A480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a480;
        }
    }
    ctx->pc = 0x27A4A0u;
label_27a4a0:
    // 0x27a4a0: 0x8e229e48  lw          $v0, -0x61B8($s1)
    ctx->pc = 0x27a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942280)));
    // 0x27a4a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27A4A4u;
    {
        const bool branch_taken_0x27a4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4A4u;
        // 0x27a4a8: 0x26309e48  addiu       $s0, $s1, -0x61B8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a4a4) {
            ctx->pc = 0x27A4E0u;
            goto label_27a4e0;
        }
    }
    ctx->pc = 0x27A4ACu;
    // 0x27a4ac: 0x0  nop
    ctx->pc = 0x27a4acu;
    // NOP
label_27a4b0:
    // 0x27a4b0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x27A4B0u;
    {
        const bool branch_taken_0x27a4b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4B0u;
        // 0x27a4b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a4b0) {
            ctx->pc = 0x27A4C8u;
            goto label_27a4c8;
        }
    }
    ctx->pc = 0x27A4B8u;
    // 0x27a4b8: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x27A4B8u;
    SET_GPR_U32(ctx, 31, 0x27A4C0u);
    ctx->pc = 0x27A4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A4B8u;
    // 0x27a4bc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x27A4B8u, 0x27A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A4C0u;
label_27a4c0:
    // 0x27a4c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27A4C0u;
    {
        const bool branch_taken_0x27a4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4C0u;
        // 0x27a4c4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a4c0) {
            ctx->pc = 0x27A4D4u;
            goto label_27a4d4;
        }
    }
    ctx->pc = 0x27A4C8u;
label_27a4c8:
    // 0x27a4c8: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x27A4C8u;
    SET_GPR_U32(ctx, 31, 0x27A4D0u);
    ctx->pc = 0x27A4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A4C8u;
    // 0x27a4cc: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x27A4C8u, 0x27A4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A4D0u;
label_27a4d0:
    // 0x27a4d0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x27a4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_27a4d4:
    // 0x27a4d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27a4d8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x27A4D8u;
    {
        const bool branch_taken_0x27a4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a4d8) {
            ctx->pc = 0x27A4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a4b0;
        }
    }
    ctx->pc = 0x27A4E0u;
label_27a4e0:
    // 0x27a4e0: 0xc09ea96  jal         func_27AA58
    ctx->pc = 0x27A4E0u;
    SET_GPR_U32(ctx, 31, 0x27A4E8u);
    ctx->pc = 0x27AA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AA58u, 0x27A4E0u, 0x27A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A4E8u;
label_27a4e8:
    // 0x27a4e8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27a4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27a4ec: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27a4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27a4f0: 0xc0d73a6  jal         func_35CE98
    ctx->pc = 0x27A4F0u;
    SET_GPR_U32(ctx, 31, 0x27A4F8u);
    ctx->pc = 0x27A4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A4F0u;
    // 0x27a4f4: 0x2484edd8  addiu       $a0, $a0, -0x1228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE98u, 0x27A4F0u, 0x27A4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A4F8u;
label_27a4f8:
    // 0x27a4f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27a4f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a4fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27a4fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27a500: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27a500u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a504: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x27a504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27a508: 0x3e00008  jr          $ra
    ctx->pc = 0x27A508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A508u;
        // 0x27a50c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A510u;
    // 0x27a510: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27a510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27a514: 0x0  nop
    ctx->pc = 0x27a514u;
    // NOP
    ctx->pc = 0x27a518u;
}
