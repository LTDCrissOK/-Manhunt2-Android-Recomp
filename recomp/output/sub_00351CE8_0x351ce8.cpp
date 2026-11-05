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

// Function: sub_00351CE8
// Address: 0x351ce8 - 0x351eb0
void sub_00351CE8_0x351ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351CE8_0x351ce8");
#endif

    switch (ctx->pc) {
        case 0x351ce8u: goto label_351ce8;
        case 0x351cecu: goto label_351cec;
        case 0x351cf0u: goto label_351cf0;
        case 0x351cf4u: goto label_351cf4;
        case 0x351cf8u: goto label_351cf8;
        case 0x351cfcu: goto label_351cfc;
        case 0x351d00u: goto label_351d00;
        case 0x351d04u: goto label_351d04;
        case 0x351d08u: goto label_351d08;
        case 0x351d0cu: goto label_351d0c;
        case 0x351d10u: goto label_351d10;
        case 0x351d14u: goto label_351d14;
        case 0x351d18u: goto label_351d18;
        case 0x351d1cu: goto label_351d1c;
        case 0x351d20u: goto label_351d20;
        case 0x351d24u: goto label_351d24;
        case 0x351d28u: goto label_351d28;
        case 0x351d2cu: goto label_351d2c;
        case 0x351d30u: goto label_351d30;
        case 0x351d34u: goto label_351d34;
        case 0x351d38u: goto label_351d38;
        case 0x351d3cu: goto label_351d3c;
        case 0x351d40u: goto label_351d40;
        case 0x351d44u: goto label_351d44;
        case 0x351d48u: goto label_351d48;
        case 0x351d4cu: goto label_351d4c;
        case 0x351d50u: goto label_351d50;
        case 0x351d54u: goto label_351d54;
        case 0x351d58u: goto label_351d58;
        case 0x351d5cu: goto label_351d5c;
        case 0x351d60u: goto label_351d60;
        case 0x351d64u: goto label_351d64;
        case 0x351d68u: goto label_351d68;
        case 0x351d6cu: goto label_351d6c;
        case 0x351d70u: goto label_351d70;
        case 0x351d74u: goto label_351d74;
        case 0x351d78u: goto label_351d78;
        case 0x351d7cu: goto label_351d7c;
        case 0x351d80u: goto label_351d80;
        case 0x351d84u: goto label_351d84;
        case 0x351d88u: goto label_351d88;
        case 0x351d8cu: goto label_351d8c;
        case 0x351d90u: goto label_351d90;
        case 0x351d94u: goto label_351d94;
        case 0x351d98u: goto label_351d98;
        case 0x351d9cu: goto label_351d9c;
        case 0x351da0u: goto label_351da0;
        case 0x351da4u: goto label_351da4;
        case 0x351da8u: goto label_351da8;
        case 0x351dacu: goto label_351dac;
        case 0x351db0u: goto label_351db0;
        case 0x351db4u: goto label_351db4;
        case 0x351db8u: goto label_351db8;
        case 0x351dbcu: goto label_351dbc;
        case 0x351dc0u: goto label_351dc0;
        case 0x351dc4u: goto label_351dc4;
        case 0x351dc8u: goto label_351dc8;
        case 0x351dccu: goto label_351dcc;
        case 0x351dd0u: goto label_351dd0;
        case 0x351dd4u: goto label_351dd4;
        case 0x351dd8u: goto label_351dd8;
        case 0x351ddcu: goto label_351ddc;
        case 0x351de0u: goto label_351de0;
        case 0x351de4u: goto label_351de4;
        case 0x351de8u: goto label_351de8;
        case 0x351decu: goto label_351dec;
        case 0x351df0u: goto label_351df0;
        case 0x351df4u: goto label_351df4;
        case 0x351df8u: goto label_351df8;
        case 0x351dfcu: goto label_351dfc;
        case 0x351e00u: goto label_351e00;
        case 0x351e04u: goto label_351e04;
        case 0x351e08u: goto label_351e08;
        case 0x351e0cu: goto label_351e0c;
        case 0x351e10u: goto label_351e10;
        case 0x351e14u: goto label_351e14;
        case 0x351e18u: goto label_351e18;
        case 0x351e1cu: goto label_351e1c;
        case 0x351e20u: goto label_351e20;
        case 0x351e24u: goto label_351e24;
        case 0x351e28u: goto label_351e28;
        case 0x351e2cu: goto label_351e2c;
        case 0x351e30u: goto label_351e30;
        case 0x351e34u: goto label_351e34;
        case 0x351e38u: goto label_351e38;
        case 0x351e3cu: goto label_351e3c;
        case 0x351e40u: goto label_351e40;
        case 0x351e44u: goto label_351e44;
        case 0x351e48u: goto label_351e48;
        case 0x351e4cu: goto label_351e4c;
        case 0x351e50u: goto label_351e50;
        case 0x351e54u: goto label_351e54;
        case 0x351e58u: goto label_351e58;
        case 0x351e5cu: goto label_351e5c;
        case 0x351e60u: goto label_351e60;
        case 0x351e64u: goto label_351e64;
        case 0x351e68u: goto label_351e68;
        case 0x351e6cu: goto label_351e6c;
        case 0x351e70u: goto label_351e70;
        case 0x351e74u: goto label_351e74;
        case 0x351e78u: goto label_351e78;
        case 0x351e7cu: goto label_351e7c;
        case 0x351e80u: goto label_351e80;
        case 0x351e84u: goto label_351e84;
        case 0x351e88u: goto label_351e88;
        case 0x351e8cu: goto label_351e8c;
        case 0x351e90u: goto label_351e90;
        case 0x351e94u: goto label_351e94;
        case 0x351e98u: goto label_351e98;
        case 0x351e9cu: goto label_351e9c;
        case 0x351ea0u: goto label_351ea0;
        case 0x351ea4u: goto label_351ea4;
        case 0x351ea8u: goto label_351ea8;
        case 0x351eacu: goto label_351eac;
        default: break;
    }

    ctx->pc = 0x351ce8u;

