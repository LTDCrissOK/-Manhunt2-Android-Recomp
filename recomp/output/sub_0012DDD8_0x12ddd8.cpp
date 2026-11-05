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

// Function: sub_0012DDD8
// Address: 0x12ddd8 - 0x12de88
void sub_0012DDD8_0x12ddd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DDD8_0x12ddd8");
#endif

    switch (ctx->pc) {
        case 0x12ddfcu: goto label_12ddfc;
        case 0x12de0cu: goto label_12de0c;
        case 0x12de18u: goto label_12de18;
        case 0x12de28u: goto label_12de28;
        case 0x12de34u: goto label_12de34;
        case 0x12de3cu: goto label_12de3c;
        case 0x12de48u: goto label_12de48;
        case 0x12de50u: goto label_12de50;
        case 0x12de5cu: goto label_12de5c;
        case 0x12de70u: goto label_12de70;
        default: break;
    }

    ctx->pc = 0x12ddd8u;

    // 0x12ddd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ddd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12dddc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12dddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12dde0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12dde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12dde4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12dde4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dde8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12dde8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ddec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ddecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ddf0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12ddf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12ddf4: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12DDF4u;
    SET_GPR_U32(ctx, 31, 0x12DDFCu);
    ctx->pc = 0x12DDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DDF4u;
    // 0x12ddf8: 0x24050389  addiu       $a1, $zero, 0x389 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 905));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12DDF4u, 0x12DDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DDFCu;
label_12ddfc:
    // 0x12ddfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12ddfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de00: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x12de00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12de04: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12DE04u;
    SET_GPR_U32(ctx, 31, 0x12DE0Cu);
    ctx->pc = 0x12DE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE04u;
    // 0x12de08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12DE04u, 0x12DE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE0Cu;
label_12de0c:
    // 0x12de0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12de0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de10: 0xc045f1a  jal         func_117C68
    ctx->pc = 0x12DE10u;
    SET_GPR_U32(ctx, 31, 0x12DE18u);
    ctx->pc = 0x12DE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE10u;
    // 0x12de14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C68u, 0x12DE10u, 0x12DE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE18u;
label_12de18:
    // 0x12de18: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x12de18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12de1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12de1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de20: 0xc046044  jal         func_118110
    ctx->pc = 0x12DE20u;
    SET_GPR_U32(ctx, 31, 0x12DE28u);
    ctx->pc = 0x12DE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE20u;
    // 0x12de24: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x12DE20u, 0x12DE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE28u;
label_12de28:
    // 0x12de28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12de28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de2c: 0xc046030  jal         func_1180C0
    ctx->pc = 0x12DE2Cu;
    SET_GPR_U32(ctx, 31, 0x12DE34u);
    ctx->pc = 0x12DE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE2Cu;
    // 0x12de30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x12DE2Cu, 0x12DE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE34u;
label_12de34:
    // 0x12de34: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x12DE34u;
    SET_GPR_U32(ctx, 31, 0x12DE3Cu);
    ctx->pc = 0x12DE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE34u;
    // 0x12de38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x12DE34u, 0x12DE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE3Cu;
label_12de3c:
    // 0x12de3c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x12de3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x12de40: 0xc046290  jal         func_118A40
    ctx->pc = 0x12DE40u;
    SET_GPR_U32(ctx, 31, 0x12DE48u);
    ctx->pc = 0x12DE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE40u;
    // 0x12de44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x12DE40u, 0x12DE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE48u;
label_12de48:
    // 0x12de48: 0xc046272  jal         func_1189C8
    ctx->pc = 0x12DE48u;
    SET_GPR_U32(ctx, 31, 0x12DE50u);
    ctx->pc = 0x12DE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE48u;
    // 0x12de4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x12DE48u, 0x12DE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE50u;
label_12de50:
    // 0x12de50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12de50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de54: 0xc046256  jal         func_118958
    ctx->pc = 0x12DE54u;
    SET_GPR_U32(ctx, 31, 0x12DE5Cu);
    ctx->pc = 0x12DE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE54u;
    // 0x12de58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x12DE54u, 0x12DE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE5Cu;
label_12de5c:
    // 0x12de5c: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x12de5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12de60: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12de60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de64: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x12de64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12de68: 0xc04c662  jal         func_131988
    ctx->pc = 0x12DE68u;
    SET_GPR_U32(ctx, 31, 0x12DE70u);
    ctx->pc = 0x12DE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12DE68u;
    // 0x12de6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12DE68u, 0x12DE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE70u;
label_12de70:
    // 0x12de70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12de70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12de74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12de74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12de78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12de78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12de7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12de7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12de80: 0x3e00008  jr          $ra
    ctx->pc = 0x12DE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE80u;
        // 0x12de84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DE88u;
}
