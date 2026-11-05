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

// Function: sub_002D5FA8
// Address: 0x2d5fa8 - 0x2d6038
void sub_002D5FA8_0x2d5fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5FA8_0x2d5fa8");
#endif

    switch (ctx->pc) {
        case 0x2d5fd8u: goto label_2d5fd8;
        case 0x2d5ff4u: goto label_2d5ff4;
        case 0x2d6008u: goto label_2d6008;
        default: break;
    }

    ctx->pc = 0x2d5fa8u;

    // 0x2d5fa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d5fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d5fac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d5facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d5fb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d5fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d5fb4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d5fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5fb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d5fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d5fbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d5fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5fc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d5fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d5fc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d5fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d5fc8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d5fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d5fcc: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D5FCCu;
    {
        const bool branch_taken_0x2d5fcc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D5FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5FCCu;
        // 0x2d5fd0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5fcc) {
            ctx->pc = 0x2D601Cu;
            goto label_2d601c;
        }
    }
    ctx->pc = 0x2D5FD4u;
    // 0x2d5fd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d5fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5fd8:
    // 0x2d5fd8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2d5fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2d5fdc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2d5fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d5fe0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2d5fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5fe4: 0x4c00008  bltz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D5FE4u;
    {
        const bool branch_taken_0x2d5fe4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2D5FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5FE4u;
        // 0x2d5fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5fe4) {
            ctx->pc = 0x2D6008u;
            goto label_2d6008;
        }
    }
    ctx->pc = 0x2D5FECu;
    // 0x2d5fec: 0xc0b5934  jal         func_2D64D0
    ctx->pc = 0x2D5FECu;
    SET_GPR_U32(ctx, 31, 0x2D5FF4u);
    ctx->pc = 0x2D5FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5FECu;
    // 0x2d5ff0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D64D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D64D0u, 0x2D5FECu, 0x2D5FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5FF4u;
label_2d5ff4:
    // 0x2d5ff4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5FF4u;
    {
        const bool branch_taken_0x2d5ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5ff4) {
            ctx->pc = 0x2D5FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5FF4u;
            // 0x2d5ff8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D600Cu;
            goto label_2d600c;
        }
    }
    ctx->pc = 0x2D5FFCu;
    // 0x2d5ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6000: 0xc0b5752  jal         func_2D5D48
    ctx->pc = 0x2D6000u;
    SET_GPR_U32(ctx, 31, 0x2D6008u);
    ctx->pc = 0x2D6004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6000u;
    // 0x2d6004: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D48u, 0x2D6000u, 0x2D6008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6008u;
label_2d6008:
    // 0x2d6008: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d6008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d600c:
    // 0x2d600c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d600cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d6010: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2d6010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d6014: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2D6014u;
    {
        const bool branch_taken_0x2d6014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6014u;
        // 0x2d6018: 0x265201c4  addiu       $s2, $s2, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6014) {
            ctx->pc = 0x2D5FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5fd8;
        }
    }
    ctx->pc = 0x2D601Cu;
label_2d601c:
    // 0x2d601c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d601cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6020: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d6020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6024: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d6024u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6028: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d6028u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d602c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d602cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6030: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6030u;
        // 0x2d6034: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6038u;
}
