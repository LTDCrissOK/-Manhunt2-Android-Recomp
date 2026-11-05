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

// Function: sub_002BB000
// Address: 0x2bb000 - 0x2bb030
void sub_002BB000_0x2bb000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB000_0x2bb000");
#endif

    switch (ctx->pc) {
        case 0x2bb010u: goto label_2bb010;
        default: break;
    }

    ctx->pc = 0x2bb000u;

    // 0x2bb000: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2bb000u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bb004: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BB004u;
    {
        const bool branch_taken_0x2bb004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb004) {
            ctx->pc = 0x2BB028u;
            goto label_2bb028;
        }
    }
    ctx->pc = 0x2BB00Cu;
    // 0x2bb00c: 0x0  nop
    ctx->pc = 0x2bb00cu;
    // NOP
label_2bb010:
    // 0x2bb010: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2bb010u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2bb014: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x2bb014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x2bb018: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2bb018u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bb01c: 0x0  nop
    ctx->pc = 0x2bb01cu;
    // NOP
    // 0x2bb020: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BB020u;
    {
        const bool branch_taken_0x2bb020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB020u;
        // 0x2bb024: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb020) {
            ctx->pc = 0x2BB010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb010;
        }
    }
    ctx->pc = 0x2BB028u;
label_2bb028:
    // 0x2bb028: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB028u;
        // 0x2bb02c: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB030u;
}
