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

// Function: sub_00132CA8
// Address: 0x132ca8 - 0x132db0
void sub_00132CA8_0x132ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132CA8_0x132ca8");
#endif

    switch (ctx->pc) {
        case 0x132cd8u: goto label_132cd8;
        case 0x132cf4u: goto label_132cf4;
        case 0x132d04u: goto label_132d04;
        case 0x132d18u: goto label_132d18;
        case 0x132d24u: goto label_132d24;
        case 0x132d40u: goto label_132d40;
        case 0x132d54u: goto label_132d54;
        case 0x132d5cu: goto label_132d5c;
        case 0x132d88u: goto label_132d88;
        case 0x132d94u: goto label_132d94;
        default: break;
    }

    ctx->pc = 0x132ca8u;

    // 0x132ca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132cac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132cb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132cb4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x132cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132cb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x132cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x132cbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x132cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132cc0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x132cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x132cc4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x132cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x132cc8: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x132CC8u;
    {
        const bool branch_taken_0x132cc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x132CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CC8u;
        // 0x132ccc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132cc8) {
            ctx->pc = 0x132D2Cu;
            goto label_132d2c;
        }
    }
    ctx->pc = 0x132CD0u;
    // 0x132cd0: 0xc045616  jal         func_115858
    ctx->pc = 0x132CD0u;
    SET_GPR_U32(ctx, 31, 0x132CD8u);
    ctx->pc = 0x115858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115858u, 0x132CD0u, 0x132CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132CD8u;
label_132cd8:
    // 0x132cd8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x132cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x132cdc: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x132CDCu;
    {
        const bool branch_taken_0x132cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x132cdc) {
            ctx->pc = 0x132CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132CDCu;
            // 0x132ce0: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132D30u;
            goto label_132d30;
        }
    }
    ctx->pc = 0x132CE4u;
    // 0x132ce4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x132ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x132ce8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x132ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132cec: 0xc04b4bc  jal         func_12D2F0
    ctx->pc = 0x132CECu;
    SET_GPR_U32(ctx, 31, 0x132CF4u);
    ctx->pc = 0x132CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132CECu;
    // 0x132cf0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D2F0u, 0x132CECu, 0x132CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132CF4u;
label_132cf4:
    // 0x132cf4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x132CF4u;
    {
        const bool branch_taken_0x132cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132cf4) {
            ctx->pc = 0x132CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132CF4u;
            // 0x132cf8: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132D30u;
            goto label_132d30;
        }
    }
    ctx->pc = 0x132CFCu;
    // 0x132cfc: 0xc04561a  jal         func_115868
    ctx->pc = 0x132CFCu;
    SET_GPR_U32(ctx, 31, 0x132D04u);
    ctx->pc = 0x132D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132CFCu;
    // 0x132d00: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115868u, 0x132CFCu, 0x132D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D04u;
label_132d04:
    // 0x132d04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x132d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d08: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x132d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x132d0c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x132d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x132d10: 0xc04b4a2  jal         func_12D288
    ctx->pc = 0x132D10u;
    SET_GPR_U32(ctx, 31, 0x132D18u);
    ctx->pc = 0x132D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132D10u;
    // 0x132d14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D288u, 0x132D10u, 0x132D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D18u;
label_132d18:
    // 0x132d18: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x132d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x132d1c: 0xc043be8  jal         func_10EFA0
    ctx->pc = 0x132D1Cu;
    SET_GPR_U32(ctx, 31, 0x132D24u);
    ctx->pc = 0x132D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132D1Cu;
    // 0x132d20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EFA0u, 0x132D1Cu, 0x132D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D24u;
label_132d24:
    // 0x132d24: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x132D24u;
    {
        const bool branch_taken_0x132d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D24u;
        // 0x132d28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132d24) {
            ctx->pc = 0x132D98u;
            goto label_132d98;
        }
    }
    ctx->pc = 0x132D2Cu;
label_132d2c:
    // 0x132d2c: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x132d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_132d30:
    // 0x132d30: 0x50800019  beql        $a0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x132D30u;
    {
        const bool branch_taken_0x132d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x132d30) {
            ctx->pc = 0x132D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132D30u;
            // 0x132d34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132D98u;
            goto label_132d98;
        }
    }
    ctx->pc = 0x132D38u;
    // 0x132d38: 0xc045616  jal         func_115858
    ctx->pc = 0x132D38u;
    SET_GPR_U32(ctx, 31, 0x132D40u);
    ctx->pc = 0x115858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115858u, 0x132D38u, 0x132D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D40u;
label_132d40:
    // 0x132d40: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x132d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x132d44: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x132D44u;
    {
        const bool branch_taken_0x132d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x132d44) {
            ctx->pc = 0x132D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132D44u;
            // 0x132d48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132D98u;
            goto label_132d98;
        }
    }
    ctx->pc = 0x132D4Cu;
    // 0x132d4c: 0xc0456b4  jal         func_115AD0
    ctx->pc = 0x132D4Cu;
    SET_GPR_U32(ctx, 31, 0x132D54u);
    ctx->pc = 0x132D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132D4Cu;
    // 0x132d50: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AD0u, 0x132D4Cu, 0x132D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D54u;
label_132d54:
    // 0x132d54: 0xc046356  jal         func_118D58
    ctx->pc = 0x132D54u;
    SET_GPR_U32(ctx, 31, 0x132D5Cu);
    ctx->pc = 0x132D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132D54u;
    // 0x132d58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D58u, 0x132D54u, 0x132D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D5Cu;
label_132d5c:
    // 0x132d5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x132d5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d60: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x132D60u;
    {
        const bool branch_taken_0x132d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132d60) {
            ctx->pc = 0x132D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132D60u;
            // 0x132d64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132D98u;
            goto label_132d98;
        }
    }
    ctx->pc = 0x132D68u;
    // 0x132d68: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x132d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x132d6c: 0x1450000a  bne         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x132D6Cu;
    {
        const bool branch_taken_0x132d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x132D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D6Cu;
        // 0x132d70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132d6c) {
            ctx->pc = 0x132D98u;
            goto label_132d98;
        }
    }
    ctx->pc = 0x132D74u;
    // 0x132d74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x132d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x132d78: 0x54520008  bnel        $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x132D78u;
    {
        const bool branch_taken_0x132d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x132d78) {
            ctx->pc = 0x132D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132D78u;
            // 0x132d7c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132D9Cu;
            goto label_132d9c;
        }
    }
    ctx->pc = 0x132D80u;
    // 0x132d80: 0xc04561a  jal         func_115868
    ctx->pc = 0x132D80u;
    SET_GPR_U32(ctx, 31, 0x132D88u);
    ctx->pc = 0x132D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132D80u;
    // 0x132d84: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115868u, 0x132D80u, 0x132D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D88u;
label_132d88:
    // 0x132d88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d8c: 0xc04cc3c  jal         func_1330F0
    ctx->pc = 0x132D8Cu;
    SET_GPR_U32(ctx, 31, 0x132D94u);
    ctx->pc = 0x132D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132D8Cu;
    // 0x132d90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1330F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1330F0u, 0x132D8Cu, 0x132D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D94u;
label_132d94:
    // 0x132d94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132d94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132d98:
    // 0x132d98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x132d98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_132d9c:
    // 0x132d9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x132d9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132da0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x132da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x132da4: 0x3e00008  jr          $ra
    ctx->pc = 0x132DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132DA4u;
        // 0x132da8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132DACu;
    // 0x132dac: 0x0  nop
    ctx->pc = 0x132dacu;
    // NOP
    ctx->pc = 0x132db0u;
}
