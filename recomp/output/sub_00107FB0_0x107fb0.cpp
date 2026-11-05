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

// Function: sub_00107FB0
// Address: 0x107fb0 - 0x107fe0
void sub_00107FB0_0x107fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107FB0_0x107fb0");
#endif

    switch (ctx->pc) {
        case 0x107fb0u: goto label_107fb0;
        case 0x107fb4u: goto label_107fb4;
        case 0x107fb8u: goto label_107fb8;
        case 0x107fbcu: goto label_107fbc;
        case 0x107fc0u: goto label_107fc0;
        case 0x107fc4u: goto label_107fc4;
        case 0x107fc8u: goto label_107fc8;
        case 0x107fccu: goto label_107fcc;
        case 0x107fd0u: goto label_107fd0;
        case 0x107fd4u: goto label_107fd4;
        case 0x107fd8u: goto label_107fd8;
        case 0x107fdcu: goto label_107fdc;
        default: break;
    }

    ctx->pc = 0x107fb0u;

label_107fb0:
    // 0x107fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_107fb4:
    // 0x107fb4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107fb8:
    // 0x107fb8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_107fbc:
    if (ctx->pc == 0x107FBCu) {
        ctx->pc = 0x107FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FB8u;
        // 0x107fbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107FC0u;
        goto label_107fc0;
    }
    ctx->pc = 0x107FB8u;
    {
        const bool branch_taken_0x107fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FB8u;
        // 0x107fbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107fb8) {
            ctx->pc = 0x107FD0u;
            goto label_107fd0;
        }
    }
    ctx->pc = 0x107FC0u;
label_107fc0:
    // 0x107fc0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x107fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_107fc4:
    // 0x107fc4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_107fc8:
    // 0x107fc8: 0x40f809  jalr        $v0
label_107fcc:
    if (ctx->pc == 0x107FCCu) {
        ctx->pc = 0x107FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FC8u;
        // 0x107fcc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107FD0u;
        goto label_107fd0;
    }
    ctx->pc = 0x107FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107FD0u);
        ctx->pc = 0x107FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FC8u;
        // 0x107fcc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107FC8u, 0x107FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107FD0u;
label_107fd0:
    // 0x107fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107fd4:
    // 0x107fd4: 0x3e00008  jr          $ra
label_107fd8:
    if (ctx->pc == 0x107FD8u) {
        ctx->pc = 0x107FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FD4u;
        // 0x107fd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107FDCu;
        goto label_107fdc;
    }
    ctx->pc = 0x107FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107FD4u;
        // 0x107fd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107FDCu;
label_107fdc:
    // 0x107fdc: 0x0  nop
    ctx->pc = 0x107fdcu;
    // NOP
    ctx->pc = 0x107fe0u;
}
