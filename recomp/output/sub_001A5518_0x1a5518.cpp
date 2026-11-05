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

// Function: sub_001A5518
// Address: 0x1a5518 - 0x1a55f0
void sub_001A5518_0x1a5518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5518_0x1a5518");
#endif

    switch (ctx->pc) {
        case 0x1a5540u: goto label_1a5540;
        case 0x1a5558u: goto label_1a5558;
        case 0x1a556cu: goto label_1a556c;
        case 0x1a5588u: goto label_1a5588;
        default: break;
    }

    ctx->pc = 0x1a5518u;

    // 0x1a5518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a551c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a551cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5520: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a5520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a5524: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a5524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5528: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a552c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a552cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5530: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a5530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a5534: 0x8e040ff8  lw          $a0, 0xFF8($s0)
    ctx->pc = 0x1a5534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
    // 0x1a5538: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x1A5538u;
    SET_GPR_U32(ctx, 31, 0x1A5540u);
    ctx->pc = 0x1A553Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5538u;
    // 0x1a553c: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1A5538u, 0x1A5540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5540u;
label_1a5540:
    // 0x1a5540: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A5540u;
    {
        const bool branch_taken_0x1a5540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5540) {
            ctx->pc = 0x1A5544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5540u;
            // 0x1a5544: 0x8e040ff8  lw          $a0, 0xFF8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5560u;
            goto label_1a5560;
        }
    }
    ctx->pc = 0x1A5548u;
    // 0x1a5548: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a5548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a554c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a554cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5550: 0xc0950d0  jal         func_254340
    ctx->pc = 0x1A5550u;
    SET_GPR_U32(ctx, 31, 0x1A5558u);
    ctx->pc = 0x1A5554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5550u;
    // 0x1a5554: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254340u, 0x1A5550u, 0x1A5558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5558u;
label_1a5558:
    // 0x1a5558: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A5558u;
    {
        const bool branch_taken_0x1a5558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5558u;
        // 0x1a555c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5558) {
            ctx->pc = 0x1A558Cu;
            goto label_1a558c;
        }
    }
    ctx->pc = 0x1A5560u;
label_1a5560:
    // 0x1a5560: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a5560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5564: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x1A5564u;
    SET_GPR_U32(ctx, 31, 0x1A556Cu);
    ctx->pc = 0x1A5568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5564u;
    // 0x1a5568: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1A5564u, 0x1A556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A556Cu;
label_1a556c:
    // 0x1a556c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A556Cu;
    {
        const bool branch_taken_0x1a556c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A556Cu;
        // 0x1a5570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a556c) {
            ctx->pc = 0x1A5588u;
            goto label_1a5588;
        }
    }
    ctx->pc = 0x1A5574u;
    // 0x1a5574: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1a5574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a5578: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1a5578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1a557c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a557cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a5580: 0xc095178  jal         func_2545E0
    ctx->pc = 0x1A5580u;
    SET_GPR_U32(ctx, 31, 0x1A5588u);
    ctx->pc = 0x1A5584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5580u;
    // 0x1a5584: 0x8cc51004  lw          $a1, 0x1004($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545E0u, 0x1A5580u, 0x1A5588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5588u;
label_1a5588:
    // 0x1a5588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a558c:
    // 0x1a558c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a558cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a5590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5594: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5594u;
        // 0x1a5598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A559Cu;
    // 0x1a559c: 0x0  nop
    ctx->pc = 0x1a559cu;
    // NOP
    // 0x1a55a0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a55a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a55a4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1a55a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a55a8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1a55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1a55ac: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A55ACu;
    {
        const bool branch_taken_0x1a55ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A55B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55ACu;
        // 0x1a55b0: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a55ac) {
            ctx->pc = 0x1A55CCu;
            goto label_1a55cc;
        }
    }
    ctx->pc = 0x1A55B4u;
    // 0x1a55b4: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x1a55b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1a55b8: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1a55b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a55bc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A55BCu;
    {
        const bool branch_taken_0x1a55bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A55C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55BCu;
        // 0x1a55c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a55bc) {
            ctx->pc = 0x1A55E8u;
            goto label_1a55e8;
        }
    }
    ctx->pc = 0x1A55C4u;
    // 0x1a55c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A55C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A55C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55C4u;
        // 0x1a55c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A55C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A55CCu;
label_1a55cc:
    // 0x1a55cc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A55CCu;
    {
        const bool branch_taken_0x1a55cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A55D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55CCu;
        // 0x1a55d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a55cc) {
            ctx->pc = 0x1A55E8u;
            goto label_1a55e8;
        }
    }
    ctx->pc = 0x1A55D4u;
    // 0x1a55d4: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x1a55d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x1a55d8: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x1a55d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1a55dc: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A55DCu;
    {
        const bool branch_taken_0x1a55dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A55E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A55DCu;
        // 0x1a55e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a55dc) {
            ctx->pc = 0x1A55E8u;
            goto label_1a55e8;
        }
    }
    ctx->pc = 0x1A55E4u;
    // 0x1a55e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a55e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a55e8:
    // 0x1a55e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A55E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A55E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A55F0u;
}
