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

// Function: sub_00139ED0
// Address: 0x139ed0 - 0x139f58
void sub_00139ED0_0x139ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139ED0_0x139ed0");
#endif

    switch (ctx->pc) {
        case 0x139ee4u: goto label_139ee4;
        case 0x139f0cu: goto label_139f0c;
        case 0x139f1cu: goto label_139f1c;
        case 0x139f44u: goto label_139f44;
        default: break;
    }

    ctx->pc = 0x139ed0u;

    // 0x139ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139ed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x139ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x139ed8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x139ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x139edc: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x139EDCu;
    SET_GPR_U32(ctx, 31, 0x139EE4u);
    ctx->pc = 0x139EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139EDCu;
    // 0x139ee0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1369D0u, 0x139EDCu, 0x139EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139EE4u;
label_139ee4:
    // 0x139ee4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x139EE4u;
    {
        const bool branch_taken_0x139ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139EE4u;
        // 0x139ee8: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ee4) {
            ctx->pc = 0x139F44u;
            goto label_139f44;
        }
    }
    ctx->pc = 0x139EECu;
    // 0x139eec: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x139eecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x139ef0: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x139ef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x139ef4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x139ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x139ef8: 0x8c430510  lw          $v1, 0x510($v0)
    ctx->pc = 0x139ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1296)));
    // 0x139efc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x139EFCu;
    {
        const bool branch_taken_0x139efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x139efc) {
            ctx->pc = 0x139F14u;
            goto label_139f14;
        }
    }
    ctx->pc = 0x139F04u;
    // 0x139f04: 0xc04e9ac  jal         func_13A6B0
    ctx->pc = 0x139F04u;
    SET_GPR_U32(ctx, 31, 0x139F0Cu);
    ctx->pc = 0x139F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139F04u;
    // 0x139f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A6B0u, 0x139F04u, 0x139F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F0Cu;
label_139f0c:
    // 0x139f0c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x139F0Cu;
    {
        const bool branch_taken_0x139f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F0Cu;
        // 0x139f10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139f0c) {
            ctx->pc = 0x139F48u;
            goto label_139f48;
        }
    }
    ctx->pc = 0x139F14u;
label_139f14:
    // 0x139f14: 0xc04e9cc  jal         func_13A730
    ctx->pc = 0x139F14u;
    SET_GPR_U32(ctx, 31, 0x139F1Cu);
    ctx->pc = 0x139F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139F14u;
    // 0x139f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A730u, 0x139F14u, 0x139F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F1Cu;
label_139f1c:
    // 0x139f1c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x139F1Cu;
    {
        const bool branch_taken_0x139f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F1Cu;
        // 0x139f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139f1c) {
            ctx->pc = 0x139F44u;
            goto label_139f44;
        }
    }
    ctx->pc = 0x139F24u;
    // 0x139f24: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x139f24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x139f28: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x139f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x139f2c: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x139f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x139f30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x139f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x139f34: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x139f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x139f38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x139f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139f3c: 0xc04dbd4  jal         func_136F50
    ctx->pc = 0x139F3Cu;
    SET_GPR_U32(ctx, 31, 0x139F44u);
    ctx->pc = 0x139F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139F3Cu;
    // 0x139f40: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F50u, 0x139F3Cu, 0x139F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F44u;
label_139f44:
    // 0x139f44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x139f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_139f48:
    // 0x139f48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x139f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x139F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139F4Cu;
        // 0x139f50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139F54u;
    // 0x139f54: 0x0  nop
    ctx->pc = 0x139f54u;
    // NOP
    ctx->pc = 0x139f58u;
}
