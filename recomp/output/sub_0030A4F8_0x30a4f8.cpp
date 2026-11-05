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

// Function: sub_0030A4F8
// Address: 0x30a4f8 - 0x30a538
void sub_0030A4F8_0x30a4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A4F8_0x30a4f8");
#endif

    switch (ctx->pc) {
        case 0x30a520u: goto label_30a520;
        case 0x30a528u: goto label_30a528;
        default: break;
    }

    ctx->pc = 0x30a4f8u;

    // 0x30a4f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30a4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30a4fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30a4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30a500: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30a500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a504: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30A504u;
    {
        const bool branch_taken_0x30a504 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A504u;
        // 0x30a508: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a504) {
            ctx->pc = 0x30A528u;
            goto label_30a528;
        }
    }
    ctx->pc = 0x30A50Cu;
    // 0x30a50c: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x30a50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x30a510: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A510u;
    {
        const bool branch_taken_0x30a510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a510) {
            ctx->pc = 0x30A520u;
            goto label_30a520;
        }
    }
    ctx->pc = 0x30A518u;
    // 0x30a518: 0xc0c4858  jal         func_312160
    ctx->pc = 0x30A518u;
    SET_GPR_U32(ctx, 31, 0x30A520u);
    ctx->pc = 0x30A51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A518u;
    // 0x30a51c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312160u, 0x30A518u, 0x30A520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A520u;
label_30a520:
    // 0x30a520: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x30A520u;
    SET_GPR_U32(ctx, 31, 0x30A528u);
    ctx->pc = 0x30A524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A520u;
    // 0x30a524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x30A520u, 0x30A528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A528u;
label_30a528:
    // 0x30a528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30a528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a52c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30a52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30a530: 0x3e00008  jr          $ra
    ctx->pc = 0x30A530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A530u;
        // 0x30a534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A538u;
}
