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

// Function: sub_00186930
// Address: 0x186930 - 0x186960
void sub_00186930_0x186930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186930_0x186930");
#endif

    switch (ctx->pc) {
        case 0x186930u: goto label_186930;
        case 0x186934u: goto label_186934;
        case 0x186938u: goto label_186938;
        case 0x18693cu: goto label_18693c;
        case 0x186940u: goto label_186940;
        case 0x186944u: goto label_186944;
        case 0x186948u: goto label_186948;
        case 0x18694cu: goto label_18694c;
        case 0x186950u: goto label_186950;
        case 0x186954u: goto label_186954;
        case 0x186958u: goto label_186958;
        case 0x18695cu: goto label_18695c;
        default: break;
    }

    ctx->pc = 0x186930u;

label_186930:
    // 0x186930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_186934:
    // 0x186934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_186938:
    // 0x186938: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x186938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_18693c:
    // 0x18693c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_186940:
    if (ctx->pc == 0x186940u) {
        ctx->pc = 0x186940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18693Cu;
        // 0x186940: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186944u;
        goto label_186944;
    }
    ctx->pc = 0x18693Cu;
    {
        const bool branch_taken_0x18693c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x186940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18693Cu;
        // 0x186940: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18693c) {
            ctx->pc = 0x186958u;
            goto label_186958;
        }
    }
    ctx->pc = 0x186944u;
label_186944:
    // 0x186944: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x186944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186948:
    // 0x186948: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x186948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18694c:
    // 0x18694c: 0x40f809  jalr        $v0
label_186950:
    if (ctx->pc == 0x186950u) {
        ctx->pc = 0x186954u;
        goto label_186954;
    }
    ctx->pc = 0x18694Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186954u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18694Cu, 0x186954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186954u;
label_186954:
    // 0x186954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186958:
    // 0x186958: 0x3e00008  jr          $ra
label_18695c:
    if (ctx->pc == 0x18695Cu) {
        ctx->pc = 0x18695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186958u;
        // 0x18695c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186960u;
        goto label_fallthrough_0x186958;
    }
    ctx->pc = 0x186958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186958u;
        // 0x18695c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x186958:
    ctx->pc = 0x186960u;
}
