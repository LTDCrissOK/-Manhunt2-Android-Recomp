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

// Function: sub_00104B48
// Address: 0x104b48 - 0x104be0
void sub_00104B48_0x104b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104B48_0x104b48");
#endif

    switch (ctx->pc) {
        case 0x104b74u: goto label_104b74;
        case 0x104b9cu: goto label_104b9c;
        case 0x104bb4u: goto label_104bb4;
        case 0x104bc4u: goto label_104bc4;
        default: break;
    }

    ctx->pc = 0x104b48u;

    // 0x104b48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x104b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x104b4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104b50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x104b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x104b54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x104b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104b58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x104b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x104b5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x104b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104b60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x104b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x104b64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x104b64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104b68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x104b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x104b6c: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x104B6Cu;
    SET_GPR_U32(ctx, 31, 0x104B74u);
    ctx->pc = 0x104B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104B6Cu;
    // 0x104b70: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x104B6Cu, 0x104B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104B74u;
label_104b74:
    // 0x104b74: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x104B74u;
    {
        const bool branch_taken_0x104b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B74u;
        // 0x104b78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b74) {
            ctx->pc = 0x104BA4u;
            goto label_104ba4;
        }
    }
    ctx->pc = 0x104B7Cu;
    // 0x104b7c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x104b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x104b80: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x104B80u;
    {
        const bool branch_taken_0x104b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B80u;
        // 0x104b84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b80) {
            ctx->pc = 0x104B8Cu;
            goto label_104b8c;
        }
    }
    ctx->pc = 0x104B88u;
    // 0x104b88: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x104b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_104b8c:
    // 0x104b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104b90: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x104b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104b94: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x104B94u;
    SET_GPR_U32(ctx, 31, 0x104B9Cu);
    ctx->pc = 0x104B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104B94u;
    // 0x104b98: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x104B94u, 0x104B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104B9Cu;
label_104b9c:
    // 0x104b9c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x104B9Cu;
    {
        const bool branch_taken_0x104b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B9Cu;
        // 0x104ba0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104b9c) {
            ctx->pc = 0x104BC8u;
            goto label_104bc8;
        }
    }
    ctx->pc = 0x104BA4u;
label_104ba4:
    // 0x104ba4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x104ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ba8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x104ba8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104bac: 0xc041378  jal         func_104DE0
    ctx->pc = 0x104BACu;
    SET_GPR_U32(ctx, 31, 0x104BB4u);
    ctx->pc = 0x104BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104BACu;
    // 0x104bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104DE0u, 0x104BACu, 0x104BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104BB4u;
label_104bb4:
    // 0x104bb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104BB4u;
    {
        const bool branch_taken_0x104bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BB4u;
        // 0x104bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bb4) {
            ctx->pc = 0x104BC4u;
            goto label_104bc4;
        }
    }
    ctx->pc = 0x104BBCu;
    // 0x104bbc: 0xc0f6a66  jal         func_3DA998
    ctx->pc = 0x104BBCu;
    SET_GPR_U32(ctx, 31, 0x104BC4u);
    ctx->pc = 0x104BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104BBCu;
    // 0x104bc0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA998u, 0x104BBCu, 0x104BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104BC4u;
label_104bc4:
    // 0x104bc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_104bc8:
    // 0x104bc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104bc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104bcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x104bccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104bd0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x104bd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x104bd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x104bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x104BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BD8u;
        // 0x104bdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104BE0u;
}
