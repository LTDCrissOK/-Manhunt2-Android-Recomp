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

// Function: sub_002E4E00
// Address: 0x2e4e00 - 0x2e4eb0
void sub_002E4E00_0x2e4e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4E00_0x2e4e00");
#endif

    switch (ctx->pc) {
        case 0x2e4e00u: goto label_2e4e00;
        case 0x2e4e04u: goto label_2e4e04;
        case 0x2e4e08u: goto label_2e4e08;
        case 0x2e4e0cu: goto label_2e4e0c;
        case 0x2e4e10u: goto label_2e4e10;
        case 0x2e4e14u: goto label_2e4e14;
        case 0x2e4e18u: goto label_2e4e18;
        case 0x2e4e1cu: goto label_2e4e1c;
        case 0x2e4e20u: goto label_2e4e20;
        case 0x2e4e24u: goto label_2e4e24;
        case 0x2e4e28u: goto label_2e4e28;
        case 0x2e4e2cu: goto label_2e4e2c;
        case 0x2e4e30u: goto label_2e4e30;
        case 0x2e4e34u: goto label_2e4e34;
        case 0x2e4e38u: goto label_2e4e38;
        case 0x2e4e3cu: goto label_2e4e3c;
        case 0x2e4e40u: goto label_2e4e40;
        case 0x2e4e44u: goto label_2e4e44;
        case 0x2e4e48u: goto label_2e4e48;
        case 0x2e4e4cu: goto label_2e4e4c;
        case 0x2e4e50u: goto label_2e4e50;
        case 0x2e4e54u: goto label_2e4e54;
        case 0x2e4e58u: goto label_2e4e58;
        case 0x2e4e5cu: goto label_2e4e5c;
        case 0x2e4e60u: goto label_2e4e60;
        case 0x2e4e64u: goto label_2e4e64;
        case 0x2e4e68u: goto label_2e4e68;
        case 0x2e4e6cu: goto label_2e4e6c;
        case 0x2e4e70u: goto label_2e4e70;
        case 0x2e4e74u: goto label_2e4e74;
        case 0x2e4e78u: goto label_2e4e78;
        case 0x2e4e7cu: goto label_2e4e7c;
        case 0x2e4e80u: goto label_2e4e80;
        case 0x2e4e84u: goto label_2e4e84;
        case 0x2e4e88u: goto label_2e4e88;
        case 0x2e4e8cu: goto label_2e4e8c;
        case 0x2e4e90u: goto label_2e4e90;
        case 0x2e4e94u: goto label_2e4e94;
        case 0x2e4e98u: goto label_2e4e98;
        case 0x2e4e9cu: goto label_2e4e9c;
        case 0x2e4ea0u: goto label_2e4ea0;
        case 0x2e4ea4u: goto label_2e4ea4;
        case 0x2e4ea8u: goto label_2e4ea8;
        case 0x2e4eacu: goto label_2e4eac;
        default: break;
    }

    ctx->pc = 0x2e4e00u;

label_2e4e00:
    // 0x2e4e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2e4e04:
    // 0x2e4e04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2e4e08:
    // 0x2e4e08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e4e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2e4e0c:
    // 0x2e4e0c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_2e4e10:
    if (ctx->pc == 0x2E4E10u) {
        ctx->pc = 0x2E4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E0Cu;
        // 0x2e4e10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4E14u;
        goto label_2e4e14;
    }
    ctx->pc = 0x2E4E0Cu;
    {
        const bool branch_taken_0x2e4e0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E0Cu;
        // 0x2e4e10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4e0c) {
            ctx->pc = 0x2E4E20u;
            goto label_2e4e20;
        }
    }
    ctx->pc = 0x2E4E14u;
label_2e4e14:
    // 0x2e4e14: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2e4e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2e4e18:
    // 0x2e4e18: 0x10000004  b           . + 4 + (0x4 << 2)
label_2e4e1c:
    if (ctx->pc == 0x2E4E1Cu) {
        ctx->pc = 0x2E4E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E18u;
        // 0x2e4e1c: 0x34420200  ori         $v0, $v0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4E20u;
        goto label_2e4e20;
    }
    ctx->pc = 0x2E4E18u;
    {
        const bool branch_taken_0x2e4e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E18u;
        // 0x2e4e1c: 0x34420200  ori         $v0, $v0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4e18) {
            ctx->pc = 0x2E4E2Cu;
            goto label_2e4e2c;
        }
    }
    ctx->pc = 0x2E4E20u;
label_2e4e20:
    // 0x2e4e20: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2e4e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2e4e24:
    // 0x2e4e24: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x2e4e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_2e4e28:
    // 0x2e4e28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e4e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e4e2c:
    // 0x2e4e2c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_2e4e30:
    if (ctx->pc == 0x2E4E30u) {
        ctx->pc = 0x2E4E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E2Cu;
        // 0x2e4e30: 0xae0211c0  sw          $v0, 0x11C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4E34u;
        goto label_2e4e34;
    }
    ctx->pc = 0x2E4E2Cu;
    {
        const bool branch_taken_0x2e4e2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E2Cu;
        // 0x2e4e30: 0xae0211c0  sw          $v0, 0x11C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4e2c) {
            ctx->pc = 0x2E4E40u;
            goto label_2e4e40;
        }
    }
    ctx->pc = 0x2E4E34u;