label_351ce8:
    // 0x351ce8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x351ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_351cec:
    // 0x351cec: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x351cecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_351cf0:
    // 0x351cf0: 0x8c44c8b0  lw          $a0, -0x3750($v0)
    ctx->pc = 0x351cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953136)));
label_351cf4:
    // 0x351cf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x351cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_351cf8:
    // 0x351cf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x351cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_351cfc:
    // 0x351cfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x351cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_351d00:
    // 0x351d00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x351d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_351d04:
    // 0x351d04: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x351d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_351d08:
    // 0x351d08: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x351d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_351d0c:
    // 0x351d0c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x351d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_351d10:
    // 0x351d10: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_351d14:
    if (ctx->pc == 0x351D14u) {
        ctx->pc = 0x351D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D10u;
        // 0x351d14: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D18u;
        goto label_351d18;
    }
    ctx->pc = 0x351D10u;
    {
        const bool branch_taken_0x351d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x351D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D10u;
        // 0x351d14: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351d10) {
            ctx->pc = 0x351D20u;
            goto label_351d20;
        }
    }
    ctx->pc = 0x351D18u;
label_351d18:
    // 0x351d18: 0xc0c7a32  jal         func_31E8C8
label_351d1c:
    if (ctx->pc == 0x351D1Cu) {
        ctx->pc = 0x351D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D18u;
        // 0x351d1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D20u;
        goto label_351d20;
    }
    ctx->pc = 0x351D18u;
    SET_GPR_U32(ctx, 31, 0x351D20u);
    ctx->pc = 0x351D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351D18u;
    // 0x351d1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C8u, 0x351D18u, 0x351D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351D20u;
