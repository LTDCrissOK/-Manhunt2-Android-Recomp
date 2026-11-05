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

// Function: sub_002C3A38
// Address: 0x2c3a38 - 0x2c3aa8
void sub_002C3A38_0x2c3a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3A38_0x2c3a38");
#endif

    switch (ctx->pc) {
        case 0x2c3a64u: goto label_2c3a64;
        case 0x2c3a84u: goto label_2c3a84;
        case 0x2c3a90u: goto label_2c3a90;
        default: break;
    }

    ctx->pc = 0x2c3a38u;

    // 0x2c3a38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c3a3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c3a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c3a40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c3a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c3a44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c3a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3a48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c3a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c3a4c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2c3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2c3a50: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x2c3a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2c3a54: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3A54u;
    {
        const bool branch_taken_0x2c3a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A54u;
        // 0x2c3a58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a54) {
            ctx->pc = 0x2C3A64u;
            goto label_2c3a64;
        }
    }
    ctx->pc = 0x2C3A5Cu;
    // 0x2c3a5c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2C3A5Cu;
    SET_GPR_U32(ctx, 31, 0x2C3A64u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2C3A5Cu, 0x2C3A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A64u;
label_2c3a64:
    // 0x2c3a64: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x2c3a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2c3a68: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3A68u;
    {
        const bool branch_taken_0x2c3a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A68u;
        // 0x2c3a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a68) {
            ctx->pc = 0x2C3A88u;
            goto label_2c3a88;
        }
    }
    ctx->pc = 0x2C3A70u;
    // 0x2c3a70: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2c3a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c3a74: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3A74u;
    {
        const bool branch_taken_0x2c3a74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A74u;
        // 0x2c3a78: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a74) {
            ctx->pc = 0x2C3A84u;
            goto label_2c3a84;
        }
    }
    ctx->pc = 0x2C3A7Cu;
    // 0x2c3a7c: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x2C3A7Cu;
    SET_GPR_U32(ctx, 31, 0x2C3A84u);
    ctx->pc = 0x2C3A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A7Cu;
    // 0x2c3a80: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x2C3A7Cu, 0x2C3A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A84u;
label_2c3a84:
    // 0x2c3a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c3a88:
    // 0x2c3a88: 0xc0b057c  jal         func_2C15F0
    ctx->pc = 0x2C3A88u;
    SET_GPR_U32(ctx, 31, 0x2C3A90u);
    ctx->pc = 0x2C3A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A88u;
    // 0x2c3a8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C15F0u, 0x2C3A88u, 0x2C3A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A90u;
label_2c3a90:
    // 0x2c3a90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c3a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3a94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c3a94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3a98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c3a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A9Cu;
        // 0x2c3aa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3AA4u;
    // 0x2c3aa4: 0x0  nop
    ctx->pc = 0x2c3aa4u;
    // NOP
    ctx->pc = 0x2c3aa8u;
}
