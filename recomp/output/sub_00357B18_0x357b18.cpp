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

// Function: sub_00357B18
// Address: 0x357b18 - 0x357b88
void sub_00357B18_0x357b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357B18_0x357b18");
#endif

    switch (ctx->pc) {
        case 0x357b44u: goto label_357b44;
        case 0x357b5cu: goto label_357b5c;
        default: break;
    }

    ctx->pc = 0x357b18u;

    // 0x357b18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357b1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357b20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x357b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x357b24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x357b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357b28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x357b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x357b2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x357b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357b30: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x357b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x357b34: 0x1051000e  beq         $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x357B34u;
    {
        const bool branch_taken_0x357b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x357B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357B34u;
        // 0x357b38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357b34) {
            ctx->pc = 0x357B70u;
            goto label_357b70;
        }
    }
    ctx->pc = 0x357B3Cu;
    // 0x357b3c: 0xc0d5c32  jal         func_3570C8
    ctx->pc = 0x357B3Cu;
    SET_GPR_U32(ctx, 31, 0x357B44u);
    ctx->pc = 0x357B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357B3Cu;
    // 0x357b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3570C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3570C8u, 0x357B3Cu, 0x357B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357B44u;
label_357b44:
    // 0x357b44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x357b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357b48: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x357b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x357b4c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x357B4Cu;
    {
        const bool branch_taken_0x357b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357b4c) {
            ctx->pc = 0x357B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357B4Cu;
            // 0x357b50: 0xae110018  sw          $s1, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357B6Cu;
            goto label_357b6c;
        }
    }
    ctx->pc = 0x357B54u;
    // 0x357b54: 0xc0d5e2e  jal         func_3578B8
    ctx->pc = 0x357B54u;
    SET_GPR_U32(ctx, 31, 0x357B5Cu);
    ctx->pc = 0x357B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357B54u;
    // 0x357b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3578B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3578B8u, 0x357B54u, 0x357B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357B5Cu;
label_357b5c:
    // 0x357b5c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x357B5Cu;
    {
        const bool branch_taken_0x357b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357b5c) {
            ctx->pc = 0x357B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357B5Cu;
            // 0x357b60: 0xae110018  sw          $s1, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357B6Cu;
            goto label_357b6c;
        }
    }
    ctx->pc = 0x357B64u;
    // 0x357b64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x357B64u;
    {
        const bool branch_taken_0x357b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357B64u;
        // 0x357b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357b64) {
            ctx->pc = 0x357B70u;
            goto label_357b70;
        }
    }
    ctx->pc = 0x357B6Cu;
label_357b6c:
    // 0x357b6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_357b70:
    // 0x357b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357b74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357b78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x357b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x357B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357B7Cu;
        // 0x357b80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357B84u;
    // 0x357b84: 0x0  nop
    ctx->pc = 0x357b84u;
    // NOP
    ctx->pc = 0x357b88u;
}
