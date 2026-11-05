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

// Function: sub_00145D50
// Address: 0x145d50 - 0x145e48
void sub_00145D50_0x145d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145D50_0x145d50");
#endif

    switch (ctx->pc) {
        case 0x145d74u: goto label_145d74;
        case 0x145d80u: goto label_145d80;
        case 0x145d90u: goto label_145d90;
        case 0x145d9cu: goto label_145d9c;
        case 0x145dc0u: goto label_145dc0;
        case 0x145dc8u: goto label_145dc8;
        case 0x145dd4u: goto label_145dd4;
        case 0x145de0u: goto label_145de0;
        case 0x145dfcu: goto label_145dfc;
        case 0x145e10u: goto label_145e10;
        case 0x145e2cu: goto label_145e2c;
        default: break;
    }

    ctx->pc = 0x145d50u;

    // 0x145d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145d54: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x145d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x145d58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145d5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x145d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x145d60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145d64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x145d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x145d68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x145d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x145d6c: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x145D6Cu;
    SET_GPR_U32(ctx, 31, 0x145D74u);
    ctx->pc = 0x145D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145D6Cu;
    // 0x145d70: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x145D6Cu, 0x145D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D74u;
label_145d74:
    // 0x145d74: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x145d74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x145d78: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x145D78u;
    SET_GPR_U32(ctx, 31, 0x145D80u);
    ctx->pc = 0x145D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145D78u;
    // 0x145d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x145D78u, 0x145D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D80u;
label_145d80:
    // 0x145d80: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x145d80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x145d84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x145d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145d88: 0xc051744  jal         func_145D10
    ctx->pc = 0x145D88u;
    SET_GPR_U32(ctx, 31, 0x145D90u);
    ctx->pc = 0x145D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145D88u;
    // 0x145d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145D10u, 0x145D88u, 0x145D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D90u;
label_145d90:
    // 0x145d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145d94: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x145D94u;
    SET_GPR_U32(ctx, 31, 0x145D9Cu);
    ctx->pc = 0x145D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145D94u;
    // 0x145d98: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x145D94u, 0x145D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D9Cu;
label_145d9c:
    // 0x145d9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x145d9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145da0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x145da0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x145da4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x145da4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145da8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x145da8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145dac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x145dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x145db0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x145db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x145db4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x145db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145db8: 0xc04daca  jal         func_136B28
    ctx->pc = 0x145DB8u;
    SET_GPR_U32(ctx, 31, 0x145DC0u);
    ctx->pc = 0x145DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145DB8u;
    // 0x145dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x145DB8u, 0x145DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DC0u;
label_145dc0:
    // 0x145dc0: 0xc05174c  jal         func_145D30
    ctx->pc = 0x145DC0u;
    SET_GPR_U32(ctx, 31, 0x145DC8u);
    ctx->pc = 0x145DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145DC0u;
    // 0x145dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145D30u, 0x145DC0u, 0x145DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DC8u;
label_145dc8:
    // 0x145dc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x145dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145dcc: 0xc046030  jal         func_1180C0
    ctx->pc = 0x145DCCu;
    SET_GPR_U32(ctx, 31, 0x145DD4u);
    ctx->pc = 0x145DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145DCCu;
    // 0x145dd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x145DCCu, 0x145DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DD4u;
label_145dd4:
    // 0x145dd4: 0x8e050524  lw          $a1, 0x524($s0)
    ctx->pc = 0x145dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1316)));
    // 0x145dd8: 0xc046104  jal         func_118410
    ctx->pc = 0x145DD8u;
    SET_GPR_U32(ctx, 31, 0x145DE0u);
    ctx->pc = 0x145DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145DD8u;
    // 0x145ddc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x145DD8u, 0x145DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DE0u;
label_145de0:
    // 0x145de0: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x145de0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x145de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145de8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x145de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145dec: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x145decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x145df0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x145df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145df4: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x145DF4u;
    SET_GPR_U32(ctx, 31, 0x145DFCu);
    ctx->pc = 0x145DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145DF4u;
    // 0x145df8: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x145DF4u, 0x145DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DFCu;
label_145dfc:
    // 0x145dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e00: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x145e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e04: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x145e04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e08: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x145E08u;
    SET_GPR_U32(ctx, 31, 0x145E10u);
    ctx->pc = 0x145E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E08u;
    // 0x145e0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x145E08u, 0x145E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E10u;
label_145e10:
    // 0x145e10: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x145e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x145e14: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x145e14u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x145e18: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x145e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x145e1c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x145e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x145e20: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x145e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x145e24: 0xc043c56  jal         func_10F158
    ctx->pc = 0x145E24u;
    SET_GPR_U32(ctx, 31, 0x145E2Cu);
    ctx->pc = 0x145E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E24u;
    // 0x145e28: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x145E24u, 0x145E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E2Cu;
label_145e2c:
    // 0x145e2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145e30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x145e30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145e34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x145e34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145e38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x145e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x145e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x145E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E3Cu;
        // 0x145e40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145E44u;
    // 0x145e44: 0x0  nop
    ctx->pc = 0x145e44u;
    // NOP
    ctx->pc = 0x145e48u;
}
