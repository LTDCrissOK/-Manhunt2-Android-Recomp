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

// Function: sub_001868F0
// Address: 0x1868f0 - 0x186930
void sub_001868F0_0x1868f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001868F0_0x1868f0");
#endif

    switch (ctx->pc) {
        case 0x1868f0u: goto label_1868f0;
        case 0x1868f4u: goto label_1868f4;
        case 0x1868f8u: goto label_1868f8;
        case 0x1868fcu: goto label_1868fc;
        case 0x186900u: goto label_186900;
        case 0x186904u: goto label_186904;
        case 0x186908u: goto label_186908;
        case 0x18690cu: goto label_18690c;
        case 0x186910u: goto label_186910;
        case 0x186914u: goto label_186914;
        case 0x186918u: goto label_186918;
        case 0x18691cu: goto label_18691c;
        case 0x186920u: goto label_186920;
        case 0x186924u: goto label_186924;
        case 0x186928u: goto label_186928;
        case 0x18692cu: goto label_18692c;
        default: break;
    }

    ctx->pc = 0x1868f0u;

label_1868f0:
    // 0x1868f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1868f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1868f4:
    // 0x1868f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1868f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1868f8:
    // 0x1868f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1868f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1868fc:
    // 0x1868fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1868fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_186900:
    // 0x186900: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x186900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_186904:
    // 0x186904: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_186908:
    if (ctx->pc == 0x186908u) {
        ctx->pc = 0x186908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186904u;
        // 0x186908: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18690Cu;
        goto label_18690c;
    }
    ctx->pc = 0x186904u;
    {
        const bool branch_taken_0x186904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186904) {
            ctx->pc = 0x186908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186904u;
            // 0x186908: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186924u;
            goto label_186924;
        }
    }
    ctx->pc = 0x18690Cu;
label_18690c:
    // 0x18690c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18690cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186910:
    // 0x186910: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x186910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_186914:
    // 0x186914: 0x40f809  jalr        $v0
label_186918:
    if (ctx->pc == 0x186918u) {
        ctx->pc = 0x18691Cu;
        goto label_18691c;
    }
    ctx->pc = 0x186914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18691Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186914u, 0x18691Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18691Cu;
label_18691c:
    // 0x18691c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18691cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_186920:
    // 0x186920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186924:
    // 0x186924: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x186924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_186928:
    // 0x186928: 0x3e00008  jr          $ra
label_18692c:
    if (ctx->pc == 0x18692Cu) {
        ctx->pc = 0x18692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186928u;
        // 0x18692c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186930u;
        goto label_fallthrough_0x186928;
    }
    ctx->pc = 0x186928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186928u;
        // 0x18692c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x186928:
    ctx->pc = 0x186930u;
}
