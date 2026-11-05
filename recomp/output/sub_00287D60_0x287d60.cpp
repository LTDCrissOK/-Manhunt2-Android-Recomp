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

// Function: sub_00287D60
// Address: 0x287d60 - 0x287de8
void sub_00287D60_0x287d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287D60_0x287d60");
#endif

    switch (ctx->pc) {
        case 0x287d74u: goto label_287d74;
        case 0x287dd4u: goto label_287dd4;
        default: break;
    }

    ctx->pc = 0x287d60u;

    // 0x287d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x287d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x287d64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x287d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x287d68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x287d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x287d6c: 0xc0a1faa  jal         func_287EA8
    ctx->pc = 0x287D6Cu;
    SET_GPR_U32(ctx, 31, 0x287D74u);
    ctx->pc = 0x287EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287EA8u, 0x287D6Cu, 0x287D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D74u;
label_287d74:
    // 0x287d74: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x287D74u;
    {
        const bool branch_taken_0x287d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D74u;
        // 0x287d78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d74) {
            ctx->pc = 0x287DD8u;
            goto label_287dd8;
        }
    }
    ctx->pc = 0x287D7Cu;
    // 0x287d7c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x287d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x287d80: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x287d80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x287d84: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x287D84u;
    {
        const bool branch_taken_0x287d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x287D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D84u;
        // 0x287d88: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d84) {
            ctx->pc = 0x287DB0u;
            goto label_287db0;
        }
    }
    ctx->pc = 0x287D8Cu;
    // 0x287d8c: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x287d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x287d90: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x287d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x287d94: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x287d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x287d98: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287D98u;
    {
        const bool branch_taken_0x287d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D98u;
        // 0x287d9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d98) {
            ctx->pc = 0x287DB4u;
            goto label_287db4;
        }
    }
    ctx->pc = 0x287DA0u;
    // 0x287da0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x287da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x287da4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x287da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x287da8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287DA8u;
    {
        const bool branch_taken_0x287da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287DA8u;
        // 0x287dac: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287da8) {
            ctx->pc = 0x287DB4u;
            goto label_287db4;
        }
    }
    ctx->pc = 0x287DB0u;
label_287db0:
    // 0x287db0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x287db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287db4:
    // 0x287db4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x287db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287db8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287DB8u;
    {
        const bool branch_taken_0x287db8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x287DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287DB8u;
        // 0x287dbc: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287db8) {
            ctx->pc = 0x287DD4u;
            goto label_287dd4;
        }
    }
    ctx->pc = 0x287DC0u;
    // 0x287dc0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x287dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x287dc4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x287dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287dc8: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x287dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x287dcc: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x287DCCu;
    SET_GPR_U32(ctx, 31, 0x287DD4u);
    ctx->pc = 0x287DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287DCCu;
    // 0x287dd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x287DCCu, 0x287DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287DD4u;
label_287dd4:
    // 0x287dd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x287dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287dd8:
    // 0x287dd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x287dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287ddc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x287ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x287de0: 0x3e00008  jr          $ra
    ctx->pc = 0x287DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287DE0u;
        // 0x287de4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287DE8u;
}
