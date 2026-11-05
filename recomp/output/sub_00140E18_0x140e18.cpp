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

// Function: sub_00140E18
// Address: 0x140e18 - 0x140ef8
void sub_00140E18_0x140e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140E18_0x140e18");
#endif

    switch (ctx->pc) {
        case 0x140e18u: goto label_140e18;
        case 0x140e1cu: goto label_140e1c;
        case 0x140e20u: goto label_140e20;
        case 0x140e24u: goto label_140e24;
        case 0x140e28u: goto label_140e28;
        case 0x140e2cu: goto label_140e2c;
        case 0x140e30u: goto label_140e30;
        case 0x140e34u: goto label_140e34;
        case 0x140e38u: goto label_140e38;
        case 0x140e3cu: goto label_140e3c;
        case 0x140e40u: goto label_140e40;
        case 0x140e44u: goto label_140e44;
        case 0x140e48u: goto label_140e48;
        case 0x140e4cu: goto label_140e4c;
        case 0x140e50u: goto label_140e50;
        case 0x140e54u: goto label_140e54;
        case 0x140e58u: goto label_140e58;
        case 0x140e5cu: goto label_140e5c;
        case 0x140e60u: goto label_140e60;
        case 0x140e64u: goto label_140e64;
        case 0x140e68u: goto label_140e68;
        case 0x140e6cu: goto label_140e6c;
        case 0x140e70u: goto label_140e70;
        case 0x140e74u: goto label_140e74;
        case 0x140e78u: goto label_140e78;
        case 0x140e7cu: goto label_140e7c;
        case 0x140e80u: goto label_140e80;
        case 0x140e84u: goto label_140e84;
        case 0x140e88u: goto label_140e88;
        case 0x140e8cu: goto label_140e8c;
        case 0x140e90u: goto label_140e90;
        case 0x140e94u: goto label_140e94;
        case 0x140e98u: goto label_140e98;
        case 0x140e9cu: goto label_140e9c;
        case 0x140ea0u: goto label_140ea0;
        case 0x140ea4u: goto label_140ea4;
        case 0x140ea8u: goto label_140ea8;
        case 0x140eacu: goto label_140eac;
        case 0x140eb0u: goto label_140eb0;
        case 0x140eb4u: goto label_140eb4;
        case 0x140eb8u: goto label_140eb8;
        case 0x140ebcu: goto label_140ebc;
        case 0x140ec0u: goto label_140ec0;
        case 0x140ec4u: goto label_140ec4;
        case 0x140ec8u: goto label_140ec8;
        case 0x140eccu: goto label_140ecc;
        case 0x140ed0u: goto label_140ed0;
        case 0x140ed4u: goto label_140ed4;
        case 0x140ed8u: goto label_140ed8;
        case 0x140edcu: goto label_140edc;
        case 0x140ee0u: goto label_140ee0;
        case 0x140ee4u: goto label_140ee4;
        case 0x140ee8u: goto label_140ee8;
        case 0x140eecu: goto label_140eec;
        case 0x140ef0u: goto label_140ef0;
        case 0x140ef4u: goto label_140ef4;
        default: break;
    }

    ctx->pc = 0x140e18u;

label_140e18:
    // 0x140e18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x140e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_140e1c:
    // 0x140e1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x140e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_140e20:
    // 0x140e20: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x140e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_140e24:
    // 0x140e24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x140e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_140e28:
    // 0x140e28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x140e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_140e2c:
    // 0x140e2c: 0xc04d8dc  jal         func_136370
label_140e30:
    if (ctx->pc == 0x140E30u) {
        ctx->pc = 0x140E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E2Cu;
        // 0x140e30: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140E34u;
        goto label_140e34;
    }
    ctx->pc = 0x140E2Cu;
    SET_GPR_U32(ctx, 31, 0x140E34u);
    ctx->pc = 0x140E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140E2Cu;
    // 0x140e30: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x140E2Cu, 0x140E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140E34u;
label_140e34:
    // 0x140e34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x140e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_140e38:
    // 0x140e38: 0x5443002b  bnel        $v0, $v1, . + 4 + (0x2B << 2)
label_140e3c:
    if (ctx->pc == 0x140E3Cu) {
        ctx->pc = 0x140E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E38u;
        // 0x140e3c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140E40u;
        goto label_140e40;
    }
    ctx->pc = 0x140E38u;
    {
        const bool branch_taken_0x140e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x140e38) {
            ctx->pc = 0x140E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140E38u;
            // 0x140e3c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140EE8u;
            goto label_140ee8;
        }
    }
    ctx->pc = 0x140E40u;
