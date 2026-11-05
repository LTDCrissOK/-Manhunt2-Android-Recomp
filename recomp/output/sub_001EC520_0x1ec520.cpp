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

// Function: sub_001EC520
// Address: 0x1ec520 - 0x1ec540
void sub_001EC520_0x1ec520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC520_0x1ec520");
#endif

    switch (ctx->pc) {
        case 0x1ec534u: goto label_1ec534;
        default: break;
    }

    ctx->pc = 0x1ec520u;

    // 0x1ec520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ec520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ec524: 0x34028420  ori         $v0, $zero, 0x8420
    ctx->pc = 0x1ec524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33824);
    // 0x1ec528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ec52c: 0xc07acae  jal         func_1EB2B8
    ctx->pc = 0x1EC52Cu;
    SET_GPR_U32(ctx, 31, 0x1EC534u);
    ctx->pc = 0x1EC530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC52Cu;
    // 0x1ec530: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB2B8u, 0x1EC52Cu, 0x1EC534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC534u;
label_1ec534:
    // 0x1ec534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec538: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC538u;
        // 0x1ec53c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC540u;
}
