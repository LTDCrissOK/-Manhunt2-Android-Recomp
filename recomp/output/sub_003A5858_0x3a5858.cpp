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

// Function: sub_003A5858
// Address: 0x3a5858 - 0x3a58b0
void sub_003A5858_0x3a5858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5858_0x3a5858");
#endif

    switch (ctx->pc) {
        case 0x3a5870u: goto label_3a5870;
        default: break;
    }

    ctx->pc = 0x3a5858u;

    // 0x3a5858: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a5858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a585c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a585cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5860: 0x244439a0  addiu       $a0, $v0, 0x39A0
    ctx->pc = 0x3a5860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14752));
    // 0x3a5864: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a5864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5868: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3a5868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a586c: 0x0  nop
    ctx->pc = 0x3a586cu;
    // NOP
label_3a5870:
    // 0x3a5870: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3a5870u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a5874: 0x54470005  bnel        $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5874u;
    {
        const bool branch_taken_0x3a5874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x3a5874) {
            ctx->pc = 0x3A5878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5874u;
            // 0x3a5878: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A588Cu;
            goto label_3a588c;
        }
    }
    ctx->pc = 0x3A587Cu;
    // 0x3a587c: 0x80830002  lb          $v1, 0x2($a0)
    ctx->pc = 0x3a587cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3a5880: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A5880u;
    {
        const bool branch_taken_0x3a5880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x3A5884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5880u;
        // 0x3a5884: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5880) {
            ctx->pc = 0x3A58A0u;
            goto label_3a58a0;
        }
    }
    ctx->pc = 0x3A5888u;
    // 0x3a5888: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a5888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3a588c:
    // 0x3a588c: 0x28a2000d  slti        $v0, $a1, 0xD
    ctx->pc = 0x3a588cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x3a5890: 0x0  nop
    ctx->pc = 0x3a5890u;
    // NOP
    // 0x3a5894: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3A5894u;
    {
        const bool branch_taken_0x3a5894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5894u;
        // 0x3a5898: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5894) {
            ctx->pc = 0x3A5870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5870;
        }
    }
    ctx->pc = 0x3A589Cu;
    // 0x3a589c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a589cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a58a0:
    // 0x3a58a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A58A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A58A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A58A8u;
    // 0x3a58a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3a58a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a58ac: 0x0  nop
    ctx->pc = 0x3a58acu;
    // NOP
    ctx->pc = 0x3a58b0u;
}