label_140e40:
    // 0x140e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140e44:
    // 0x140e44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x140e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_140e48:
    // 0x140e48: 0xc0503de  jal         func_140F78
label_140e4c:
    if (ctx->pc == 0x140E4Cu) {
        ctx->pc = 0x140E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E48u;
        // 0x140e4c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140E50u;
        goto label_140e50;
    }
    ctx->pc = 0x140E48u;
    SET_GPR_U32(ctx, 31, 0x140E50u);
    ctx->pc = 0x140E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140E48u;
    // 0x140e4c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F78u, 0x140E48u, 0x140E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140E50u;
label_140e50:
    // 0x140e50: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x140e50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_140e54:
    // 0x140e54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x140e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_140e58:
    // 0x140e58: 0xc0503d0  jal         func_140F40
label_140e5c:
    if (ctx->pc == 0x140E5Cu) {
        ctx->pc = 0x140E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E58u;
        // 0x140e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140E60u;
        goto label_140e60;
    }
    ctx->pc = 0x140E58u;
    SET_GPR_U32(ctx, 31, 0x140E60u);
    ctx->pc = 0x140E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140E58u;
    // 0x140e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F40u, 0x140E58u, 0x140E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140E60u;
label_140e60:
    // 0x140e60: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_140e64:
    if (ctx->pc == 0x140E64u) {
        ctx->pc = 0x140E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E60u;
        // 0x140e64: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140E68u;
        goto label_140e68;
    }
    ctx->pc = 0x140E60u;
    {
        const bool branch_taken_0x140e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140e60) {
            ctx->pc = 0x140E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140E60u;
            // 0x140e64: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140EB8u;
            goto label_140eb8;
        }
    }
    ctx->pc = 0x140E68u;
label_140e68:
    // 0x140e68: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x140e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_140e6c:
    // 0x140e6c: 0x56220005  bnel        $s1, $v0, . + 4 + (0x5 << 2)
label_140e70:
    if (ctx->pc == 0x140E70u) {
        ctx->pc = 0x140E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E6Cu;
        // 0x140e70: 0x8e030520  lw          $v1, 0x520($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140E74u;
        goto label_140e74;
    }
    ctx->pc = 0x140E6Cu;
    {
        const bool branch_taken_0x140e6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x140e6c) {
            ctx->pc = 0x140E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140E6Cu;
            // 0x140e70: 0x8e030520  lw          $v1, 0x520($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140E84u;
            goto label_140e84;
        }
    }
    ctx->pc = 0x140E74u;
label_140e74:
    // 0x140e74: 0xc0504b6  jal         func_1412D8
label_140e78:
    if (ctx->pc == 0x140E78u) {
        ctx->pc = 0x140E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E74u;
        // 0x140e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140E7Cu;
        goto label_140e7c;
    }
    ctx->pc = 0x140E74u;
    SET_GPR_U32(ctx, 31, 0x140E7Cu);
    ctx->pc = 0x140E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140E74u;
    // 0x140e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1412D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1412D8u, 0x140E74u, 0x140E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140E7Cu;
label_140e7c:
    // 0x140e7c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_140e80:
    if (ctx->pc == 0x140E80u) {
        ctx->pc = 0x140E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E7Cu;
        // 0x140e80: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140E84u;
        goto label_140e84;
    }
    ctx->pc = 0x140E7Cu;
    {
        const bool branch_taken_0x140e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E7Cu;
        // 0x140e80: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140e7c) {
            ctx->pc = 0x140EE8u;
            goto label_140ee8;
        }
    }
    ctx->pc = 0x140E84u;
label_140e84:
    // 0x140e84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x140e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_140e88:
    // 0x140e88: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_140e8c:
    if (ctx->pc == 0x140E8Cu) {
        ctx->pc = 0x140E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E88u;
        // 0x140e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140E90u;
        goto label_140e90;
    }
    ctx->pc = 0x140E88u;
    {
        const bool branch_taken_0x140e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x140E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E88u;
        // 0x140e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140e88) {
            ctx->pc = 0x140EE4u;
            goto label_140ee4;
        }
    }
    ctx->pc = 0x140E90u;
label_140e90:
    // 0x140e90: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x140e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_140e94:
    // 0x140e94: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x140e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_140e98:
    // 0x140e98: 0x60f809  jalr        $v1
