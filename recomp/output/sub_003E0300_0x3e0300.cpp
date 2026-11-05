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

// Function: sub_003E0300
// Address: 0x3e0300 - 0x3e0340
void sub_003E0300_0x3e0300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0300_0x3e0300");
#endif

    switch (ctx->pc) {
        case 0x3e0300u: goto label_3e0300;
        case 0x3e0304u: goto label_3e0304;
        case 0x3e0308u: goto label_3e0308;
        case 0x3e030cu: goto label_3e030c;
        case 0x3e0310u: goto label_3e0310;
        case 0x3e0314u: goto label_3e0314;
        case 0x3e0318u: goto label_3e0318;
        case 0x3e031cu: goto label_3e031c;
        case 0x3e0320u: goto label_3e0320;
        case 0x3e0324u: goto label_3e0324;
        case 0x3e0328u: goto label_3e0328;
        case 0x3e032cu: goto label_3e032c;
        case 0x3e0330u: goto label_3e0330;
        case 0x3e0334u: goto label_3e0334;
        case 0x3e0338u: goto label_3e0338;
        case 0x3e033cu: goto label_3e033c;
        default: break;
    }

    ctx->pc = 0x3e0300u;

label_3e0300:
    // 0x3e0300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e0300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3e0304:
    // 0x3e0304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e0304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3e0308:
    // 0x3e0308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e0308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e030c:
    // 0x3e030c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3e030cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3e0310:
    // 0x3e0310: 0xc0e050c  jal         func_381430
label_3e0314:
    if (ctx->pc == 0x3E0314u) {
        ctx->pc = 0x3E0314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0310u;
        // 0x3e0314: 0x26042018  addiu       $a0, $s0, 0x2018 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0318u;
        goto label_3e0318;
    }
    ctx->pc = 0x3E0310u;
    SET_GPR_U32(ctx, 31, 0x3E0318u);
    ctx->pc = 0x3E0314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0310u;
    // 0x3e0314: 0x26042018  addiu       $a0, $s0, 0x2018 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381430u, 0x3E0310u, 0x3E0318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0318u;
label_3e0318:
    // 0x3e0318: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3e0318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e031c:
    // 0x3e031c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e031cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e0320:
    // 0x3e0320: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3e0320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3e0324:
    // 0x3e0324: 0x40f809  jalr        $v0
label_3e0328:
    if (ctx->pc == 0x3E0328u) {
        ctx->pc = 0x3E032Cu;
        goto label_3e032c;
    }
    ctx->pc = 0x3E0324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E032Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0324u, 0x3E032Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E032Cu;
label_3e032c:
    // 0x3e032c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3e032cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3e0330:
    // 0x3e0330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e0330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e0334:
    // 0x3e0334: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3e0334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3e0338:
    // 0x3e0338: 0x3e00008  jr          $ra
label_3e033c:
    if (ctx->pc == 0x3E033Cu) {
        ctx->pc = 0x3E033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0338u;
        // 0x3e033c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0340u;
        goto label_fallthrough_0x3e0338;
    }
    ctx->pc = 0x3E0338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0338u;
        // 0x3e033c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e0338:
    ctx->pc = 0x3E0340u;
}
