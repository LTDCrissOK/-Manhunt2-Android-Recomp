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

// Function: sub_00154CF8
// Address: 0x154cf8 - 0x154dd0
void sub_00154CF8_0x154cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154CF8_0x154cf8");
#endif

    switch (ctx->pc) {
        case 0x154d1cu: goto label_154d1c;
        case 0x154d28u: goto label_154d28;
        case 0x154d38u: goto label_154d38;
        case 0x154d44u: goto label_154d44;
        case 0x154d68u: goto label_154d68;
        case 0x154d84u: goto label_154d84;
        case 0x154d98u: goto label_154d98;
        case 0x154db4u: goto label_154db4;
        default: break;
    }

    ctx->pc = 0x154cf8u;

    // 0x154cf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x154cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x154cfc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x154cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154d00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x154d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x154d04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x154d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x154d08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x154d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x154d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x154d10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x154d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x154d14: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x154D14u;
    SET_GPR_U32(ctx, 31, 0x154D1Cu);
    ctx->pc = 0x154D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154D14u;
    // 0x154d18: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x154D14u, 0x154D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154D1Cu;
label_154d1c:
    // 0x154d1c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x154d1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x154d20: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x154D20u;
    SET_GPR_U32(ctx, 31, 0x154D28u);
    ctx->pc = 0x154D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154D20u;
    // 0x154d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x154D20u, 0x154D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154D28u;
label_154d28:
    // 0x154d28: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x154d28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x154d2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x154d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d30: 0xc0551e4  jal         func_154790
    ctx->pc = 0x154D30u;
    SET_GPR_U32(ctx, 31, 0x154D38u);
    ctx->pc = 0x154D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154D30u;
    // 0x154d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154790u, 0x154D30u, 0x154D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154D38u;
label_154d38:
    // 0x154d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d3c: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x154D3Cu;
    SET_GPR_U32(ctx, 31, 0x154D44u);
    ctx->pc = 0x154D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154D3Cu;
    // 0x154d40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x154D3Cu, 0x154D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154D44u;
label_154d44:
    // 0x154d44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x154d44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d48: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x154d48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154d4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x154d4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x154d50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x154d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d58: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x154d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d60: 0xc04daca  jal         func_136B28
    ctx->pc = 0x154D60u;
    SET_GPR_U32(ctx, 31, 0x154D68u);
    ctx->pc = 0x154D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154D60u;
    // 0x154d64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x154D60u, 0x154D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154D68u;
label_154d68:
    // 0x154d68: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x154d68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x154d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d70: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x154d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x154d74: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x154d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x154d78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154d7c: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x154D7Cu;
    SET_GPR_U32(ctx, 31, 0x154D84u);
    ctx->pc = 0x154D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154D7Cu;
    // 0x154d80: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x154D7Cu, 0x154D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154D84u;
label_154d84:
    // 0x154d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x154d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d8c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x154d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d90: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x154D90u;
    SET_GPR_U32(ctx, 31, 0x154D98u);
    ctx->pc = 0x154D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154D90u;
    // 0x154d94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x154D90u, 0x154D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154D98u;
label_154d98:
    // 0x154d98: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x154d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x154d9c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x154d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x154da0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x154da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x154da4: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x154da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x154da8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x154da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x154dac: 0xc043c56  jal         func_10F158
    ctx->pc = 0x154DACu;
    SET_GPR_U32(ctx, 31, 0x154DB4u);
    ctx->pc = 0x154DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154DACu;
    // 0x154db0: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x154DACu, 0x154DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154DB4u;
label_154db4:
    // 0x154db4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x154db4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154db8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x154db8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x154dbc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x154dbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154dc0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x154dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x154dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x154DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DC4u;
        // 0x154dc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154DCCu;
    // 0x154dcc: 0x0  nop
    ctx->pc = 0x154dccu;
    // NOP
    ctx->pc = 0x154dd0u;
}
