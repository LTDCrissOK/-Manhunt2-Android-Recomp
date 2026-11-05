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

// Function: sub_003628E8
// Address: 0x3628e8 - 0x362930
void sub_003628E8_0x3628e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003628E8_0x3628e8");
#endif

    switch (ctx->pc) {
        case 0x3628e8u: goto label_3628e8;
        case 0x3628ecu: goto label_3628ec;
        case 0x3628f0u: goto label_3628f0;
        case 0x3628f4u: goto label_3628f4;
        case 0x3628f8u: goto label_3628f8;
        case 0x3628fcu: goto label_3628fc;
        case 0x362900u: goto label_362900;
        case 0x362904u: goto label_362904;
        case 0x362908u: goto label_362908;
        case 0x36290cu: goto label_36290c;
        case 0x362910u: goto label_362910;
        case 0x362914u: goto label_362914;
        case 0x362918u: goto label_362918;
        case 0x36291cu: goto label_36291c;
        case 0x362920u: goto label_362920;
        case 0x362924u: goto label_362924;
        case 0x362928u: goto label_362928;
        case 0x36292cu: goto label_36292c;
        default: break;
    }

    ctx->pc = 0x3628e8u;

label_3628e8:
    // 0x3628e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3628e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3628ec:
    // 0x3628ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3628ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3628f0:
    // 0x3628f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3628f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3628f4:
    // 0x3628f4: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x3628f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_3628f8:
    // 0x3628f8: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3628f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3628fc:
    // 0x3628fc: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x3628fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_362900:
    // 0x362900: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_362904:
    if (ctx->pc == 0x362904u) {
        ctx->pc = 0x362904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362900u;
        // 0x362904: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362908u;
        goto label_362908;
    }
    ctx->pc = 0x362900u;
    {
        const bool branch_taken_0x362900 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x362904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362900u;
        // 0x362904: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362900) {
            ctx->pc = 0x362924u;
            goto label_362924;
        }
    }
    ctx->pc = 0x362908u;
label_362908:
    // 0x362908: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x362908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_36290c:
    // 0x36290c: 0x8c4402e4  lw          $a0, 0x2E4($v0)
    ctx->pc = 0x36290cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 740)));
label_362910:
    // 0x362910: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x362910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_362914:
    // 0x362914: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x362914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_362918:
    // 0x362918: 0x40f809  jalr        $v0
label_36291c:
    if (ctx->pc == 0x36291Cu) {
        ctx->pc = 0x362920u;
        goto label_362920;
    }
    ctx->pc = 0x362918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x362920u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362918u, 0x362920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x362920u;
label_362920:
    // 0x362920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x362920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_362924:
    // 0x362924: 0x3e00008  jr          $ra
label_362928:
    if (ctx->pc == 0x362928u) {
        ctx->pc = 0x362928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362924u;
        // 0x362928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36292Cu;
        goto label_36292c;
    }
    ctx->pc = 0x362924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362924u;
        // 0x362928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36292Cu;
label_36292c:
    // 0x36292c: 0x0  nop
    ctx->pc = 0x36292cu;
    // NOP
    ctx->pc = 0x362930u;
}
