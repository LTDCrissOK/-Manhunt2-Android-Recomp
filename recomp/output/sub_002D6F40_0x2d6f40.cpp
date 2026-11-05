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

// Function: sub_002D6F40
// Address: 0x2d6f40 - 0x2d6f98
void sub_002D6F40_0x2d6f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6F40_0x2d6f40");
#endif

    switch (ctx->pc) {
        case 0x2d6f60u: goto label_2d6f60;
        case 0x2d6f74u: goto label_2d6f74;
        default: break;
    }

    ctx->pc = 0x2d6f40u;

    // 0x2d6f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d6f44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d6f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6f48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d6f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d6f4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d6f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d6f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d6f54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d6f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f58: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d6f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d6f5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d6f5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d6f60:
    // 0x2d6f60: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x2d6f60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2d6f64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6F64u;
    {
        const bool branch_taken_0x2d6f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6F64u;
        // 0x2d6f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6f64) {
            ctx->pc = 0x2D6F74u;
            goto label_2d6f74;
        }
    }
    ctx->pc = 0x2D6F6Cu;
    // 0x2d6f6c: 0xc0b599c  jal         func_2D6670
    ctx->pc = 0x2D6F6Cu;
    SET_GPR_U32(ctx, 31, 0x2D6F74u);
    ctx->pc = 0x2D6F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6F6Cu;
    // 0x2d6f70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6670u, 0x2D6F6Cu, 0x2D6F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F74u;
label_2d6f74:
    // 0x2d6f74: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2d6f74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2d6f78: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D6F78u;
    {
        const bool branch_taken_0x2d6f78 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2D6F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6F78u;
        // 0x2d6f7c: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6f78) {
            ctx->pc = 0x2D6F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6f60;
        }
    }
    ctx->pc = 0x2D6F80u;
    // 0x2d6f80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d6f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6f84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d6f84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6f88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d6f88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6f8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d6f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6f90: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6F90u;
        // 0x2d6f94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6F98u;
}
