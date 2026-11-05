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

// Function: sub_002BB4C8
// Address: 0x2bb4c8 - 0x2bb5c0
void sub_002BB4C8_0x2bb4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB4C8_0x2bb4c8");
#endif

    switch (ctx->pc) {
        case 0x2bb4dcu: goto label_2bb4dc;
        case 0x2bb4f0u: goto label_2bb4f0;
        case 0x2bb538u: goto label_2bb538;
        case 0x2bb554u: goto label_2bb554;
        case 0x2bb564u: goto label_2bb564;
        case 0x2bb56cu: goto label_2bb56c;
        default: break;
    }

    ctx->pc = 0x2bb4c8u;

    // 0x2bb4c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb4cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2bb4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2bb4d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2bb4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2bb4d4: 0xc075fc8  jal         func_1D7F20
    ctx->pc = 0x2BB4D4u;
    SET_GPR_U32(ctx, 31, 0x2BB4DCu);
    ctx->pc = 0x2BB4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB4D4u;
    // 0x2bb4d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7F20u, 0x2BB4D4u, 0x2BB4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB4DCu;
label_2bb4dc:
    // 0x2bb4dc: 0x92020014  lbu         $v0, 0x14($s0)
    ctx->pc = 0x2bb4dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2bb4e0: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x2BB4E0u;
    {
        const bool branch_taken_0x2bb4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb4e0) {
            ctx->pc = 0x2BB4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB4E0u;
            // 0x2bb4e4: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB5A4u;
            goto label_2bb5a4;
        }
    }
    ctx->pc = 0x2BB4E8u;
    // 0x2bb4e8: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2BB4E8u;
    SET_GPR_U32(ctx, 31, 0x2BB4F0u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2BB4E8u, 0x2BB4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB4F0u;
label_2bb4f0:
    // 0x2bb4f0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2bb4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2bb4f4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2bb4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2bb4f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2bb4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bb4fc: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x2bb4fcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bb500: 0x50800028  beql        $a0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2BB500u;
    {
        const bool branch_taken_0x2bb500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb500) {
            ctx->pc = 0x2BB504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB500u;
            // 0x2bb504: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB5A4u;
            goto label_2bb5a4;
        }
    }
    ctx->pc = 0x2BB508u;
    // 0x2bb508: 0x92020015  lbu         $v0, 0x15($s0)
    ctx->pc = 0x2bb508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x2bb50c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2bb50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2bb510: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BB510u;
    {
        const bool branch_taken_0x2bb510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB510u;
        // 0x2bb514: 0xa2020015  sb          $v0, 0x15($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb510) {
            ctx->pc = 0x2BB540u;
            goto label_2bb540;
        }
    }
    ctx->pc = 0x2BB518u;
    // 0x2bb518: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2bb518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2bb51c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2bb51cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2bb520: 0x24a50190  addiu       $a1, $a1, 0x190
    ctx->pc = 0x2bb520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
    // 0x2bb524: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bb524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb528: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bb528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bb52c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bb52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb530: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x2BB530u;
    SET_GPR_U32(ctx, 31, 0x2BB538u);
    ctx->pc = 0x2BB534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB530u;
    // 0x2bb534: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x2BB530u, 0x2BB538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB538u;
label_2bb538:
    // 0x2bb538: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BB538u;
    {
        const bool branch_taken_0x2bb538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB538u;
        // 0x2bb53c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb538) {
            ctx->pc = 0x2BB558u;
            goto label_2bb558;
        }
    }
    ctx->pc = 0x2BB540u;
label_2bb540:
    // 0x2bb540: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2bb540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2bb544: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x2bb544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2bb548: 0x24a50198  addiu       $a1, $a1, 0x198
    ctx->pc = 0x2bb548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 408));
    // 0x2bb54c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x2BB54Cu;
    SET_GPR_U32(ctx, 31, 0x2BB554u);
    ctx->pc = 0x2BB550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB54Cu;
    // 0x2bb550: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x2BB54Cu, 0x2BB554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB554u;
label_2bb554:
    // 0x2bb554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb558:
    // 0x2bb558: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bb558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb55c: 0xc0aebee  jal         func_2BAFB8
    ctx->pc = 0x2BB55Cu;
    SET_GPR_U32(ctx, 31, 0x2BB564u);
    ctx->pc = 0x2BB560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB55Cu;
    // 0x2bb560: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAFB8u, 0x2BB55Cu, 0x2BB564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB564u;
label_2bb564:
    // 0x2bb564: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2BB564u;
    SET_GPR_U32(ctx, 31, 0x2BB56Cu);
    ctx->pc = 0x2BB568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB564u;
    // 0x2bb568: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2BB564u, 0x2BB56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB56Cu;
label_2bb56c:
    // 0x2bb56c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2bb56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2bb570: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BB570u;
    {
        const bool branch_taken_0x2bb570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB570u;
        // 0x2bb574: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb570) {
            ctx->pc = 0x2BB58Cu;
            goto label_2bb58c;
        }
    }
    ctx->pc = 0x2BB578u;
    // 0x2bb578: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2bb578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2bb57c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bb57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb580: 0x24420128  addiu       $v0, $v0, 0x128
    ctx->pc = 0x2bb580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
    // 0x2bb584: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB584u;
    {
        const bool branch_taken_0x2bb584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB584u;
        // 0x2bb588: 0xa2030014  sb          $v1, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb584) {
            ctx->pc = 0x2BB59Cu;
            goto label_2bb59c;
        }
    }
    ctx->pc = 0x2BB58Cu;
label_2bb58c:
    // 0x2bb58c: 0x92020015  lbu         $v0, 0x15($s0)
    ctx->pc = 0x2bb58cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x2bb590: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB590u;
    {
        const bool branch_taken_0x2bb590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB590u;
        // 0x2bb594: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb590) {
            ctx->pc = 0x2BB5A0u;
            goto label_2bb5a0;
        }
    }
    ctx->pc = 0x2BB598u;
    // 0x2bb598: 0x24420128  addiu       $v0, $v0, 0x128
    ctx->pc = 0x2bb598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
label_2bb59c:
    // 0x2bb59c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2bb59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_2bb5a0:
    // 0x2bb5a0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2bb5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2bb5a4:
    // 0x2bb5a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2bb5a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb5a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2bb5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB5ACu;
        // 0x2bb5b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB5B4u;
    // 0x2bb5b4: 0x0  nop
    ctx->pc = 0x2bb5b4u;
    // NOP
    // 0x2bb5b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2bb5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bb5bc: 0x0  nop
    ctx->pc = 0x2bb5bcu;
    // NOP
    ctx->pc = 0x2bb5c0u;
}
