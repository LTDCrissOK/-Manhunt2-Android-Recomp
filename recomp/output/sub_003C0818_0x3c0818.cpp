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

// Function: sub_003C0818
// Address: 0x3c0818 - 0x3c0908
void sub_003C0818_0x3c0818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0818_0x3c0818");
#endif

    switch (ctx->pc) {
        case 0x3c0848u: goto label_3c0848;
        case 0x3c0868u: goto label_3c0868;
        case 0x3c0878u: goto label_3c0878;
        case 0x3c087cu: goto label_3c087c;
        case 0x3c0884u: goto label_3c0884;
        case 0x3c08e0u: goto label_3c08e0;
        default: break;
    }

    ctx->pc = 0x3c0818u;

    // 0x3c0818: 0x80a60000  lb          $a2, 0x0($a1)
    ctx->pc = 0x3c0818u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3c081c: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x3c081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x3c0820: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C0820u;
    {
        const bool branch_taken_0x3c0820 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0820u;
        // 0x3c0824: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0820) {
            ctx->pc = 0x3C0838u;
            goto label_3c0838;
        }
    }
    ctx->pc = 0x3C0828u;
    // 0x3c0828: 0x80a60000  lb          $a2, 0x0($a1)
    ctx->pc = 0x3c0828u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3c082c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3c082cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c0830: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C0830u;
    {
        const bool branch_taken_0x3c0830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0830u;
        // 0x3c0834: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0830) {
            ctx->pc = 0x3C083Cu;
            goto label_3c083c;
        }
    }
    ctx->pc = 0x3C0838u;
label_3c0838:
    // 0x3c0838: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c0838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c083c:
    // 0x3c083c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3c083cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3c0840: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x3c0840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x3c0844: 0x0  nop
    ctx->pc = 0x3c0844u;
    // NOP
label_3c0848:
    // 0x3c0848: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x3c0848u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x3c084c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3c084cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3c0850: 0x0  nop
    ctx->pc = 0x3c0850u;
    // NOP
    // 0x3c0854: 0x0  nop
    ctx->pc = 0x3c0854u;
    // NOP
    // 0x3c0858: 0x4e1fffb  bgez        $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C0858u;
    {
        const bool branch_taken_0x3c0858 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x3C085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0858u;
        // 0x3c085c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0858) {
            ctx->pc = 0x3C0848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0848;
        }
    }
    ctx->pc = 0x3C0860u;
    // 0x3c0860: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C0860u;
    {
        const bool branch_taken_0x3c0860 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0860u;
        // 0x3c0864: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0860) {
            ctx->pc = 0x3C0870u;
            goto label_3c0870;
        }
    }
    ctx->pc = 0x3C0868u;
label_3c0868:
    // 0x3c0868: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0868u;
        // 0x3c086c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C0870u;
label_3c0870:
    // 0x3c0870: 0x484023  subu        $t0, $v0, $t0
    ctx->pc = 0x3c0870u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3c0874: 0x0  nop
    ctx->pc = 0x3c0874u;
    // NOP
label_3c0878:
    // 0x3c0878: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x3c0878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3c087c:
    // 0x3c087c: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x3c087cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x3c0880: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x3c0880u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3c0884:
    // 0x3c0884: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3c0884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3c0888: 0x10e2000c  beq         $a3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3C0888u;
    {
        const bool branch_taken_0x3c0888 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0888u;
        // 0x3c088c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0888) {
            ctx->pc = 0x3C08BCu;
            goto label_3c08bc;
        }
    }
    ctx->pc = 0x3C0890u;
    // 0x3c0890: 0x28e2002e  slti        $v0, $a3, 0x2E
    ctx->pc = 0x3c0890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x3c0894: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C0894u;
    {
        const bool branch_taken_0x3c0894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0894u;
        // 0x3c0898: 0x2402005d  addiu       $v0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0894) {
            ctx->pc = 0x3C08ACu;
            goto label_3c08ac;
        }
    }
    ctx->pc = 0x3C089Cu;
    // 0x3c089c: 0x10e0fff2  beqz        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x3C089Cu;
    {
        const bool branch_taken_0x3c089c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C08A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C089Cu;
        // 0x3c08a0: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c089c) {
            ctx->pc = 0x3C0868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0868;
        }
    }
    ctx->pc = 0x3C08A4u;
    // 0x3c08a4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x3C08A4u;
    {
        const bool branch_taken_0x3c08a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C08A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C08A4u;
        // 0x3c08a8: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c08a4) {
            ctx->pc = 0x3C087Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c087c;
        }
    }
    ctx->pc = 0x3C08ACu;
label_3c08ac:
    // 0x3c08ac: 0x10e20014  beq         $a3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C08ACu;
    {
        const bool branch_taken_0x3c08ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C08B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C08ACu;
        // 0x3c08b0: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c08ac) {
            ctx->pc = 0x3C0900u;
            goto label_3c0900;
        }
    }
    ctx->pc = 0x3C08B4u;
    // 0x3c08b4: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x3C08B4u;
    {
        const bool branch_taken_0x3c08b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C08B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C08B4u;
        // 0x3c08b8: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c08b4) {
            ctx->pc = 0x3C087Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c087c;
        }
    }
    ctx->pc = 0x3C08BCu;
label_3c08bc:
    // 0x3c08bc: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x3c08bcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3c08c0: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x3c08c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x3c08c4: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C08C4u;
    {
        const bool branch_taken_0x3c08c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C08C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C08C4u;
        // 0x3c08c8: 0xe6102a  slt         $v0, $a3, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c08c4) {
            ctx->pc = 0x3C08D4u;
            goto label_3c08d4;
        }
    }
    ctx->pc = 0x3C08CCu;
    // 0x3c08cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C08CCu;
    {
        const bool branch_taken_0x3c08cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c08cc) {
            ctx->pc = 0x3C08D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C08CCu;
            // 0x3c08d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C08E0u;
            goto label_3c08e0;
        }
    }
    ctx->pc = 0x3C08D4u;
label_3c08d4:
    // 0x3c08d4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x3C08D4u;
    {
        const bool branch_taken_0x3c08d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C08D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C08D4u;
        // 0x3c08d8: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c08d4) {
            ctx->pc = 0x3C0878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0878;
        }
    }
    ctx->pc = 0x3C08DCu;
    // 0x3c08dc: 0x0  nop
    ctx->pc = 0x3c08dcu;
    // NOP
label_3c08e0:
    // 0x3c08e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3c08e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3c08e4: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x3c08e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3c08e8: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x3c08e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3c08ec: 0x0  nop
    ctx->pc = 0x3c08ecu;
    // NOP
    // 0x3c08f0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C08F0u;
    {
        const bool branch_taken_0x3c08f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C08F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C08F0u;
        // 0x3c08f4: 0xa0480000  sb          $t0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c08f0) {
            ctx->pc = 0x3C08E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c08e0;
        }
    }
    ctx->pc = 0x3C08F8u;
    // 0x3c08f8: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x3C08F8u;
    {
        const bool branch_taken_0x3c08f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C08FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C08F8u;
        // 0x3c08fc: 0x80a70000  lb          $a3, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c08f8) {
            ctx->pc = 0x3C0884u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0884;
        }
    }
    ctx->pc = 0x3C0900u;
label_3c0900:
    // 0x3c0900: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0900u;
        // 0x3c0904: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C0908u;
}
