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

// Function: sub_00187D68
// Address: 0x187d68 - 0x187dd0
void sub_00187D68_0x187d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187D68_0x187d68");
#endif

    switch (ctx->pc) {
        case 0x187d90u: goto label_187d90;
        case 0x187da0u: goto label_187da0;
        default: break;
    }

    ctx->pc = 0x187d68u;

    // 0x187d68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x187d6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x187d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x187d70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x187d74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x187d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x187d7c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x187d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x187d80: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x187D80u;
    {
        const bool branch_taken_0x187d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D80u;
        // 0x187d84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187d80) {
            ctx->pc = 0x187DC0u;
            goto label_187dc0;
        }
    }
    ctx->pc = 0x187D88u;
    // 0x187d88: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x187D88u;
    SET_GPR_U32(ctx, 31, 0x187D90u);
    ctx->pc = 0x187D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187D88u;
    // 0x187d8c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x187D88u, 0x187D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187D90u;
label_187d90:
    // 0x187d90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x187d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187d94: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x187d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x187d98: 0xc061a32  jal         func_1868C8
    ctx->pc = 0x187D98u;
    SET_GPR_U32(ctx, 31, 0x187DA0u);
    ctx->pc = 0x187D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187D98u;
    // 0x187d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x187D98u, 0x187DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187DA0u;
label_187da0:
    // 0x187da0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x187da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x187da4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x187da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x187da8: 0x24631080  addiu       $v1, $v1, 0x1080
    ctx->pc = 0x187da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4224));
    // 0x187dac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x187dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x187db0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x187db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x187db4: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x187db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x187db8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x187db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x187dbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187dc0:
    // 0x187dc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187dc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x187dc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x187DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187DC8u;
        // 0x187dcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187DD0u;
}
