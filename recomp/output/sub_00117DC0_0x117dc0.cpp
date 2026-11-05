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

// Function: sub_00117DC0
// Address: 0x117dc0 - 0x117ea0
void sub_00117DC0_0x117dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117DC0_0x117dc0");
#endif

    switch (ctx->pc) {
        case 0x117e24u: goto label_117e24;
        case 0x117e30u: goto label_117e30;
        case 0x117e40u: goto label_117e40;
        case 0x117e4cu: goto label_117e4c;
        case 0x117e80u: goto label_117e80;
        case 0x117e8cu: goto label_117e8c;
        default: break;
    }

    ctx->pc = 0x117dc0u;

    // 0x117dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117dc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x117dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x117dc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117dcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x117dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x117dd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x117dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117dd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117dd8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x117dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x117ddc: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x117DDCu;
    {
        const bool branch_taken_0x117ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x117DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117DDCu;
        // 0x117de0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ddc) {
            ctx->pc = 0x117E38u;
            goto label_117e38;
        }
    }
    ctx->pc = 0x117DE4u;
    // 0x117de4: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x117de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x117de8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117DE8u;
    {
        const bool branch_taken_0x117de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117DE8u;
        // 0x117dec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117de8) {
            ctx->pc = 0x117E00u;
            goto label_117e00;
        }
    }
    ctx->pc = 0x117DF0u;
    // 0x117df0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x117DF0u;
    {
        const bool branch_taken_0x117df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x117DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117DF0u;
        // 0x117df4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117df0) {
            ctx->pc = 0x117E1Cu;
            goto label_117e1c;
        }
    }
    ctx->pc = 0x117DF8u;
    // 0x117df8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x117DF8u;
    {
        const bool branch_taken_0x117df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117df8) {
            ctx->pc = 0x117E54u;
            goto label_117e54;
        }
    }
    ctx->pc = 0x117E00u;
label_117e00:
    // 0x117e00: 0x28620013  slti        $v0, $v1, 0x13
    ctx->pc = 0x117e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x117e04: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x117E04u;
    {
        const bool branch_taken_0x117e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E04u;
        // 0x117e08: 0x28620011  slti        $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e04) {
            ctx->pc = 0x117E4Cu;
            goto label_117e4c;
        }
    }
    ctx->pc = 0x117E0Cu;
    // 0x117e0c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x117E0Cu;
    {
        const bool branch_taken_0x117e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117e0c) {
            ctx->pc = 0x117E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117E0Cu;
            // 0x117e10: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117E50u;
            goto label_117e50;
        }
    }
    ctx->pc = 0x117E14u;
    // 0x117e14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x117E14u;
    {
        const bool branch_taken_0x117e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117e14) {
            ctx->pc = 0x117E38u;
            goto label_117e38;
        }
    }
    ctx->pc = 0x117E1Cu;
label_117e1c:
    // 0x117e1c: 0xc04601a  jal         func_118068
    ctx->pc = 0x117E1Cu;
    SET_GPR_U32(ctx, 31, 0x117E24u);
    ctx->pc = 0x117E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E1Cu;
    // 0x117e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118068u, 0x117E1Cu, 0x117E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E24u;
label_117e24:
    // 0x117e24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x117e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e28: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x117E28u;
    SET_GPR_U32(ctx, 31, 0x117E30u);
    ctx->pc = 0x117E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E28u;
    // 0x117e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x117E28u, 0x117E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E30u;
label_117e30:
    // 0x117e30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x117E30u;
    {
        const bool branch_taken_0x117e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E30u;
        // 0x117e34: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e30) {
            ctx->pc = 0x117E50u;
            goto label_117e50;
        }
    }
    ctx->pc = 0x117E38u;
label_117e38:
    // 0x117e38: 0xc046002  jal         func_118008
    ctx->pc = 0x117E38u;
    SET_GPR_U32(ctx, 31, 0x117E40u);
    ctx->pc = 0x117E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E38u;
    // 0x117e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x117E38u, 0x117E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E40u;
label_117e40:
    // 0x117e40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x117e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e44: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x117E44u;
    SET_GPR_U32(ctx, 31, 0x117E4Cu);
    ctx->pc = 0x117E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E44u;
    // 0x117e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x117E44u, 0x117E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E4Cu;
label_117e4c:
    // 0x117e4c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x117e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_117e50:
    // 0x117e50: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x117e50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_117e54:
    // 0x117e54: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x117E54u;
    {
        const bool branch_taken_0x117e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117e54) {
            ctx->pc = 0x117E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117E54u;
            // 0x117e58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117E90u;
            goto label_117e90;
        }
    }
    ctx->pc = 0x117E5Cu;
    // 0x117e5c: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x117e5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x117e60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117E60u;
    {
        const bool branch_taken_0x117e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E60u;
        // 0x117e64: 0x28620013  slti        $v0, $v1, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e60) {
            ctx->pc = 0x117E78u;
            goto label_117e78;
        }
    }
    ctx->pc = 0x117E68u;
    // 0x117e68: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x117E68u;
    {
        const bool branch_taken_0x117e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E68u;
        // 0x117e6c: 0x28620011  slti        $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e68) {
            ctx->pc = 0x117E8Cu;
            goto label_117e8c;
        }
    }
    ctx->pc = 0x117E70u;
    // 0x117e70: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x117E70u;
    {
        const bool branch_taken_0x117e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117e70) {
            ctx->pc = 0x117E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117E70u;
            // 0x117e74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117E90u;
            goto label_117e90;
        }
    }
    ctx->pc = 0x117E78u;
label_117e78:
    // 0x117e78: 0xc04611e  jal         func_118478
    ctx->pc = 0x117E78u;
    SET_GPR_U32(ctx, 31, 0x117E80u);
    ctx->pc = 0x117E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E78u;
    // 0x117e7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118478u, 0x117E78u, 0x117E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E80u;
label_117e80:
    // 0x117e80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e84: 0xc046104  jal         func_118410
    ctx->pc = 0x117E84u;
    SET_GPR_U32(ctx, 31, 0x117E8Cu);
    ctx->pc = 0x117E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E84u;
    // 0x117e88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x117E84u, 0x117E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E8Cu;
label_117e8c:
    // 0x117e8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_117e90:
    // 0x117e90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x117e90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x117e94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x117e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117e98: 0x3e00008  jr          $ra
    ctx->pc = 0x117E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E98u;
        // 0x117e9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117EA0u;
}
