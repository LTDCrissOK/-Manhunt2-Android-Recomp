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

// Function: sub_00117D28
// Address: 0x117d28 - 0x117dc0
void sub_00117D28_0x117d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117D28_0x117d28");
#endif

    switch (ctx->pc) {
        case 0x117d54u: goto label_117d54;
        case 0x117d60u: goto label_117d60;
        case 0x117d68u: goto label_117d68;
        case 0x117d74u: goto label_117d74;
        case 0x117d7cu: goto label_117d7c;
        case 0x117d88u: goto label_117d88;
        case 0x117d90u: goto label_117d90;
        case 0x117d9cu: goto label_117d9c;
        default: break;
    }

    ctx->pc = 0x117d28u;

    // 0x117d28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117d2c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x117d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x117d30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117d34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x117d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x117d38: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x117d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117d40: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x117d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x117d44: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x117D44u;
    {
        const bool branch_taken_0x117d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x117D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D44u;
        // 0x117d48: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d44) {
            ctx->pc = 0x117DA4u;
            goto label_117da4;
        }
    }
    ctx->pc = 0x117D4Cu;
    // 0x117d4c: 0xc046002  jal         func_118008
    ctx->pc = 0x117D4Cu;
    SET_GPR_U32(ctx, 31, 0x117D54u);
    ctx->pc = 0x117D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D4Cu;
    // 0x117d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x117D4Cu, 0x117D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D54u;
label_117d54:
    // 0x117d54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x117d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d58: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x117D58u;
    SET_GPR_U32(ctx, 31, 0x117D60u);
    ctx->pc = 0x117D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D58u;
    // 0x117d5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x117D58u, 0x117D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D60u;
label_117d60:
    // 0x117d60: 0xc046086  jal         func_118218
    ctx->pc = 0x117D60u;
    SET_GPR_U32(ctx, 31, 0x117D68u);
    ctx->pc = 0x117D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D60u;
    // 0x117d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x117D60u, 0x117D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D68u;
label_117d68:
    // 0x117d68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x117d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d6c: 0xc046058  jal         func_118160
    ctx->pc = 0x117D6Cu;
    SET_GPR_U32(ctx, 31, 0x117D74u);
    ctx->pc = 0x117D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D6Cu;
    // 0x117d70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x117D6Cu, 0x117D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D74u;
label_117d74:
    // 0x117d74: 0xc04611e  jal         func_118478
    ctx->pc = 0x117D74u;
    SET_GPR_U32(ctx, 31, 0x117D7Cu);
    ctx->pc = 0x117D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D74u;
    // 0x117d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118478u, 0x117D74u, 0x117D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D7Cu;
label_117d7c:
    // 0x117d7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x117d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d80: 0xc046104  jal         func_118410
    ctx->pc = 0x117D80u;
    SET_GPR_U32(ctx, 31, 0x117D88u);
    ctx->pc = 0x117D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D80u;
    // 0x117d84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x117D80u, 0x117D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D88u;
label_117d88:
    // 0x117d88: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x117D88u;
    SET_GPR_U32(ctx, 31, 0x117D90u);
    ctx->pc = 0x117D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D88u;
    // 0x117d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x117D88u, 0x117D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D90u;
label_117d90:
    // 0x117d90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d94: 0xc046290  jal         func_118A40
    ctx->pc = 0x117D94u;
    SET_GPR_U32(ctx, 31, 0x117D9Cu);
    ctx->pc = 0x117D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D94u;
    // 0x117d98: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x117D94u, 0x117D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D9Cu;
label_117d9c:
    // 0x117d9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x117D9Cu;
    {
        const bool branch_taken_0x117d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D9Cu;
        // 0x117da0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d9c) {
            ctx->pc = 0x117DA8u;
            goto label_117da8;
        }
    }
    ctx->pc = 0x117DA4u;
label_117da4:
    // 0x117da4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x117da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117da8:
    // 0x117da8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117dac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x117dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x117db0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x117db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117db4: 0x3e00008  jr          $ra
    ctx->pc = 0x117DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117DB4u;
        // 0x117db8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117DBCu;
    // 0x117dbc: 0x0  nop
    ctx->pc = 0x117dbcu;
    // NOP
    ctx->pc = 0x117dc0u;
}
