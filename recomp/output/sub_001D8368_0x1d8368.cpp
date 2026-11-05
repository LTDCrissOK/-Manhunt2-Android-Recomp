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

// Function: sub_001D8368
// Address: 0x1d8368 - 0x1d83a8
void sub_001D8368_0x1d8368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8368_0x1d8368");
#endif

    switch (ctx->pc) {
        case 0x1d8368u: goto label_1d8368;
        case 0x1d836cu: goto label_1d836c;
        case 0x1d8370u: goto label_1d8370;
        case 0x1d8374u: goto label_1d8374;
        case 0x1d8378u: goto label_1d8378;
        case 0x1d837cu: goto label_1d837c;
        case 0x1d8380u: goto label_1d8380;
        case 0x1d8384u: goto label_1d8384;
        case 0x1d8388u: goto label_1d8388;
        case 0x1d838cu: goto label_1d838c;
        case 0x1d8390u: goto label_1d8390;
        case 0x1d8394u: goto label_1d8394;
        case 0x1d8398u: goto label_1d8398;
        case 0x1d839cu: goto label_1d839c;
        case 0x1d83a0u: goto label_1d83a0;
        case 0x1d83a4u: goto label_1d83a4;
        default: break;
    }

    ctx->pc = 0x1d8368u;

label_1d8368:
    // 0x1d8368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d836c:
    // 0x1d836c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d836cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1d8370:
    // 0x1d8370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d8374:
    // 0x1d8374: 0x8c43cba8  lw          $v1, -0x3458($v0)
    ctx->pc = 0x1d8374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953896)));
label_1d8378:
    // 0x1d8378: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1d8378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1d837c:
    // 0x1d837c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1d837cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d8380:
    // 0x1d8380: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1d8380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1d8384:
    // 0x1d8384: 0x40f809  jalr        $v0
label_1d8388:
    if (ctx->pc == 0x1D8388u) {
        ctx->pc = 0x1D838Cu;
        goto label_1d838c;
    }
    ctx->pc = 0x1D8384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D838Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8384u, 0x1D838Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D838Cu;
label_1d838c:
    // 0x1d838c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1d838cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_1d8390:
    // 0x1d8390: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1d8390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_1d8394:
    // 0x1d8394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8398:
    // 0x1d8398: 0xac622b54  sw          $v0, 0x2B54($v1)
    ctx->pc = 0x1d8398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11092), GPR_U32(ctx, 2));
label_1d839c:
    // 0x1d839c: 0xac829188  sw          $v0, -0x6E78($a0)
    ctx->pc = 0x1d839cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294939016), GPR_U32(ctx, 2));
label_1d83a0:
    // 0x1d83a0: 0x3e00008  jr          $ra
label_1d83a4:
    if (ctx->pc == 0x1D83A4u) {
        ctx->pc = 0x1D83A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83A0u;
        // 0x1d83a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D83A8u;
        goto label_fallthrough_0x1d83a0;
    }
    ctx->pc = 0x1D83A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D83A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83A0u;
        // 0x1d83a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D83A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d83a0:
    ctx->pc = 0x1D83A8u;
}
