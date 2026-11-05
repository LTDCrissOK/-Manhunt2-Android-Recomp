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

// Function: sub_002A4C08
// Address: 0x2a4c08 - 0x2a4c70
void sub_002A4C08_0x2a4c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4C08_0x2a4c08");
#endif

    switch (ctx->pc) {
        case 0x2a4c30u: goto label_2a4c30;
        case 0x2a4c3cu: goto label_2a4c3c;
        default: break;
    }

    ctx->pc = 0x2a4c08u;

    // 0x2a4c08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a4c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a4c0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a4c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a4c10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a4c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a4c14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a4c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a4c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a4c1c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2a4c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a4c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a4c24: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x2a4c24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a4c28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a4c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a4c2c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2a4c2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a4c30:
    // 0x2a4c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a4c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c34: 0xc0a90d8  jal         func_2A4360
    ctx->pc = 0x2A4C34u;
    SET_GPR_U32(ctx, 31, 0x2A4C3Cu);
    ctx->pc = 0x2A4C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4C34u;
    // 0x2a4c38: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4360u, 0x2A4C34u, 0x2A4C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C3Cu;
label_2a4c3c:
    // 0x2a4c3c: 0x0  nop
    ctx->pc = 0x2a4c3cu;
    // NOP
    // 0x2a4c40: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A4C40u;
    {
        const bool branch_taken_0x2a4c40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x2A4C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4C40u;
        // 0x2a4c44: 0x261001c0  addiu       $s0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4c40) {
            ctx->pc = 0x2A4C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4c30;
        }
    }
    ctx->pc = 0x2A4C48u;
    // 0x2a4c48: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2a4c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c4c: 0xae400a80  sw          $zero, 0xA80($s2)
    ctx->pc = 0x2a4c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2688), GPR_U32(ctx, 0));
    // 0x2a4c50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a4c50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4c54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a4c54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a4c58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a4c58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4c5c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a4c5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a4c60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a4c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4c64: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4C64u;
        // 0x2a4c68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4C6Cu;
    // 0x2a4c6c: 0x0  nop
    ctx->pc = 0x2a4c6cu;
    // NOP
    ctx->pc = 0x2a4c70u;
}