label_351d20:
    // 0x351d20: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x351d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_351d24:
    // 0x351d24: 0x2444be50  addiu       $a0, $v0, -0x41B0
    ctx->pc = 0x351d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950480));
label_351d28:
    // 0x351d28: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x351d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_351d2c:
    // 0x351d2c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x351d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_351d30:
    // 0x351d30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x351d30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_351d34:
    // 0x351d34: 0x3c13005c  lui         $s3, 0x5C
    ctx->pc = 0x351d34u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)92 << 16));
label_351d38:
    // 0x351d38: 0x3c15005c  lui         $s5, 0x5C
    ctx->pc = 0x351d38u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)92 << 16));
label_351d3c:
    // 0x351d3c: 0x10000010  b           . + 4 + (0x10 << 2)
label_351d40:
    if (ctx->pc == 0x351D40u) {
        ctx->pc = 0x351D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D3Cu;
        // 0x351d40: 0x3c16005c  lui         $s6, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D44u;
        goto label_351d44;
    }
    ctx->pc = 0x351D3Cu;
    {
        const bool branch_taken_0x351d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D3Cu;
        // 0x351d40: 0x3c16005c  lui         $s6, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351d3c) {
            ctx->pc = 0x351D80u;
            goto label_351d80;
        }
    }
    ctx->pc = 0x351D44u;
label_351d44:
    // 0x351d44: 0x0  nop
    ctx->pc = 0x351d44u;
    // NOP
label_351d48:
    // 0x351d48: 0xc0f754a  jal         func_3DD528
label_351d4c:
    if (ctx->pc == 0x351D4Cu) {
        ctx->pc = 0x351D50u;
        goto label_351d50;
    }
    ctx->pc = 0x351D48u;
    SET_GPR_U32(ctx, 31, 0x351D50u);
    ctx->pc = 0x3DD528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD528u, 0x351D48u, 0x351D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351D50u;
label_351d50:
    // 0x351d50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_351d54:
    if (ctx->pc == 0x351D54u) {
        ctx->pc = 0x351D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D50u;
        // 0x351d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D58u;
        goto label_351d58;
    }
    ctx->pc = 0x351D50u;
    {
        const bool branch_taken_0x351d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D50u;
        // 0x351d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351d50) {
            ctx->pc = 0x351D60u;
            goto label_351d60;
        }
    }
    ctx->pc = 0x351D58u;
label_351d58:
    // 0x351d58: 0xc0fbc38  jal         func_3EF0E0
label_351d5c:
    if (ctx->pc == 0x351D5Cu) {
        ctx->pc = 0x351D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D58u;
        // 0x351d5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D60u;
        goto label_351d60;
    }
    ctx->pc = 0x351D58u;
    SET_GPR_U32(ctx, 31, 0x351D60u);
    ctx->pc = 0x351D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351D58u;
    // 0x351d5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF0E0u, 0x351D58u, 0x351D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351D60u;
label_351d60:
    // 0x351d60: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x351d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_351d64:
    // 0x351d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_351d68:
    // 0x351d68: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x351d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_351d6c:
    // 0x351d6c: 0x40f809  jalr        $v0
label_351d70:
    if (ctx->pc == 0x351D70u) {
        ctx->pc = 0x351D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D6Cu;
        // 0x351d70: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D74u;
        goto label_351d74;
    }
    ctx->pc = 0x351D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x351D74u);
        ctx->pc = 0x351D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D6Cu;
        // 0x351d70: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351D6Cu, 0x351D74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351D74u;
label_351d74:
    // 0x351d74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x351d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_351d78:
    // 0x351d78: 0xc0fbc98  jal         func_3EF260
label_351d7c:
    if (ctx->pc == 0x351D7Cu) {
        ctx->pc = 0x351D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D78u;
        // 0x351d7c: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D80u;
        goto label_351d80;
    }
    ctx->pc = 0x351D78u;
    SET_GPR_U32(ctx, 31, 0x351D80u);
    ctx->pc = 0x351D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351D78u;
    // 0x351d7c: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF260u, 0x351D78u, 0x351D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351D80u;
