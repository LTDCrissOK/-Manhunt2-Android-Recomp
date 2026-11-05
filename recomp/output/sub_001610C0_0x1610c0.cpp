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

// Function: sub_001610C0
// Address: 0x1610c0 - 0x161148
void sub_001610C0_0x1610c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001610C0_0x1610c0");
#endif

    switch (ctx->pc) {
        case 0x1610d0u: goto label_1610d0;
        case 0x161110u: goto label_161110;
        default: break;
    }

    ctx->pc = 0x1610c0u;

    // 0x1610c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1610c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1610c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610c8: 0x24a70320  addiu       $a3, $a1, 0x320
    ctx->pc = 0x1610c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 800));
    // 0x1610cc: 0x24a603e0  addiu       $a2, $a1, 0x3E0
    ctx->pc = 0x1610ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 992));
label_1610d0:
    // 0x1610d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1610d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1610d4: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x1610d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1610d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1610d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1610dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1610dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1610e0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1610e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1610e4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1610e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1610e8: 0x2c820030  sltiu       $v0, $a0, 0x30
    ctx->pc = 0x1610e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1610ec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1610ECu;
    {
        const bool branch_taken_0x1610ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1610F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610ECu;
        // 0x1610f0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1610ec) {
            ctx->pc = 0x1610D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1610d0;
        }
    }
    ctx->pc = 0x1610F4u;
    // 0x1610f4: 0xa0a004a0  sb          $zero, 0x4A0($a1)
    ctx->pc = 0x1610f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1184), (uint8_t)GPR_U32(ctx, 0));
    // 0x1610f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1610f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1610fc: 0xa0a004a1  sb          $zero, 0x4A1($a1)
    ctx->pc = 0x1610fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1185), (uint8_t)GPR_U32(ctx, 0));
    // 0x161100: 0x24a704a4  addiu       $a3, $a1, 0x4A4
    ctx->pc = 0x161100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1188));
    // 0x161104: 0xa0a004a2  sb          $zero, 0x4A2($a1)
    ctx->pc = 0x161104u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1186), (uint8_t)GPR_U32(ctx, 0));
    // 0x161108: 0x24a606a4  addiu       $a2, $a1, 0x6A4
    ctx->pc = 0x161108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1700));
    // 0x16110c: 0x0  nop
    ctx->pc = 0x16110cu;
    // NOP
label_161110:
    // 0x161110: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x161110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x161114: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x161114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x161118: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x161118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16111c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x16111cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x161120: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x161120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x161124: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x161124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x161128: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x161128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x16112c: 0x441fff8  bgez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16112Cu;
    {
        const bool branch_taken_0x16112c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x161130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16112Cu;
        // 0x161130: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16112c) {
            ctx->pc = 0x161110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161110;
        }
    }
    ctx->pc = 0x161134u;
    // 0x161134: 0xa0a008a6  sb          $zero, 0x8A6($a1)
    ctx->pc = 0x161134u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2214), (uint8_t)GPR_U32(ctx, 0));
    // 0x161138: 0xa0a008a4  sb          $zero, 0x8A4($a1)
    ctx->pc = 0x161138u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2212), (uint8_t)GPR_U32(ctx, 0));
    // 0x16113c: 0x3e00008  jr          $ra
    ctx->pc = 0x16113Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16113Cu;
        // 0x161140: 0xa0a008a5  sb          $zero, 0x8A5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2213), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16113Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161144u;
    // 0x161144: 0x0  nop
    ctx->pc = 0x161144u;
    // NOP
    ctx->pc = 0x161148u;
}
