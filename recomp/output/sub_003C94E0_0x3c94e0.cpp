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

// Function: sub_003C94E0
// Address: 0x3c94e0 - 0x3c9540
void sub_003C94E0_0x3c94e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C94E0_0x3c94e0");
#endif

    switch (ctx->pc) {
        case 0x3c94f8u: goto label_3c94f8;
        case 0x3c9518u: goto label_3c9518;
        default: break;
    }

    ctx->pc = 0x3c94e0u;

    // 0x3c94e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c94e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c94e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c94e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3c94e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c94e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c94ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c94ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c94f0: 0xc0f2624  jal         func_3C9890
    ctx->pc = 0x3C94F0u;
    SET_GPR_U32(ctx, 31, 0x3C94F8u);
    ctx->pc = 0x3C94F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C94F0u;
    // 0x3c94f4: 0x3c110043  lui         $s1, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9890u, 0x3C94F0u, 0x3C94F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C94F8u;
label_3c94f8:
    // 0x3c94f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c94f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c94fc: 0x8e22d5d8  lw          $v0, -0x2A28($s1)
    ctx->pc = 0x3c94fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956504)));
    // 0x3c9500: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C9500u;
    {
        const bool branch_taken_0x3c9500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3C9504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9500u;
        // 0x3c9504: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9500) {
            ctx->pc = 0x3C9510u;
            goto label_3c9510;
        }
    }
    ctx->pc = 0x3C9508u;
    // 0x3c9508: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3C9508u;
    {
        const bool branch_taken_0x3c9508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9508u;
        // 0x3c950c: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9508) {
            ctx->pc = 0x3C9520u;
            goto label_3c9520;
        }
    }
    ctx->pc = 0x3C9510u;
label_3c9510:
    // 0x3c9510: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x3C9510u;
    SET_GPR_U32(ctx, 31, 0x3C9518u);
    ctx->pc = 0x3C9514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9510u;
    // 0x3c9514: 0x8c44d6c8  lw          $a0, -0x2938($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x3C9510u, 0x3C9518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9518u;
label_3c9518:
    // 0x3c9518: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3c9518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3c951c: 0xae30d5d8  sw          $s0, -0x2A28($s1)
    ctx->pc = 0x3c951cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294956504), GPR_U32(ctx, 16));
label_3c9520:
    // 0x3c9520: 0x8c62d5dc  lw          $v0, -0x2A24($v1)
    ctx->pc = 0x3c9520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956508)));
    // 0x3c9524: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c9524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3c9528: 0xac62d5dc  sw          $v0, -0x2A24($v1)
    ctx->pc = 0x3c9528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956508), GPR_U32(ctx, 2));
    // 0x3c952c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c952cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c9530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c9530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c9534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c9534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c9538: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9538u;
        // 0x3c953c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9540u;
}
