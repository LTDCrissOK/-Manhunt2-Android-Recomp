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

// Function: sub_0039B188
// Address: 0x39b188 - 0x39b1b0
void sub_0039B188_0x39b188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B188_0x39b188");
#endif

    switch (ctx->pc) {
        case 0x39b188u: goto label_39b188;
        case 0x39b18cu: goto label_39b18c;
        case 0x39b190u: goto label_39b190;
        case 0x39b194u: goto label_39b194;
        case 0x39b198u: goto label_39b198;
        case 0x39b19cu: goto label_39b19c;
        case 0x39b1a0u: goto label_39b1a0;
        case 0x39b1a4u: goto label_39b1a4;
        case 0x39b1a8u: goto label_39b1a8;
        case 0x39b1acu: goto label_39b1ac;
        default: break;
    }

    ctx->pc = 0x39b188u;

label_39b188:
    // 0x39b188: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39b188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_39b18c:
    // 0x39b18c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39b18cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_39b190:
    // 0x39b190: 0x8c42ad98  lw          $v0, -0x5268($v0)
    ctx->pc = 0x39b190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946200)));
label_39b194:
    // 0x39b194: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39b198:
    if (ctx->pc == 0x39B198u) {
        ctx->pc = 0x39B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B194u;
        // 0x39b198: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B19Cu;
        goto label_39b19c;
    }
    ctx->pc = 0x39B194u;
    {
        const bool branch_taken_0x39b194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B194u;
        // 0x39b198: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b194) {
            ctx->pc = 0x39B1A4u;
            goto label_39b1a4;
        }
    }
    ctx->pc = 0x39B19Cu;
label_39b19c:
    // 0x39b19c: 0x40f809  jalr        $v0
label_39b1a0:
    if (ctx->pc == 0x39B1A0u) {
        ctx->pc = 0x39B1A4u;
        goto label_39b1a4;
    }
    ctx->pc = 0x39B19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39B1A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B19Cu, 0x39B1A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39B1A4u;
label_39b1a4:
    // 0x39b1a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39b1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39b1a8:
    // 0x39b1a8: 0x3e00008  jr          $ra
label_39b1ac:
    if (ctx->pc == 0x39B1ACu) {
        ctx->pc = 0x39B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B1A8u;
        // 0x39b1ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B1B0u;
        goto label_fallthrough_0x39b1a8;
    }
    ctx->pc = 0x39B1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B1A8u;
        // 0x39b1ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39b1a8:
    ctx->pc = 0x39B1B0u;
}
