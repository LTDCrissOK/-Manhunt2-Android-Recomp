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

// Function: sub_00123E38
// Address: 0x123e38 - 0x123e98
void sub_00123E38_0x123e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123E38_0x123e38");
#endif

    switch (ctx->pc) {
        case 0x123e60u: goto label_123e60;
        case 0x123e74u: goto label_123e74;
        default: break;
    }

    ctx->pc = 0x123e38u;

    // 0x123e38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123e3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123e40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123e44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x123e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123e48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x123e4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123e50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x123e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x123e54: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x123e54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123e58: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123E58u;
    SET_GPR_U32(ctx, 31, 0x123E60u);
    ctx->pc = 0x123E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123E58u;
    // 0x123e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123E58u, 0x123E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E60u;
label_123e60:
    // 0x123e60: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123E60u;
    {
        const bool branch_taken_0x123e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E60u;
        // 0x123e64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e60) {
            ctx->pc = 0x123E7Cu;
            goto label_123e7c;
        }
    }
    ctx->pc = 0x123E68u;
    // 0x123e68: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x123e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x123e6c: 0xc043066  jal         func_10C198
    ctx->pc = 0x123E6Cu;
    SET_GPR_U32(ctx, 31, 0x123E74u);
    ctx->pc = 0x123E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123E6Cu;
    // 0x123e70: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C198u, 0x123E6Cu, 0x123E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E74u;
label_123e74:
    // 0x123e74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x123E74u;
    {
        const bool branch_taken_0x123e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E74u;
        // 0x123e78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e74) {
            ctx->pc = 0x123E84u;
            goto label_123e84;
        }
    }
    ctx->pc = 0x123E7Cu;
label_123e7c:
    // 0x123e7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x123e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x123e80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123e84:
    // 0x123e84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123e84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123e88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123e88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123e8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x123e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123e90: 0x3e00008  jr          $ra
    ctx->pc = 0x123E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E90u;
        // 0x123e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123E98u;
}
