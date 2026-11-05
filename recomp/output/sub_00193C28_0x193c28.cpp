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

// Function: sub_00193C28
// Address: 0x193c28 - 0x193cc0
void sub_00193C28_0x193c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193C28_0x193c28");
#endif

    switch (ctx->pc) {
        case 0x193c28u: goto label_193c28;
        case 0x193c2cu: goto label_193c2c;
        case 0x193c30u: goto label_193c30;
        case 0x193c34u: goto label_193c34;
        case 0x193c38u: goto label_193c38;
        case 0x193c3cu: goto label_193c3c;
        case 0x193c40u: goto label_193c40;
        case 0x193c44u: goto label_193c44;
        case 0x193c48u: goto label_193c48;
        case 0x193c4cu: goto label_193c4c;
        case 0x193c50u: goto label_193c50;
        case 0x193c54u: goto label_193c54;
        case 0x193c58u: goto label_193c58;
        case 0x193c5cu: goto label_193c5c;
        case 0x193c60u: goto label_193c60;
        case 0x193c64u: goto label_193c64;
        case 0x193c68u: goto label_193c68;
        case 0x193c6cu: goto label_193c6c;
        case 0x193c70u: goto label_193c70;
        case 0x193c74u: goto label_193c74;
        case 0x193c78u: goto label_193c78;
        case 0x193c7cu: goto label_193c7c;
        case 0x193c80u: goto label_193c80;
        case 0x193c84u: goto label_193c84;
        case 0x193c88u: goto label_193c88;
        case 0x193c8cu: goto label_193c8c;
        case 0x193c90u: goto label_193c90;
        case 0x193c94u: goto label_193c94;
        case 0x193c98u: goto label_193c98;
        case 0x193c9cu: goto label_193c9c;
        case 0x193ca0u: goto label_193ca0;
        case 0x193ca4u: goto label_193ca4;
        case 0x193ca8u: goto label_193ca8;
        case 0x193cacu: goto label_193cac;
        case 0x193cb0u: goto label_193cb0;
        case 0x193cb4u: goto label_193cb4;
        case 0x193cb8u: goto label_193cb8;
        case 0x193cbcu: goto label_193cbc;
        default: break;
    }

    ctx->pc = 0x193c28u;

label_193c28:
    // 0x193c28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_193c2c:
    // 0x193c2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_193c30:
    // 0x193c30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x193c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_193c34:
    // 0x193c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x193c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_193c38:
    // 0x193c38: 0xc061a16  jal         func_186858
label_193c3c:
    if (ctx->pc == 0x193C3Cu) {
        ctx->pc = 0x193C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C38u;
        // 0x193c3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193C40u;
        goto label_193c40;
    }
    ctx->pc = 0x193C38u;
    SET_GPR_U32(ctx, 31, 0x193C40u);
    ctx->pc = 0x193C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193C38u;
    // 0x193c3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x193C38u, 0x193C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193C40u;
label_193c40:
    // 0x193c40: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x193c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_193c44:
    // 0x193c44: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x193c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_193c48:
    // 0x193c48: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x193c48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_193c4c:
    // 0x193c4c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x193c4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_193c50:
    // 0x193c50: 0x52a78  dsll        $a1, $a1, 9
    ctx->pc = 0x193c50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 9);
label_193c54:
    // 0x193c54: 0x34a501ff  ori         $a1, $a1, 0x1FF
    ctx->pc = 0x193c54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)511);
label_193c58:
    // 0x193c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193c5c:
    // 0x193c5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x193c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_193c60:
    // 0x193c60: 0xdc621020  ld          $v0, 0x1020($v1)
    ctx->pc = 0x193c60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4128)));
label_193c64:
    // 0x193c64: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x193c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_193c68:
    // 0x193c68: 0xc061a1e  jal         func_186878
label_193c6c:
    if (ctx->pc == 0x193C6Cu) {
        ctx->pc = 0x193C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C68u;
        // 0x193c6c: 0xfc621020  sd          $v0, 0x1020($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193C70u;
        goto label_193c70;
    }
    ctx->pc = 0x193C68u;
    SET_GPR_U32(ctx, 31, 0x193C70u);
    ctx->pc = 0x193C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193C68u;
    // 0x193c6c: 0xfc621020  sd          $v0, 0x1020($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 4128), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x193C68u, 0x193C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193C70u;
label_193c70:
    // 0x193c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193c74:
    // 0x193c74: 0xc061a1e  jal         func_186878
label_193c78:
    if (ctx->pc == 0x193C78u) {
        ctx->pc = 0x193C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C74u;
        // 0x193c78: 0xac510158  sw          $s1, 0x158($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193C7Cu;
        goto label_193c7c;
    }
    ctx->pc = 0x193C74u;
    SET_GPR_U32(ctx, 31, 0x193C7Cu);
    ctx->pc = 0x193C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193C74u;
    // 0x193c78: 0xac510158  sw          $s1, 0x158($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x193C74u, 0x193C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193C7Cu;
label_193c7c:
    // 0x193c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193c80:
    // 0x193c80: 0xc061a1e  jal         func_186878
label_193c84:
    if (ctx->pc == 0x193C84u) {
        ctx->pc = 0x193C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C80u;
        // 0x193c84: 0xac510160  sw          $s1, 0x160($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193C88u;
        goto label_193c88;
    }
    ctx->pc = 0x193C80u;
    SET_GPR_U32(ctx, 31, 0x193C88u);
    ctx->pc = 0x193C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193C80u;
    // 0x193c84: 0xac510160  sw          $s1, 0x160($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x193C80u, 0x193C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193C88u;
label_193c88:
    // 0x193c88: 0xac400178  sw          $zero, 0x178($v0)
    ctx->pc = 0x193c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 376), GPR_U32(ctx, 0));
label_193c8c:
    // 0x193c8c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x193c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_193c90:
    // 0x193c90: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_193c94:
    if (ctx->pc == 0x193C94u) {
        ctx->pc = 0x193C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C90u;
        // 0x193c94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193C98u;
        goto label_193c98;
    }
    ctx->pc = 0x193C90u;
    {
        const bool branch_taken_0x193c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C90u;
        // 0x193c94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c90) {
            ctx->pc = 0x193CACu;
            goto label_193cac;
        }
    }
    ctx->pc = 0x193C98u;
label_193c98:
    // 0x193c98: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x193c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_193c9c:
    // 0x193c9c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x193c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_193ca0:
    // 0x193ca0: 0x40f809  jalr        $v0
label_193ca4:
    if (ctx->pc == 0x193CA4u) {
        ctx->pc = 0x193CA8u;
        goto label_193ca8;
    }
    ctx->pc = 0x193CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193CA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193CA0u, 0x193CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193CA8u;
label_193ca8:
    // 0x193ca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_193cac:
    // 0x193cac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193cacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_193cb0:
    // 0x193cb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_193cb4:
    // 0x193cb4: 0x3e00008  jr          $ra
label_193cb8:
    if (ctx->pc == 0x193CB8u) {
        ctx->pc = 0x193CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193CB4u;
        // 0x193cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193CBCu;
        goto label_193cbc;
    }
    ctx->pc = 0x193CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193CB4u;
        // 0x193cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193CBCu;
label_193cbc:
    // 0x193cbc: 0x0  nop
    ctx->pc = 0x193cbcu;
    // NOP
    ctx->pc = 0x193cc0u;
}
