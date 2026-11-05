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

// Function: sub_00108470
// Address: 0x108470 - 0x1084a0
void sub_00108470_0x108470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108470_0x108470");
#endif

    switch (ctx->pc) {
        case 0x108470u: goto label_108470;
        case 0x108474u: goto label_108474;
        case 0x108478u: goto label_108478;
        case 0x10847cu: goto label_10847c;
        case 0x108480u: goto label_108480;
        case 0x108484u: goto label_108484;
        case 0x108488u: goto label_108488;
        case 0x10848cu: goto label_10848c;
        case 0x108490u: goto label_108490;
        case 0x108494u: goto label_108494;
        case 0x108498u: goto label_108498;
        case 0x10849cu: goto label_10849c;
        default: break;
    }

    ctx->pc = 0x108470u;

label_108470:
    // 0x108470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_108474:
    // 0x108474: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x108474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_108478:
    // 0x108478: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_10847c:
    if (ctx->pc == 0x10847Cu) {
        ctx->pc = 0x10847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108478u;
        // 0x10847c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108480u;
        goto label_108480;
    }
    ctx->pc = 0x108478u;
    {
        const bool branch_taken_0x108478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108478u;
        // 0x10847c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108478) {
            ctx->pc = 0x108490u;
            goto label_108490;
        }
    }
    ctx->pc = 0x108480u;
label_108480:
    // 0x108480: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x108480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_108484:
    // 0x108484: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x108484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_108488:
    // 0x108488: 0x40f809  jalr        $v0
label_10848c:
    if (ctx->pc == 0x10848Cu) {
        ctx->pc = 0x10848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108488u;
        // 0x10848c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108490u;
        goto label_108490;
    }
    ctx->pc = 0x108488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108490u);
        ctx->pc = 0x10848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108488u;
        // 0x10848c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108488u, 0x108490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108490u;
label_108490:
    // 0x108490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_108494:
    // 0x108494: 0x3e00008  jr          $ra
label_108498:
    if (ctx->pc == 0x108498u) {
        ctx->pc = 0x108498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108494u;
        // 0x108498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10849Cu;
        goto label_10849c;
    }
    ctx->pc = 0x108494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108494u;
        // 0x108498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10849Cu;
label_10849c:
    // 0x10849c: 0x0  nop
    ctx->pc = 0x10849cu;
    // NOP
    ctx->pc = 0x1084a0u;
}
