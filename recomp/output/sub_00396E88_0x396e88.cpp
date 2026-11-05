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

// Function: sub_00396E88
// Address: 0x396e88 - 0x396ee8
void sub_00396E88_0x396e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396E88_0x396e88");
#endif

    switch (ctx->pc) {
        case 0x396eacu: goto label_396eac;
        case 0x396eccu: goto label_396ecc;
        default: break;
    }

    ctx->pc = 0x396e88u;

    // 0x396e88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x396e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x396e8c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x396e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x396e90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x396e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396e94: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x396e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x396e98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x396e98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396e9c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x396E9Cu;
    {
        const bool branch_taken_0x396e9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x396EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E9Cu;
        // 0x396ea0: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396e9c) {
            ctx->pc = 0x396ED0u;
            goto label_396ed0;
        }
    }
    ctx->pc = 0x396EA4u;
    // 0x396ea4: 0xc0f2628  jal         func_3C98A0
    ctx->pc = 0x396EA4u;
    SET_GPR_U32(ctx, 31, 0x396EACu);
    ctx->pc = 0x396EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396EA4u;
    // 0x396ea8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C98A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C98A0u, 0x396EA4u, 0x396EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396EACu;
label_396eac:
    // 0x396eac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x396eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396eb0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x396eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x396eb4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x396EB4u;
    {
        const bool branch_taken_0x396eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x396EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396EB4u;
        // 0x396eb8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396eb4) {
            ctx->pc = 0x396ED0u;
            goto label_396ed0;
        }
    }
    ctx->pc = 0x396EBCu;
    // 0x396ebc: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x396EBCu;
    {
        const bool branch_taken_0x396ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x396ebc) {
            ctx->pc = 0x396EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396EBCu;
            // 0x396ec0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396ED4u;
            goto label_396ed4;
        }
    }
    ctx->pc = 0x396EC4u;
    // 0x396ec4: 0xc0f2644  jal         func_3C9910
    ctx->pc = 0x396EC4u;
    SET_GPR_U32(ctx, 31, 0x396ECCu);
    ctx->pc = 0x396EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396EC4u;
    // 0x396ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9910u, 0x396EC4u, 0x396ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396ECCu;
label_396ecc:
    // 0x396ecc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x396eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396ed0:
    // 0x396ed0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x396ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_396ed4:
    // 0x396ed4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x396ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x396ed8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x396ed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x396edc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x396edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x396ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x396EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396EE0u;
        // 0x396ee4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396EE8u;
}