label_351d80:
    // 0x351d80: 0x2692be50  addiu       $s2, $s4, -0x41B0
    ctx->pc = 0x351d80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950480));
label_351d84:
    // 0x351d84: 0x2671be60  addiu       $s1, $s3, -0x41A0
    ctx->pc = 0x351d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950496));
label_351d88:
    // 0x351d88: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x351d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_351d8c:
    // 0x351d8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x351d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_351d90:
    // 0x351d90: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_351d94:
    if (ctx->pc == 0x351D94u) {
        ctx->pc = 0x351D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D90u;
        // 0x351d94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D98u;
        goto label_351d98;
    }
    ctx->pc = 0x351D90u;
    {
        const bool branch_taken_0x351d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D90u;
        // 0x351d94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351d90) {
            ctx->pc = 0x351D9Cu;
            goto label_351d9c;
        }
    }
    ctx->pc = 0x351D98u;
label_351d98:
    // 0x351d98: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x351d98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_351d9c:
    // 0x351d9c: 0x1600ffea  bnez        $s0, . + 4 + (-0x16 << 2)
label_351da0:
    if (ctx->pc == 0x351DA0u) {
        ctx->pc = 0x351DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D9Cu;
        // 0x351da0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351DA4u;
        goto label_351da4;
    }
    ctx->pc = 0x351D9Cu;
    {
        const bool branch_taken_0x351d9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x351DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D9Cu;
        // 0x351da0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351d9c) {
            ctx->pc = 0x351D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351d48;
        }
    }
    ctx->pc = 0x351DA4u;
label_351da4:
    // 0x351da4: 0x2662be60  addiu       $v0, $s3, -0x41A0
    ctx->pc = 0x351da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950496));
label_351da8:
    // 0x351da8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x351da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_351dac:
    // 0x351dac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x351dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_351db0:
    // 0x351db0: 0x10000008  b           . + 4 + (0x8 << 2)
label_351db4:
    if (ctx->pc == 0x351DB4u) {
        ctx->pc = 0x351DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DB0u;
        // 0x351db4: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351DB8u;
        goto label_351db8;
    }
    ctx->pc = 0x351DB0u;
    {
        const bool branch_taken_0x351db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DB0u;
        // 0x351db4: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351db0) {
            ctx->pc = 0x351DD4u;
            goto label_351dd4;
        }
    }
    ctx->pc = 0x351DB8u;
label_351db8:
    // 0x351db8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x351db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_351dbc:
    // 0x351dbc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x351dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_351dc0:
    // 0x351dc0: 0x60f809  jalr        $v1
label_351dc4:
    if (ctx->pc == 0x351DC4u) {
        ctx->pc = 0x351DC8u;
        goto label_351dc8;
    }
    ctx->pc = 0x351DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x351DC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351DC0u, 0x351DC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351DC8u;
label_351dc8:
    // 0x351dc8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x351dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_351dcc:
    // 0x351dcc: 0xc0fbc98  jal         func_3EF260
label_351dd0:
    if (ctx->pc == 0x351DD0u) {
        ctx->pc = 0x351DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DCCu;
        // 0x351dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351DD4u;
        goto label_351dd4;
    }
    ctx->pc = 0x351DCCu;
    SET_GPR_U32(ctx, 31, 0x351DD4u);
    ctx->pc = 0x351DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351DCCu;
    // 0x351dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF260u, 0x351DCCu, 0x351DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351DD4u;
label_351dd4:
    // 0x351dd4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x351dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_351dd8:
    // 0x351dd8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x351dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_351ddc:
    // 0x351ddc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_351de0:
    if (ctx->pc == 0x351DE0u) {
        ctx->pc = 0x351DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DDCu;
        // 0x351de0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351DE4u;
        goto label_351de4;
    }
    ctx->pc = 0x351DDCu;
    {
        const bool branch_taken_0x351ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DDCu;
        // 0x351de0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351ddc) {
            ctx->pc = 0x351DE8u;
            goto label_351de8;
        }
    }
    ctx->pc = 0x351DE4u;
