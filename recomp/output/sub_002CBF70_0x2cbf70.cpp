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

// Function: sub_002CBF70
// Address: 0x2cbf70 - 0x2cbfd8
void sub_002CBF70_0x2cbf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBF70_0x2cbf70");
#endif

    ctx->pc = 0x2cbf70u;

    // 0x2cbf70: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2cbf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2cbf74: 0x8c44a61c  lw          $a0, -0x59E4($v0)
    ctx->pc = 0x2cbf74u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x57A61Cu));
    // 0x2cbf78: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CBF78u;
    {
        const bool branch_taken_0x2cbf78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF78u;
        // 0x2cbf7c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf78) {
            ctx->pc = 0x2CBFCCu;
            goto label_2cbfcc;
        }
    }
    ctx->pc = 0x2CBF80u;
    // 0x2cbf80: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x2cbf80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2cbf84: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2cbf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2cbf88: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CBF88u;
    {
        const bool branch_taken_0x2cbf88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CBF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF88u;
        // 0x2cbf8c: 0x24850003  addiu       $a1, $a0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf88) {
            ctx->pc = 0x2CBFC0u;
            goto label_2cbfc0;
        }
    }
    ctx->pc = 0x2CBF90u;
    // 0x2cbf90: 0x28620021  slti        $v0, $v1, 0x21
    ctx->pc = 0x2cbf90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x2cbf94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBF94u;
    {
        const bool branch_taken_0x2cbf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF94u;
        // 0x2cbf98: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf94) {
            ctx->pc = 0x2CBFACu;
            goto label_2cbfac;
        }
    }
    ctx->pc = 0x2CBF9Cu;
    // 0x2cbf9c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CBF9Cu;
    {
        const bool branch_taken_0x2cbf9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CBFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF9Cu;
        // 0x2cbfa0: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf9c) {
            ctx->pc = 0x2CBFC4u;
            goto label_2cbfc4;
        }
    }
    ctx->pc = 0x2CBFA4u;
    // 0x2cbfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFA4u;
        // 0x2cbfa8: 0xacc0a61c  sw          $zero, -0x59E4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294944284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBFACu;
label_2cbfac:
    // 0x2cbfac: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2cbfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2cbfb0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBFB0u;
    {
        const bool branch_taken_0x2cbfb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cbfb0) {
            ctx->pc = 0x2CBFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBFB0u;
            // 0x2cbfb4: 0xa0800003  sb          $zero, 0x3($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBFC8u;
            goto label_2cbfc8;
        }
    }
    ctx->pc = 0x2CBFB8u;
    // 0x2cbfb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFB8u;
        // 0x2cbfbc: 0xacc0a61c  sw          $zero, -0x59E4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294944284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBFC0u;
label_2cbfc0:
    // 0x2cbfc0: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x2cbfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_2cbfc4:
    // 0x2cbfc4: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2cbfc4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_2cbfc8:
    // 0x2cbfc8: 0xacc0a61c  sw          $zero, -0x59E4($a2)
    ctx->pc = 0x2cbfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294944284), GPR_U32(ctx, 0));
label_2cbfcc:
    // 0x2cbfcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBFD4u;
    // 0x2cbfd4: 0x0  nop
    ctx->pc = 0x2cbfd4u;
    // NOP
    ctx->pc = 0x2cbfd8u;
}
