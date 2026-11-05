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

// Function: sub_00253B50
// Address: 0x253b50 - 0x253ba0
void sub_00253B50_0x253b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253B50_0x253b50");
#endif

    switch (ctx->pc) {
        case 0x253b78u: goto label_253b78;
        case 0x253b8cu: goto label_253b8c;
        default: break;
    }

    ctx->pc = 0x253b50u;

    // 0x253b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253b54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x253b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253b58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x253b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x253b5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b60: 0x8e021060  lw          $v0, 0x1060($s0)
    ctx->pc = 0x253b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4192)));
    // 0x253b64: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x253B64u;
    {
        const bool branch_taken_0x253b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B64u;
        // 0x253b68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253b64) {
            ctx->pc = 0x253B8Cu;
            goto label_253b8c;
        }
    }
    ctx->pc = 0x253B6Cu;
    // 0x253b6c: 0x8e040fe4  lw          $a0, 0xFE4($s0)
    ctx->pc = 0x253b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    // 0x253b70: 0xc061efa  jal         func_187BE8
    ctx->pc = 0x253B70u;
    SET_GPR_U32(ctx, 31, 0x253B78u);
    ctx->pc = 0x253B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B70u;
    // 0x253b74: 0xae001060  sw          $zero, 0x1060($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187BE8u, 0x253B70u, 0x253B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B78u;
label_253b78:
    // 0x253b78: 0x8e030fe8  lw          $v1, 0xFE8($s0)
    ctx->pc = 0x253b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x253b7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b84: 0xc0944f6  jal         func_2513D8
    ctx->pc = 0x253B84u;
    SET_GPR_U32(ctx, 31, 0x253B8Cu);
    ctx->pc = 0x253B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B84u;
    // 0x253b88: 0xac62035c  sw          $v0, 0x35C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 860), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x253B84u, 0x253B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B8Cu;
label_253b8c:
    // 0x253b8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253b90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253b94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x253b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x253b98: 0x3e00008  jr          $ra
    ctx->pc = 0x253B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B98u;
        // 0x253b9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253BA0u;
}
