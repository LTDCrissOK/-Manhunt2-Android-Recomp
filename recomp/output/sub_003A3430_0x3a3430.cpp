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

// Function: sub_003A3430
// Address: 0x3a3430 - 0x3a34f8
void sub_003A3430_0x3a3430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3430_0x3a3430");
#endif

    switch (ctx->pc) {
        case 0x3a3450u: goto label_3a3450;
        case 0x3a3498u: goto label_3a3498;
        default: break;
    }

    ctx->pc = 0x3a3430u;

    // 0x3a3430: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a3430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a3434: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a3434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a3438: 0x24631e34  addiu       $v1, $v1, 0x1E34
    ctx->pc = 0x3a3438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7732));
    // 0x3a343c: 0x24421e30  addiu       $v0, $v0, 0x1E30
    ctx->pc = 0x3a343cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7728));
    // 0x3a3440: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3a3440u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x411E34u));
    // 0x3a3444: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3a3444u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x411E30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411E30u, _value); } while (0);
    // 0x3a3448: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3448u;
        // 0x3a344c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3450u;
label_3a3450:
    // 0x3a3450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a3450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a3454: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a3454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a3458: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a3458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a345c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a345cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a3460: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A3460u;
    {
        const bool branch_taken_0x3a3460 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A3464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3460u;
        // 0x3a3464: 0xac441e38  sw          $a0, 0x1E38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 7736), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3460) {
            ctx->pc = 0x3A3480u;
            goto label_3a3480;
        }
    }
    ctx->pc = 0x3A3468u;
    // 0x3a3468: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a3468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a346c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a346cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a3470: 0x2484d508  addiu       $a0, $a0, -0x2AF8
    ctx->pc = 0x3a3470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956296));
    // 0x3a3474: 0x80f3050  j           func_3CC140
    ctx->pc = 0x3A3474u;
    ctx->pc = 0x3A3478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3474u;
    // 0x3a3478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    sub_003CC140_0x3cc140(rdram, ctx, runtime); return;
    ctx->pc = 0x3A347Cu;
    // 0x3a347c: 0x0  nop
    ctx->pc = 0x3a347cu;
    // NOP
label_3a3480:
    // 0x3a3480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a3480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a3484: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3484u;
        // 0x3a3488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A348Cu;
    // 0x3a348c: 0x0  nop
    ctx->pc = 0x3a348cu;
    // NOP
    // 0x3a3490: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x3a3490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x3a3494: 0x0  nop
    ctx->pc = 0x3a3494u;
    // NOP
label_3a3498:
    // 0x3a3498: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a3498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a349c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x3a349cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x3a34a0: 0x24631e0c  addiu       $v1, $v1, 0x1E0C
    ctx->pc = 0x3a34a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7692));
    // 0x3a34a4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3a34a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3a34a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a34a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a34ac: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x3a34acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x3a34b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a34b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a34b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a34b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a34b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3a34b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3a34bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a34bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a34c0: 0x14850007  bne         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A34C0u;
    {
        const bool branch_taken_0x3a34c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3A34C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A34C0u;
        // 0x3a34c4: 0xacc21e3c  sw          $v0, 0x1E3C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 7740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a34c0) {
            ctx->pc = 0x3A34E0u;
            goto label_3a34e0;
        }
    }
    ctx->pc = 0x3A34C8u;
    // 0x3a34c8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a34c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a34cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a34ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a34d0: 0x2484d528  addiu       $a0, $a0, -0x2AD8
    ctx->pc = 0x3a34d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956328));
    // 0x3a34d4: 0x80f3050  j           func_3CC140
    ctx->pc = 0x3A34D4u;
    ctx->pc = 0x3A34D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A34D4u;
    // 0x3a34d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    sub_003CC140_0x3cc140(rdram, ctx, runtime); return;
    ctx->pc = 0x3A34DCu;
    // 0x3a34dc: 0x0  nop
    ctx->pc = 0x3a34dcu;
    // NOP
label_3a34e0:
    // 0x3a34e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a34e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a34e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A34E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A34E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A34E4u;
        // 0x3a34e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A34E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A34ECu;
    // 0x3a34ec: 0x0  nop
    ctx->pc = 0x3a34ecu;
    // NOP
    // 0x3a34f0: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3a34f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x3a34f4: 0x0  nop
    ctx->pc = 0x3a34f4u;
    // NOP
    ctx->pc = 0x3a34f8u;
}
