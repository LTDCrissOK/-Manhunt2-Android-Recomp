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

// Function: sub_0017BC70
// Address: 0x17bc70 - 0x17bcb8
void sub_0017BC70_0x17bc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BC70_0x17bc70");
#endif

    switch (ctx->pc) {
        case 0x17bc94u: goto label_17bc94;
        case 0x17bcacu: goto label_17bcac;
        default: break;
    }

    ctx->pc = 0x17bc70u;

    // 0x17bc70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17bc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bc74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bc78: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x17bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17bc7c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17BC7Cu;
    {
        const bool branch_taken_0x17bc7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC7Cu;
        // 0x17bc80: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc7c) {
            ctx->pc = 0x17BC9Cu;
            goto label_17bc9c;
        }
    }
    ctx->pc = 0x17BC84u;
    // 0x17bc84: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17bc84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17bc88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17bc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc8c: 0xc04af30  jal         func_12BCC0
    ctx->pc = 0x17BC8Cu;
    SET_GPR_U32(ctx, 31, 0x17BC94u);
    ctx->pc = 0x17BC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BC8Cu;
    // 0x17bc90: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BCC0u, 0x17BC8Cu, 0x17BC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BC94u;
label_17bc94:
    // 0x17bc94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17BC94u;
    {
        const bool branch_taken_0x17bc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC94u;
        // 0x17bc98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc94) {
            ctx->pc = 0x17BCB0u;
            goto label_17bcb0;
        }
    }
    ctx->pc = 0x17BC9Cu;
label_17bc9c:
    // 0x17bc9c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17bc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17bca0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17bca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bca4: 0xc04af56  jal         func_12BD58
    ctx->pc = 0x17BCA4u;
    SET_GPR_U32(ctx, 31, 0x17BCACu);
    ctx->pc = 0x17BCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BCA4u;
    // 0x17bca8: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BD58u, 0x17BCA4u, 0x17BCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BCACu;
label_17bcac:
    // 0x17bcac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bcacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17bcb0:
    // 0x17bcb0: 0x3e00008  jr          $ra
    ctx->pc = 0x17BCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCB0u;
        // 0x17bcb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BCB8u;
}
