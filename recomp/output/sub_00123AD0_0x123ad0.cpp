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

// Function: sub_00123AD0
// Address: 0x123ad0 - 0x123b30
void sub_00123AD0_0x123ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123AD0_0x123ad0");
#endif

    switch (ctx->pc) {
        case 0x123af8u: goto label_123af8;
        case 0x123b0cu: goto label_123b0c;
        default: break;
    }

    ctx->pc = 0x123ad0u;

    // 0x123ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123ad8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123adc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x123adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ae0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x123ae4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ae8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x123ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x123aec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x123aecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123af0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123AF0u;
    SET_GPR_U32(ctx, 31, 0x123AF8u);
    ctx->pc = 0x123AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123AF0u;
    // 0x123af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123AF0u, 0x123AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123AF8u;
label_123af8:
    // 0x123af8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123AF8u;
    {
        const bool branch_taken_0x123af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123AF8u;
        // 0x123afc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123af8) {
            ctx->pc = 0x123B14u;
            goto label_123b14;
        }
    }
    ctx->pc = 0x123B00u;
    // 0x123b00: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x123b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x123b04: 0xc042e08  jal         func_10B820
    ctx->pc = 0x123B04u;
    SET_GPR_U32(ctx, 31, 0x123B0Cu);
    ctx->pc = 0x123B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B04u;
    // 0x123b08: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B820u, 0x123B04u, 0x123B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B0Cu;
label_123b0c:
    // 0x123b0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x123B0Cu;
    {
        const bool branch_taken_0x123b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B0Cu;
        // 0x123b10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b0c) {
            ctx->pc = 0x123B1Cu;
            goto label_123b1c;
        }
    }
    ctx->pc = 0x123B14u;
label_123b14:
    // 0x123b14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x123b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x123b18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123b1c:
    // 0x123b1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123b1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123b20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123b20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123b24: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x123b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123b28: 0x3e00008  jr          $ra
    ctx->pc = 0x123B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B28u;
        // 0x123b2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123B30u;
}
