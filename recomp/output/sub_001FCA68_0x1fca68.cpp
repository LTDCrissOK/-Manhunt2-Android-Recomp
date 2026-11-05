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

// Function: sub_001FCA68
// Address: 0x1fca68 - 0x1fcb00
void sub_001FCA68_0x1fca68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCA68_0x1fca68");
#endif

    switch (ctx->pc) {
        case 0x1fcaa0u: goto label_1fcaa0;
        case 0x1fcaccu: goto label_1fcacc;
        default: break;
    }

    ctx->pc = 0x1fca68u;

    // 0x1fca68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fca68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fca6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fca6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fca70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fca74: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1fca74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fca78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fca7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fca7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fca80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fca84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fca84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca88: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fca88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fca8c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1fca8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca90: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1fca90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1fca94: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1fca94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca98: 0xc07f21a  jal         func_1FC868
    ctx->pc = 0x1FCA98u;
    SET_GPR_U32(ctx, 31, 0x1FCAA0u);
    ctx->pc = 0x1FCA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA98u;
    // 0x1fca9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC868u, 0x1FCA98u, 0x1FCAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCAA0u;
label_1fcaa0:
    // 0x1fcaa0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FCAA0u;
    {
        const bool branch_taken_0x1fcaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAA0u;
        // 0x1fcaa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcaa0) {
            ctx->pc = 0x1FCAE0u;
            goto label_1fcae0;
        }
    }
    ctx->pc = 0x1FCAA8u;
    // 0x1fcaa8: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1FCAA8u;
    {
        const bool branch_taken_0x1fcaa8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAA8u;
        // 0x1fcaac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcaa8) {
            ctx->pc = 0x1FCAE0u;
            goto label_1fcae0;
        }
    }
    ctx->pc = 0x1FCAB0u;
    // 0x1fcab0: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x1fcab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x1fcab4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1fcab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcab8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1fcab8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcabc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fcabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fcac0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fcac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcac4: 0xc07f2c0  jal         func_1FCB00
    ctx->pc = 0x1FCAC4u;
    SET_GPR_U32(ctx, 31, 0x1FCACCu);
    ctx->pc = 0x1FCAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCAC4u;
    // 0x1fcac8: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCB00u, 0x1FCAC4u, 0x1FCACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCACCu;
label_1fcacc:
    // 0x1fcacc: 0x340395c0  ori         $v1, $zero, 0x95C0
    ctx->pc = 0x1fcaccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38336);
    // 0x1fcad0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1fcad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fcad4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1fcad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1fcad8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fcad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fcadc: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x1fcadcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_1fcae0:
    // 0x1fcae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fcae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcae4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fcae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fcae8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fcae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcaec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fcaecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fcaf0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fcaf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcaf4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1fcaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fcaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAF8u;
        // 0x1fcafc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCB00u;
}
