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

// Function: sub_001786D0
// Address: 0x1786d0 - 0x178750
void sub_001786D0_0x1786d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001786D0_0x1786d0");
#endif

    switch (ctx->pc) {
        case 0x1786ecu: goto label_1786ec;
        case 0x178700u: goto label_178700;
        default: break;
    }

    ctx->pc = 0x1786d0u;

    // 0x1786d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1786d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1786d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1786d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1786d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1786d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1786dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1786dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1786e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1786e4: 0xc05e1fe  jal         func_1787F8
    ctx->pc = 0x1786E4u;
    SET_GPR_U32(ctx, 31, 0x1786ECu);
    ctx->pc = 0x1786E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1786E4u;
    // 0x1786e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1787F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1787F8u, 0x1786E4u, 0x1786ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1786ECu;
label_1786ec:
    // 0x1786ec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1786ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786f0: 0x26060160  addiu       $a2, $s0, 0x160
    ctx->pc = 0x1786f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x1786f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1786f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786f8: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1786f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1786fc: 0x0  nop
    ctx->pc = 0x1786fcu;
    // NOP
label_178700:
    // 0x178700: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x178700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x178704: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178708: 0x14710007  bne         $v1, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x178708u;
    {
        const bool branch_taken_0x178708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x17870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178708u;
        // 0x17870c: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178708) {
            ctx->pc = 0x178728u;
            goto label_178728;
        }
    }
    ctx->pc = 0x178710u;
    // 0x178710: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x178710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x178714: 0x90430164  lbu         $v1, 0x164($v0)
    ctx->pc = 0x178714u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x178718: 0x14670003  bne         $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x178718u;
    {
        const bool branch_taken_0x178718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x17871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178718u;
        // 0x17871c: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178718) {
            ctx->pc = 0x178728u;
            goto label_178728;
        }
    }
    ctx->pc = 0x178720u;
    // 0x178720: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x178720u;
    {
        const bool branch_taken_0x178720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178720u;
        // 0x178724: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178720) {
            ctx->pc = 0x17873Cu;
            goto label_17873c;
        }
    }
    ctx->pc = 0x178728u;
label_178728:
    // 0x178728: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x178728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17872c: 0x2ca30008  sltiu       $v1, $a1, 0x8
    ctx->pc = 0x17872cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x178730: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x178730u;
    {
        const bool branch_taken_0x178730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x178734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178730u;
        // 0x178734: 0x52100  sll         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178730) {
            ctx->pc = 0x178700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178700;
        }
    }
    ctx->pc = 0x178738u;
    // 0x178738: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x178738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_17873c:
    // 0x17873c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17873cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178740: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178744: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178748: 0x3e00008  jr          $ra
    ctx->pc = 0x178748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178748u;
        // 0x17874c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178750u;
}
