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

// Function: sub_001BBAF8
// Address: 0x1bbaf8 - 0x1bbb58
void sub_001BBAF8_0x1bbaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBAF8_0x1bbaf8");
#endif

    switch (ctx->pc) {
        case 0x1bbb28u: goto label_1bbb28;
        case 0x1bbb40u: goto label_1bbb40;
        default: break;
    }

    ctx->pc = 0x1bbaf8u;

    // 0x1bbaf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bbaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbafc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1bbafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbb04: 0x8cc20070  lw          $v0, 0x70($a2)
    ctx->pc = 0x1bbb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x1bbb08: 0x8c430fe8  lw          $v1, 0xFE8($v0)
    ctx->pc = 0x1bbb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
    // 0x1bbb0c: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x1bbb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x1bbb10: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBB10u;
    {
        const bool branch_taken_0x1bbb10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb10) {
            ctx->pc = 0x1BBB30u;
            goto label_1bbb30;
        }
    }
    ctx->pc = 0x1BBB18u;
    // 0x1bbb18: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1bbb18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1bbb1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bbb1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bbb20: 0xc06eed6  jal         func_1BBB58
    ctx->pc = 0x1BBB20u;
    SET_GPR_U32(ctx, 31, 0x1BBB28u);
    ctx->pc = 0x1BBB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB20u;
    // 0x1bbb24: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBB58u, 0x1BBB20u, 0x1BBB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB28u;
label_1bbb28:
    // 0x1bbb28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BBB28u;
    {
        const bool branch_taken_0x1bbb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB28u;
        // 0x1bbb2c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb28) {
            ctx->pc = 0x1BBB44u;
            goto label_1bbb44;
        }
    }
    ctx->pc = 0x1BBB30u;
label_1bbb30:
    // 0x1bbb30: 0x3c0141e0  lui         $at, 0x41E0
    ctx->pc = 0x1bbb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16864 << 16));
    // 0x1bbb34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bbb34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bbb38: 0xc06eed6  jal         func_1BBB58
    ctx->pc = 0x1BBB38u;
    SET_GPR_U32(ctx, 31, 0x1BBB40u);
    ctx->pc = 0x1BBB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB38u;
    // 0x1bbb3c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBB58u, 0x1BBB38u, 0x1BBB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB40u;
label_1bbb40:
    // 0x1bbb40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bbb44:
    // 0x1bbb44: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB44u;
        // 0x1bbb48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBB44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBB4Cu;
    // 0x1bbb4c: 0x0  nop
    ctx->pc = 0x1bbb4cu;
    // NOP
    // 0x1bbb50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1bbb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bbb54: 0x0  nop
    ctx->pc = 0x1bbb54u;
    // NOP
    ctx->pc = 0x1bbb58u;
}
