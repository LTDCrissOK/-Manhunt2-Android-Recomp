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

// Function: sub_003A7268
// Address: 0x3a7268 - 0x3a72c8
void sub_003A7268_0x3a7268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7268_0x3a7268");
#endif

    switch (ctx->pc) {
        case 0x3a7290u: goto label_3a7290;
        case 0x3a72a4u: goto label_3a72a4;
        default: break;
    }

    ctx->pc = 0x3a7268u;

    // 0x3a7268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a7268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a726c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a726cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a7270: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3a7270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3a7274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a7274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a7278: 0x24503fb8  addiu       $s0, $v0, 0x3FB8
    ctx->pc = 0x3a7278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16312));
    // 0x3a727c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a727cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a7280: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x3a7280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3a7284: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a7284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a7288: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3a7288u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a728c: 0x0  nop
    ctx->pc = 0x3a728cu;
    // NOP
label_3a7290:
    // 0x3a7290: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3a7290u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a7294: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A7294u;
    {
        const bool branch_taken_0x3a7294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3a7294) {
            ctx->pc = 0x3A7298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7294u;
            // 0x3a7298: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A72A8u;
            goto label_3a72a8;
        }
    }
    ctx->pc = 0x3A729Cu;
    // 0x3a729c: 0xc0e9e78  jal         func_3A79E0
    ctx->pc = 0x3A729Cu;
    SET_GPR_U32(ctx, 31, 0x3A72A4u);
    ctx->pc = 0x3A72A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A729Cu;
    // 0x3a72a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A79E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A79E0u, 0x3A729Cu, 0x3A72A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A72A4u;
label_3a72a4:
    // 0x3a72a4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3a72a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3a72a8:
    // 0x3a72a8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A72A8u;
    {
        const bool branch_taken_0x3a72a8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3A72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A72A8u;
        // 0x3a72ac: 0x26100238  addiu       $s0, $s0, 0x238 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a72a8) {
            ctx->pc = 0x3A7290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7290;
        }
    }
    ctx->pc = 0x3A72B0u;
    // 0x3a72b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a72b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a72b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a72b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a72b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a72b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a72bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a72bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a72c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A72C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A72C0u;
        // 0x3a72c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A72C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A72C8u;
}
