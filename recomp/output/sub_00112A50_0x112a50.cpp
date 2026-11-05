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

// Function: sub_00112A50
// Address: 0x112a50 - 0x112ae8
void sub_00112A50_0x112a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112A50_0x112a50");
#endif

    switch (ctx->pc) {
        case 0x112a98u: goto label_112a98;
        case 0x112ac4u: goto label_112ac4;
        default: break;
    }

    ctx->pc = 0x112a50u;

    // 0x112a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112a54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112a58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x112a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x112a5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x112a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a60: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x112a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x112a64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x112A64u;
    {
        const bool branch_taken_0x112a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A64u;
        // 0x112a68: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a64) {
            ctx->pc = 0x112A88u;
            goto label_112a88;
        }
    }
    ctx->pc = 0x112A6Cu;
    // 0x112a6c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x112a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x112a70: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x112A70u;
    {
        const bool branch_taken_0x112a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112a70) {
            ctx->pc = 0x112A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112A70u;
            // 0x112a74: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112A84u;
            goto label_112a84;
        }
    }
    ctx->pc = 0x112A78u;
    // 0x112a78: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x112a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x112a7c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x112A7Cu;
    {
        const bool branch_taken_0x112a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A7Cu;
        // 0x112a80: 0xae0000bc  sw          $zero, 0xBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a7c) {
            ctx->pc = 0x112AD4u;
            goto label_112ad4;
        }
    }
    ctx->pc = 0x112A84u;
label_112a84:
    // 0x112a84: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x112a84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_112a88:
    // 0x112a88: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x112A88u;
    {
        const bool branch_taken_0x112a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x112A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A88u;
        // 0x112a8c: 0xae0000bc  sw          $zero, 0xBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a88) {
            ctx->pc = 0x112AA8u;
            goto label_112aa8;
        }
    }
    ctx->pc = 0x112A90u;
    // 0x112a90: 0xc044aba  jal         func_112AE8
    ctx->pc = 0x112A90u;
    SET_GPR_U32(ctx, 31, 0x112A98u);
    ctx->pc = 0x112A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A90u;
    // 0x112a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112AE8u, 0x112A90u, 0x112A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A98u;
label_112a98:
    // 0x112a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x112a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112a9c: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x112a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x112aa0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x112AA0u;
    {
        const bool branch_taken_0x112aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AA0u;
        // 0x112aa4: 0xae0200c8  sw          $v0, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112aa0) {
            ctx->pc = 0x112AD4u;
            goto label_112ad4;
        }
    }
    ctx->pc = 0x112AA8u;
label_112aa8:
    // 0x112aa8: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x112aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x112aac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x112AACu;
    {
        const bool branch_taken_0x112aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AACu;
        // 0x112ab0: 0xae0000c4  sw          $zero, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112aac) {
            ctx->pc = 0x112AD4u;
            goto label_112ad4;
        }
    }
    ctx->pc = 0x112AB4u;
    // 0x112ab4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x112ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x112ab8: 0x8e0500cc  lw          $a1, 0xCC($s0)
    ctx->pc = 0x112ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x112abc: 0xc04b2b6  jal         func_12CAD8
    ctx->pc = 0x112ABCu;
    SET_GPR_U32(ctx, 31, 0x112AC4u);
    ctx->pc = 0x112AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112ABCu;
    // 0x112ac0: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CAD8u, 0x112ABCu, 0x112AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112AC4u;
label_112ac4:
    // 0x112ac4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x112AC4u;
    {
        const bool branch_taken_0x112ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112ac4) {
            ctx->pc = 0x112AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112AC4u;
            // 0x112ac8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112AD8u;
            goto label_112ad8;
        }
    }
    ctx->pc = 0x112ACCu;
    // 0x112acc: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x112accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x112ad0: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x112ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
label_112ad4:
    // 0x112ad4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112ad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_112ad8:
    // 0x112ad8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x112ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x112adc: 0x3e00008  jr          $ra
    ctx->pc = 0x112ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112ADCu;
        // 0x112ae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112AE4u;
    // 0x112ae4: 0x0  nop
    ctx->pc = 0x112ae4u;
    // NOP
    ctx->pc = 0x112ae8u;
}
