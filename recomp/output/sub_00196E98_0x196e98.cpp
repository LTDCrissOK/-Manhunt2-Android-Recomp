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

// Function: sub_00196E98
// Address: 0x196e98 - 0x196ee0
void sub_00196E98_0x196e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196E98_0x196e98");
#endif

    switch (ctx->pc) {
        case 0x196ed4u: goto label_196ed4;
        default: break;
    }

    ctx->pc = 0x196e98u;

    // 0x196e98: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x196e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196e9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196ea0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x196ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x196ea4: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x196ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x196ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196eac: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x196eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x196eb0: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x196eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
    // 0x196eb4: 0xacc30048  sw          $v1, 0x48($a2)
    ctx->pc = 0x196eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 3));
    // 0x196eb8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x196eb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x196ebc: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x196ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x196ec0: 0xacc30088  sw          $v1, 0x88($a2)
    ctx->pc = 0x196ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 3));
    // 0x196ec4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x196EC4u;
    {
        const bool branch_taken_0x196ec4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x196EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196EC4u;
        // 0x196ec8: 0xacc30068  sw          $v1, 0x68($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ec4) {
            ctx->pc = 0x196ED4u;
            goto label_196ed4;
        }
    }
    ctx->pc = 0x196ECCu;
    // 0x196ecc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x196ECCu;
    SET_GPR_U32(ctx, 31, 0x196ED4u);
    ctx->pc = 0x196ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196ECCu;
    // 0x196ed0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x196ECCu, 0x196ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196ED4u;
label_196ed4:
    // 0x196ed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x196ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196ED8u;
        // 0x196edc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196EE0u;
}
