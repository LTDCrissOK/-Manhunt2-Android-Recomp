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

// Function: sub_00151998
// Address: 0x151998 - 0x1519f0
void sub_00151998_0x151998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151998_0x151998");
#endif

    switch (ctx->pc) {
        case 0x1519a0u: goto label_1519a0;
        case 0x1519c8u: goto label_1519c8;
        default: break;
    }

    ctx->pc = 0x151998u;

    // 0x151998: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x151998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15199c: 0x24860918  addiu       $a2, $a0, 0x918
    ctx->pc = 0x15199cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2328));
label_1519a0:
    // 0x1519a0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1519a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1519a4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1519a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1519a8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1519a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1519ac: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1519acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1519b0: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x1519b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1519b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1519B4u;
    {
        const bool branch_taken_0x1519b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1519B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519B4u;
        // 0x1519b8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1519b4) {
            ctx->pc = 0x1519A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1519a0;
        }
    }
    ctx->pc = 0x1519BCu;
    // 0x1519bc: 0xa0800938  sb          $zero, 0x938($a0)
    ctx->pc = 0x1519bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2360), (uint8_t)GPR_U32(ctx, 0));
    // 0x1519c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1519c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1519c4: 0x2486093c  addiu       $a2, $a0, 0x93C
    ctx->pc = 0x1519c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2364));
label_1519c8:
    // 0x1519c8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1519c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1519cc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1519ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1519d0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1519d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1519d4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1519d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1519d8: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x1519d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1519dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1519DCu;
    {
        const bool branch_taken_0x1519dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1519E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519DCu;
        // 0x1519e0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1519dc) {
            ctx->pc = 0x1519C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1519c8;
        }
    }
    ctx->pc = 0x1519E4u;
    // 0x1519e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1519E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1519E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519E4u;
        // 0x1519e8: 0xa080095c  sb          $zero, 0x95C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2396), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1519E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1519ECu;
    // 0x1519ec: 0x0  nop
    ctx->pc = 0x1519ecu;
    // NOP
    ctx->pc = 0x1519f0u;
}
