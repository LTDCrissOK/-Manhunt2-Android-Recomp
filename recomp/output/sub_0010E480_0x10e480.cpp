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

// Function: sub_0010E480
// Address: 0x10e480 - 0x10e4b8
void sub_0010E480_0x10e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E480_0x10e480");
#endif

    switch (ctx->pc) {
        case 0x10e480u: goto label_10e480;
        case 0x10e484u: goto label_10e484;
        case 0x10e488u: goto label_10e488;
        case 0x10e48cu: goto label_10e48c;
        case 0x10e490u: goto label_10e490;
        case 0x10e494u: goto label_10e494;
        case 0x10e498u: goto label_10e498;
        case 0x10e49cu: goto label_10e49c;
        case 0x10e4a0u: goto label_10e4a0;
        case 0x10e4a4u: goto label_10e4a4;
        case 0x10e4a8u: goto label_10e4a8;
        case 0x10e4acu: goto label_10e4ac;
        case 0x10e4b0u: goto label_10e4b0;
        case 0x10e4b4u: goto label_10e4b4;
        default: break;
    }

    ctx->pc = 0x10e480u;

label_10e480:
    // 0x10e480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10e484:
    // 0x10e484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10e488:
    // 0x10e488: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x10e488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_10e48c:
    // 0x10e48c: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
label_10e490:
    if (ctx->pc == 0x10E490u) {
        ctx->pc = 0x10E490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E48Cu;
        // 0x10e490: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E494u;
        goto label_10e494;
    }
    ctx->pc = 0x10E48Cu;
    {
        const bool branch_taken_0x10e48c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e48c) {
            ctx->pc = 0x10E490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E48Cu;
            // 0x10e490: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E49Cu;
            goto label_10e49c;
        }
    }
    ctx->pc = 0x10E494u;
label_10e494:
    // 0x10e494: 0x10000004  b           . + 4 + (0x4 << 2)
label_10e498:
    if (ctx->pc == 0x10E498u) {
        ctx->pc = 0x10E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E494u;
        // 0x10e498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E49Cu;
        goto label_10e49c;
    }
    ctx->pc = 0x10E494u;
    {
        const bool branch_taken_0x10e494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E494u;
        // 0x10e498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e494) {
            ctx->pc = 0x10E4A8u;
            goto label_10e4a8;
        }
    }
    ctx->pc = 0x10E49Cu;
label_10e49c:
    // 0x10e49c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x10e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_10e4a0:
    // 0x10e4a0: 0x40f809  jalr        $v0
label_10e4a4:
    if (ctx->pc == 0x10E4A4u) {
        ctx->pc = 0x10E4A8u;
        goto label_10e4a8;
    }
    ctx->pc = 0x10E4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E4A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E4A0u, 0x10E4A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E4A8u;
label_10e4a8:
    // 0x10e4a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e4ac:
    // 0x10e4ac: 0x3e00008  jr          $ra
label_10e4b0:
    if (ctx->pc == 0x10E4B0u) {
        ctx->pc = 0x10E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4ACu;
        // 0x10e4b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E4B4u;
        goto label_10e4b4;
    }
    ctx->pc = 0x10E4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4ACu;
        // 0x10e4b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E4B4u;
label_10e4b4:
    // 0x10e4b4: 0x0  nop
    ctx->pc = 0x10e4b4u;
    // NOP
    ctx->pc = 0x10e4b8u;
}
