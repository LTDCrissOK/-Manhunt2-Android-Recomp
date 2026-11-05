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

// Function: sub_003D4758
// Address: 0x3d4758 - 0x3d4818
void sub_003D4758_0x3d4758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4758_0x3d4758");
#endif

    ctx->pc = 0x3d4758u;

    // 0x3d4758: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d4758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d475c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x3d475cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x3d4760: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3d4760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3d4764: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x3d4764u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3d4768: 0x235c2  srl         $a2, $v0, 23
    ctx->pc = 0x3d4768u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x3d476c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x3d476cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3d4770: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x3d4770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3d4774: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D4774u;
    {
        const bool branch_taken_0x3d4774 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4774u;
        // 0x3d4778: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4774) {
            ctx->pc = 0x3D4788u;
            goto label_3d4788;
        }
    }
    ctx->pc = 0x3D477Cu;
    // 0x3d477c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d4780: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4780u;
        // 0x3d4784: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4788u;
label_3d4788:
    // 0x3d4788: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3d4788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3d478c: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3D478Cu;
    {
        const bool branch_taken_0x3d478c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D4790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D478Cu;
        // 0x3d4790: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d478c) {
            ctx->pc = 0x3D47C8u;
            goto label_3d47c8;
        }
    }
    ctx->pc = 0x3D4794u;
    // 0x3d4794: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D4794u;
    {
        const bool branch_taken_0x3d4794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4794u;
        // 0x3d4798: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4794) {
            ctx->pc = 0x3D47A8u;
            goto label_3d47a8;
        }
    }
    ctx->pc = 0x3D479Cu;
    // 0x3d479c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3d479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d47a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D47A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D47A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D47A0u;
        // 0x3d47a4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D47A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D47A8u;
label_3d47a8:
    // 0x3d47a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3d47a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3d47ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D47ACu;
    {
        const bool branch_taken_0x3d47ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D47B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D47ACu;
        // 0x3d47b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d47ac) {
            ctx->pc = 0x3D47BCu;
            goto label_3d47bc;
        }
    }
    ctx->pc = 0x3D47B4u;
    // 0x3d47b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D47B4u;
    {
        const bool branch_taken_0x3d47b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D47B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D47B4u;
        // 0x3d47b8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d47b4) {
            ctx->pc = 0x3D47C0u;
            goto label_3d47c0;
        }
    }
    ctx->pc = 0x3D47BCu;
label_3d47bc:
    // 0x3d47bc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3d47bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_3d47c0:
    // 0x3d47c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D47C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D47C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D47C0u;
        // 0x3d47c4: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D47C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D47C8u;
label_3d47c8:
    // 0x3d47c8: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x3d47c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x3d47cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d47ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d47d0: 0x24c4ff81  addiu       $a0, $a2, -0x7F
    ctx->pc = 0x3d47d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x3d47d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3d47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d47d8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x3d47d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x3d47dc: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x3d47dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x3d47e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D47E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D47E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D47E0u;
        // 0x3d47e4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D47E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D47E8u;
    // 0x3d47e8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3d47e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d47ec: 0x0  nop
    ctx->pc = 0x3d47ecu;
    // NOP
    // 0x3d47f0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x3d47f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3d47f4: 0x0  nop
    ctx->pc = 0x3d47f4u;
    // NOP
    // 0x3d47f8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x3d47f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3d47fc: 0x0  nop
    ctx->pc = 0x3d47fcu;
    // NOP
    // 0x3d4800: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d4800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4804: 0x0  nop
    ctx->pc = 0x3d4804u;
    // NOP
    // 0x3d4808: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3d4808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3d480c: 0x0  nop
    ctx->pc = 0x3d480cu;
    // NOP
    // 0x3d4810: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3d4810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3d4814: 0x0  nop
    ctx->pc = 0x3d4814u;
    // NOP
    ctx->pc = 0x3d4818u;
}
