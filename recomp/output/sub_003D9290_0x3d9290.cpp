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

// Function: sub_003D9290
// Address: 0x3d9290 - 0x3d9318
void sub_003D9290_0x3d9290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9290_0x3d9290");
#endif

    switch (ctx->pc) {
        case 0x3d92c0u: goto label_3d92c0;
        case 0x3d92e0u: goto label_3d92e0;
        default: break;
    }

    ctx->pc = 0x3d9290u;

    // 0x3d9290: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3d9290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3d9294: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x3d9294u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x3d9298: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D9298u;
    {
        const bool branch_taken_0x3d9298 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9298u;
        // 0x3d929c: 0x30e7ffff  andi        $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9298) {
            ctx->pc = 0x3D92B0u;
            goto label_3d92b0;
        }
    }
    ctx->pc = 0x3D92A0u;
    // 0x3d92a0: 0x94820010  lhu         $v0, 0x10($a0)
    ctx->pc = 0x3d92a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3d92a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D92A4u;
    {
        const bool branch_taken_0x3d92a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D92A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D92A4u;
        // 0x3d92a8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d92a4) {
            ctx->pc = 0x3D92B0u;
            goto label_3d92b0;
        }
    }
    ctx->pc = 0x3D92ACu;
    // 0x3d92ac: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x3d92acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3d92b0:
    // 0x3d92b0: 0x107102b  sltu        $v0, $t0, $a3
    ctx->pc = 0x3d92b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d92b4: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x3D92B4u;
    {
        const bool branch_taken_0x3d92b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d92b4) {
            ctx->pc = 0x3D92B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D92B4u;
            // 0x3d92b8: 0x94820010  lhu         $v0, 0x10($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D930Cu;
            goto label_3d930c;
        }
    }
    ctx->pc = 0x3D92BCu;
    // 0x3d92bc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3d92bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3d92c0:
    // 0x3d92c0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x3d92c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3d92c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d92c8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3d92c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d92cc: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D92CCu;
    {
        const bool branch_taken_0x3d92cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D92D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D92CCu;
        // 0x3d92d0: 0xa2102b  sltu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d92cc) {
            ctx->pc = 0x3D92E8u;
            goto label_3d92e8;
        }
    }
    ctx->pc = 0x3D92D4u;
    // 0x3d92d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3d92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3d92d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D92D8u;
    {
        const bool branch_taken_0x3d92d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D92D8u;
        // 0x3d92dc: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d92d8) {
            ctx->pc = 0x3D92F8u;
            goto label_3d92f8;
        }
    }
    ctx->pc = 0x3D92E0u;
label_3d92e0:
    // 0x3d92e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D92E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D92E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D92E0u;
        // 0x3d92e4: 0xa4c70000  sh          $a3, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D92E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D92E8u;
label_3d92e8:
    // 0x3d92e8: 0x0  nop
    ctx->pc = 0x3d92e8u;
    // NOP
    // 0x3d92ec: 0x0  nop
    ctx->pc = 0x3d92ecu;
    // NOP
    // 0x3d92f0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3D92F0u;
    {
        const bool branch_taken_0x3d92f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D92F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D92F0u;
        // 0x3d92f4: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d92f0) {
            ctx->pc = 0x3D92E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d92e0;
        }
    }
    ctx->pc = 0x3D92F8u;
label_3d92f8:
    // 0x3d92f8: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x3d92f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3d92fc: 0x107182b  sltu        $v1, $t0, $a3
    ctx->pc = 0x3d92fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d9300: 0x5060ffef  beql        $v1, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3D9300u;
    {
        const bool branch_taken_0x3d9300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9300) {
            ctx->pc = 0x3D9304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9300u;
            // 0x3d9304: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D92C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d92c0;
        }
    }
    ctx->pc = 0x3D9308u;
    // 0x3d9308: 0x94820010  lhu         $v0, 0x10($a0)
    ctx->pc = 0x3d9308u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
label_3d930c:
    // 0x3d930c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D930Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D930Cu;
        // 0x3d9310: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D930Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9314u;
    // 0x3d9314: 0x0  nop
    ctx->pc = 0x3d9314u;
    // NOP
    ctx->pc = 0x3d9318u;
}
