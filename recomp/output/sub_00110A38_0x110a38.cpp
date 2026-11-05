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

// Function: sub_00110A38
// Address: 0x110a38 - 0x110ab0
void sub_00110A38_0x110a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110A38_0x110a38");
#endif

    switch (ctx->pc) {
        case 0x110a8cu: goto label_110a8c;
        default: break;
    }

    ctx->pc = 0x110a38u;

    // 0x110a38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x110a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x110a3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110a40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x110a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x110a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x110a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x110a48: 0x8c82010c  lw          $v0, 0x10C($a0)
    ctx->pc = 0x110a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x110a4c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x110A4Cu;
    {
        const bool branch_taken_0x110a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A4Cu;
        // 0x110a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a4c) {
            ctx->pc = 0x110A98u;
            goto label_110a98;
        }
    }
    ctx->pc = 0x110A54u;
    // 0x110a54: 0x8c8200d0  lw          $v0, 0xD0($a0)
    ctx->pc = 0x110a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x110a58: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x110A58u;
    {
        const bool branch_taken_0x110a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A58u;
        // 0x110a5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a58) {
            ctx->pc = 0x110A98u;
            goto label_110a98;
        }
    }
    ctx->pc = 0x110A60u;
    // 0x110a60: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x110a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x110a64: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x110A64u;
    {
        const bool branch_taken_0x110a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A64u;
        // 0x110a68: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a64) {
            ctx->pc = 0x110A94u;
            goto label_110a94;
        }
    }
    ctx->pc = 0x110A6Cu;
    // 0x110a6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x110a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110a70: 0x8e1191c0  lw          $s1, -0x6E40($s0)
    ctx->pc = 0x110a70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939072)));
    // 0x110a74: 0xae0291c0  sw          $v0, -0x6E40($s0)
    ctx->pc = 0x110a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939072), GPR_U32(ctx, 2));
    // 0x110a78: 0x3c014190  lui         $at, 0x4190
    ctx->pc = 0x110a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16784 << 16));
    // 0x110a7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x110a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x110a80: 0x11882b  sltu        $s1, $zero, $s1
    ctx->pc = 0x110a80u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x110a84: 0xc05fcaa  jal         func_17F2A8
    ctx->pc = 0x110A84u;
    SET_GPR_U32(ctx, 31, 0x110A8Cu);
    ctx->pc = 0x110A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110A84u;
    // 0x110a88: 0x8c840020  lw          $a0, 0x20($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F2A8u, 0x110A84u, 0x110A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110A8Cu;
label_110a8c:
    // 0x110a8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x110A8Cu;
    {
        const bool branch_taken_0x110a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A8Cu;
        // 0x110a90: 0xae1191c0  sw          $s1, -0x6E40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294939072), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a8c) {
            ctx->pc = 0x110A98u;
            goto label_110a98;
        }
    }
    ctx->pc = 0x110A94u;
label_110a94:
    // 0x110a94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x110a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110a98:
    // 0x110a98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110a9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x110a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x110aa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x110aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x110AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AA4u;
        // 0x110aa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110AACu;
    // 0x110aac: 0x0  nop
    ctx->pc = 0x110aacu;
    // NOP
    ctx->pc = 0x110ab0u;
}
