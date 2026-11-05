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

// Function: sub_002C2D10
// Address: 0x2c2d10 - 0x2c2d98
void sub_002C2D10_0x2c2d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2D10_0x2c2d10");
#endif

    switch (ctx->pc) {
        case 0x2c2d38u: goto label_2c2d38;
        case 0x2c2d44u: goto label_2c2d44;
        case 0x2c2d64u: goto label_2c2d64;
        case 0x2c2d78u: goto label_2c2d78;
        default: break;
    }

    ctx->pc = 0x2c2d10u;

    // 0x2c2d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c2d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2d14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c2d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c2d18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c2d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c2d1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c2d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c2d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c2d24: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x2c2d24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c2d28: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2C2D28u;
    {
        const bool branch_taken_0x2c2d28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2d28) {
            ctx->pc = 0x2C2D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2D28u;
            // 0x2c2d2c: 0x8e2400e0  lw          $a0, 0xE0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2D54u;
            goto label_2c2d54;
        }
    }
    ctx->pc = 0x2C2D30u;
    // 0x2c2d30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c2d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d34: 0x0  nop
    ctx->pc = 0x2c2d34u;
    // NOP
label_2c2d38:
    // 0x2c2d38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c2d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d3c: 0xc0b0ab2  jal         func_2C2AC8
    ctx->pc = 0x2C2D3Cu;
    SET_GPR_U32(ctx, 31, 0x2C2D44u);
    ctx->pc = 0x2C2D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2D3Cu;
    // 0x2c2d40: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AC8u, 0x2C2D3Cu, 0x2C2D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2D44u;
label_2c2d44:
    // 0x2c2d44: 0x0  nop
    ctx->pc = 0x2c2d44u;
    // NOP
    // 0x2c2d48: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C2D48u;
    {
        const bool branch_taken_0x2c2d48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D48u;
        // 0x2c2d4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d48) {
            ctx->pc = 0x2C2D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2d38;
        }
    }
    ctx->pc = 0x2C2D50u;
    // 0x2c2d50: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x2c2d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_2c2d54:
    // 0x2c2d54: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2D54u;
    {
        const bool branch_taken_0x2c2d54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2d54) {
            ctx->pc = 0x2C2D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2D54u;
            // 0x2c2d58: 0x8e2400e4  lw          $a0, 0xE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2D68u;
            goto label_2c2d68;
        }
    }
    ctx->pc = 0x2C2D5Cu;
    // 0x2c2d5c: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2C2D5Cu;
    SET_GPR_U32(ctx, 31, 0x2C2D64u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2C2D5Cu, 0x2C2D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2D64u;
label_2c2d64:
    // 0x2c2d64: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x2c2d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_2c2d68:
    // 0x2c2d68: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2D68u;
    {
        const bool branch_taken_0x2c2d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2d68) {
            ctx->pc = 0x2C2D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2D68u;
            // 0x2c2d6c: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2D7Cu;
            goto label_2c2d7c;
        }
    }
    ctx->pc = 0x2C2D70u;
    // 0x2c2d70: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2C2D70u;
    SET_GPR_U32(ctx, 31, 0x2C2D78u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2C2D70u, 0x2C2D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2D78u;
label_2c2d78:
    // 0x2c2d78: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x2c2d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
label_2c2d7c:
    // 0x2c2d7c: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x2c2d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
    // 0x2c2d80: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x2c2d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
    // 0x2c2d84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c2d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2d88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c2d88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2d8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c2d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2d90: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D90u;
        // 0x2c2d94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2D98u;
}