label_140e9c:
    if (ctx->pc == 0x140E9Cu) {
        ctx->pc = 0x140E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E98u;
        // 0x140e9c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140EA0u;
        goto label_140ea0;
    }
    ctx->pc = 0x140E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x140EA0u);
        ctx->pc = 0x140E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E98u;
        // 0x140e9c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140E98u, 0x140EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140EA0u;
label_140ea0:
    // 0x140ea0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x140ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_140ea4:
    // 0x140ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140ea8:
    // 0x140ea8: 0xc050466  jal         func_141198
label_140eac:
    if (ctx->pc == 0x140EACu) {
        ctx->pc = 0x140EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EA8u;
        // 0x140eac: 0xae020520  sw          $v0, 0x520($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140EB0u;
        goto label_140eb0;
    }
    ctx->pc = 0x140EA8u;
    SET_GPR_U32(ctx, 31, 0x140EB0u);
    ctx->pc = 0x140EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140EA8u;
    // 0x140eac: 0xae020520  sw          $v0, 0x520($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141198u, 0x140EA8u, 0x140EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140EB0u;
label_140eb0:
    // 0x140eb0: 0x1000000d  b           . + 4 + (0xD << 2)
label_140eb4:
    if (ctx->pc == 0x140EB4u) {
        ctx->pc = 0x140EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EB0u;
        // 0x140eb4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140EB8u;
        goto label_140eb8;
    }
    ctx->pc = 0x140EB0u;
    {
        const bool branch_taken_0x140eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EB0u;
        // 0x140eb4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140eb0) {
            ctx->pc = 0x140EE8u;
            goto label_140ee8;
        }
    }
    ctx->pc = 0x140EB8u;
label_140eb8:
    // 0x140eb8: 0xc0503d0  jal         func_140F40
label_140ebc:
    if (ctx->pc == 0x140EBCu) {
        ctx->pc = 0x140EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EB8u;
        // 0x140ebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140EC0u;
        goto label_140ec0;
    }
    ctx->pc = 0x140EB8u;
    SET_GPR_U32(ctx, 31, 0x140EC0u);
    ctx->pc = 0x140EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140EB8u;
    // 0x140ebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F40u, 0x140EB8u, 0x140EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140EC0u;
label_140ec0:
    // 0x140ec0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x140ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140ec4:
    // 0x140ec4: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_140ec8:
    if (ctx->pc == 0x140EC8u) {
        ctx->pc = 0x140EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EC4u;
        // 0x140ec8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140ECCu;
        goto label_140ecc;
    }
    ctx->pc = 0x140EC4u;
    {
        const bool branch_taken_0x140ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x140ec4) {
            ctx->pc = 0x140EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140EC4u;
            // 0x140ec8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140EE8u;
            goto label_140ee8;
        }
    }
    ctx->pc = 0x140ECCu;
label_140ecc:
    // 0x140ecc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x140eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_140ed0:
    // 0x140ed0: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
label_140ed4:
    if (ctx->pc == 0x140ED4u) {
        ctx->pc = 0x140ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140ED0u;
        // 0x140ed4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140ED8u;
        goto label_140ed8;
    }
    ctx->pc = 0x140ED0u;
    {
        const bool branch_taken_0x140ed0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x140ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140ED0u;
        // 0x140ed4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140ed0) {
            ctx->pc = 0x140EE4u;
            goto label_140ee4;
        }
    }
    ctx->pc = 0x140ED8u;
label_140ed8:
    // 0x140ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140edc:
    // 0x140edc: 0xc050466  jal         func_141198
label_140ee0:
    if (ctx->pc == 0x140EE0u) {
        ctx->pc = 0x140EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EDCu;
        // 0x140ee0: 0xae020520  sw          $v0, 0x520($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140EE4u;
        goto label_140ee4;
    }
    ctx->pc = 0x140EDCu;
    SET_GPR_U32(ctx, 31, 0x140EE4u);
    ctx->pc = 0x140EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140EDCu;
    // 0x140ee0: 0xae020520  sw          $v0, 0x520($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141198u, 0x140EDCu, 0x140EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140EE4u;
label_140ee4:
    // 0x140ee4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x140ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_140ee8:
    // 0x140ee8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x140ee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_140eec:
    // 0x140eec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x140eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_140ef0:
    // 0x140ef0: 0x3e00008  jr          $ra
label_140ef4:
    if (ctx->pc == 0x140EF4u) {
        ctx->pc = 0x140EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EF0u;
        // 0x140ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140EF8u;
        goto label_fallthrough_0x140ef0;
    }
    ctx->pc = 0x140EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140EF0u;
        // 0x140ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x140ef0:
    ctx->pc = 0x140EF8u;
}
