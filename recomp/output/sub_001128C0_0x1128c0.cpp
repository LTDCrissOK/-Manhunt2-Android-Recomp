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

// Function: sub_001128C0
// Address: 0x1128c0 - 0x112910
void sub_001128C0_0x1128c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001128C0_0x1128c0");
#endif

    switch (ctx->pc) {
        case 0x1128d0u: goto label_1128d0;
        default: break;
    }

    ctx->pc = 0x1128c0u;

    // 0x1128c0: 0x24870024  addiu       $a3, $a0, 0x24
    ctx->pc = 0x1128c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x1128c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1128c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1128c8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1128c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1128cc: 0x0  nop
    ctx->pc = 0x1128ccu;
    // NOP
label_1128d0:
    // 0x1128d0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1128d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1128d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1128d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1128d8: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1128D8u;
    {
        const bool branch_taken_0x1128d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1128d8) {
            ctx->pc = 0x1128DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1128D8u;
            // 0x1128dc: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1128F4u;
            goto label_1128f4;
        }
    }
    ctx->pc = 0x1128E0u;
    // 0x1128e0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1128e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1128e4: 0x908200a4  lbu         $v0, 0xA4($a0)
    ctx->pc = 0x1128e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1128e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1128e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1128ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1128ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1128F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128ECu;
        // 0x1128f0: 0xa08200a4  sb          $v0, 0xA4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 164), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1128ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1128F4u;
label_1128f4:
    // 0x1128f4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1128f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1128f8: 0x2cc30020  sltiu       $v1, $a2, 0x20
    ctx->pc = 0x1128f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1128fc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1128FCu;
    {
        const bool branch_taken_0x1128fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x112900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128FCu;
        // 0x112900: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1128fc) {
            ctx->pc = 0x1128D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1128d0;
        }
    }
    ctx->pc = 0x112904u;
    // 0x112904: 0x3e00008  jr          $ra
    ctx->pc = 0x112904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11290Cu;
    // 0x11290c: 0x0  nop
    ctx->pc = 0x11290cu;
    // NOP
    ctx->pc = 0x112910u;
}
