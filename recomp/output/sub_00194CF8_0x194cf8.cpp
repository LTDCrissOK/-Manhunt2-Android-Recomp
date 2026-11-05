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

// Function: sub_00194CF8
// Address: 0x194cf8 - 0x194ee0
void sub_00194CF8_0x194cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194CF8_0x194cf8");
#endif

    switch (ctx->pc) {
        case 0x194cf8u: goto label_194cf8;
        case 0x194cfcu: goto label_194cfc;
        case 0x194d00u: goto label_194d00;
        case 0x194d04u: goto label_194d04;
        case 0x194d08u: goto label_194d08;
        case 0x194d0cu: goto label_194d0c;
        case 0x194d10u: goto label_194d10;
        case 0x194d14u: goto label_194d14;
        case 0x194d18u: goto label_194d18;
        case 0x194d1cu: goto label_194d1c;
        case 0x194d20u: goto label_194d20;
        case 0x194d24u: goto label_194d24;
        case 0x194d28u: goto label_194d28;
        case 0x194d2cu: goto label_194d2c;
        case 0x194d30u: goto label_194d30;
        case 0x194d34u: goto label_194d34;
        case 0x194d38u: goto label_194d38;
        case 0x194d3cu: goto label_194d3c;
        case 0x194d40u: goto label_194d40;
        case 0x194d44u: goto label_194d44;
        case 0x194d48u: goto label_194d48;
        case 0x194d4cu: goto label_194d4c;
        case 0x194d50u: goto label_194d50;
        case 0x194d54u: goto label_194d54;
        case 0x194d58u: goto label_194d58;
        case 0x194d5cu: goto label_194d5c;
        case 0x194d60u: goto label_194d60;
        case 0x194d64u: goto label_194d64;
        case 0x194d68u: goto label_194d68;
        case 0x194d6cu: goto label_194d6c;
        case 0x194d70u: goto label_194d70;
        case 0x194d74u: goto label_194d74;
        case 0x194d78u: goto label_194d78;
        case 0x194d7cu: goto label_194d7c;
        case 0x194d80u: goto label_194d80;
        case 0x194d84u: goto label_194d84;
        case 0x194d88u: goto label_194d88;
        case 0x194d8cu: goto label_194d8c;
        case 0x194d90u: goto label_194d90;
        case 0x194d94u: goto label_194d94;
        case 0x194d98u: goto label_194d98;
        case 0x194d9cu: goto label_194d9c;
        case 0x194da0u: goto label_194da0;
        case 0x194da4u: goto label_194da4;
        case 0x194da8u: goto label_194da8;
        case 0x194dacu: goto label_194dac;
        case 0x194db0u: goto label_194db0;
        case 0x194db4u: goto label_194db4;
        case 0x194db8u: goto label_194db8;
        case 0x194dbcu: goto label_194dbc;
        case 0x194dc0u: goto label_194dc0;
        case 0x194dc4u: goto label_194dc4;
        case 0x194dc8u: goto label_194dc8;
        case 0x194dccu: goto label_194dcc;
        case 0x194dd0u: goto label_194dd0;
        case 0x194dd4u: goto label_194dd4;
        case 0x194dd8u: goto label_194dd8;
        case 0x194ddcu: goto label_194ddc;
        case 0x194de0u: goto label_194de0;
        case 0x194de4u: goto label_194de4;
        case 0x194de8u: goto label_194de8;
        case 0x194decu: goto label_194dec;
        case 0x194df0u: goto label_194df0;
        case 0x194df4u: goto label_194df4;
        case 0x194df8u: goto label_194df8;
        case 0x194dfcu: goto label_194dfc;
        case 0x194e00u: goto label_194e00;
        case 0x194e04u: goto label_194e04;
        case 0x194e08u: goto label_194e08;
        case 0x194e0cu: goto label_194e0c;
        case 0x194e10u: goto label_194e10;
        case 0x194e14u: goto label_194e14;
        case 0x194e18u: goto label_194e18;
        case 0x194e1cu: goto label_194e1c;
        case 0x194e20u: goto label_194e20;
        case 0x194e24u: goto label_194e24;
        case 0x194e28u: goto label_194e28;
        case 0x194e2cu: goto label_194e2c;
        case 0x194e30u: goto label_194e30;
        case 0x194e34u: goto label_194e34;
        case 0x194e38u: goto label_194e38;
        case 0x194e3cu: goto label_194e3c;
        case 0x194e40u: goto label_194e40;
        case 0x194e44u: goto label_194e44;
        case 0x194e48u: goto label_194e48;
        case 0x194e4cu: goto label_194e4c;
        case 0x194e50u: goto label_194e50;
        case 0x194e54u: goto label_194e54;
        case 0x194e58u: goto label_194e58;
        case 0x194e5cu: goto label_194e5c;
        case 0x194e60u: goto label_194e60;
        case 0x194e64u: goto label_194e64;
        case 0x194e68u: goto label_194e68;
        case 0x194e6cu: goto label_194e6c;
        case 0x194e70u: goto label_194e70;
        case 0x194e74u: goto label_194e74;
        case 0x194e78u: goto label_194e78;
        case 0x194e7cu: goto label_194e7c;
        case 0x194e80u: goto label_194e80;
        case 0x194e84u: goto label_194e84;
        case 0x194e88u: goto label_194e88;
        case 0x194e8cu: goto label_194e8c;
        case 0x194e90u: goto label_194e90;
        case 0x194e94u: goto label_194e94;
        case 0x194e98u: goto label_194e98;
        case 0x194e9cu: goto label_194e9c;
        case 0x194ea0u: goto label_194ea0;
        case 0x194ea4u: goto label_194ea4;
        case 0x194ea8u: goto label_194ea8;
        case 0x194eacu: goto label_194eac;
        case 0x194eb0u: goto label_194eb0;
        case 0x194eb4u: goto label_194eb4;
        case 0x194eb8u: goto label_194eb8;
        case 0x194ebcu: goto label_194ebc;
        case 0x194ec0u: goto label_194ec0;
        case 0x194ec4u: goto label_194ec4;
        case 0x194ec8u: goto label_194ec8;
        case 0x194eccu: goto label_194ecc;
        case 0x194ed0u: goto label_194ed0;
        case 0x194ed4u: goto label_194ed4;
        case 0x194ed8u: goto label_194ed8;
        case 0x194edcu: goto label_194edc;
        default: break;
    }

    ctx->pc = 0x194cf8u;

