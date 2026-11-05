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

// Function: sub_00176390
// Address: 0x176390 - 0x1763c8
void sub_00176390_0x176390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176390_0x176390");
#endif

    switch (ctx->pc) {
        case 0x176390u: goto label_176390;
        case 0x176394u: goto label_176394;
        case 0x176398u: goto label_176398;
        case 0x17639cu: goto label_17639c;
        case 0x1763a0u: goto label_1763a0;
        case 0x1763a4u: goto label_1763a4;
        case 0x1763a8u: goto label_1763a8;
        case 0x1763acu: goto label_1763ac;
        case 0x1763b0u: goto label_1763b0;
        case 0x1763b4u: goto label_1763b4;
        case 0x1763b8u: goto label_1763b8;
        case 0x1763bcu: goto label_1763bc;
        case 0x1763c0u: goto label_1763c0;
        case 0x1763c4u: goto label_1763c4;
        default: break;
    }

    ctx->pc = 0x176390u;

label_176390:
    // 0x176390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x176390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_176394:
    // 0x176394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x176394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_176398:
    // 0x176398: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x176398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
label_17639c:
    // 0x17639c: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x17639cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
label_1763a0:
    // 0x1763a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1763a4:
    if (ctx->pc == 0x1763A4u) {
        ctx->pc = 0x1763A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1763A0u;
        // 0x1763a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1763A8u;
        goto label_1763a8;
    }
    ctx->pc = 0x1763A0u;
    {
        const bool branch_taken_0x1763a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1763A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1763A0u;
        // 0x1763a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1763a0) {
            ctx->pc = 0x1763C0u;
            goto label_1763c0;
        }
    }
    ctx->pc = 0x1763A8u;
label_1763a8:
    // 0x1763a8: 0x8c8400b0  lw          $a0, 0xB0($a0)
    ctx->pc = 0x1763a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_1763ac:
    // 0x1763ac: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1763acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1763b0:
    // 0x1763b0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1763b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1763b4:
    // 0x1763b4: 0x40f809  jalr        $v0
label_1763b8:
    if (ctx->pc == 0x1763B8u) {
        ctx->pc = 0x1763BCu;
        goto label_1763bc;
    }
    ctx->pc = 0x1763B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1763BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1763B4u, 0x1763BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1763BCu;
label_1763bc:
    // 0x1763bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1763bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1763c0:
    // 0x1763c0: 0x3e00008  jr          $ra
label_1763c4:
    if (ctx->pc == 0x1763C4u) {
        ctx->pc = 0x1763C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1763C0u;
        // 0x1763c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1763C8u;
        goto label_fallthrough_0x1763c0;
    }
    ctx->pc = 0x1763C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1763C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1763C0u;
        // 0x1763c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1763C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1763c0:
    ctx->pc = 0x1763C8u;
}
