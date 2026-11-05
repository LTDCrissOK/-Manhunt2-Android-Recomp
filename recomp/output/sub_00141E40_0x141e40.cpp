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

// Function: sub_00141E40
// Address: 0x141e40 - 0x141ec8
void sub_00141E40_0x141e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141E40_0x141e40");
#endif

    switch (ctx->pc) {
        case 0x141e58u: goto label_141e58;
        case 0x141e70u: goto label_141e70;
        case 0x141e90u: goto label_141e90;
        case 0x141ea4u: goto label_141ea4;
        case 0x141eb4u: goto label_141eb4;
        default: break;
    }

    ctx->pc = 0x141e40u;

    // 0x141e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141e44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141e48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x141e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x141e4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e50: 0xc04e866  jal         func_13A198
    ctx->pc = 0x141E50u;
    SET_GPR_U32(ctx, 31, 0x141E58u);
    ctx->pc = 0x141E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141E50u;
    // 0x141e54: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x141E50u, 0x141E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141E58u;
label_141e58:
    // 0x141e58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x141e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x141e5c: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x141E5Cu;
    {
        const bool branch_taken_0x141e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x141E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E5Cu;
        // 0x141e60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141e5c) {
            ctx->pc = 0x141EB8u;
            goto label_141eb8;
        }
    }
    ctx->pc = 0x141E64u;
    // 0x141e64: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x141e64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x141e68: 0xc04e866  jal         func_13A198
    ctx->pc = 0x141E68u;
    SET_GPR_U32(ctx, 31, 0x141E70u);
    ctx->pc = 0x141E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141E68u;
    // 0x141e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x141E68u, 0x141E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141E70u;
label_141e70:
    // 0x141e70: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x141e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x141e74: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x141E74u;
    {
        const bool branch_taken_0x141e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x141E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E74u;
        // 0x141e78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141e74) {
            ctx->pc = 0x141EB8u;
            goto label_141eb8;
        }
    }
    ctx->pc = 0x141E7Cu;
    // 0x141e7c: 0x8e020bfc  lw          $v0, 0xBFC($s0)
    ctx->pc = 0x141e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3068)));
    // 0x141e80: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x141E80u;
    {
        const bool branch_taken_0x141e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E80u;
        // 0x141e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141e80) {
            ctx->pc = 0x141EB8u;
            goto label_141eb8;
        }
    }
    ctx->pc = 0x141E88u;
    // 0x141e88: 0xc04f02a  jal         func_13C0A8
    ctx->pc = 0x141E88u;
    SET_GPR_U32(ctx, 31, 0x141E90u);
    ctx->pc = 0x141E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141E88u;
    // 0x141e8c: 0x8e040468  lw          $a0, 0x468($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0A8u, 0x141E88u, 0x141E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141E90u;
label_141e90:
    // 0x141e90: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x141E90u;
    {
        const bool branch_taken_0x141e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E90u;
        // 0x141e94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141e90) {
            ctx->pc = 0x141EB8u;
            goto label_141eb8;
        }
    }
    ctx->pc = 0x141E98u;
    // 0x141e98: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x141e98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x141e9c: 0xc04deee  jal         func_137BB8
    ctx->pc = 0x141E9Cu;
    SET_GPR_U32(ctx, 31, 0x141EA4u);
    ctx->pc = 0x141EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141E9Cu;
    // 0x141ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137BB8u, 0x141E9Cu, 0x141EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141EA4u;
label_141ea4:
    // 0x141ea4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x141EA4u;
    {
        const bool branch_taken_0x141ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141EA4u;
        // 0x141ea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ea4) {
            ctx->pc = 0x141EB8u;
            goto label_141eb8;
        }
    }
    ctx->pc = 0x141EACu;
    // 0x141eac: 0xc05095c  jal         func_142570
    ctx->pc = 0x141EACu;
    SET_GPR_U32(ctx, 31, 0x141EB4u);
    ctx->pc = 0x141EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141EACu;
    // 0x141eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142570u, 0x141EACu, 0x141EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141EB4u;
label_141eb4:
    // 0x141eb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141eb8:
    // 0x141eb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x141eb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141ebc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x141ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x141EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141EC0u;
        // 0x141ec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141EC8u;
}
