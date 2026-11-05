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

// Function: sub_003AD228
// Address: 0x3ad228 - 0x3ad280
void sub_003AD228_0x3ad228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD228_0x3ad228");
#endif

    switch (ctx->pc) {
        case 0x3ad258u: goto label_3ad258;
        default: break;
    }

    ctx->pc = 0x3ad228u;

    // 0x3ad228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ad228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ad22c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3ad22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3ad230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ad230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ad234: 0x24423304  addiu       $v0, $v0, 0x3304
    ctx->pc = 0x3ad234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13060));
    // 0x3ad238: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ad238u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x423304u));
    // 0x3ad23c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ad23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ad240: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3ad240u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x423304u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x423304u, _value); } while (0);
    // 0x3ad244: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ad244u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x423304u));
    // 0x3ad248: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x3AD248u;
    {
        const bool branch_taken_0x3ad248 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD248u;
        // 0x3ad24c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad248) {
            ctx->pc = 0x3AD278u;
            goto label_3ad278;
        }
    }
    ctx->pc = 0x3AD250u;
    // 0x3ad250: 0xc0eb450  jal         func_3AD140
    ctx->pc = 0x3AD250u;
    SET_GPR_U32(ctx, 31, 0x3AD258u);
    ctx->pc = 0x3AD140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD140u, 0x3AD250u, 0x3AD258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD258u;
label_3ad258:
    // 0x3ad258: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3ad258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3ad25c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ad25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ad260: 0x248491b0  addiu       $a0, $a0, -0x6E50
    ctx->pc = 0x3ad260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939056));
    // 0x3ad264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ad264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad268: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3ad268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ad26c: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x3AD26Cu;
    ctx->pc = 0x3AD270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD26Cu;
    // 0x3ad270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x3AD274u;
    // 0x3ad274: 0x0  nop
    ctx->pc = 0x3ad274u;
    // NOP
label_3ad278:
    // 0x3ad278: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD278u;
        // 0x3ad27c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD280u;
}