label_2e4e34:
    // 0x2e4e34: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2e4e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2e4e38:
    // 0x2e4e38: 0x10000004  b           . + 4 + (0x4 << 2)
label_2e4e3c:
    if (ctx->pc == 0x2E4E3Cu) {
        ctx->pc = 0x2E4E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E38u;
        // 0x2e4e3c: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4E40u;
        goto label_2e4e40;
    }
    ctx->pc = 0x2E4E38u;
    {
        const bool branch_taken_0x2e4e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E38u;
        // 0x2e4e3c: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4e38) {
            ctx->pc = 0x2E4E4Cu;
            goto label_2e4e4c;
        }
    }
    ctx->pc = 0x2E4E40u;
label_2e4e40:
    // 0x2e4e40: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2e4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2e4e44:
    // 0x2e4e44: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x2e4e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_2e4e48:
    // 0x2e4e48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e4e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e4e4c:
    // 0x2e4e4c: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x2e4e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_2e4e50:
    // 0x2e4e50: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x2e4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_2e4e54:
    // 0x2e4e54: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2e4e58:
    if (ctx->pc == 0x2E4E58u) {
        ctx->pc = 0x2E4E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E54u;
        // 0x2e4e58: 0xac450028  sw          $a1, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4E5Cu;
        goto label_2e4e5c;
    }
    ctx->pc = 0x2E4E54u;
    {
        const bool branch_taken_0x2e4e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4e54) {
            ctx->pc = 0x2E4E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4E54u;
            // 0x2e4e58: 0xac450028  sw          $a1, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4E5Cu;
            goto label_2e4e5c;
        }
    }
    ctx->pc = 0x2E4E5Cu;
label_2e4e5c:
    // 0x2e4e5c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_2e4e60:
    if (ctx->pc == 0x2E4E60u) {
        ctx->pc = 0x2E4E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E5Cu;
        // 0x2e4e60: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4E64u;
        goto label_2e4e64;
    }
    ctx->pc = 0x2E4E5Cu;
    {
        const bool branch_taken_0x2e4e5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E5Cu;
        // 0x2e4e60: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4e5c) {
            ctx->pc = 0x2E4E90u;
            goto label_2e4e90;
        }
    }
    ctx->pc = 0x2E4E64u;
label_2e4e64:
    // 0x2e4e64: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2e4e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2e4e68:
    // 0x2e4e68: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2e4e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2e4e6c:
    // 0x2e4e6c: 0x40f809  jalr        $v0
label_2e4e70:
    if (ctx->pc == 0x2E4E70u) {
        ctx->pc = 0x2E4E74u;
        goto label_2e4e74;
    }
    ctx->pc = 0x2E4E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E4E74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4E6Cu, 0x2E4E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E4E74u;
label_2e4e74:
    // 0x2e4e74: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x2e4e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2e4e78:
    // 0x2e4e78: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2e4e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2e4e7c:
    // 0x2e4e7c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2e4e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2e4e80:
    // 0x2e4e80: 0x40f809  jalr        $v0
label_2e4e84:
    if (ctx->pc == 0x2E4E84u) {
        ctx->pc = 0x2E4E88u;
        goto label_2e4e88;
    }
    ctx->pc = 0x2E4E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E4E88u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4E80u, 0x2E4E88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E4E88u;
label_2e4e88:
    // 0x2e4e88: 0x10000006  b           . + 4 + (0x6 << 2)
label_2e4e8c:
    if (ctx->pc == 0x2E4E8Cu) {
        ctx->pc = 0x2E4E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E88u;
        // 0x2e4e8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4E90u;
        goto label_2e4e90;
    }
    ctx->pc = 0x2E4E88u;
    {
        const bool branch_taken_0x2e4e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E88u;
        // 0x2e4e8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4e88) {
            ctx->pc = 0x2E4EA4u;
            goto label_2e4ea4;
        }
    }
    ctx->pc = 0x2E4E90u;
label_2e4e90:
    // 0x2e4e90: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2e4e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2e4e94:
    // 0x2e4e94: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2e4e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2e4e98:
    // 0x2e4e98: 0x40f809  jalr        $v0
label_2e4e9c:
    if (ctx->pc == 0x2E4E9Cu) {
        ctx->pc = 0x2E4EA0u;
        goto label_2e4ea0;
    }
    ctx->pc = 0x2E4E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E4EA0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4E98u, 0x2E4EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E4EA0u;
label_2e4ea0:
    // 0x2e4ea0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4ea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4ea4:
    // 0x2e4ea4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e4ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2e4ea8:
    // 0x2e4ea8: 0x3e00008  jr          $ra
label_2e4eac:
    if (ctx->pc == 0x2E4EACu) {
        ctx->pc = 0x2E4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4EA8u;
        // 0x2e4eac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4EB0u;
        goto label_fallthrough_0x2e4ea8;
    }
    ctx->pc = 0x2E4EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4EA8u;
        // 0x2e4eac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e4ea8:
    ctx->pc = 0x2E4EB0u;
}
