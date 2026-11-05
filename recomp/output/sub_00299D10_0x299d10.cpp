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

// Function: sub_00299D10
// Address: 0x299d10 - 0x299df0
void sub_00299D10_0x299d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299D10_0x299d10");
#endif

    switch (ctx->pc) {
        case 0x299d10u: goto label_299d10;
        case 0x299d14u: goto label_299d14;
        case 0x299d18u: goto label_299d18;
        case 0x299d1cu: goto label_299d1c;
        case 0x299d20u: goto label_299d20;
        case 0x299d24u: goto label_299d24;
        case 0x299d28u: goto label_299d28;
        case 0x299d2cu: goto label_299d2c;
        case 0x299d30u: goto label_299d30;
        case 0x299d34u: goto label_299d34;
        case 0x299d38u: goto label_299d38;
        case 0x299d3cu: goto label_299d3c;
        case 0x299d40u: goto label_299d40;
        case 0x299d44u: goto label_299d44;
        case 0x299d48u: goto label_299d48;
        case 0x299d4cu: goto label_299d4c;
        case 0x299d50u: goto label_299d50;
        case 0x299d54u: goto label_299d54;
        case 0x299d58u: goto label_299d58;
        case 0x299d5cu: goto label_299d5c;
        case 0x299d60u: goto label_299d60;
        case 0x299d64u: goto label_299d64;
        case 0x299d68u: goto label_299d68;
        case 0x299d6cu: goto label_299d6c;
        case 0x299d70u: goto label_299d70;
        case 0x299d74u: goto label_299d74;
        case 0x299d78u: goto label_299d78;
        case 0x299d7cu: goto label_299d7c;
        case 0x299d80u: goto label_299d80;
        case 0x299d84u: goto label_299d84;
        case 0x299d88u: goto label_299d88;
        case 0x299d8cu: goto label_299d8c;
        case 0x299d90u: goto label_299d90;
        case 0x299d94u: goto label_299d94;
        case 0x299d98u: goto label_299d98;
        case 0x299d9cu: goto label_299d9c;
        case 0x299da0u: goto label_299da0;
        case 0x299da4u: goto label_299da4;
        case 0x299da8u: goto label_299da8;
        case 0x299dacu: goto label_299dac;
        case 0x299db0u: goto label_299db0;
        case 0x299db4u: goto label_299db4;
        case 0x299db8u: goto label_299db8;
        case 0x299dbcu: goto label_299dbc;
        case 0x299dc0u: goto label_299dc0;
        case 0x299dc4u: goto label_299dc4;
        case 0x299dc8u: goto label_299dc8;
        case 0x299dccu: goto label_299dcc;
        case 0x299dd0u: goto label_299dd0;
        case 0x299dd4u: goto label_299dd4;
        case 0x299dd8u: goto label_299dd8;
        case 0x299ddcu: goto label_299ddc;
        case 0x299de0u: goto label_299de0;
        case 0x299de4u: goto label_299de4;
        case 0x299de8u: goto label_299de8;
        case 0x299decu: goto label_299dec;
        default: break;
    }

    ctx->pc = 0x299d10u;

label_299d10:
    // 0x299d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_299d14:
    // 0x299d14: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x299d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_299d18:
    // 0x299d18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x299d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_299d1c:
    // 0x299d1c: 0x24423028  addiu       $v0, $v0, 0x3028
    ctx->pc = 0x299d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12328));
label_299d20:
    // 0x299d20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x299d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_299d24:
    // 0x299d24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x299d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_299d28:
    // 0x299d28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x299d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_299d2c:
    // 0x299d2c: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x299d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
label_299d30:
    // 0x299d30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_299d34:
    // 0x299d34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x299d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_299d38:
    // 0x299d38: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x299d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_299d3c:
    // 0x299d3c: 0x8e26007c  lw          $a2, 0x7C($s1)
    ctx->pc = 0x299d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_299d40:
    // 0x299d40: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
label_299d44:
    if (ctx->pc == 0x299D44u) {
        ctx->pc = 0x299D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D40u;
        // 0x299d44: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299D48u;
        goto label_299d48;
    }
    ctx->pc = 0x299D40u;
    {
        const bool branch_taken_0x299d40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x299D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D40u;
        // 0x299d44: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d40) {
            ctx->pc = 0x299D94u;
            goto label_299d94;
        }
    }
    ctx->pc = 0x299D48u;
label_299d48:
    // 0x299d48: 0x8cc3fff0  lw          $v1, -0x10($a2)
    ctx->pc = 0x299d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967280)));
label_299d4c:
    // 0x299d4c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x299d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_299d50:
    // 0x299d50: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x299d50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_299d54:
    // 0x299d54: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x299d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_299d58:
    // 0x299d58: 0x50d0000c  beql        $a2, $s0, . + 4 + (0xC << 2)
label_299d5c:
    if (ctx->pc == 0x299D5Cu) {
        ctx->pc = 0x299D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D58u;
        // 0x299d5c: 0x8e24007c  lw          $a0, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299D60u;
        goto label_299d60;
    }
    ctx->pc = 0x299D58u;
    {
        const bool branch_taken_0x299d58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 16));
        if (branch_taken_0x299d58) {
            ctx->pc = 0x299D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299D58u;
            // 0x299d5c: 0x8e24007c  lw          $a0, 0x7C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299D8Cu;
            goto label_299d8c;
        }
    }
    ctx->pc = 0x299D60u;
label_299d60:
    // 0x299d60: 0x2610ff88  addiu       $s0, $s0, -0x78
    ctx->pc = 0x299d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967176));
label_299d64:
    // 0x299d64: 0x0  nop
    ctx->pc = 0x299d64u;
    // NOP
