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

// Function: sub_0017F1D8
// Address: 0x17f1d8 - 0x17f220
void sub_0017F1D8_0x17f1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F1D8_0x17f1d8");
#endif

    switch (ctx->pc) {
        case 0x17f1fcu: goto label_17f1fc;
        case 0x17f210u: goto label_17f210;
        default: break;
    }

    ctx->pc = 0x17f1d8u;

    // 0x17f1d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f1dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f1e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17f1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17f1e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f1e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f1e8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x17f1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17f1ec: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F1ECu;
    {
        const bool branch_taken_0x17f1ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f1ec) {
            ctx->pc = 0x17F1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F1ECu;
            // 0x17f1f0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F200u;
            goto label_17f200;
        }
    }
    ctx->pc = 0x17F1F4u;
    // 0x17f1f4: 0xc05fdd4  jal         func_17F750
    ctx->pc = 0x17F1F4u;
    SET_GPR_U32(ctx, 31, 0x17F1FCu);
    ctx->pc = 0x17F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F750u, 0x17F1F4u, 0x17F1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F1FCu;
label_17f1fc:
    // 0x17f1fc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x17f1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17f200:
    // 0x17f200: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F200u;
    {
        const bool branch_taken_0x17f200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F200u;
        // 0x17f204: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f200) {
            ctx->pc = 0x17F214u;
            goto label_17f214;
        }
    }
    ctx->pc = 0x17F208u;
    // 0x17f208: 0xc05f00c  jal         func_17C030
    ctx->pc = 0x17F208u;
    SET_GPR_U32(ctx, 31, 0x17F210u);
    ctx->pc = 0x17C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C030u, 0x17F208u, 0x17F210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F210u;
label_17f210:
    // 0x17f210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f214:
    // 0x17f214: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17f214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f218: 0x3e00008  jr          $ra
    ctx->pc = 0x17F218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F218u;
        // 0x17f21c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F220u;
}