label_351de4:
    // 0x351de4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x351de4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_351de8:
    // 0x351de8: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_351dec:
    if (ctx->pc == 0x351DECu) {
        ctx->pc = 0x351DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DE8u;
        // 0x351dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351DF0u;
        goto label_351df0;
    }
    ctx->pc = 0x351DE8u;
    {
        const bool branch_taken_0x351de8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x351DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DE8u;
        // 0x351dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351de8) {
            ctx->pc = 0x351DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351db8;
        }
    }
    ctx->pc = 0x351DF0u;
label_351df0:
    // 0x351df0: 0x26a2be70  addiu       $v0, $s5, -0x4190
    ctx->pc = 0x351df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950512));
label_351df4:
    // 0x351df4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x351df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_351df8:
    // 0x351df8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x351df8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_351dfc:
    // 0x351dfc: 0x10000007  b           . + 4 + (0x7 << 2)
label_351e00:
    if (ctx->pc == 0x351E00u) {
        ctx->pc = 0x351E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DFCu;
        // 0x351e00: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E04u;
        goto label_351e04;
    }
    ctx->pc = 0x351DFCu;
    {
        const bool branch_taken_0x351dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DFCu;
        // 0x351e00: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351dfc) {
            ctx->pc = 0x351E1Cu;
            goto label_351e1c;
        }
    }
    ctx->pc = 0x351E04u;
label_351e04:
    // 0x351e04: 0x0  nop
    ctx->pc = 0x351e04u;
    // NOP
label_351e08:
    // 0x351e08: 0xc0fbc50  jal         func_3EF140
label_351e0c:
    if (ctx->pc == 0x351E0Cu) {
        ctx->pc = 0x351E10u;
        goto label_351e10;
    }
    ctx->pc = 0x351E08u;
    SET_GPR_U32(ctx, 31, 0x351E10u);
    ctx->pc = 0x3EF140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF140u, 0x351E08u, 0x351E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351E10u;
label_351e10:
    // 0x351e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_351e14:
    // 0x351e14: 0xc0d1e40  jal         func_347900
label_351e18:
    if (ctx->pc == 0x351E18u) {
        ctx->pc = 0x351E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E14u;
        // 0x351e18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E1Cu;
        goto label_351e1c;
    }
    ctx->pc = 0x351E14u;
    SET_GPR_U32(ctx, 31, 0x351E1Cu);
    ctx->pc = 0x351E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351E14u;
    // 0x351e18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347900u, 0x351E14u, 0x351E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351E1Cu;
label_351e1c:
    // 0x351e1c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x351e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_351e20:
    // 0x351e20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x351e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_351e24:
    // 0x351e24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x351e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_351e28:
    // 0x351e28: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_351e2c:
    if (ctx->pc == 0x351E2Cu) {
        ctx->pc = 0x351E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E28u;
        // 0x351e2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E30u;
        goto label_351e30;
    }
    ctx->pc = 0x351E28u;
    {
        const bool branch_taken_0x351e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E28u;
        // 0x351e2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e28) {
            ctx->pc = 0x351E34u;
            goto label_351e34;
        }
    }
    ctx->pc = 0x351E30u;
label_351e30:
    // 0x351e30: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x351e30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_351e34:
    // 0x351e34: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
label_351e38:
    if (ctx->pc == 0x351E38u) {
        ctx->pc = 0x351E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E34u;
        // 0x351e38: 0x26c2be80  addiu       $v0, $s6, -0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E3Cu;
        goto label_351e3c;
    }
    ctx->pc = 0x351E34u;
    {
        const bool branch_taken_0x351e34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x351E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E34u;
        // 0x351e38: 0x26c2be80  addiu       $v0, $s6, -0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e34) {
            ctx->pc = 0x351E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351e08;
        }
    }
    ctx->pc = 0x351E3Cu;
