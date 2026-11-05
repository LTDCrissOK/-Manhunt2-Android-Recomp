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

// Function: sub_00282A90
// Address: 0x282a90 - 0x282b00
void sub_00282A90_0x282a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282A90_0x282a90");
#endif

    switch (ctx->pc) {
        case 0x282ab8u: goto label_282ab8;
        case 0x282accu: goto label_282acc;
        case 0x282ae0u: goto label_282ae0;
        default: break;
    }

    ctx->pc = 0x282a90u;

    // 0x282a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x282a94: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x282a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x282a98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x282a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x282a9c: 0x2442b2e0  addiu       $v0, $v0, -0x4D20
    ctx->pc = 0x282a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947552));
    // 0x282aa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x282aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x282aa4: 0x24500018  addiu       $s0, $v0, 0x18
    ctx->pc = 0x282aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x282aa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x282aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x282aac: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x282aacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x282ab0: 0x8e02fff0  lw          $v0, -0x10($s0)
    ctx->pc = 0x282ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BB2E8u));
    // 0x282ab4: 0x0  nop
    ctx->pc = 0x282ab4u;
    // NOP
label_282ab8:
    // 0x282ab8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x282ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x282abc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282ABCu;
    {
        const bool branch_taken_0x282abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282ABCu;
        // 0x282ac0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282abc) {
            ctx->pc = 0x282ACCu;
            goto label_282acc;
        }
    }
    ctx->pc = 0x282AC4u;
    // 0x282ac4: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x282AC4u;
    SET_GPR_U32(ctx, 31, 0x282ACCu);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x282AC4u, 0x282ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282ACCu;
label_282acc:
    // 0x282acc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x282accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x282ad0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282AD0u;
    {
        const bool branch_taken_0x282ad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x282AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282AD0u;
        // 0x282ad4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ad0) {
            ctx->pc = 0x282AE0u;
            goto label_282ae0;
        }
    }
    ctx->pc = 0x282AD8u;
    // 0x282ad8: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x282AD8u;
    SET_GPR_U32(ctx, 31, 0x282AE0u);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x282AD8u, 0x282AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282AE0u;
label_282ae0:
    // 0x282ae0: 0x623fff5  bgezl       $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x282AE0u;
    {
        const bool branch_taken_0x282ae0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x282ae0) {
            ctx->pc = 0x282AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282AE0u;
            // 0x282ae4: 0x8e02fff0  lw          $v0, -0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282ab8;
        }
    }
    ctx->pc = 0x282AE8u;
    // 0x282ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x282ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282aec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x282aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x282af0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x282af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282af4: 0x3e00008  jr          $ra
    ctx->pc = 0x282AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282AF4u;
        // 0x282af8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282AFCu;
    // 0x282afc: 0x0  nop
    ctx->pc = 0x282afcu;
    // NOP
    ctx->pc = 0x282b00u;
}
