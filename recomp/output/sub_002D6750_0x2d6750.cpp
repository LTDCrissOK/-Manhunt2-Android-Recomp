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

// Function: sub_002D6750
// Address: 0x2d6750 - 0x2d6808
void sub_002D6750_0x2d6750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6750_0x2d6750");
#endif

    switch (ctx->pc) {
        case 0x2d676cu: goto label_2d676c;
        case 0x2d6774u: goto label_2d6774;
        case 0x2d6790u: goto label_2d6790;
        case 0x2d67a0u: goto label_2d67a0;
        case 0x2d67c8u: goto label_2d67c8;
        case 0x2d67dcu: goto label_2d67dc;
        default: break;
    }

    ctx->pc = 0x2d6750u;

    // 0x2d6750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d6754: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d6754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d6758: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d6758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d675c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d675cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d6760: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d6760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d6764: 0xc0b59ba  jal         func_2D66E8
    ctx->pc = 0x2D6764u;
    SET_GPR_U32(ctx, 31, 0x2D676Cu);
    ctx->pc = 0x2D6768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6764u;
    // 0x2d6768: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66E8u, 0x2D6764u, 0x2D676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D676Cu;
label_2d676c:
    // 0x2d676c: 0xc073dce  jal         func_1CF738
    ctx->pc = 0x2D676Cu;
    SET_GPR_U32(ctx, 31, 0x2D6774u);
    ctx->pc = 0x1CF738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF738u, 0x2D676Cu, 0x2D6774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6774u;
label_2d6774:
    // 0x2d6774: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2d6774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2d6778: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D6778u;
    {
        const bool branch_taken_0x2d6778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6778) {
            ctx->pc = 0x2D677Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6778u;
            // 0x2d677c: 0xa2200025  sb          $zero, 0x25($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 37), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D67E4u;
            goto label_2d67e4;
        }
    }
    ctx->pc = 0x2D6780u;
    // 0x2d6780: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2d6780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d6784: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D6784u;
    {
        const bool branch_taken_0x2d6784 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D6788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6784u;
        // 0x2d6788: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6784) {
            ctx->pc = 0x2D67B4u;
            goto label_2d67b4;
        }
    }
    ctx->pc = 0x2D678Cu;
    // 0x2d678c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d678cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6790:
    // 0x2d6790: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2d6790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2d6794: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d6794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d6798: 0xc07493a  jal         func_1D24E8
    ctx->pc = 0x2D6798u;
    SET_GPR_U32(ctx, 31, 0x2D67A0u);
    ctx->pc = 0x2D679Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6798u;
    // 0x2d679c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D24E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D24E8u, 0x2D6798u, 0x2D67A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D67A0u;
label_2d67a0:
    // 0x2d67a0: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2d67a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2d67a4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2d67a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d67a8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2d67a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d67ac: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D67ACu;
    {
        const bool branch_taken_0x2d67ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D67B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67ACu;
        // 0x2d67b0: 0x26520034  addiu       $s2, $s2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d67ac) {
            ctx->pc = 0x2D6790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6790;
        }
    }
    ctx->pc = 0x2D67B4u;
label_2d67b4:
    // 0x2d67b4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2d67b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2d67b8: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D67B8u;
    {
        const bool branch_taken_0x2d67b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d67b8) {
            ctx->pc = 0x2D67BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D67B8u;
            // 0x2d67bc: 0xa2200025  sb          $zero, 0x25($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 37), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D67E4u;
            goto label_2d67e4;
        }
    }
    ctx->pc = 0x2D67C0u;
    // 0x2d67c0: 0xc075526  jal         func_1D5498
    ctx->pc = 0x2D67C0u;
    SET_GPR_U32(ctx, 31, 0x2D67C8u);
    ctx->pc = 0x1D5498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5498u, 0x2D67C0u, 0x2D67C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D67C8u;
label_2d67c8:
    // 0x2d67c8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2d67c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2d67cc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D67CCu;
    {
        const bool branch_taken_0x2d67cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d67cc) {
            ctx->pc = 0x2D67D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D67CCu;
            // 0x2d67d0: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D67E0u;
            goto label_2d67e0;
        }
    }
    ctx->pc = 0x2D67D4u;
    // 0x2d67d4: 0xc075156  jal         func_1D4558
    ctx->pc = 0x2D67D4u;
    SET_GPR_U32(ctx, 31, 0x2D67DCu);
    ctx->pc = 0x2D67D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D67D4u;
    // 0x2d67d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4558u, 0x2D67D4u, 0x2D67DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D67DCu;
label_2d67dc:
    // 0x2d67dc: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x2d67dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_2d67e0:
    // 0x2d67e0: 0xa2200025  sb          $zero, 0x25($s1)
    ctx->pc = 0x2d67e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 37), (uint8_t)GPR_U32(ctx, 0));
label_2d67e4:
    // 0x2d67e4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2d67e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2d67e8: 0xa2200024  sb          $zero, 0x24($s1)
    ctx->pc = 0x2d67e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d67ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d67ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d67f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d67f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d67f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d67f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d67f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d67f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d67fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D67FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67FCu;
        // 0x2d6800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D67FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6804u;
    // 0x2d6804: 0x0  nop
    ctx->pc = 0x2d6804u;
    // NOP
    ctx->pc = 0x2d6808u;
}
