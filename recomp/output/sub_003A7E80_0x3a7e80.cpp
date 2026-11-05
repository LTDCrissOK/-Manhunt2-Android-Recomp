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

// Function: sub_003A7E80
// Address: 0x3a7e80 - 0x3a7ec8
void sub_003A7E80_0x3a7e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7E80_0x3a7e80");
#endif

    switch (ctx->pc) {
        case 0x3a7e9cu: goto label_3a7e9c;
        case 0x3a7eb4u: goto label_3a7eb4;
        default: break;
    }

    ctx->pc = 0x3a7e80u;

    // 0x3a7e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a7e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a7e84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a7e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a7e88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a7e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e8c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A7E8Cu;
    {
        const bool branch_taken_0x3a7e8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E8Cu;
        // 0x3a7e90: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7e8c) {
            ctx->pc = 0x3A7EB4u;
            goto label_3a7eb4;
        }
    }
    ctx->pc = 0x3A7E94u;
    // 0x3a7e94: 0xc0ea052  jal         func_3A8148
    ctx->pc = 0x3A7E94u;
    SET_GPR_U32(ctx, 31, 0x3A7E9Cu);
    ctx->pc = 0x3A8148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8148u, 0x3A7E94u, 0x3A7E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7E9Cu;
label_3a7e9c:
    // 0x3a7e9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a7e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a7ea0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3a7ea0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a7ea4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7EA4u;
    {
        const bool branch_taken_0x3a7ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A7EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7EA4u;
        // 0x3a7ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ea4) {
            ctx->pc = 0x3A7EB4u;
            goto label_3a7eb4;
        }
    }
    ctx->pc = 0x3A7EACu;
    // 0x3a7eac: 0xc0e9f54  jal         func_3A7D50
    ctx->pc = 0x3A7EACu;
    SET_GPR_U32(ctx, 31, 0x3A7EB4u);
    ctx->pc = 0x3A7EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7EACu;
    // 0x3a7eb0: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7D50u, 0x3A7EACu, 0x3A7EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7EB4u;
label_3a7eb4:
    // 0x3a7eb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a7eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7eb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a7eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a7ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7EBCu;
        // 0x3a7ec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7EC4u;
    // 0x3a7ec4: 0x0  nop
    ctx->pc = 0x3a7ec4u;
    // NOP
    ctx->pc = 0x3a7ec8u;
}
