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

// Function: sub_00108378
// Address: 0x108378 - 0x1083a8
void sub_00108378_0x108378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108378_0x108378");
#endif

    switch (ctx->pc) {
        case 0x108378u: goto label_108378;
        case 0x10837cu: goto label_10837c;
        case 0x108380u: goto label_108380;
        case 0x108384u: goto label_108384;
        case 0x108388u: goto label_108388;
        case 0x10838cu: goto label_10838c;
        case 0x108390u: goto label_108390;
        case 0x108394u: goto label_108394;
        case 0x108398u: goto label_108398;
        case 0x10839cu: goto label_10839c;
        case 0x1083a0u: goto label_1083a0;
        case 0x1083a4u: goto label_1083a4;
        default: break;
    }

    ctx->pc = 0x108378u;

label_108378:
    // 0x108378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10837c:
    // 0x10837c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10837cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_108380:
    // 0x108380: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_108384:
    if (ctx->pc == 0x108384u) {
        ctx->pc = 0x108384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108380u;
        // 0x108384: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108388u;
        goto label_108388;
    }
    ctx->pc = 0x108380u;
    {
        const bool branch_taken_0x108380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x108384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108380u;
        // 0x108384: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108380) {
            ctx->pc = 0x108398u;
            goto label_108398;
        }
    }
    ctx->pc = 0x108388u;
label_108388:
    // 0x108388: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x108388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_10838c:
    // 0x10838c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x10838cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_108390:
    // 0x108390: 0x40f809  jalr        $v0
label_108394:
    if (ctx->pc == 0x108394u) {
        ctx->pc = 0x108394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108390u;
        // 0x108394: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108398u;
        goto label_108398;
    }
    ctx->pc = 0x108390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108398u);
        ctx->pc = 0x108394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108390u;
        // 0x108394: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108390u, 0x108398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108398u;
label_108398:
    // 0x108398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10839c:
    // 0x10839c: 0x3e00008  jr          $ra
label_1083a0:
    if (ctx->pc == 0x1083A0u) {
        ctx->pc = 0x1083A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10839Cu;
        // 0x1083a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1083A4u;
        goto label_1083a4;
    }
    ctx->pc = 0x10839Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1083A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10839Cu;
        // 0x1083a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10839Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1083A4u;
label_1083a4:
    // 0x1083a4: 0x0  nop
    ctx->pc = 0x1083a4u;
    // NOP
    ctx->pc = 0x1083a8u;
}
