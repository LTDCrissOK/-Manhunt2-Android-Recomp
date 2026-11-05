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

// Function: sub_00286E80
// Address: 0x286e80 - 0x286ee8
void sub_00286E80_0x286e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286E80_0x286e80");
#endif

    ctx->pc = 0x286e80u;

    // 0x286e80: 0x3c0c0067  lui         $t4, 0x67
    ctx->pc = 0x286e80u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)103 << 16));
    // 0x286e84: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x286e84u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e88: 0x8d82a320  lw          $v0, -0x5CE0($t4)
    ctx->pc = 0x286e88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x66A320u));
    // 0x286e8c: 0x258ba320  addiu       $t3, $t4, -0x5CE0
    ctx->pc = 0x286e8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 4294943520));
    // 0x286e90: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x286E90u;
    {
        const bool branch_taken_0x286e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E90u;
        // 0x286e94: 0xa0682d  daddu       $t5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e90) {
            ctx->pc = 0x286EE0u;
            goto label_286ee0;
        }
    }
    ctx->pc = 0x286E98u;
    // 0x286e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286e9c: 0xa16a0034  sb          $t2, 0x34($t3)
    ctx->pc = 0x286e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 52), (uint8_t)GPR_U32(ctx, 10));
    // 0x286ea0: 0xad82a320  sw          $v0, -0x5CE0($t4)
    ctx->pc = 0x286ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294943520), GPR_U32(ctx, 2));
    // 0x286ea4: 0x2504ffff  addiu       $a0, $t0, -0x1
    ctx->pc = 0x286ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x286ea8: 0x2525ffff  addiu       $a1, $t1, -0x1
    ctx->pc = 0x286ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x286eac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x286eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286eb0: 0xad6e0014  sw          $t6, 0x14($t3)
    ctx->pc = 0x286eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 14));
    // 0x286eb4: 0xad63001c  sw          $v1, 0x1C($t3)
    ctx->pc = 0x286eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 3));
    // 0x286eb8: 0xad6d0018  sw          $t5, 0x18($t3)
    ctx->pc = 0x286eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 13));
    // 0x286ebc: 0xad660020  sw          $a2, 0x20($t3)
    ctx->pc = 0x286ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 6));
    // 0x286ec0: 0xad670024  sw          $a3, 0x24($t3)
    ctx->pc = 0x286ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 36), GPR_U32(ctx, 7));
    // 0x286ec4: 0xad64002c  sw          $a0, 0x2C($t3)
    ctx->pc = 0x286ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 44), GPR_U32(ctx, 4));
    // 0x286ec8: 0xad650030  sw          $a1, 0x30($t3)
    ctx->pc = 0x286ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 48), GPR_U32(ctx, 5));
    // 0x286ecc: 0xad620010  sw          $v0, 0x10($t3)
    ctx->pc = 0x286eccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 2));
    // 0x286ed0: 0xad620004  sw          $v0, 0x4($t3)
    ctx->pc = 0x286ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 2));
    // 0x286ed4: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x286ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
    // 0x286ed8: 0xad62000c  sw          $v0, 0xC($t3)
    ctx->pc = 0x286ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 2));
    // 0x286edc: 0xad600028  sw          $zero, 0x28($t3)
    ctx->pc = 0x286edcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 40), GPR_U32(ctx, 0));
label_286ee0:
    // 0x286ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x286EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286EE8u;
}
