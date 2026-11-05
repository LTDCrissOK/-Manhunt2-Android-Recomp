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

// Function: sub_002BEB48
// Address: 0x2beb48 - 0x2beba8
void sub_002BEB48_0x2beb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEB48_0x2beb48");
#endif

    switch (ctx->pc) {
        case 0x2beb5cu: goto label_2beb5c;
        case 0x2beb70u: goto label_2beb70;
        case 0x2beb90u: goto label_2beb90;
        default: break;
    }

    ctx->pc = 0x2beb48u;

    // 0x2beb48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2beb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2beb4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2beb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2beb50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2beb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2beb54: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BEB54u;
    SET_GPR_U32(ctx, 31, 0x2BEB5Cu);
    ctx->pc = 0x2BEB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEB54u;
    // 0x2beb58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BEB54u, 0x2BEB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB5Cu;
label_2beb5c:
    // 0x2beb5c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2beb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2beb60: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2beb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2beb64: 0x24633c28  addiu       $v1, $v1, 0x3C28
    ctx->pc = 0x2beb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15400));
    // 0x2beb68: 0xc0b0326  jal         func_2C0C98
    ctx->pc = 0x2BEB68u;
    SET_GPR_U32(ctx, 31, 0x2BEB70u);
    ctx->pc = 0x2BEB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEB68u;
    // 0x2beb6c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0C98u, 0x2BEB68u, 0x2BEB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB70u;
label_2beb70:
    // 0x2beb70: 0x24031010  addiu       $v1, $zero, 0x1010
    ctx->pc = 0x2beb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4112));
    // 0x2beb74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2beb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2beb78: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2beb78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2beb7c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2beb7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2beb80: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2beb80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2beb84: 0x2484513c  addiu       $a0, $a0, 0x513C
    ctx->pc = 0x2beb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20796));
    // 0x2beb88: 0xc0f9ef4  jal         func_3E7BD0
    ctx->pc = 0x2BEB88u;
    SET_GPR_U32(ctx, 31, 0x2BEB90u);
    ctx->pc = 0x2BEB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEB88u;
    // 0x2beb8c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7BD0u, 0x2BEB88u, 0x2BEB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB90u;
label_2beb90:
    // 0x2beb90: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2beb90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2beb94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2beb94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beb98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2beb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2beb9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2beb9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2beba0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEBA0u;
        // 0x2beba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEBA8u;
}
