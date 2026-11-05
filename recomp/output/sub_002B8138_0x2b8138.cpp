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

// Function: sub_002B8138
// Address: 0x2b8138 - 0x2b8178
void sub_002B8138_0x2b8138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8138_0x2b8138");
#endif

    switch (ctx->pc) {
        case 0x2b814cu: goto label_2b814c;
        default: break;
    }

    ctx->pc = 0x2b8138u;

    // 0x2b8138: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b813c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b813cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8140: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b8140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b8144: 0xc0ade78  jal         func_2B79E0
    ctx->pc = 0x2B8144u;
    SET_GPR_U32(ctx, 31, 0x2B814Cu);
    ctx->pc = 0x2B8148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8144u;
    // 0x2b8148: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79E0u, 0x2B8144u, 0x2B814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B814Cu;
label_2b814c:
    // 0x2b814c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B814Cu;
    {
        const bool branch_taken_0x2b814c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B814Cu;
        // 0x2b8150: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b814c) {
            ctx->pc = 0x2B815Cu;
            goto label_2b815c;
        }
    }
    ctx->pc = 0x2B8154u;
    // 0x2b8154: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8154u;
    {
        const bool branch_taken_0x2b8154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8154u;
        // 0x2b8158: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8154) {
            ctx->pc = 0x2B8164u;
            goto label_2b8164;
        }
    }
    ctx->pc = 0x2B815Cu;
label_2b815c:
    // 0x2b815c: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x2b815cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2b8160: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x2b8160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2b8164:
    // 0x2b8164: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b8164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b8168: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b8168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b816c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b816cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8170: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8170u;
        // 0x2b8174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8178u;
}
