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

// Function: sub_003D4F18
// Address: 0x3d4f18 - 0x3d4fd0
void sub_003D4F18_0x3d4f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4F18_0x3d4f18");
#endif

    switch (ctx->pc) {
        case 0x3d4f18u: goto label_3d4f18;
        case 0x3d4f1cu: goto label_3d4f1c;
        case 0x3d4f20u: goto label_3d4f20;
        case 0x3d4f24u: goto label_3d4f24;
        case 0x3d4f28u: goto label_3d4f28;
        case 0x3d4f2cu: goto label_3d4f2c;
        case 0x3d4f30u: goto label_3d4f30;
        case 0x3d4f34u: goto label_3d4f34;
        case 0x3d4f38u: goto label_3d4f38;
        case 0x3d4f3cu: goto label_3d4f3c;
        case 0x3d4f40u: goto label_3d4f40;
        case 0x3d4f44u: goto label_3d4f44;
        case 0x3d4f48u: goto label_3d4f48;
        case 0x3d4f4cu: goto label_3d4f4c;
        case 0x3d4f50u: goto label_3d4f50;
        case 0x3d4f54u: goto label_3d4f54;
        case 0x3d4f58u: goto label_3d4f58;
        case 0x3d4f5cu: goto label_3d4f5c;
        case 0x3d4f60u: goto label_3d4f60;
        case 0x3d4f64u: goto label_3d4f64;
        case 0x3d4f68u: goto label_3d4f68;
        case 0x3d4f6cu: goto label_3d4f6c;
        case 0x3d4f70u: goto label_3d4f70;
        case 0x3d4f74u: goto label_3d4f74;
        case 0x3d4f78u: goto label_3d4f78;
        case 0x3d4f7cu: goto label_3d4f7c;
        case 0x3d4f80u: goto label_3d4f80;
        case 0x3d4f84u: goto label_3d4f84;
        case 0x3d4f88u: goto label_3d4f88;
        case 0x3d4f8cu: goto label_3d4f8c;
        case 0x3d4f90u: goto label_3d4f90;
        case 0x3d4f94u: goto label_3d4f94;
        case 0x3d4f98u: goto label_3d4f98;
        case 0x3d4f9cu: goto label_3d4f9c;
        case 0x3d4fa0u: goto label_3d4fa0;
        case 0x3d4fa4u: goto label_3d4fa4;
        case 0x3d4fa8u: goto label_3d4fa8;
        case 0x3d4facu: goto label_3d4fac;
        case 0x3d4fb0u: goto label_3d4fb0;
        case 0x3d4fb4u: goto label_3d4fb4;
        case 0x3d4fb8u: goto label_3d4fb8;
        case 0x3d4fbcu: goto label_3d4fbc;
        case 0x3d4fc0u: goto label_3d4fc0;
        case 0x3d4fc4u: goto label_3d4fc4;
        case 0x3d4fc8u: goto label_3d4fc8;
        case 0x3d4fccu: goto label_3d4fcc;
        default: break;
    }

    ctx->pc = 0x3d4f18u;

label_3d4f18:
    // 0x3d4f18: 0x8fa30640  lw          $v1, 0x640($sp)
    ctx->pc = 0x3d4f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_3d4f1c:
    // 0x3d4f1c: 0x8fa60648  lw          $a2, 0x648($sp)
    ctx->pc = 0x3d4f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
label_3d4f20:
    // 0x3d4f20: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x3d4f20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_3d4f24:
    // 0x3d4f24: 0x8fa20644  lw          $v0, 0x644($sp)
    ctx->pc = 0x3d4f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_3d4f28:
    // 0x3d4f28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3d4f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d4f2c:
    // 0x3d4f2c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_3d4f30:
    if (ctx->pc == 0x3D4F30u) {
        ctx->pc = 0x3D4F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F2Cu;
        // 0x3d4f30: 0x8fa60648  lw          $a2, 0x648($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4F34u;
        goto label_3d4f34;
    }
    ctx->pc = 0x3D4F2Cu;
    {
        const bool branch_taken_0x3d4f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F2Cu;
        // 0x3d4f30: 0x8fa60648  lw          $a2, 0x648($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4f2c) {
            ctx->pc = 0x3D4F68u;
            goto label_3d4f68;
        }
    }
    ctx->pc = 0x3D4F34u;
label_3d4f34:
    // 0x3d4f34: 0x0  nop
    ctx->pc = 0x3d4f34u;
    // NOP
label_3d4f38:
    // 0x3d4f38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3d4f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d4f3c:
    // 0x3d4f3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3d4f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d4f40:
    // 0x3d4f40: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x3d4f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3d4f44:
    // 0x3d4f44: 0x8fa60644  lw          $a2, 0x644($sp)
    ctx->pc = 0x3d4f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_3d4f48:
    // 0x3d4f48: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3d4f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3d4f4c:
    // 0x3d4f4c: 0x60f809  jalr        $v1
label_3d4f50:
    if (ctx->pc == 0x3D4F50u) {
        ctx->pc = 0x3D4F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F4Cu;
        // 0x3d4f50: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4F54u;
        goto label_3d4f54;
    }
    ctx->pc = 0x3D4F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D4F54u);
        ctx->pc = 0x3D4F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F4Cu;
        // 0x3d4f50: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4F4Cu, 0x3D4F54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4F54u;