label_194cf8:
    // 0x194cf8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x194cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_194cfc:
    // 0x194cfc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x194cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_194d00:
    // 0x194d00: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x194d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_194d04:
    // 0x194d04: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x194d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_194d08:
    // 0x194d08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x194d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_194d0c:
    // 0x194d0c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x194d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_194d10:
    // 0x194d10: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x194d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_194d14:
    // 0x194d14: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x194d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_194d18:
    // 0x194d18: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x194d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_194d1c:
    // 0x194d1c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x194d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_194d20:
    // 0x194d20: 0x10430067  beq         $v0, $v1, . + 4 + (0x67 << 2)
label_194d24:
    if (ctx->pc == 0x194D24u) {
        ctx->pc = 0x194D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D20u;
        // 0x194d24: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D28u;
        goto label_194d28;
    }
    ctx->pc = 0x194D20u;
    {
        const bool branch_taken_0x194d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x194D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D20u;
        // 0x194d24: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d20) {
            ctx->pc = 0x194EC0u;
            goto label_194ec0;
        }
    }
    ctx->pc = 0x194D28u;
label_194d28:
    // 0x194d28: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x194d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_194d2c:
    // 0x194d2c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_194d30:
    if (ctx->pc == 0x194D30u) {
        ctx->pc = 0x194D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D2Cu;
        // 0x194d30: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D34u;
        goto label_194d34;
    }
    ctx->pc = 0x194D2Cu;
    {
        const bool branch_taken_0x194d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D2Cu;
        // 0x194d30: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d2c) {
            ctx->pc = 0x194D44u;
            goto label_194d44;
        }
    }
    ctx->pc = 0x194D34u;
label_194d34:
    // 0x194d34: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x194d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_194d38:
    // 0x194d38: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x194d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_194d3c:
    // 0x194d3c: 0x40f809  jalr        $v0
label_194d40:
    if (ctx->pc == 0x194D40u) {
        ctx->pc = 0x194D44u;
        goto label_194d44;
    }
    ctx->pc = 0x194D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194D44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194D3Cu, 0x194D44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194D44u;
label_194d44:
    // 0x194d44: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x194d44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_194d48:
    // 0x194d48: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x194d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_194d4c:
    // 0x194d4c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x194d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_194d50:
    // 0x194d50: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_194d54:
    if (ctx->pc == 0x194D54u) {
        ctx->pc = 0x194D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D50u;
        // 0x194d54: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D58u;
        goto label_194d58;
    }
    ctx->pc = 0x194D50u;
    {
        const bool branch_taken_0x194d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D50u;
        // 0x194d54: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d50) {
            ctx->pc = 0x194E2Cu;
            goto label_194e2c;
        }
    }
    ctx->pc = 0x194D58u;
