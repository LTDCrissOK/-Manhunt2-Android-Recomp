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

// Function: sub_00200EB8
// Address: 0x200eb8 - 0x200f38
void sub_00200EB8_0x200eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200EB8_0x200eb8");
#endif

    switch (ctx->pc) {
        case 0x200eb8u: goto label_200eb8;
        case 0x200ebcu: goto label_200ebc;
        case 0x200ec0u: goto label_200ec0;
        case 0x200ec4u: goto label_200ec4;
        case 0x200ec8u: goto label_200ec8;
        case 0x200eccu: goto label_200ecc;
        case 0x200ed0u: goto label_200ed0;
        case 0x200ed4u: goto label_200ed4;
        case 0x200ed8u: goto label_200ed8;
        case 0x200edcu: goto label_200edc;
        case 0x200ee0u: goto label_200ee0;
        case 0x200ee4u: goto label_200ee4;
        case 0x200ee8u: goto label_200ee8;
        case 0x200eecu: goto label_200eec;
        case 0x200ef0u: goto label_200ef0;
        case 0x200ef4u: goto label_200ef4;
        case 0x200ef8u: goto label_200ef8;
        case 0x200efcu: goto label_200efc;
        case 0x200f00u: goto label_200f00;
        case 0x200f04u: goto label_200f04;
        case 0x200f08u: goto label_200f08;
        case 0x200f0cu: goto label_200f0c;
        case 0x200f10u: goto label_200f10;
        case 0x200f14u: goto label_200f14;
        case 0x200f18u: goto label_200f18;
        case 0x200f1cu: goto label_200f1c;
        case 0x200f20u: goto label_200f20;
        case 0x200f24u: goto label_200f24;
        case 0x200f28u: goto label_200f28;
        case 0x200f2cu: goto label_200f2c;
        case 0x200f30u: goto label_200f30;
        case 0x200f34u: goto label_200f34;
        default: break;
    }

    ctx->pc = 0x200eb8u;

label_200eb8:
    // 0x200eb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_200ebc:
    // 0x200ebc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_200ec0:
    // 0x200ec0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x200ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_200ec4:
    // 0x200ec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_200ec8:
    // 0x200ec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x200ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_200ecc:
    // 0x200ecc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x200eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200ed0:
    // 0x200ed0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x200ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_200ed4:
    // 0x200ed4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_200ed8:
    if (ctx->pc == 0x200ED8u) {
        ctx->pc = 0x200ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200ED4u;
        // 0x200ed8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200EDCu;
        goto label_200edc;
    }
    ctx->pc = 0x200ED4u;
    {
        const bool branch_taken_0x200ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x200ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200ED4u;
        // 0x200ed8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ed4) {
            ctx->pc = 0x200F10u;
            goto label_200f10;
        }
    }
    ctx->pc = 0x200EDCu;
label_200edc:
    // 0x200edc: 0xc08153c  jal         func_2054F0
label_200ee0:
    if (ctx->pc == 0x200EE0u) {
        ctx->pc = 0x200EE4u;
        goto label_200ee4;
    }
    ctx->pc = 0x200EDCu;
    SET_GPR_U32(ctx, 31, 0x200EE4u);
    ctx->pc = 0x2054F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2054F0u, 0x200EDCu, 0x200EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EE4u;
label_200ee4:
    // 0x200ee4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_200ee8:
    if (ctx->pc == 0x200EE8u) {
        ctx->pc = 0x200EECu;
        goto label_200eec;
    }
    ctx->pc = 0x200EE4u;
    {
        const bool branch_taken_0x200ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200ee4) {
            ctx->pc = 0x200F10u;
            goto label_200f10;
        }
    }
    ctx->pc = 0x200EECu;
label_200eec:
    // 0x200eec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x200eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_200ef0:
    // 0x200ef0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x200ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_200ef4:
    // 0x200ef4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x200ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_200ef8:
    // 0x200ef8: 0x40f809  jalr        $v0
label_200efc:
    if (ctx->pc == 0x200EFCu) {
        ctx->pc = 0x200F00u;
        goto label_200f00;
    }
    ctx->pc = 0x200EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200F00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200EF8u, 0x200F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200F00u;
label_200f00:
    // 0x200f00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_200f04:
    if (ctx->pc == 0x200F04u) {
        ctx->pc = 0x200F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F00u;
        // 0x200f04: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x200F08u;
        goto label_200f08;
    }
    ctx->pc = 0x200F00u;
    {
        const bool branch_taken_0x200f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F00u;
        // 0x200f04: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f00) {
            ctx->pc = 0x200F14u;
            goto label_200f14;
        }
    }
    ctx->pc = 0x200F08u;
label_200f08:
    // 0x200f08: 0x10000005  b           . + 4 + (0x5 << 2)
label_200f0c:
    if (ctx->pc == 0x200F0Cu) {
        ctx->pc = 0x200F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F08u;
        // 0x200f0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200F10u;
        goto label_200f10;
    }
    ctx->pc = 0x200F08u;
    {
        const bool branch_taken_0x200f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F08u;
        // 0x200f0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f08) {
            ctx->pc = 0x200F20u;
            goto label_200f20;
        }
    }
    ctx->pc = 0x200F10u;
label_200f10:
    // 0x200f10: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x200f10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_200f14:
    // 0x200f14: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_200f18:
    if (ctx->pc == 0x200F18u) {
        ctx->pc = 0x200F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F14u;
        // 0x200f18: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200F1Cu;
        goto label_200f1c;
    }
    ctx->pc = 0x200F14u;
    {
        const bool branch_taken_0x200f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F14u;
        // 0x200f18: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f14) {
            ctx->pc = 0x200ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200ed0;
        }
    }
    ctx->pc = 0x200F1Cu;
label_200f1c:
    // 0x200f1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x200f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200f20:
    // 0x200f20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200f20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200f24:
    // 0x200f24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200f24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_200f28:
    // 0x200f28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x200f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_200f2c:
    // 0x200f2c: 0x3e00008  jr          $ra
label_200f30:
    if (ctx->pc == 0x200F30u) {
        ctx->pc = 0x200F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F2Cu;
        // 0x200f30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200F34u;
        goto label_200f34;
    }
    ctx->pc = 0x200F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F2Cu;
        // 0x200f30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200F34u;
label_200f34:
    // 0x200f34: 0x0  nop
    ctx->pc = 0x200f34u;
    // NOP
    ctx->pc = 0x200f38u;
}
