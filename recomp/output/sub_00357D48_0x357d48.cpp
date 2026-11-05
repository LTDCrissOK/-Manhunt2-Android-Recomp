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

// Function: sub_00357D48
// Address: 0x357d48 - 0x357d98
void sub_00357D48_0x357d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357D48_0x357d48");
#endif

    switch (ctx->pc) {
        case 0x357d70u: goto label_357d70;
        case 0x357d84u: goto label_357d84;
        default: break;
    }

    ctx->pc = 0x357d48u;

    // 0x357d48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357d4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x357d50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x357d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x357d54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x357d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357d58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x357d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x357d5c: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x357d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x357d60: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357D60u;
    {
        const bool branch_taken_0x357d60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x357D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D60u;
        // 0x357d64: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357d60) {
            ctx->pc = 0x357D70u;
            goto label_357d70;
        }
    }
    ctx->pc = 0x357D68u;
    // 0x357d68: 0xc0d6538  jal         func_3594E0
    ctx->pc = 0x357D68u;
    SET_GPR_U32(ctx, 31, 0x357D70u);
    ctx->pc = 0x357D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357D68u;
    // 0x357d6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3594E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3594E0u, 0x357D68u, 0x357D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357D70u;
label_357d70:
    // 0x357d70: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x357d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x357d74: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x357D74u;
    {
        const bool branch_taken_0x357d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357d74) {
            ctx->pc = 0x357D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357D74u;
            // 0x357d78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357D88u;
            goto label_357d88;
        }
    }
    ctx->pc = 0x357D7Cu;
    // 0x357d7c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x357D7Cu;
    SET_GPR_U32(ctx, 31, 0x357D84u);
    ctx->pc = 0x357D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357D7Cu;
    // 0x357d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x357D7Cu, 0x357D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357D84u;
label_357d84:
    // 0x357d84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_357d88:
    // 0x357d88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357d88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357d8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x357d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357d90: 0x3e00008  jr          $ra
    ctx->pc = 0x357D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D90u;
        // 0x357d94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357D98u;
}
