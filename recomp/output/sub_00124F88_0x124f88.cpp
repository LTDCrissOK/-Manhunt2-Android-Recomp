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

// Function: sub_00124F88
// Address: 0x124f88 - 0x124ff8
void sub_00124F88_0x124f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124F88_0x124f88");
#endif

    switch (ctx->pc) {
        case 0x124fb8u: goto label_124fb8;
        case 0x124fd0u: goto label_124fd0;
        default: break;
    }

    ctx->pc = 0x124f88u;

    // 0x124f88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x124f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x124f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124f90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124f94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x124f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124f98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x124f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x124f9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x124f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124fa0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x124fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x124fa4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x124fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124fa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x124fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x124fac: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x124facu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124fb0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124FB0u;
    SET_GPR_U32(ctx, 31, 0x124FB8u);
    ctx->pc = 0x124FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124FB0u;
    // 0x124fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124FB0u, 0x124FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124FB8u;
label_124fb8:
    // 0x124fb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x124FB8u;
    {
        const bool branch_taken_0x124fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FB8u;
        // 0x124fbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124fb8) {
            ctx->pc = 0x124FD8u;
            goto label_124fd8;
        }
    }
    ctx->pc = 0x124FC0u;
    // 0x124fc0: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x124fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x124fc4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x124fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124fc8: 0xc042db8  jal         func_10B6E0
    ctx->pc = 0x124FC8u;
    SET_GPR_U32(ctx, 31, 0x124FD0u);
    ctx->pc = 0x124FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124FC8u;
    // 0x124fcc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B6E0u, 0x124FC8u, 0x124FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124FD0u;
label_124fd0:
    // 0x124fd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x124FD0u;
    {
        const bool branch_taken_0x124fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FD0u;
        // 0x124fd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124fd0) {
            ctx->pc = 0x124FE0u;
            goto label_124fe0;
        }
    }
    ctx->pc = 0x124FD8u;
label_124fd8:
    // 0x124fd8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x124fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x124fdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124fdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124fe0:
    // 0x124fe0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124fe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124fe4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124fe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124fe8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x124fe8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124fec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x124fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x124FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124FF0u;
        // 0x124ff4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124FF8u;
}
