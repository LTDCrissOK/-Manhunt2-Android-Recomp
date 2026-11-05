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

// Function: sub_00144E78
// Address: 0x144e78 - 0x144f78
void sub_00144E78_0x144e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144E78_0x144e78");
#endif

    switch (ctx->pc) {
        case 0x144e98u: goto label_144e98;
        case 0x144eb0u: goto label_144eb0;
        case 0x144ebcu: goto label_144ebc;
        case 0x144eccu: goto label_144ecc;
        case 0x144ed4u: goto label_144ed4;
        case 0x144ee4u: goto label_144ee4;
        case 0x144f08u: goto label_144f08;
        case 0x144f14u: goto label_144f14;
        case 0x144f30u: goto label_144f30;
        case 0x144f44u: goto label_144f44;
        case 0x144f60u: goto label_144f60;
        default: break;
    }

    ctx->pc = 0x144e78u;

    // 0x144e78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x144e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x144e7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x144e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x144e80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x144e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x144e84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x144e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x144e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x144e8c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x144e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x144e90: 0xc04e866  jal         func_13A198
    ctx->pc = 0x144E90u;
    SET_GPR_U32(ctx, 31, 0x144E98u);
    ctx->pc = 0x144E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E90u;
    // 0x144e94: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x144E90u, 0x144E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E98u;
label_144e98:
    // 0x144e98: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x144e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x144e9c: 0x10430030  beq         $v0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x144E9Cu;
    {
        const bool branch_taken_0x144e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x144EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E9Cu;
        // 0x144ea0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e9c) {
            ctx->pc = 0x144F60u;
            goto label_144f60;
        }
    }
    ctx->pc = 0x144EA4u;
    // 0x144ea4: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x144ea4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x144ea8: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x144EA8u;
    SET_GPR_U32(ctx, 31, 0x144EB0u);
    ctx->pc = 0x144EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144EA8u;
    // 0x144eac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x144EA8u, 0x144EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144EB0u;
label_144eb0:
    // 0x144eb0: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x144eb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x144eb4: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x144EB4u;
    SET_GPR_U32(ctx, 31, 0x144EBCu);
    ctx->pc = 0x144EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144EB4u;
    // 0x144eb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x144EB4u, 0x144EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144EBCu;
label_144ebc:
    // 0x144ebc: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x144ebcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x144ec0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x144ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x144ec4: 0xc04e860  jal         func_13A180
    ctx->pc = 0x144EC4u;
    SET_GPR_U32(ctx, 31, 0x144ECCu);
    ctx->pc = 0x144EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144EC4u;
    // 0x144ec8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A180u, 0x144EC4u, 0x144ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144ECCu;
label_144ecc:
    // 0x144ecc: 0xc04eb10  jal         func_13AC40
    ctx->pc = 0x144ECCu;
    SET_GPR_U32(ctx, 31, 0x144ED4u);
    ctx->pc = 0x144ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144ECCu;
    // 0x144ed0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x144ECCu, 0x144ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144ED4u;
label_144ed4:
    // 0x144ed4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x144ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ed8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144edc: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x144EDCu;
    SET_GPR_U32(ctx, 31, 0x144EE4u);
    ctx->pc = 0x144EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144EDCu;
    // 0x144ee0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x144EDCu, 0x144EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144EE4u;
label_144ee4:
    // 0x144ee4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x144ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ee8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x144ee8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144eec: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x144eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x144ef0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x144ef0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144ef4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x144ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x144ef8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x144ef8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144efc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f00: 0xc04daca  jal         func_136B28
    ctx->pc = 0x144F00u;
    SET_GPR_U32(ctx, 31, 0x144F08u);
    ctx->pc = 0x144F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144F00u;
    // 0x144f04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x144F00u, 0x144F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144F08u;
label_144f08:
    // 0x144f08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x144f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f0c: 0xc046030  jal         func_1180C0
    ctx->pc = 0x144F0Cu;
    SET_GPR_U32(ctx, 31, 0x144F14u);
    ctx->pc = 0x144F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144F0Cu;
    // 0x144f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x144F0Cu, 0x144F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144F14u;
label_144f14:
    // 0x144f14: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x144f14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x144f18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f1c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x144f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x144f20: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x144f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x144f24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144f28: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x144F28u;
    SET_GPR_U32(ctx, 31, 0x144F30u);
    ctx->pc = 0x144F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144F28u;
    // 0x144f2c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x144F28u, 0x144F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144F30u;
label_144f30:
    // 0x144f30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x144f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f38: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x144f38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f3c: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x144F3Cu;
    SET_GPR_U32(ctx, 31, 0x144F44u);
    ctx->pc = 0x144F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144F3Cu;
    // 0x144f40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x144F3Cu, 0x144F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144F44u;
label_144f44:
    // 0x144f44: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x144f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x144f48: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x144f48u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x144f4c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x144f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x144f50: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x144f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x144f54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x144f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x144f58: 0xc043c56  jal         func_10F158
    ctx->pc = 0x144F58u;
    SET_GPR_U32(ctx, 31, 0x144F60u);
    ctx->pc = 0x144F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144F58u;
    // 0x144f5c: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x144F58u, 0x144F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144F60u;
label_144f60:
    // 0x144f60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x144f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144f64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x144f64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x144f68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x144f68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144f6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x144f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x144f70: 0x3e00008  jr          $ra
    ctx->pc = 0x144F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144F70u;
        // 0x144f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144F78u;
}
