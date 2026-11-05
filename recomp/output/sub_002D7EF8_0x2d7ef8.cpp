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

// Function: sub_002D7EF8
// Address: 0x2d7ef8 - 0x2d7f78
void sub_002D7EF8_0x2d7ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7EF8_0x2d7ef8");
#endif

    switch (ctx->pc) {
        case 0x2d7f28u: goto label_2d7f28;
        case 0x2d7f30u: goto label_2d7f30;
        case 0x2d7f60u: goto label_2d7f60;
        default: break;
    }

    ctx->pc = 0x2d7ef8u;

    // 0x2d7ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d7ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d7efc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d7efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d7f00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d7f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d7f04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d7f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7f08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d7f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d7f0c: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x2d7f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2d7f10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d7f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d7f14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d7f14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7f18: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d7f1c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D7F1Cu;
    {
        const bool branch_taken_0x2d7f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F1Cu;
        // 0x2d7f20: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f1c) {
            ctx->pc = 0x2D7F40u;
            goto label_2d7f40;
        }
    }
    ctx->pc = 0x2D7F24u;
    // 0x2d7f24: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2d7f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d7f28:
    // 0x2d7f28: 0xc0f6e9c  jal         func_3DBA70
    ctx->pc = 0x2D7F28u;
    SET_GPR_U32(ctx, 31, 0x2D7F30u);
    ctx->pc = 0x2D7F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7F28u;
    // 0x2d7f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x2D7F28u, 0x2D7F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7F30u;
label_2d7f30:
    // 0x2d7f30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d7f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d7f34: 0x0  nop
    ctx->pc = 0x2d7f34u;
    // NOP
    // 0x2d7f38: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D7F38u;
    {
        const bool branch_taken_0x2d7f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7f38) {
            ctx->pc = 0x2D7F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7F38u;
            // 0x2d7f3c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7f28;
        }
    }
    ctx->pc = 0x2D7F40u;
label_2d7f40:
    // 0x2d7f40: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2d7f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2d7f44: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x2d7f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2d7f48: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d7f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2d7f4c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2d7f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2d7f50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7F50u;
    {
        const bool branch_taken_0x2d7f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F50u;
        // 0x2d7f54: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f50) {
            ctx->pc = 0x2D7F60u;
            goto label_2d7f60;
        }
    }
    ctx->pc = 0x2D7F58u;
    // 0x2d7f58: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D7F58u;
    SET_GPR_U32(ctx, 31, 0x2D7F60u);
    ctx->pc = 0x2D7F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7F58u;
    // 0x2d7f5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D7F58u, 0x2D7F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7F60u;
label_2d7f60:
    // 0x2d7f60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d7f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7f64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d7f64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7f68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d7f68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7f6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d7f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d7f70: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F70u;
        // 0x2d7f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7F78u;
}
