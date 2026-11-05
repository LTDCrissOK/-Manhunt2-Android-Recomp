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

// Function: sub_001D0958
// Address: 0x1d0958 - 0x1d09b0
void sub_001D0958_0x1d0958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0958_0x1d0958");
#endif

    switch (ctx->pc) {
        case 0x1d0980u: goto label_1d0980;
        case 0x1d0988u: goto label_1d0988;
        default: break;
    }

    ctx->pc = 0x1d0958u;

    // 0x1d0958: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d095c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d095cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0960: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0964: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d0964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0968: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d096c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1d096cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d0970: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1D0970u;
    {
        const bool branch_taken_0x1d0970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0970) {
            ctx->pc = 0x1D0974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0970u;
            // 0x1d0974: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D099Cu;
            goto label_1d099c;
        }
    }
    ctx->pc = 0x1D0978u;
    // 0x1d0978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d097c: 0x0  nop
    ctx->pc = 0x1d097cu;
    // NOP
label_1d0980:
    // 0x1d0980: 0xc073e76  jal         func_1CF9D8
    ctx->pc = 0x1D0980u;
    SET_GPR_U32(ctx, 31, 0x1D0988u);
    ctx->pc = 0x1D0984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0980u;
    // 0x1d0984: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF9D8u, 0x1D0980u, 0x1D0988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0988u;
label_1d0988:
    // 0x1d0988: 0x0  nop
    ctx->pc = 0x1d0988u;
    // NOP
    // 0x1d098c: 0x0  nop
    ctx->pc = 0x1d098cu;
    // NOP
    // 0x1d0990: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D0990u;
    {
        const bool branch_taken_0x1d0990 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0990u;
        // 0x1d0994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0990) {
            ctx->pc = 0x1D0980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0980;
        }
    }
    ctx->pc = 0x1D0998u;
    // 0x1d0998: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1d0998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1d099c:
    // 0x1d099c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d099cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d09a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d09a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d09a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d09a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d09a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D09A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D09ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D09A8u;
        // 0x1d09ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D09A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D09B0u;
}
