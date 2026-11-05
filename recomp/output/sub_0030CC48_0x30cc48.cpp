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

// Function: sub_0030CC48
// Address: 0x30cc48 - 0x30cca0
void sub_0030CC48_0x30cc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CC48_0x30cc48");
#endif

    switch (ctx->pc) {
        case 0x30cc70u: goto label_30cc70;
        case 0x30cc7cu: goto label_30cc7c;
        default: break;
    }

    ctx->pc = 0x30cc48u;

    // 0x30cc48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30cc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30cc4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30cc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30cc50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30cc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30cc54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30cc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30cc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30cc5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30cc5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc60: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30CC60u;
    {
        const bool branch_taken_0x30cc60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC60u;
        // 0x30cc64: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc60) {
            ctx->pc = 0x30CC88u;
            goto label_30cc88;
        }
    }
    ctx->pc = 0x30CC68u;
    // 0x30cc68: 0x3c120031  lui         $s2, 0x31
    ctx->pc = 0x30cc68u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)49 << 16));
    // 0x30cc6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30cc6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30cc70:
    // 0x30cc70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30cc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc74: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30CC74u;
    SET_GPR_U32(ctx, 31, 0x30CC7Cu);
    ctx->pc = 0x30CC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CC74u;
    // 0x30cc78: 0x2645cc08  addiu       $a1, $s2, -0x33F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30CC74u, 0x30CC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CC7Cu;
label_30cc7c:
    // 0x30cc7c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x30cc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30cc80: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30CC80u;
    {
        const bool branch_taken_0x30cc80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC80u;
        // 0x30cc84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc80) {
            ctx->pc = 0x30CC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30cc70;
        }
    }
    ctx->pc = 0x30CC88u;
label_30cc88:
    // 0x30cc88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30cc88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30cc8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30cc8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30cc90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30cc90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30cc94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x30cc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cc98: 0x3e00008  jr          $ra
    ctx->pc = 0x30CC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC98u;
        // 0x30cc9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CCA0u;
}
