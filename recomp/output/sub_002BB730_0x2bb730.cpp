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

// Function: sub_002BB730
// Address: 0x2bb730 - 0x2bb7a8
void sub_002BB730_0x2bb730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB730_0x2bb730");
#endif

    switch (ctx->pc) {
        case 0x2bb740u: goto label_2bb740;
        case 0x2bb778u: goto label_2bb778;
        default: break;
    }

    ctx->pc = 0x2bb730u;

    // 0x2bb730: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2bb730u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bb734: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BB734u;
    {
        const bool branch_taken_0x2bb734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB734u;
        // 0x2bb738: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb734) {
            ctx->pc = 0x2BB75Cu;
            goto label_2bb75c;
        }
    }
    ctx->pc = 0x2BB73Cu;
    // 0x2bb73c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2bb73cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2bb740:
    // 0x2bb740: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2bb740u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bb744: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2bb744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2bb748: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2bb748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2bb74c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2bb74cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bb750: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2bb750u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bb754: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BB754u;
    {
        const bool branch_taken_0x2bb754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB754u;
        // 0x2bb758: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb754) {
            ctx->pc = 0x2BB740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb740;
        }
    }
    ctx->pc = 0x2BB75Cu;
label_2bb75c:
    // 0x2bb75c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bb75cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb760: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bb760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2bb764: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2bb764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2bb768: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2bb768u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bb76c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BB76Cu;
    {
        const bool branch_taken_0x2bb76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB76Cu;
        // 0x2bb770: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb76c) {
            ctx->pc = 0x2BB794u;
            goto label_2bb794;
        }
    }
    ctx->pc = 0x2BB774u;
    // 0x2bb774: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2bb774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2bb778:
    // 0x2bb778: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2bb778u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bb77c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2bb77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2bb780: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2bb780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2bb784: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2bb784u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bb788: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2bb788u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bb78c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BB78Cu;
    {
        const bool branch_taken_0x2bb78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB78Cu;
        // 0x2bb790: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb78c) {
            ctx->pc = 0x2BB778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb778;
        }
    }
    ctx->pc = 0x2BB794u;
label_2bb794:
    // 0x2bb794: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x2bb794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2bb798: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2bb798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2bb79c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB79Cu;
        // 0x2bb7a0: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB7A4u;
    // 0x2bb7a4: 0x0  nop
    ctx->pc = 0x2bb7a4u;
    // NOP
    ctx->pc = 0x2bb7a8u;
}