label_299d68:
    // 0x299d68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_299d6c:
    // 0x299d6c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x299d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_299d70:
    // 0x299d70: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x299d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_299d74:
    // 0x299d74: 0x60f809  jalr        $v1
label_299d78:
    if (ctx->pc == 0x299D78u) {
        ctx->pc = 0x299D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D74u;
        // 0x299d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299D7Cu;
        goto label_299d7c;
    }
    ctx->pc = 0x299D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x299D7Cu);
        ctx->pc = 0x299D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D74u;
        // 0x299d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299D74u, 0x299D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x299D7Cu;
label_299d7c:
    // 0x299d7c: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x299d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_299d80:
    // 0x299d80: 0x1450fff9  bne         $v0, $s0, . + 4 + (-0x7 << 2)
label_299d84:
    if (ctx->pc == 0x299D84u) {
        ctx->pc = 0x299D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D80u;
        // 0x299d84: 0x2610ff88  addiu       $s0, $s0, -0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299D88u;
        goto label_299d88;
    }
    ctx->pc = 0x299D80u;
    {
        const bool branch_taken_0x299d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x299D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D80u;
        // 0x299d84: 0x2610ff88  addiu       $s0, $s0, -0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d80) {
            ctx->pc = 0x299D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299d68;
        }
    }
    ctx->pc = 0x299D88u;
label_299d88:
    // 0x299d88: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x299d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_299d8c:
    // 0x299d8c: 0xc0f528a  jal         func_3D4A28
label_299d90:
    if (ctx->pc == 0x299D90u) {
        ctx->pc = 0x299D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D8Cu;
        // 0x299d90: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299D94u;
        goto label_299d94;
    }
    ctx->pc = 0x299D8Cu;
    SET_GPR_U32(ctx, 31, 0x299D94u);
    ctx->pc = 0x299D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299D8Cu;
    // 0x299d90: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x299D8Cu, 0x299D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299D94u;
label_299d94:
    // 0x299d94: 0x26423300  addiu       $v0, $s2, 0x3300
    ctx->pc = 0x299d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 13056));
label_299d98:
    // 0x299d98: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x299d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_299d9c:
    // 0x299d9c: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x299d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_299da0:
    // 0x299da0: 0xc0d7412  jal         func_35D048
label_299da4:
    if (ctx->pc == 0x299DA4u) {
        ctx->pc = 0x299DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DA0u;
        // 0x299da4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299DA8u;
        goto label_299da8;
    }
    ctx->pc = 0x299DA0u;
    SET_GPR_U32(ctx, 31, 0x299DA8u);
    ctx->pc = 0x299DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299DA0u;
    // 0x299da4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x299DA0u, 0x299DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299DA8u;
label_299da8:
    // 0x299da8: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x299da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_299dac:
    // 0x299dac: 0xc0d7412  jal         func_35D048
label_299db0:
    if (ctx->pc == 0x299DB0u) {
        ctx->pc = 0x299DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DACu;
        // 0x299db0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299DB4u;
        goto label_299db4;
    }
    ctx->pc = 0x299DACu;
    SET_GPR_U32(ctx, 31, 0x299DB4u);
    ctx->pc = 0x299DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299DACu;
    // 0x299db0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x299DACu, 0x299DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299DB4u;
label_299db4:
    // 0x299db4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x299db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_299db8:
    // 0x299db8: 0xc0d7412  jal         func_35D048
label_299dbc:
    if (ctx->pc == 0x299DBCu) {
        ctx->pc = 0x299DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DB8u;
        // 0x299dbc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299DC0u;
        goto label_299dc0;
    }
    ctx->pc = 0x299DB8u;
    SET_GPR_U32(ctx, 31, 0x299DC0u);
    ctx->pc = 0x299DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299DB8u;
    // 0x299dbc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x299DB8u, 0x299DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299DC0u;
label_299dc0:
    // 0x299dc0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x299dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_299dc4:
    // 0x299dc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_299dc8:
    if (ctx->pc == 0x299DC8u) {
        ctx->pc = 0x299DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DC4u;
        // 0x299dc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299DCCu;
        goto label_299dcc;
    }
    ctx->pc = 0x299DC4u;
    {
        const bool branch_taken_0x299dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DC4u;
        // 0x299dc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299dc4) {
            ctx->pc = 0x299DD8u;
            goto label_299dd8;
        }
    }
    ctx->pc = 0x299DCCu;
label_299dcc:
    // 0x299dcc: 0xc0f5222  jal         func_3D4888
label_299dd0:
    if (ctx->pc == 0x299DD0u) {
        ctx->pc = 0x299DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DCCu;
        // 0x299dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299DD4u;
        goto label_299dd4;
    }
    ctx->pc = 0x299DCCu;
    SET_GPR_U32(ctx, 31, 0x299DD4u);
    ctx->pc = 0x299DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299DCCu;
    // 0x299dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x299DCCu, 0x299DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299DD4u;
label_299dd4:
    // 0x299dd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_299dd8:
    // 0x299dd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x299dd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_299ddc:
    // 0x299ddc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x299ddcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_299de0:
    // 0x299de0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x299de0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_299de4:
    // 0x299de4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x299de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_299de8:
    // 0x299de8: 0x3e00008  jr          $ra
label_299dec:
    if (ctx->pc == 0x299DECu) {
        ctx->pc = 0x299DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DE8u;
        // 0x299dec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299DF0u;
        goto label_fallthrough_0x299de8;
    }
    ctx->pc = 0x299DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DE8u;
        // 0x299dec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x299de8:
    ctx->pc = 0x299DF0u;
}