label_351e3c:
    // 0x351e3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x351e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_351e40:
    // 0x351e40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x351e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_351e44:
    // 0x351e44: 0x10000009  b           . + 4 + (0x9 << 2)
label_351e48:
    if (ctx->pc == 0x351E48u) {
        ctx->pc = 0x351E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E44u;
        // 0x351e48: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E4Cu;
        goto label_351e4c;
    }
    ctx->pc = 0x351E44u;
    {
        const bool branch_taken_0x351e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E44u;
        // 0x351e48: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e44) {
            ctx->pc = 0x351E6Cu;
            goto label_351e6c;
        }
    }
    ctx->pc = 0x351E4Cu;
label_351e4c:
    // 0x351e4c: 0x0  nop
    ctx->pc = 0x351e4cu;
    // NOP
label_351e50:
    // 0x351e50: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x351e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_351e54:
    // 0x351e54: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x351e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_351e58:
    // 0x351e58: 0x60f809  jalr        $v1
label_351e5c:
    if (ctx->pc == 0x351E5Cu) {
        ctx->pc = 0x351E60u;
        goto label_351e60;
    }
    ctx->pc = 0x351E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x351E60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351E58u, 0x351E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351E60u;
label_351e60:
    // 0x351e60: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x351e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_351e64:
    // 0x351e64: 0xc0fbc98  jal         func_3EF260
label_351e68:
    if (ctx->pc == 0x351E68u) {
        ctx->pc = 0x351E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E64u;
        // 0x351e68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E6Cu;
        goto label_351e6c;
    }
    ctx->pc = 0x351E64u;
    SET_GPR_U32(ctx, 31, 0x351E6Cu);
    ctx->pc = 0x351E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351E64u;
    // 0x351e68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF260u, 0x351E64u, 0x351E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351E6Cu;
label_351e6c:
    // 0x351e6c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x351e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_351e70:
    // 0x351e70: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x351e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_351e74:
    // 0x351e74: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_351e78:
    if (ctx->pc == 0x351E78u) {
        ctx->pc = 0x351E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E74u;
        // 0x351e78: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E7Cu;
        goto label_351e7c;
    }
    ctx->pc = 0x351E74u;
    {
        const bool branch_taken_0x351e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E74u;
        // 0x351e78: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e74) {
            ctx->pc = 0x351E80u;
            goto label_351e80;
        }
    }
    ctx->pc = 0x351E7Cu;
label_351e7c:
    // 0x351e7c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x351e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_351e80:
    // 0x351e80: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_351e84:
    if (ctx->pc == 0x351E84u) {
        ctx->pc = 0x351E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E80u;
        // 0x351e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E88u;
        goto label_351e88;
    }
    ctx->pc = 0x351E80u;
    {
        const bool branch_taken_0x351e80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x351E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E80u;
        // 0x351e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e80) {
            ctx->pc = 0x351E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351e50;
        }
    }
    ctx->pc = 0x351E88u;
label_351e88:
    // 0x351e88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x351e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_351e8c:
    // 0x351e8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x351e8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_351e90:
    // 0x351e90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x351e90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_351e94:
    // 0x351e94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x351e94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_351e98:
    // 0x351e98: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x351e98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_351e9c:
    // 0x351e9c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x351e9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_351ea0:
    // 0x351ea0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x351ea0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_351ea4:
    // 0x351ea4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x351ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_351ea8:
    // 0x351ea8: 0x3e00008  jr          $ra
label_351eac:
    if (ctx->pc == 0x351EACu) {
        ctx->pc = 0x351EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EA8u;
        // 0x351eac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351EB0u;
        goto label_fallthrough_0x351ea8;
    }
    ctx->pc = 0x351EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EA8u;
        // 0x351eac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x351ea8:
    ctx->pc = 0x351EB0u;
}
