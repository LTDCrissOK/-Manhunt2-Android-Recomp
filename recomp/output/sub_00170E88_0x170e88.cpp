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

// Function: sub_00170E88
// Address: 0x170e88 - 0x170f70
void sub_00170E88_0x170e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170E88_0x170e88");
#endif

    switch (ctx->pc) {
        case 0x170eb0u: goto label_170eb0;
        case 0x170ec0u: goto label_170ec0;
        case 0x170ec8u: goto label_170ec8;
        case 0x170ee4u: goto label_170ee4;
        case 0x170f14u: goto label_170f14;
        case 0x170f20u: goto label_170f20;
        case 0x170f30u: goto label_170f30;
        case 0x170f44u: goto label_170f44;
        case 0x170f54u: goto label_170f54;
        case 0x170f5cu: goto label_170f5c;
        default: break;
    }

    ctx->pc = 0x170e88u;

    // 0x170e88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170e8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170e90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x170e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x170e94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170e98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170e9c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x170e9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x170ea0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x170EA0u;
    {
        const bool branch_taken_0x170ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EA0u;
        // 0x170ea4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ea0) {
            ctx->pc = 0x170ED0u;
            goto label_170ed0;
        }
    }
    ctx->pc = 0x170EA8u;
    // 0x170ea8: 0xc05d3a2  jal         func_174E88
    ctx->pc = 0x170EA8u;
    SET_GPR_U32(ctx, 31, 0x170EB0u);
    ctx->pc = 0x174E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174E88u, 0x170EA8u, 0x170EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170EB0u;
label_170eb0:
    // 0x170eb0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x170EB0u;
    {
        const bool branch_taken_0x170eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EB0u;
        // 0x170eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170eb0) {
            ctx->pc = 0x170ED4u;
            goto label_170ed4;
        }
    }
    ctx->pc = 0x170EB8u;
    // 0x170eb8: 0xc05c75a  jal         func_171D68
    ctx->pc = 0x170EB8u;
    SET_GPR_U32(ctx, 31, 0x170EC0u);
    ctx->pc = 0x170EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170EB8u;
    // 0x170ebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171D68u, 0x170EB8u, 0x170EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170EC0u;
label_170ec0:
    // 0x170ec0: 0xc05c86a  jal         func_1721A8
    ctx->pc = 0x170EC0u;
    SET_GPR_U32(ctx, 31, 0x170EC8u);
    ctx->pc = 0x170EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170EC0u;
    // 0x170ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1721A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1721A8u, 0x170EC0u, 0x170EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170EC8u;
label_170ec8:
    // 0x170ec8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x170EC8u;
    {
        const bool branch_taken_0x170ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EC8u;
        // 0x170ecc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ec8) {
            ctx->pc = 0x170F60u;
            goto label_170f60;
        }
    }
    ctx->pc = 0x170ED0u;
label_170ed0:
    // 0x170ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170ed4:
    // 0x170ed4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x170ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x170ed8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x170ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170edc: 0xc05ca20  jal         func_172880
    ctx->pc = 0x170EDCu;
    SET_GPR_U32(ctx, 31, 0x170EE4u);
    ctx->pc = 0x170EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170EDCu;
    // 0x170ee0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172880u, 0x170EDCu, 0x170EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170EE4u;
label_170ee4:
    // 0x170ee4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x170EE4u;
    {
        const bool branch_taken_0x170ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170ee4) {
            ctx->pc = 0x170F3Cu;
            goto label_170f3c;
        }
    }
    ctx->pc = 0x170EECu;
    // 0x170eec: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x170eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x170ef0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x170EF0u;
    {
        const bool branch_taken_0x170ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170EF0u;
        // 0x170ef4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ef0) {
            ctx->pc = 0x170F04u;
            goto label_170f04;
        }
    }
    ctx->pc = 0x170EF8u;
    // 0x170ef8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x170ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x170efc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x170efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x170f00: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x170f00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_170f04:
    // 0x170f04: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x170F04u;
    {
        const bool branch_taken_0x170f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x170f04) {
            ctx->pc = 0x170F3Cu;
            goto label_170f3c;
        }
    }
    ctx->pc = 0x170F0Cu;
    // 0x170f0c: 0xc05c75a  jal         func_171D68
    ctx->pc = 0x170F0Cu;
    SET_GPR_U32(ctx, 31, 0x170F14u);
    ctx->pc = 0x170F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170F0Cu;
    // 0x170f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171D68u, 0x170F0Cu, 0x170F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F14u;
label_170f14:
    // 0x170f14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x170f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170f18: 0xc05d0de  jal         func_174378
    ctx->pc = 0x170F18u;
    SET_GPR_U32(ctx, 31, 0x170F20u);
    ctx->pc = 0x170F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170F18u;
    // 0x170f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174378u, 0x170F18u, 0x170F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F20u;
label_170f20:
    // 0x170f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170f24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170f28: 0xc05c720  jal         func_171C80
    ctx->pc = 0x170F28u;
    SET_GPR_U32(ctx, 31, 0x170F30u);
    ctx->pc = 0x170F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170F28u;
    // 0x170f2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171C80u, 0x170F28u, 0x170F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F30u;
label_170f30:
    // 0x170f30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170f34: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x170F34u;
    {
        const bool branch_taken_0x170f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F34u;
        // 0x170f38: 0xae0202b8  sw          $v0, 0x2B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f34) {
            ctx->pc = 0x170F5Cu;
            goto label_170f5c;
        }
    }
    ctx->pc = 0x170F3Cu;
label_170f3c:
    // 0x170f3c: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x170F3Cu;
    SET_GPR_U32(ctx, 31, 0x170F44u);
    ctx->pc = 0x170F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170F3Cu;
    // 0x170f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x170F3Cu, 0x170F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F44u;
label_170f44:
    // 0x170f44: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x170F44u;
    {
        const bool branch_taken_0x170f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170f44) {
            ctx->pc = 0x170F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170F44u;
            // 0x170f48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170F60u;
            goto label_170f60;
        }
    }
    ctx->pc = 0x170F4Cu;
    // 0x170f4c: 0xc05c75a  jal         func_171D68
    ctx->pc = 0x170F4Cu;
    SET_GPR_U32(ctx, 31, 0x170F54u);
    ctx->pc = 0x170F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170F4Cu;
    // 0x170f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171D68u, 0x170F4Cu, 0x170F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F54u;
label_170f54:
    // 0x170f54: 0xc05c86a  jal         func_1721A8
    ctx->pc = 0x170F54u;
    SET_GPR_U32(ctx, 31, 0x170F5Cu);
    ctx->pc = 0x170F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170F54u;
    // 0x170f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1721A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1721A8u, 0x170F54u, 0x170F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F5Cu;
label_170f5c:
    // 0x170f5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_170f60:
    // 0x170f60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x170f60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170f64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x170f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170f68: 0x3e00008  jr          $ra
    ctx->pc = 0x170F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F68u;
        // 0x170f6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170F70u;
}
