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

// Function: sub_0010AEF0
// Address: 0x10aef0 - 0x10af48
void sub_0010AEF0_0x10aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AEF0_0x10aef0");
#endif

    switch (ctx->pc) {
        case 0x10af14u: goto label_10af14;
        case 0x10af30u: goto label_10af30;
        default: break;
    }

    ctx->pc = 0x10aef0u;

    // 0x10aef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10aef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10aef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10aef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10aef8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10aef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10aefc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10aefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10af00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10af04: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10af04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10af08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10af0c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10AF0Cu;
    SET_GPR_U32(ctx, 31, 0x10AF14u);
    ctx->pc = 0x10AF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF0Cu;
    // 0x10af10: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10AF0Cu, 0x10AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF14u;
label_10af14:
    // 0x10af14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10af14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10af18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10af18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af1c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10af1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10af20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10af20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10af24: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10af24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10af28: 0xc044278  jal         func_1109E0
    ctx->pc = 0x10AF28u;
    SET_GPR_U32(ctx, 31, 0x10AF30u);
    ctx->pc = 0x10AF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF28u;
    // 0x10af2c: 0x8c44001c  lw          $a0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1109E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1109E0u, 0x10AF28u, 0x10AF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF30u;
label_10af30:
    // 0x10af30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10af30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10af34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10af34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10af38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10af38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10af3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10af3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10af40: 0x3e00008  jr          $ra
    ctx->pc = 0x10AF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF40u;
        // 0x10af44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AF48u;
}
