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

// Function: sub_00135288
// Address: 0x135288 - 0x1352f8
void sub_00135288_0x135288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135288_0x135288");
#endif

    switch (ctx->pc) {
        case 0x1352a0u: goto label_1352a0;
        default: break;
    }

    ctx->pc = 0x135288u;

    // 0x135288: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x135288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x13528c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13528cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135290: 0x24478ed0  addiu       $a3, $v0, -0x7130
    ctx->pc = 0x135290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938320));
    // 0x135294: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x135294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135298: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x135298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13529c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x13529cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1352a0:
    // 0x1352a0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1352a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1352a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1352a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1352a8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1352A8u;
    {
        const bool branch_taken_0x1352a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1352ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1352A8u;
        // 0x1352ac: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1352a8) {
            ctx->pc = 0x1352D8u;
            goto label_1352d8;
        }
    }
    ctx->pc = 0x1352B0u;
    // 0x1352b0: 0x94420008  lhu         $v0, 0x8($v0)
    ctx->pc = 0x1352b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1352b4: 0x38420037  xori        $v0, $v0, 0x37
    ctx->pc = 0x1352b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)55);
    // 0x1352b8: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1352b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1352bc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1352BCu;
    {
        const bool branch_taken_0x1352bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1352C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1352BCu;
        // 0x1352c0: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1352bc) {
            ctx->pc = 0x1352D8u;
            goto label_1352d8;
        }
    }
    ctx->pc = 0x1352C4u;
    // 0x1352c4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1352c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1352c8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1352C8u;
    {
        const bool branch_taken_0x1352c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1352CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1352C8u;
        // 0x1352cc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1352c8) {
            ctx->pc = 0x1352DCu;
            goto label_1352dc;
        }
    }
    ctx->pc = 0x1352D0u;
    // 0x1352d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1352D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1352D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1352D0u;
        // 0x1352d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1352D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1352D8u;
label_1352d8:
    // 0x1352d8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1352d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1352dc:
    // 0x1352dc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1352dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1352e0: 0x2c830004  sltiu       $v1, $a0, 0x4
    ctx->pc = 0x1352e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1352e4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1352E4u;
    {
        const bool branch_taken_0x1352e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1352E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1352E4u;
        // 0x1352e8: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1352e4) {
            ctx->pc = 0x1352A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1352a0;
        }
    }
    ctx->pc = 0x1352ECu;
    // 0x1352ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1352ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1352F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1352ECu;
        // 0x1352f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1352ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1352F4u;
    // 0x1352f4: 0x0  nop
    ctx->pc = 0x1352f4u;
    // NOP
    ctx->pc = 0x1352f8u;
}