label_3d4f54:
    // 0x3d4f54: 0x8fa30644  lw          $v1, 0x644($sp)
    ctx->pc = 0x3d4f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_3d4f58:
    // 0x3d4f58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3d4f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d4f5c:
    // 0x3d4f5c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3d4f60:
    if (ctx->pc == 0x3D4F60u) {
        ctx->pc = 0x3D4F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F5Cu;
        // 0x3d4f60: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4F64u;
        goto label_3d4f64;
    }
    ctx->pc = 0x3D4F5Cu;
    {
        const bool branch_taken_0x3d4f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F5Cu;
        // 0x3d4f60: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4f5c) {
            ctx->pc = 0x3D4F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d4f38;
        }
    }
    ctx->pc = 0x3D4F64u;
label_3d4f64:
    // 0x3d4f64: 0x8fa60648  lw          $a2, 0x648($sp)
    ctx->pc = 0x3d4f64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
label_3d4f68:
    // 0x3d4f68: 0x8fa30640  lw          $v1, 0x640($sp)
    ctx->pc = 0x3d4f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_3d4f6c:
    // 0x3d4f6c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3d4f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3d4f70:
    // 0x3d4f70: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3d4f70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3d4f74:
    // 0x3d4f74: 0x8fa60640  lw          $a2, 0x640($sp)
    ctx->pc = 0x3d4f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_3d4f78:
    // 0x3d4f78: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3d4f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3d4f7c:
    // 0x3d4f7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3d4f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d4f80:
    // 0x3d4f80: 0xc0f533e  jal         func_3D4CF8
label_3d4f84:
    if (ctx->pc == 0x3D4F84u) {
        ctx->pc = 0x3D4F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F80u;
        // 0x3d4f84: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4F88u;
        goto label_3d4f88;
    }
    ctx->pc = 0x3D4F80u;
    SET_GPR_U32(ctx, 31, 0x3D4F88u);
    ctx->pc = 0x3D4F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4F80u;
    // 0x3d4f84: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4CF8u, 0x3D4F80u, 0x3D4F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4F88u;
label_3d4f88:
    // 0x3d4f88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d4f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d4f8c:
    // 0x3d4f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d4f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3d4f90:
    // 0x3d4f90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d4f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d4f94:
    // 0x3d4f94: 0xc0f5306  jal         func_3D4C18
label_3d4f98:
    if (ctx->pc == 0x3D4F98u) {
        ctx->pc = 0x3D4F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4F94u;
        // 0x3d4f98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4F9Cu;
        goto label_3d4f9c;
    }
    ctx->pc = 0x3D4F94u;
    SET_GPR_U32(ctx, 31, 0x3D4F9Cu);
    ctx->pc = 0x3D4F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4F94u;
    // 0x3d4f98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4C18u, 0x3D4F94u, 0x3D4F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4F9Cu;
label_3d4f9c:
    // 0x3d4f9c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3d4f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d4fa0:
    // 0x3d4fa0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d4fa4:
    // 0x3d4fa4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3d4fa8:
    if (ctx->pc == 0x3D4FA8u) {
        ctx->pc = 0x3D4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FA4u;
        // 0x3d4fa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4FACu;
        goto label_3d4fac;
    }
    ctx->pc = 0x3D4FA4u;
    {
        const bool branch_taken_0x3d4fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FA4u;
        // 0x3d4fa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4fa4) {
            ctx->pc = 0x3D4FB4u;
            goto label_3d4fb4;
        }
    }
    ctx->pc = 0x3D4FACu;
label_3d4fac:
    // 0x3d4fac: 0x10000004  b           . + 4 + (0x4 << 2)
label_3d4fb0:
    if (ctx->pc == 0x3D4FB0u) {
        ctx->pc = 0x3D4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FACu;
        // 0x3d4fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4FB4u;
        goto label_3d4fb4;
    }
    ctx->pc = 0x3D4FACu;
    {
        const bool branch_taken_0x3d4fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FACu;
        // 0x3d4fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4fac) {
            ctx->pc = 0x3D4FC0u;
            goto label_3d4fc0;
        }
    }
    ctx->pc = 0x3D4FB4u;
label_3d4fb4:
    // 0x3d4fb4: 0x40f809  jalr        $v0
label_3d4fb8:
    if (ctx->pc == 0x3D4FB8u) {
        ctx->pc = 0x3D4FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FB4u;
        // 0x3d4fb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4FBCu;
        goto label_3d4fbc;
    }
    ctx->pc = 0x3D4FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D4FBCu);
        ctx->pc = 0x3D4FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FB4u;
        // 0x3d4fb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4FB4u, 0x3D4FBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4FBCu;
label_3d4fbc:
    // 0x3d4fbc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3d4fbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3d4fc0:
    // 0x3d4fc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d4fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d4fc4:
    // 0x3d4fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d4fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d4fc8:
    // 0x3d4fc8: 0x3e00008  jr          $ra
label_3d4fcc:
    if (ctx->pc == 0x3D4FCCu) {
        ctx->pc = 0x3D4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FC8u;
        // 0x3d4fcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4FD0u;
        goto label_fallthrough_0x3d4fc8;
    }
    ctx->pc = 0x3D4FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4FC8u;
        // 0x3d4fcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d4fc8:
    ctx->pc = 0x3D4FD0u;
}
