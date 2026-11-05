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

// Function: sub_00287CF8
// Address: 0x287cf8 - 0x287d60
void sub_00287CF8_0x287cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287CF8_0x287cf8");
#endif

    switch (ctx->pc) {
        case 0x287d4cu: goto label_287d4c;
        default: break;
    }

    ctx->pc = 0x287cf8u;

    // 0x287cf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x287cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x287cfc: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x287cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x287d00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x287d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x287d04: 0x24442450  addiu       $a0, $v0, 0x2450
    ctx->pc = 0x287d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9296));
    // 0x287d08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x287d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x287d0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x287d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287d10: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x287d10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2464u));
    // 0x287d14: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x287d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x287d18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x287D18u;
    {
        const bool branch_taken_0x287d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D18u;
        // 0x287d1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d18) {
            ctx->pc = 0x287D2Cu;
            goto label_287d2c;
        }
    }
    ctx->pc = 0x287D20u;
    // 0x287d20: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x287d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x287d24: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x287d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x287d28: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x287d28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_287d2c:
    // 0x287d2c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x287D2Cu;
    {
        const bool branch_taken_0x287d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x287D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D2Cu;
        // 0x287d30: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d2c) {
            ctx->pc = 0x287D4Cu;
            goto label_287d4c;
        }
    }
    ctx->pc = 0x287D34u;
    // 0x287d34: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x287d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x287d38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x287d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287d3c: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x287d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x287d40: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x287d40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287d44: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x287D44u;
    SET_GPR_U32(ctx, 31, 0x287D4Cu);
    ctx->pc = 0x287D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287D44u;
    // 0x287d48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x287D44u, 0x287D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D4Cu;
label_287d4c:
    // 0x287d4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x287d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287d50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x287d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x287d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x287d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287d58: 0x3e00008  jr          $ra
    ctx->pc = 0x287D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D58u;
        // 0x287d5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287D60u;
}
