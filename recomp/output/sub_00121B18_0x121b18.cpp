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

// Function: sub_00121B18
// Address: 0x121b18 - 0x121b98
void sub_00121B18_0x121b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121B18_0x121b18");
#endif

    switch (ctx->pc) {
        case 0x121b48u: goto label_121b48;
        case 0x121b58u: goto label_121b58;
        case 0x121b70u: goto label_121b70;
        default: break;
    }

    ctx->pc = 0x121b18u;

    // 0x121b18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x121b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x121b1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x121b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x121b20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x121b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x121b24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x121b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121b28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x121b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x121b2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x121b2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121b30: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x121b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x121b34: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x121b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121b38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x121b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x121b3c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x121b3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121b40: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121B40u;
    SET_GPR_U32(ctx, 31, 0x121B48u);
    ctx->pc = 0x121B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B40u;
    // 0x121b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121B40u, 0x121B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B48u;
label_121b48:
    // 0x121b48: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x121B48u;
    {
        const bool branch_taken_0x121b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B48u;
        // 0x121b4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b48) {
            ctx->pc = 0x121B7Cu;
            goto label_121b7c;
        }
    }
    ctx->pc = 0x121B50u;
    // 0x121b50: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121B50u;
    SET_GPR_U32(ctx, 31, 0x121B58u);
    ctx->pc = 0x121B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B50u;
    // 0x121b54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121B50u, 0x121B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B58u;
label_121b58:
    // 0x121b58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x121B58u;
    {
        const bool branch_taken_0x121b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B58u;
        // 0x121b5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b58) {
            ctx->pc = 0x121B78u;
            goto label_121b78;
        }
    }
    ctx->pc = 0x121B60u;
    // 0x121b60: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x121b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x121b64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x121b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121b68: 0xc0427ec  jal         func_109FB0
    ctx->pc = 0x121B68u;
    SET_GPR_U32(ctx, 31, 0x121B70u);
    ctx->pc = 0x121B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121B68u;
    // 0x121b6c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109FB0u, 0x121B68u, 0x121B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B70u;
label_121b70:
    // 0x121b70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x121B70u;
    {
        const bool branch_taken_0x121b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B70u;
        // 0x121b74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121b70) {
            ctx->pc = 0x121B80u;
            goto label_121b80;
        }
    }
    ctx->pc = 0x121B78u;
label_121b78:
    // 0x121b78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x121b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121b7c:
    // 0x121b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121b80:
    // 0x121b80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x121b80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121b84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x121b84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121b88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x121b88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x121b8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x121b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121b90: 0x3e00008  jr          $ra
    ctx->pc = 0x121B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121B90u;
        // 0x121b94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121B98u;
}