label_194d58:
    // 0x194d58: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x194d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_194d5c:
    // 0x194d5c: 0x2450efd8  addiu       $s0, $v0, -0x1028
    ctx->pc = 0x194d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963160));
label_194d60:
    // 0x194d60: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x194d60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194d64:
    // 0x194d64: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x194d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_194d68:
    // 0x194d68: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_194d6c:
    if (ctx->pc == 0x194D6Cu) {
        ctx->pc = 0x194D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D68u;
        // 0x194d6c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D70u;
        goto label_194d70;
    }
    ctx->pc = 0x194D68u;
    {
        const bool branch_taken_0x194d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D68u;
        // 0x194d6c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d68) {
            ctx->pc = 0x194D90u;
            goto label_194d90;
        }
    }
    ctx->pc = 0x194D70u;
label_194d70:
    // 0x194d70: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x194d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_194d74:
    // 0x194d74: 0x0  nop
    ctx->pc = 0x194d74u;
    // NOP
label_194d78:
    // 0x194d78: 0xc0f6ec0  jal         func_3DBB00
label_194d7c:
    if (ctx->pc == 0x194D7Cu) {
        ctx->pc = 0x194D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D78u;
        // 0x194d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D80u;
        goto label_194d80;
    }
    ctx->pc = 0x194D78u;
    SET_GPR_U32(ctx, 31, 0x194D80u);
    ctx->pc = 0x194D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D78u;
    // 0x194d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBB00u, 0x194D78u, 0x194D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D80u;
label_194d80:
    // 0x194d80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x194d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_194d84:
    // 0x194d84: 0x0  nop
    ctx->pc = 0x194d84u;
    // NOP
label_194d88:
    // 0x194d88: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_194d8c:
    if (ctx->pc == 0x194D8Cu) {
        ctx->pc = 0x194D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D88u;
        // 0x194d8c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194D90u;
        goto label_194d90;
    }
    ctx->pc = 0x194D88u;
    {
        const bool branch_taken_0x194d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194d88) {
            ctx->pc = 0x194D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194D88u;
            // 0x194d8c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194d78;
        }
    }
    ctx->pc = 0x194D90u;
label_194d90:
    // 0x194d90: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x194d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_194d94:
    // 0x194d94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_194d98:
    // 0x194d98: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x194d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_194d9c:
    // 0x194d9c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x194d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_194da0:
    // 0x194da0: 0xc061a12  jal         func_186848
label_194da4:
    if (ctx->pc == 0x194DA4u) {
        ctx->pc = 0x194DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DA0u;
        // 0x194da4: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194DA8u;
        goto label_194da8;
    }
    ctx->pc = 0x194DA0u;
    SET_GPR_U32(ctx, 31, 0x194DA8u);
    ctx->pc = 0x194DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194DA0u;
    // 0x194da4: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x194DA0u, 0x194DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194DA8u;
label_194da8:
    // 0x194da8: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x194da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_194dac:
    // 0x194dac: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x194dacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_194db0:
    // 0x194db0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x194db0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_194db4:
    // 0x194db4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x194db4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_194db8:
    // 0x194db8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x194db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_194dbc:
    // 0x194dbc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x194dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_194dc0:
    // 0x194dc0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x194dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_194dc4:
    // 0x194dc4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x194dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_194dc8:
    // 0x194dc8: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x194dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_194dcc:
    // 0x194dcc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x194dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_194dd0:
    // 0x194dd0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x194dd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_194dd4:
    // 0x194dd4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x194dd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_194dd8:
    // 0x194dd8: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x194dd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_194ddc:
    // 0x194ddc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x194ddcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_194de0:
    // 0x194de0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x194de0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_194de4:
    // 0x194de4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x194de4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_194de8:
    // 0x194de8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x194de8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_194dec:
    // 0x194dec: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x194decu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_194df0:
    // 0x194df0: 0x4a0003bf  vwaitq
    ctx->pc = 0x194df0u;
    // VWAITQ (Q already resolved in this runtime)
label_194df4:
    // 0x194df4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x194df4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_194df8:
    // 0x194df8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x194df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_194dfc:
    // 0x194dfc: 0xc095368  jal         func_254DA0
