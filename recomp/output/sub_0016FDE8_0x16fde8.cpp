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

// Function: sub_0016FDE8
// Address: 0x16fde8 - 0x16fe58
void sub_0016FDE8_0x16fde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FDE8_0x16fde8");
#endif

    switch (ctx->pc) {
        case 0x16fe1cu: goto label_16fe1c;
        case 0x16fe28u: goto label_16fe28;
        case 0x16fe44u: goto label_16fe44;
        default: break;
    }

    ctx->pc = 0x16fde8u;

    // 0x16fde8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16fde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16fdec: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x16fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x16fdf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16fdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16fdf4: 0x24420e60  addiu       $v0, $v0, 0xE60
    ctx->pc = 0x16fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3680));
    // 0x16fdf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16fdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16fdfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16fdfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fe00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16fe00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16fe04: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x16fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x16fe08: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x16fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x16fe0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16FE0Cu;
    {
        const bool branch_taken_0x16fe0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE0Cu;
        // 0x16fe10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe0c) {
            ctx->pc = 0x16FE1Cu;
            goto label_16fe1c;
        }
    }
    ctx->pc = 0x16FE14u;
    // 0x16fe14: 0xc05bfb4  jal         func_16FED0
    ctx->pc = 0x16FE14u;
    SET_GPR_U32(ctx, 31, 0x16FE1Cu);
    ctx->pc = 0x16FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FED0u, 0x16FE14u, 0x16FE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE1Cu;
label_16fe1c:
    // 0x16fe1c: 0x26040290  addiu       $a0, $s0, 0x290
    ctx->pc = 0x16fe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x16fe20: 0xc045e7a  jal         func_1179E8
    ctx->pc = 0x16FE20u;
    SET_GPR_U32(ctx, 31, 0x16FE28u);
    ctx->pc = 0x16FE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE20u;
    // 0x16fe24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1179E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1179E8u, 0x16FE20u, 0x16FE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE28u;
label_16fe28:
    // 0x16fe28: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x16fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x16fe2c: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x16fe2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x16fe30: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x16fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
    // 0x16fe34: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16FE34u;
    {
        const bool branch_taken_0x16fe34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE34u;
        // 0x16fe38: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe34) {
            ctx->pc = 0x16FE44u;
            goto label_16fe44;
        }
    }
    ctx->pc = 0x16FE3Cu;
    // 0x16fe3c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x16FE3Cu;
    SET_GPR_U32(ctx, 31, 0x16FE44u);
    ctx->pc = 0x16FE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FE3Cu;
    // 0x16fe40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x16FE3Cu, 0x16FE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE44u;
label_16fe44:
    // 0x16fe44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16fe44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fe48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16fe48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16fe4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16fe4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fe50: 0x3e00008  jr          $ra
    ctx->pc = 0x16FE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FE50u;
        // 0x16fe54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FE58u;
}
