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

// Function: sub_002B54F8
// Address: 0x2b54f8 - 0x2b55e0
void sub_002B54F8_0x2b54f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B54F8_0x2b54f8");
#endif

    ctx->pc = 0x2b54f8u;

    // 0x2b54f8: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x2b54f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2b54fc: 0x24c2ffe0  addiu       $v0, $a2, -0x20
    ctx->pc = 0x2b54fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x2b5500: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x2b5500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2b5504: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5504u;
    {
        const bool branch_taken_0x2b5504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5504u;
        // 0x2b5508: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5504) {
            ctx->pc = 0x2B5514u;
            goto label_2b5514;
        }
    }
    ctx->pc = 0x2B550Cu;
    // 0x2b550c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2B550Cu;
    {
        const bool branch_taken_0x2b550c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B550Cu;
        // 0x2b5510: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b550c) {
            ctx->pc = 0x2B5590u;
            goto label_2b5590;
        }
    }
    ctx->pc = 0x2B5514u;
label_2b5514:
    // 0x2b5514: 0x24c2ffd0  addiu       $v0, $a2, -0x30
    ctx->pc = 0x2b5514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x2b5518: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2b5518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2b551c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B551Cu;
    {
        const bool branch_taken_0x2b551c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B551Cu;
        // 0x2b5520: 0x24c2ffc6  addiu       $v0, $a2, -0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967238));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b551c) {
            ctx->pc = 0x2B552Cu;
            goto label_2b552c;
        }
    }
    ctx->pc = 0x2B5524u;
    // 0x2b5524: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2B5524u;
    {
        const bool branch_taken_0x2b5524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5524u;
        // 0x2b5528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5524) {
            ctx->pc = 0x2B5590u;
            goto label_2b5590;
        }
    }
    ctx->pc = 0x2B552Cu;
label_2b552c:
    // 0x2b552c: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x2b552cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2b5530: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5530u;
    {
        const bool branch_taken_0x2b5530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5530u;
        // 0x2b5534: 0x24c2ffbf  addiu       $v0, $a2, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5530) {
            ctx->pc = 0x2B5540u;
            goto label_2b5540;
        }
    }
    ctx->pc = 0x2B5538u;
    // 0x2b5538: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2B5538u;
    {
        const bool branch_taken_0x2b5538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5538u;
        // 0x2b553c: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5538) {
            ctx->pc = 0x2B5590u;
            goto label_2b5590;
        }
    }
    ctx->pc = 0x2B5540u;
label_2b5540:
    // 0x2b5540: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2b5540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2b5544: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5544u;
    {
        const bool branch_taken_0x2b5544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5544u;
        // 0x2b5548: 0x24c2ffa5  addiu       $v0, $a2, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5544) {
            ctx->pc = 0x2B5554u;
            goto label_2b5554;
        }
    }
    ctx->pc = 0x2B554Cu;
    // 0x2b554c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B554Cu;
    {
        const bool branch_taken_0x2b554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B554Cu;
        // 0x2b5550: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b554c) {
            ctx->pc = 0x2B5590u;
            goto label_2b5590;
        }
    }
    ctx->pc = 0x2B5554u;
label_2b5554:
    // 0x2b5554: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x2b5554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2b5558: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5558u;
    {
        const bool branch_taken_0x2b5558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5558u;
        // 0x2b555c: 0x24c2ff9f  addiu       $v0, $a2, -0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5558) {
            ctx->pc = 0x2B5568u;
            goto label_2b5568;
        }
    }
    ctx->pc = 0x2B5560u;
    // 0x2b5560: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B5560u;
    {
        const bool branch_taken_0x2b5560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5560u;
        // 0x2b5564: 0x24030025  addiu       $v1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5560) {
            ctx->pc = 0x2B5590u;
            goto label_2b5590;
        }
    }
    ctx->pc = 0x2B5568u;
label_2b5568:
    // 0x2b5568: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2b5568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2b556c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B556Cu;
    {
        const bool branch_taken_0x2b556c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B556Cu;
        // 0x2b5570: 0x24c2ff85  addiu       $v0, $a2, -0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967173));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b556c) {
            ctx->pc = 0x2B557Cu;
            goto label_2b557c;
        }
    }
    ctx->pc = 0x2B5574u;
    // 0x2b5574: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5574u;
    {
        const bool branch_taken_0x2b5574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5574u;
        // 0x2b5578: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5574) {
            ctx->pc = 0x2B5590u;
            goto label_2b5590;
        }
    }
    ctx->pc = 0x2B557Cu;
label_2b557c:
    // 0x2b557c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2b557cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b5580: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5580u;
    {
        const bool branch_taken_0x2b5580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5580u;
        // 0x2b5584: 0x2403003f  addiu       $v1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5580) {
            ctx->pc = 0x2B5590u;
            goto label_2b5590;
        }
    }
    ctx->pc = 0x2B5588u;
    // 0x2b5588: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5588u;
        // 0x2b558c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5590u;
label_2b5590:
    // 0x2b5590: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5590u;
    {
        const bool branch_taken_0x2b5590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5590) {
            ctx->pc = 0x2B5594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5590u;
            // 0x2b5594: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B55B8u;
            goto label_2b55b8;
        }
    }
    ctx->pc = 0x2B5598u;
    // 0x2b5598: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x2b5598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x2b559c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b559cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2b55a0: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x2b55a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b55a4: 0x2463ace0  addiu       $v1, $v1, -0x5320
    ctx->pc = 0x2b55a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946016));
    // 0x2b55a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b55ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b55acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b55b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B55B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B55B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B55B0u;
        // 0x2b55b4: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B55B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B55B8u;
label_2b55b8:
    // 0x2b55b8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2b55b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b55bc: 0x2463ad68  addiu       $v1, $v1, -0x5298
    ctx->pc = 0x2b55bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946152));
    // 0x2b55c0: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x2b55c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b55c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b55c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b55c8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2b55c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b55cc: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x2b55ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2b55d0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b55d4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2b55d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b55d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B55D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B55DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B55D8u;
        // 0x2b55dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B55D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B55E0u;
}
