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

// Function: sub_003DCAA8
// Address: 0x3dcaa8 - 0x3dcb00
void sub_003DCAA8_0x3dcaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCAA8_0x3dcaa8");
#endif

    switch (ctx->pc) {
        case 0x3dcadcu: goto label_3dcadc;
        default: break;
    }

    ctx->pc = 0x3dcaa8u;

    // 0x3dcaa8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3dcaa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcaac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dcaacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dcab0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3dcab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3dcab4: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3dcab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3dcab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dcab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dcabc: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x3dcabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x3dcac0: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x3dcac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
    // 0x3dcac4: 0xacc30048  sw          $v1, 0x48($a2)
    ctx->pc = 0x3dcac4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 3));
    // 0x3dcac8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3dcac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3dcacc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DCACCu;
    {
        const bool branch_taken_0x3dcacc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCACCu;
        // 0x3dcad0: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcacc) {
            ctx->pc = 0x3DCADCu;
            goto label_3dcadc;
        }
    }
    ctx->pc = 0x3DCAD4u;
    // 0x3dcad4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DCAD4u;
    SET_GPR_U32(ctx, 31, 0x3DCADCu);
    ctx->pc = 0x3DCAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCAD4u;
    // 0x3dcad8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DCAD4u, 0x3DCADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCADCu;
label_3dcadc:
    // 0x3dcadc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dcadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dcae0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCAE0u;
        // 0x3dcae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCAE8u;
    // 0x3dcae8: 0x0  nop
    ctx->pc = 0x3dcae8u;
    // NOP
    // 0x3dcaec: 0x0  nop
    ctx->pc = 0x3dcaecu;
    // NOP
    // 0x3dcaf0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3dcaf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3dcaf4: 0x0  nop
    ctx->pc = 0x3dcaf4u;
    // NOP
    // 0x3dcaf8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3dcaf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3dcafc: 0x0  nop
    ctx->pc = 0x3dcafcu;
    // NOP
    ctx->pc = 0x3dcb00u;
}
