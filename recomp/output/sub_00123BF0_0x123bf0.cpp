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

// Function: sub_00123BF0
// Address: 0x123bf0 - 0x123c50
void sub_00123BF0_0x123bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123BF0_0x123bf0");
#endif

    switch (ctx->pc) {
        case 0x123c18u: goto label_123c18;
        case 0x123c2cu: goto label_123c2c;
        default: break;
    }

    ctx->pc = 0x123bf0u;

    // 0x123bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123bf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123bf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123bfc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x123bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x123c04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x123c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x123c0c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x123c0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c10: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123C10u;
    SET_GPR_U32(ctx, 31, 0x123C18u);
    ctx->pc = 0x123C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C10u;
    // 0x123c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123C10u, 0x123C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C18u;
label_123c18:
    // 0x123c18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123C18u;
    {
        const bool branch_taken_0x123c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C18u;
        // 0x123c1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c18) {
            ctx->pc = 0x123C34u;
            goto label_123c34;
        }
    }
    ctx->pc = 0x123C20u;
    // 0x123c20: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x123c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x123c24: 0xc042e56  jal         func_10B958
    ctx->pc = 0x123C24u;
    SET_GPR_U32(ctx, 31, 0x123C2Cu);
    ctx->pc = 0x123C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C24u;
    // 0x123c28: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B958u, 0x123C24u, 0x123C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C2Cu;
label_123c2c:
    // 0x123c2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x123C2Cu;
    {
        const bool branch_taken_0x123c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C2Cu;
        // 0x123c30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c2c) {
            ctx->pc = 0x123C3Cu;
            goto label_123c3c;
        }
    }
    ctx->pc = 0x123C34u;
label_123c34:
    // 0x123c34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x123c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x123c38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123c38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123c3c:
    // 0x123c3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123c3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123c40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123c40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123c44: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x123c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123c48: 0x3e00008  jr          $ra
    ctx->pc = 0x123C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C48u;
        // 0x123c4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123C50u;
}
