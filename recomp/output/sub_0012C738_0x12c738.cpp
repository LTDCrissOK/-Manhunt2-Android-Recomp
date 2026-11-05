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

// Function: sub_0012C738
// Address: 0x12c738 - 0x12c7c8
void sub_0012C738_0x12c738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C738_0x12c738");
#endif

    switch (ctx->pc) {
        case 0x12c758u: goto label_12c758;
        default: break;
    }

    ctx->pc = 0x12c738u;

    // 0x12c738: 0x908204c8  lbu         $v0, 0x4C8($a0)
    ctx->pc = 0x12c738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1224)));
    // 0x12c73c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12C73Cu;
    {
        const bool branch_taken_0x12c73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C73Cu;
        // 0x12c740: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c73c) {
            ctx->pc = 0x12C788u;
            goto label_12c788;
        }
    }
    ctx->pc = 0x12C744u;
    // 0x12c744: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x12c744u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c748: 0x248a00c8  addiu       $t2, $a0, 0xC8
    ctx->pc = 0x12c748u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
    // 0x12c74c: 0x248900cc  addiu       $t1, $a0, 0xCC
    ctx->pc = 0x12c74cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 204));
    // 0x12c750: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x12c750u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x12c754: 0x0  nop
    ctx->pc = 0x12c754u;
    // NOP
label_12c758:
    // 0x12c758: 0x1471021  addu        $v0, $t2, $a3
    ctx->pc = 0x12c758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x12c75c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c760: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C760u;
    {
        const bool branch_taken_0x12c760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x12C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C760u;
        // 0x12c764: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c760) {
            ctx->pc = 0x12C778u;
            goto label_12c778;
        }
    }
    ctx->pc = 0x12C768u;
    // 0x12c768: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x12c768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x12c76c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c770: 0x10660013  beq         $v1, $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x12C770u;
    {
        const bool branch_taken_0x12c770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x12C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C770u;
        // 0x12c774: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c770) {
            ctx->pc = 0x12C7C0u;
            goto label_12c7c0;
        }
    }
    ctx->pc = 0x12C778u;
label_12c778:
    // 0x12c778: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x12c778u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12c77c: 0x10b182b  sltu        $v1, $t0, $t3
    ctx->pc = 0x12c77cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12c780: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x12C780u;
    {
        const bool branch_taken_0x12c780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C780u;
        // 0x12c784: 0x838c0  sll         $a3, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c780) {
            ctx->pc = 0x12C758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c758;
        }
    }
    ctx->pc = 0x12C788u;
label_12c788:
    // 0x12c788: 0x908304c8  lbu         $v1, 0x4C8($a0)
    ctx->pc = 0x12c788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1224)));
    // 0x12c78c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x12c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x12c790: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12C790u;
    {
        const bool branch_taken_0x12c790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C790u;
        // 0x12c794: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c790) {
            ctx->pc = 0x12C7C0u;
            goto label_12c7c0;
        }
    }
    ctx->pc = 0x12C798u;
    // 0x12c798: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12c798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x12c79c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x12c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12c7a0: 0xac4500c8  sw          $a1, 0xC8($v0)
    ctx->pc = 0x12c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 5));
    // 0x12c7a4: 0x908304c8  lbu         $v1, 0x4C8($a0)
    ctx->pc = 0x12c7a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1224)));
    // 0x12c7a8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x12c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x12c7ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x12c7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x12c7b0: 0xac6600cc  sw          $a2, 0xCC($v1)
    ctx->pc = 0x12c7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 6));
    // 0x12c7b4: 0x908204c8  lbu         $v0, 0x4C8($a0)
    ctx->pc = 0x12c7b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1224)));
    // 0x12c7b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12c7bc: 0xa08204c8  sb          $v0, 0x4C8($a0)
    ctx->pc = 0x12c7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1224), (uint8_t)GPR_U32(ctx, 2));
label_12c7c0:
    // 0x12c7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x12C7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C7C8u;
}