label_194e00:
    if (ctx->pc == 0x194E00u) {
        ctx->pc = 0x194E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DFCu;
        // 0x194e00: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E04u;
        goto label_194e04;
    }
    ctx->pc = 0x194DFCu;
    SET_GPR_U32(ctx, 31, 0x194E04u);
    ctx->pc = 0x194E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194DFCu;
    // 0x194e00: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x194DFCu, 0x194E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194E04u;
label_194e04:
    // 0x194e04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194e08:
    // 0x194e08: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x194e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_194e0c:
    // 0x194e0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x194e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_194e10:
    // 0x194e10: 0x3c01be33  lui         $at, 0xBE33
    ctx->pc = 0x194e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48691 << 16));
label_194e14:
    // 0x194e14: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x194e14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_194e18:
    // 0x194e18: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x194e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_194e1c:
    // 0x194e1c: 0x2687efd8  addiu       $a3, $s4, -0x1028
    ctx->pc = 0x194e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963160));
label_194e20:
    // 0x194e20: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x194e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_194e24:
    // 0x194e24: 0xc0416a2  jal         func_105A88
label_194e28:
    if (ctx->pc == 0x194E28u) {
        ctx->pc = 0x194E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E24u;
        // 0x194e28: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E2Cu;
        goto label_194e2c;
    }
    ctx->pc = 0x194E24u;
    SET_GPR_U32(ctx, 31, 0x194E2Cu);
    ctx->pc = 0x194E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194E24u;
    // 0x194e28: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A88u, 0x194E24u, 0x194E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194E2Cu;
label_194e2c:
    // 0x194e2c: 0xc061a12  jal         func_186848
label_194e30:
    if (ctx->pc == 0x194E30u) {
        ctx->pc = 0x194E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E2Cu;
        // 0x194e30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E34u;
        goto label_194e34;
    }
    ctx->pc = 0x194E2Cu;
    SET_GPR_U32(ctx, 31, 0x194E34u);
    ctx->pc = 0x194E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194E2Cu;
    // 0x194e30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x194E2Cu, 0x194E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194E34u;
label_194e34:
    // 0x194e34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194e38:
    // 0x194e38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x194e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_194e3c:
    // 0x194e3c: 0xc07023a  jal         func_1C08E8
label_194e40:
    if (ctx->pc == 0x194E40u) {
        ctx->pc = 0x194E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E3Cu;
        // 0x194e40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E44u;
        goto label_194e44;
    }
    ctx->pc = 0x194E3Cu;
    SET_GPR_U32(ctx, 31, 0x194E44u);
    ctx->pc = 0x194E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194E3Cu;
    // 0x194e40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C08E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C08E8u, 0x194E3Cu, 0x194E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194E44u;
label_194e44:
    // 0x194e44: 0xc061a12  jal         func_186848
label_194e48:
    if (ctx->pc == 0x194E48u) {
        ctx->pc = 0x194E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E44u;
        // 0x194e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E4Cu;
        goto label_194e4c;
    }
    ctx->pc = 0x194E44u;
    SET_GPR_U32(ctx, 31, 0x194E4Cu);
    ctx->pc = 0x194E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194E44u;
    // 0x194e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x194E44u, 0x194E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194E4Cu;
label_194e4c:
    // 0x194e4c: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x194e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_194e50:
    // 0x194e50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194e54:
    // 0x194e54: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x194e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_194e58:
    // 0x194e58: 0x40f809  jalr        $v0
label_194e5c:
    if (ctx->pc == 0x194E5Cu) {
        ctx->pc = 0x194E60u;
        goto label_194e60;
    }
    ctx->pc = 0x194E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194E60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194E58u, 0x194E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194E60u;
label_194e60:
    // 0x194e60: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x194e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_194e64:
    // 0x194e64: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_194e68:
    if (ctx->pc == 0x194E68u) {
        ctx->pc = 0x194E6Cu;
        goto label_194e6c;
    }
    ctx->pc = 0x194E64u;
    {
        const bool branch_taken_0x194e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x194e64) {
            ctx->pc = 0x194E78u;
            goto label_194e78;
        }
    }
    ctx->pc = 0x194E6Cu;
label_194e6c:
    // 0x194e6c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x194e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_194e70:
    // 0x194e70: 0xc041924  jal         func_106490
