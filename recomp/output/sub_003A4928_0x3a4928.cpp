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

// Function: sub_003A4928
// Address: 0x3a4928 - 0x3a4a30
void sub_003A4928_0x3a4928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4928_0x3a4928");
#endif

    switch (ctx->pc) {
        case 0x3a4944u: goto label_3a4944;
        case 0x3a4978u: goto label_3a4978;
        case 0x3a4998u: goto label_3a4998;
        case 0x3a49b4u: goto label_3a49b4;
        case 0x3a49d4u: goto label_3a49d4;
        case 0x3a49dcu: goto label_3a49dc;
        case 0x3a49e4u: goto label_3a49e4;
        case 0x3a49ecu: goto label_3a49ec;
        case 0x3a49f8u: goto label_3a49f8;
        case 0x3a4a10u: goto label_3a4a10;
        default: break;
    }

    ctx->pc = 0x3a4928u;

    // 0x3a4928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a4928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a492c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a492cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4930: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A4930u;
    {
        const bool branch_taken_0x3a4930 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4930u;
        // 0x3a4934: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4930) {
            ctx->pc = 0x3A4950u;
            goto label_3a4950;
        }
    }
    ctx->pc = 0x3A4938u;
    // 0x3a4938: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a4938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a493c: 0xc0e8ff0  jal         func_3A3FC0
    ctx->pc = 0x3A493Cu;
    SET_GPR_U32(ctx, 31, 0x3A4944u);
    ctx->pc = 0x3A4940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A493Cu;
    // 0x3a4940: 0x24a5d8c8  addiu       $a1, $a1, -0x2738 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3FC0u, 0x3A493Cu, 0x3A4944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4944u;
label_3a4944:
    // 0x3a4944: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A4944u;
    {
        const bool branch_taken_0x3a4944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4944u;
        // 0x3a4948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4944) {
            ctx->pc = 0x3A4968u;
            goto label_3a4968;
        }
    }
    ctx->pc = 0x3A494Cu;
    // 0x3a494c: 0x0  nop
    ctx->pc = 0x3a494cu;
    // NOP
label_3a4950:
    // 0x3a4950: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x3a4950u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3a4954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a4954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a4958: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4958u;
    {
        const bool branch_taken_0x3a4958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a4958) {
            ctx->pc = 0x3A495Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4958u;
            // 0x3a495c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4968u;
            goto label_3a4968;
        }
    }
    ctx->pc = 0x3A4960u;
    // 0x3a4960: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x3a4960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x3a4964: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x3a4964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_3a4968:
    // 0x3a4968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a496c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A496Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A496Cu;
        // 0x3a4970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A496Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4974u;
    // 0x3a4974: 0x0  nop
    ctx->pc = 0x3a4974u;
    // NOP
label_3a4978:
    // 0x3a4978: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a4978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a497c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A497Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A497Cu;
        // 0x3a4980: 0xac443798  sw          $a0, 0x3798($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 14232), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A497Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4984u;
    // 0x3a4984: 0x0  nop
    ctx->pc = 0x3a4984u;
    // NOP
    // 0x3a4988: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a4988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a498c: 0x0  nop
    ctx->pc = 0x3a498cu;
    // NOP
    // 0x3a4990: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3a4990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3a4994: 0x0  nop
    ctx->pc = 0x3a4994u;
    // NOP
label_3a4998:
    // 0x3a4998: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a4998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a499c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a499cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a49a0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3a49a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3a49a4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x3a49a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x3a49a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3a49a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3a49ac: 0xc0e9508  jal         func_3A5420
    ctx->pc = 0x3A49ACu;
    SET_GPR_U32(ctx, 31, 0x3A49B4u);
    ctx->pc = 0x3A49B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A49ACu;
    // 0x3a49b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5420u, 0x3A49ACu, 0x3A49B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A49B4u;
label_3a49b4:
    // 0x3a49b4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3a49b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a49b8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a49b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a49bc: 0x24713650  addiu       $s1, $v1, 0x3650
    ctx->pc = 0x3a49bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 13904));
    // 0x3a49c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a49c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a49c4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A49C4u;
    {
        const bool branch_taken_0x3a49c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A49C4u;
        // 0x3a49c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a49c4) {
            ctx->pc = 0x3A4A1Cu;
            goto label_3a4a1c;
        }
    }
    ctx->pc = 0x3A49CCu;
    // 0x3a49cc: 0xc0e92ec  jal         func_3A4BB0
    ctx->pc = 0x3A49CCu;
    SET_GPR_U32(ctx, 31, 0x3A49D4u);
    ctx->pc = 0x3A4BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BB0u, 0x3A49CCu, 0x3A49D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A49D4u;
label_3a49d4:
    // 0x3a49d4: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A49D4u;
    SET_GPR_U32(ctx, 31, 0x3A49DCu);
    ctx->pc = 0x3A49D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A49D4u;
    // 0x3a49d8: 0x34048400  ori         $a0, $zero, 0x8400 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33792);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A49D4u, 0x3A49DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A49DCu;
label_3a49dc:
    // 0x3a49dc: 0xc0ee156  jal         func_3B8558
    ctx->pc = 0x3A49DCu;
    SET_GPR_U32(ctx, 31, 0x3A49E4u);
    ctx->pc = 0x3A49E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A49DCu;
    // 0x3a49e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8558u, 0x3A49DCu, 0x3A49E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A49E4u;
label_3a49e4:
    // 0x3a49e4: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A49E4u;
    SET_GPR_U32(ctx, 31, 0x3A49ECu);
    ctx->pc = 0x3A49E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A49E4u;
    // 0x3a49e8: 0x34048401  ori         $a0, $zero, 0x8401 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33793);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A49E4u, 0x3A49ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A49ECu;
label_3a49ec:
    // 0x3a49ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a49ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a49f0: 0xc0e8ffc  jal         func_3A3FF0
    ctx->pc = 0x3A49F0u;
    SET_GPR_U32(ctx, 31, 0x3A49F8u);
    ctx->pc = 0x3A49F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A49F0u;
    // 0x3a49f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3FF0u, 0x3A49F0u, 0x3A49F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A49F8u;
label_3a49f8:
    // 0x3a49f8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a49f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a49fc: 0x2484d798  addiu       $a0, $a0, -0x2868
    ctx->pc = 0x3a49fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956952));
    // 0x3a4a00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A4A00u;
    {
        const bool branch_taken_0x3a4a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4A00u;
        // 0x3a4a04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4a00) {
            ctx->pc = 0x3A4A18u;
            goto label_3a4a18;
        }
    }
    ctx->pc = 0x3A4A08u;
    // 0x3a4a08: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3A4A08u;
    SET_GPR_U32(ctx, 31, 0x3A4A10u);
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A4A08u, 0x3A4A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4A10u;
label_3a4a10:
    // 0x3a4a10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A4A10u;
    {
        const bool branch_taken_0x3a4a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4A10u;
        // 0x3a4a14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4a10) {
            ctx->pc = 0x3A4A1Cu;
            goto label_3a4a1c;
        }
    }
    ctx->pc = 0x3A4A18u;
label_3a4a18:
    // 0x3a4a18: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3a4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3a4a1c:
    // 0x3a4a1c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3a4a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a4a20: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3a4a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3a4a24: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3a4a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a4a28: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4A28u;
        // 0x3a4a2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4A30u;
}
