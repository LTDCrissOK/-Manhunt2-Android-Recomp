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

// Function: sub_003DA808
// Address: 0x3da808 - 0x3da850
void sub_003DA808_0x3da808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA808_0x3da808");
#endif

    ctx->pc = 0x3da808u;

    // 0x3da808: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x3da808u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3da80c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DA80Cu;
    {
        const bool branch_taken_0x3da80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3da80c) {
            ctx->pc = 0x3DA810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA80Cu;
            // 0x3da810: 0x94820012  lhu         $v0, 0x12($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA81Cu;
            goto label_3da81c;
        }
    }
    ctx->pc = 0x3DA814u;
    // 0x3da814: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA814u;
        // 0x3da818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA81Cu;
label_3da81c:
    // 0x3da81c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3da81cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3da820: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DA820u;
    {
        const bool branch_taken_0x3da820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA820u;
        // 0x3da824: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da820) {
            ctx->pc = 0x3DA844u;
            goto label_3da844;
        }
    }
    ctx->pc = 0x3DA828u;
    // 0x3da828: 0x94830012  lhu         $v1, 0x12($a0)
    ctx->pc = 0x3da828u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x3da82c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x3da82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3da830: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3da830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3da834: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3da834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3da838: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3da838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3da83c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA83Cu;
        // 0x3da840: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA844u;
label_3da844:
    // 0x3da844: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA844u;
        // 0x3da848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA84Cu;
    // 0x3da84c: 0x0  nop
    ctx->pc = 0x3da84cu;
    // NOP
    ctx->pc = 0x3da850u;
}