label_194e74:
    if (ctx->pc == 0x194E74u) {
        ctx->pc = 0x194E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E70u;
        // 0x194e74: 0x2484efd8  addiu       $a0, $a0, -0x1028 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E78u;
        goto label_194e78;
    }
    ctx->pc = 0x194E70u;
    SET_GPR_U32(ctx, 31, 0x194E78u);
    ctx->pc = 0x194E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194E70u;
    // 0x194e74: 0x2484efd8  addiu       $a0, $a0, -0x1028 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106490u, 0x194E70u, 0x194E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194E78u;
label_194e78:
    // 0x194e78: 0xc061a16  jal         func_186858
label_194e7c:
    if (ctx->pc == 0x194E7Cu) {
        ctx->pc = 0x194E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E78u;
        // 0x194e7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E80u;
        goto label_194e80;
    }
    ctx->pc = 0x194E78u;
    SET_GPR_U32(ctx, 31, 0x194E80u);
    ctx->pc = 0x194E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194E78u;
    // 0x194e7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x194E78u, 0x194E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194E80u;
label_194e80:
    // 0x194e80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_194e84:
    // 0x194e84: 0xc061a16  jal         func_186858
label_194e88:
    if (ctx->pc == 0x194E88u) {
        ctx->pc = 0x194E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E84u;
        // 0x194e88: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194E8Cu;
        goto label_194e8c;
    }
    ctx->pc = 0x194E84u;
    SET_GPR_U32(ctx, 31, 0x194E8Cu);
    ctx->pc = 0x194E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194E84u;
    // 0x194e88: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x194E84u, 0x194E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194E8Cu;
label_194e8c:
    // 0x194e8c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x194e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_194e90:
    // 0x194e90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x194e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194e94:
    // 0x194e94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_194e98:
    // 0x194e98: 0xc061a16  jal         func_186858
label_194e9c:
    if (ctx->pc == 0x194E9Cu) {
        ctx->pc = 0x194E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E98u;
        // 0x194e9c: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x194EA0u;
        goto label_194ea0;
    }
    ctx->pc = 0x194E98u;
    SET_GPR_U32(ctx, 31, 0x194EA0u);
    ctx->pc = 0x194E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194E98u;
    // 0x194e9c: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x194E98u, 0x194EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194EA0u;
label_194ea0:
    // 0x194ea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194ea4:
    // 0x194ea4: 0xc06ee66  jal         func_1BB998
label_194ea8:
    if (ctx->pc == 0x194EA8u) {
        ctx->pc = 0x194EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EA4u;
        // 0x194ea8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194EACu;
        goto label_194eac;
    }
    ctx->pc = 0x194EA4u;
    SET_GPR_U32(ctx, 31, 0x194EACu);
    ctx->pc = 0x194EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194EA4u;
    // 0x194ea8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x194EA4u, 0x194EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194EACu;
label_194eac:
    // 0x194eac: 0xc061a16  jal         func_186858
label_194eb0:
    if (ctx->pc == 0x194EB0u) {
        ctx->pc = 0x194EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EACu;
        // 0x194eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194EB4u;
        goto label_194eb4;
    }
    ctx->pc = 0x194EACu;
    SET_GPR_U32(ctx, 31, 0x194EB4u);
    ctx->pc = 0x194EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194EACu;
    // 0x194eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x194EACu, 0x194EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194EB4u;
label_194eb4:
    // 0x194eb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194eb8:
    // 0x194eb8: 0xc06eebe  jal         func_1BBAF8
label_194ebc:
    if (ctx->pc == 0x194EBCu) {
        ctx->pc = 0x194EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EB8u;
        // 0x194ebc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194EC0u;
        goto label_194ec0;
    }
    ctx->pc = 0x194EB8u;
    SET_GPR_U32(ctx, 31, 0x194EC0u);
    ctx->pc = 0x194EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194EB8u;
    // 0x194ebc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x194EB8u, 0x194EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194EC0u;
label_194ec0:
    // 0x194ec0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x194ec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_194ec4:
    // 0x194ec4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x194ec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_194ec8:
    // 0x194ec8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x194ec8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_194ecc:
    // 0x194ecc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x194eccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_194ed0:
    // 0x194ed0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x194ed0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_194ed4:
    // 0x194ed4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x194ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_194ed8:
    // 0x194ed8: 0x3e00008  jr          $ra
label_194edc:
    if (ctx->pc == 0x194EDCu) {
        ctx->pc = 0x194EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194ED8u;
        // 0x194edc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194EE0u;
        goto label_fallthrough_0x194ed8;
    }
    ctx->pc = 0x194ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194ED8u;
        // 0x194edc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x194ed8:
    ctx->pc = 0x194EE0u;
}
