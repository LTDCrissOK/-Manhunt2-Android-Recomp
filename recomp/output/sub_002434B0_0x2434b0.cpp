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

// Function: sub_002434B0
// Address: 0x2434b0 - 0x2434e8
void sub_002434B0_0x2434b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002434B0_0x2434b0");
#endif

    switch (ctx->pc) {
        case 0x2434b0u: goto label_2434b0;
        case 0x2434b4u: goto label_2434b4;
        case 0x2434b8u: goto label_2434b8;
        case 0x2434bcu: goto label_2434bc;
        case 0x2434c0u: goto label_2434c0;
        case 0x2434c4u: goto label_2434c4;
        case 0x2434c8u: goto label_2434c8;
        case 0x2434ccu: goto label_2434cc;
        case 0x2434d0u: goto label_2434d0;
        case 0x2434d4u: goto label_2434d4;
        case 0x2434d8u: goto label_2434d8;
        case 0x2434dcu: goto label_2434dc;
        case 0x2434e0u: goto label_2434e0;
        case 0x2434e4u: goto label_2434e4;
        default: break;
    }

    ctx->pc = 0x2434b0u;

label_2434b0:
    // 0x2434b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2434b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2434b4:
    // 0x2434b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2434b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2434b8:
    // 0x2434b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2434b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2434bc:
    // 0x2434bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2434bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2434c0:
    // 0x2434c0: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2434c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2434c4:
    // 0x2434c4: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x2434c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_2434c8:
    // 0x2434c8: 0x40f809  jalr        $v0
label_2434cc:
    if (ctx->pc == 0x2434CCu) {
        ctx->pc = 0x2434D0u;
        goto label_2434d0;
    }
    ctx->pc = 0x2434C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2434D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2434C8u, 0x2434D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2434D0u;
label_2434d0:
    // 0x2434d0: 0xc0929ac  jal         func_24A6B0
label_2434d4:
    if (ctx->pc == 0x2434D4u) {
        ctx->pc = 0x2434D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434D0u;
        // 0x2434d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2434D8u;
        goto label_2434d8;
    }
    ctx->pc = 0x2434D0u;
    SET_GPR_U32(ctx, 31, 0x2434D8u);
    ctx->pc = 0x2434D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2434D0u;
    // 0x2434d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A6B0u, 0x2434D0u, 0x2434D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2434D8u;
label_2434d8:
    // 0x2434d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2434d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2434dc:
    // 0x2434dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2434dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2434e0:
    // 0x2434e0: 0x3e00008  jr          $ra
label_2434e4:
    if (ctx->pc == 0x2434E4u) {
        ctx->pc = 0x2434E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434E0u;
        // 0x2434e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2434E8u;
        goto label_fallthrough_0x2434e0;
    }
    ctx->pc = 0x2434E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2434E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434E0u;
        // 0x2434e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2434E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2434e0:
    ctx->pc = 0x2434E8u;
}
