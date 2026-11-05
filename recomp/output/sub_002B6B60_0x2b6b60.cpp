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

// Function: sub_002B6B60
// Address: 0x2b6b60 - 0x2b6bf0
void sub_002B6B60_0x2b6b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6B60_0x2b6b60");
#endif

    switch (ctx->pc) {
        case 0x2b6bc4u: goto label_2b6bc4;
        case 0x2b6bdcu: goto label_2b6bdc;
        default: break;
    }

    ctx->pc = 0x2b6b60u;

    // 0x2b6b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b6b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b6b64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b6b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6b68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b6b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b6b6c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2b6b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b6b70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b6b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b6b74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6b78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b6b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6b7c: 0xae025914  sw          $v0, 0x5914($s0)
    ctx->pc = 0x2b6b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22804), GPR_U32(ctx, 2));
    // 0x2b6b80: 0x8e0558f8  lw          $a1, 0x58F8($s0)
    ctx->pc = 0x2b6b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22776)));
    // 0x2b6b84: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B6B84u;
    {
        const bool branch_taken_0x2b6b84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B84u;
        // 0x2b6b88: 0xae0458fc  sw          $a0, 0x58FC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 22780), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b84) {
            ctx->pc = 0x2B6BA0u;
            goto label_2b6ba0;
        }
    }
    ctx->pc = 0x2B6B8Cu;
    // 0x2b6b8c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2b6b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b6b90: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B6B90u;
    {
        const bool branch_taken_0x2b6b90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B90u;
        // 0x2b6b94: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b90) {
            ctx->pc = 0x2B6BB0u;
            goto label_2b6bb0;
        }
    }
    ctx->pc = 0x2B6B98u;
    // 0x2b6b98: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2B6B98u;
    {
        const bool branch_taken_0x2b6b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6B98u;
        // 0x2b6b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b98) {
            ctx->pc = 0x2B6BD4u;
            goto label_2b6bd4;
        }
    }
    ctx->pc = 0x2B6BA0u;
label_2b6ba0:
    // 0x2b6ba0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b6ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b6ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ba8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6BA8u;
    {
        const bool branch_taken_0x2b6ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BA8u;
        // 0x2b6bac: 0xa040a930  sb          $zero, -0x56D0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294945072), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ba8) {
            ctx->pc = 0x2B6BBCu;
            goto label_2b6bbc;
        }
    }
    ctx->pc = 0x2B6BB0u;
label_2b6bb0:
    // 0x2b6bb0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b6bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b6bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6bb8: 0xa040a928  sb          $zero, -0x56D8($v0)
    ctx->pc = 0x2b6bb8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA928u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA928u, _value); } while (0);
label_2b6bbc:
    // 0x2b6bbc: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B6BBCu;
    SET_GPR_U32(ctx, 31, 0x2B6BC4u);
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B6BBCu, 0x2B6BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6BC4u;
label_2b6bc4:
    // 0x2b6bc4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2b6bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b6bc8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2b6bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b6bcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6BCCu;
    {
        const bool branch_taken_0x2b6bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BCCu;
        // 0x2b6bd0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6bcc) {
            ctx->pc = 0x2B6BDCu;
            goto label_2b6bdc;
        }
    }
    ctx->pc = 0x2B6BD4u;
label_2b6bd4:
    // 0x2b6bd4: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B6BD4u;
    SET_GPR_U32(ctx, 31, 0x2B6BDCu);
    ctx->pc = 0x2B6BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6BD4u;
    // 0x2b6bd8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B6BD4u, 0x2B6BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6BDCu;
label_2b6bdc:
    // 0x2b6bdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6be0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b6be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6be4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BE4u;
        // 0x2b6be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6BECu;
    // 0x2b6bec: 0x0  nop
    ctx->pc = 0x2b6becu;
    // NOP
    ctx->pc = 0x2b6bf0u;
}
