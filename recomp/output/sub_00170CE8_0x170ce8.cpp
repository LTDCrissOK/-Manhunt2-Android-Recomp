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

// Function: sub_00170CE8
// Address: 0x170ce8 - 0x170e88
void sub_00170CE8_0x170ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170CE8_0x170ce8");
#endif

    switch (ctx->pc) {
        case 0x170d14u: goto label_170d14;
        case 0x170d2cu: goto label_170d2c;
        case 0x170d40u: goto label_170d40;
        case 0x170d70u: goto label_170d70;
        case 0x170d8cu: goto label_170d8c;
        case 0x170da8u: goto label_170da8;
        case 0x170dc0u: goto label_170dc0;
        case 0x170e00u: goto label_170e00;
        case 0x170e0cu: goto label_170e0c;
        case 0x170e24u: goto label_170e24;
        case 0x170e2cu: goto label_170e2c;
        case 0x170e3cu: goto label_170e3c;
        case 0x170e4cu: goto label_170e4c;
        case 0x170e54u: goto label_170e54;
        case 0x170e6cu: goto label_170e6c;
        default: break;
    }

    ctx->pc = 0x170ce8u;

    // 0x170ce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170cec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x170cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x170cf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x170cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x170cf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x170cf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170cf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170cfc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x170cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x170d00: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x170d00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x170d04: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x170D04u;
    {
        const bool branch_taken_0x170d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D04u;
        // 0x170d08: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170d04) {
            ctx->pc = 0x170D1Cu;
            goto label_170d1c;
        }
    }
    ctx->pc = 0x170D0Cu;
    // 0x170d0c: 0xc05d3a2  jal         func_174E88
    ctx->pc = 0x170D0Cu;
    SET_GPR_U32(ctx, 31, 0x170D14u);
    ctx->pc = 0x174E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174E88u, 0x170D0Cu, 0x170D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170D14u;
label_170d14:
    // 0x170d14: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x170D14u;
    {
        const bool branch_taken_0x170d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170d14) {
            ctx->pc = 0x170E1Cu;
            goto label_170e1c;
        }
    }
    ctx->pc = 0x170D1Cu;
label_170d1c:
    // 0x170d1c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x170d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x170d20: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x170d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x170d24: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x170D24u;
    SET_GPR_U32(ctx, 31, 0x170D2Cu);
    ctx->pc = 0x170D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170D24u;
    // 0x170d28: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x170D24u, 0x170D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170D2Cu;
label_170d2c:
    // 0x170d2c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x170d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x170d30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170d34: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x170d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x170d38: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x170D38u;
    SET_GPR_U32(ctx, 31, 0x170D40u);
    ctx->pc = 0x170D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170D38u;
    // 0x170d3c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x170D38u, 0x170D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170D40u;
label_170d40:
    // 0x170d40: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x170D40u;
    {
        const bool branch_taken_0x170d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D40u;
        // 0x170d44: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170d40) {
            ctx->pc = 0x170E1Cu;
            goto label_170e1c;
        }
    }
    ctx->pc = 0x170D48u;
    // 0x170d48: 0x8e240264  lw          $a0, 0x264($s1)
    ctx->pc = 0x170d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x170d4c: 0x8c43a9d4  lw          $v1, -0x562C($v0)
    ctx->pc = 0x170d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945236)));
    // 0x170d50: 0x5483001c  bnel        $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x170D50u;
    {
        const bool branch_taken_0x170d50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x170d50) {
            ctx->pc = 0x170D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170D50u;
            // 0x170d54: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170DC4u;
            goto label_170dc4;
        }
    }
    ctx->pc = 0x170D58u;
    // 0x170d58: 0xae200264  sw          $zero, 0x264($s1)
    ctx->pc = 0x170d58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 0));
    // 0x170d5c: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x170d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x170d60: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x170D60u;
    {
        const bool branch_taken_0x170d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x170D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D60u;
        // 0x170d64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170d60) {
            ctx->pc = 0x170DC0u;
            goto label_170dc0;
        }
    }
    ctx->pc = 0x170D68u;
    // 0x170d68: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x170D68u;
    SET_GPR_U32(ctx, 31, 0x170D70u);
    ctx->pc = 0x170D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170D68u;
    // 0x170d6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x170D68u, 0x170D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170D70u;
label_170d70:
    // 0x170d70: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x170d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x170d74: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x170D74u;
    {
        const bool branch_taken_0x170d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x170D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170D74u;
        // 0x170d78: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170d74) {
            ctx->pc = 0x170DC0u;
            goto label_170dc0;
        }
    }
    ctx->pc = 0x170D7Cu;
    // 0x170d7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170d80: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x170d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x170d84: 0xc04fbb2  jal         func_13EEC8
    ctx->pc = 0x170D84u;
    SET_GPR_U32(ctx, 31, 0x170D8Cu);
    ctx->pc = 0x170D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170D84u;
    // 0x170d88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EEC8u, 0x170D84u, 0x170D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170D8Cu;
label_170d8c:
    // 0x170d8c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x170d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x170d90: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x170d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x170d94: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x170d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x170d98: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x170d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x170d9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170da0: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x170DA0u;
    SET_GPR_U32(ctx, 31, 0x170DA8u);
    ctx->pc = 0x170DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170DA0u;
    // 0x170da4: 0x8c500108  lw          $s0, 0x108($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x170DA0u, 0x170DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170DA8u;
label_170da8:
    // 0x170da8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x170da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x170dac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x170dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170db0: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x170db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x170db4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x170db4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170db8: 0xc04668a  jal         func_119A28
    ctx->pc = 0x170DB8u;
    SET_GPR_U32(ctx, 31, 0x170DC0u);
    ctx->pc = 0x170DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170DB8u;
    // 0x170dbc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x170DB8u, 0x170DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170DC0u;
label_170dc0:
    // 0x170dc0: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x170dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_170dc4:
    // 0x170dc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x170dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x170dc8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x170DC8u;
    {
        const bool branch_taken_0x170dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x170DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170DC8u;
        // 0x170dcc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170dc8) {
            ctx->pc = 0x170DE0u;
            goto label_170de0;
        }
    }
    ctx->pc = 0x170DD0u;
    // 0x170dd0: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x170DD0u;
    {
        const bool branch_taken_0x170dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x170dd0) {
            ctx->pc = 0x170DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170DD0u;
            // 0x170dd4: 0x9242001c  lbu         $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170E14u;
            goto label_170e14;
        }
    }
    ctx->pc = 0x170DD8u;
    // 0x170dd8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x170DD8u;
    {
        const bool branch_taken_0x170dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170dd8) {
            ctx->pc = 0x170E34u;
            goto label_170e34;
        }
    }
    ctx->pc = 0x170DE0u;
label_170de0:
    // 0x170de0: 0x9242001c  lbu         $v0, 0x1C($s2)
    ctx->pc = 0x170de0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x170de4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x170DE4u;
    {
        const bool branch_taken_0x170de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170de4) {
            ctx->pc = 0x170DF8u;
            goto label_170df8;
        }
    }
    ctx->pc = 0x170DECu;
    // 0x170dec: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x170decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x170df0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x170DF0u;
    {
        const bool branch_taken_0x170df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170df0) {
            ctx->pc = 0x170E34u;
            goto label_170e34;
        }
    }
    ctx->pc = 0x170DF8u;
label_170df8:
    // 0x170df8: 0xc05c728  jal         func_171CA0
    ctx->pc = 0x170DF8u;
    SET_GPR_U32(ctx, 31, 0x170E00u);
    ctx->pc = 0x170DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170DF8u;
    // 0x170dfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171CA0u, 0x170DF8u, 0x170E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E00u;
label_170e00:
    // 0x170e00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x170e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170e04: 0xc05c7f2  jal         func_171FC8
    ctx->pc = 0x170E04u;
    SET_GPR_U32(ctx, 31, 0x170E0Cu);
    ctx->pc = 0x170E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170E04u;
    // 0x170e08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171FC8u, 0x170E04u, 0x170E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E0Cu;
label_170e0c:
    // 0x170e0c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x170E0Cu;
    {
        const bool branch_taken_0x170e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E0Cu;
        // 0x170e10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e0c) {
            ctx->pc = 0x170E70u;
            goto label_170e70;
        }
    }
    ctx->pc = 0x170E14u;
label_170e14:
    // 0x170e14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x170E14u;
    {
        const bool branch_taken_0x170e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170e14) {
            ctx->pc = 0x170E34u;
            goto label_170e34;
        }
    }
    ctx->pc = 0x170E1Cu;
label_170e1c:
    // 0x170e1c: 0xc05c728  jal         func_171CA0
    ctx->pc = 0x170E1Cu;
    SET_GPR_U32(ctx, 31, 0x170E24u);
    ctx->pc = 0x170E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170E1Cu;
    // 0x170e20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171CA0u, 0x170E1Cu, 0x170E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E24u;
label_170e24:
    // 0x170e24: 0xc05c86a  jal         func_1721A8
    ctx->pc = 0x170E24u;
    SET_GPR_U32(ctx, 31, 0x170E2Cu);
    ctx->pc = 0x170E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170E24u;
    // 0x170e28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1721A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1721A8u, 0x170E24u, 0x170E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E2Cu;
label_170e2c:
    // 0x170e2c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x170E2Cu;
    {
        const bool branch_taken_0x170e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E2Cu;
        // 0x170e30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e2c) {
            ctx->pc = 0x170E70u;
            goto label_170e70;
        }
    }
    ctx->pc = 0x170E34u;
label_170e34:
    // 0x170e34: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x170E34u;
    SET_GPR_U32(ctx, 31, 0x170E3Cu);
    ctx->pc = 0x170E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170E34u;
    // 0x170e38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x170E34u, 0x170E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E3Cu;
label_170e3c:
    // 0x170e3c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x170E3Cu;
    {
        const bool branch_taken_0x170e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E3Cu;
        // 0x170e40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170e3c) {
            ctx->pc = 0x170E70u;
            goto label_170e70;
        }
    }
    ctx->pc = 0x170E44u;
    // 0x170e44: 0xc05c728  jal         func_171CA0
    ctx->pc = 0x170E44u;
    SET_GPR_U32(ctx, 31, 0x170E4Cu);
    ctx->pc = 0x170E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170E44u;
    // 0x170e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171CA0u, 0x170E44u, 0x170E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E4Cu;
label_170e4c:
    // 0x170e4c: 0xc05e43e  jal         func_1790F8
    ctx->pc = 0x170E4Cu;
    SET_GPR_U32(ctx, 31, 0x170E54u);
    ctx->pc = 0x170E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170E4Cu;
    // 0x170e50: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1790F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1790F8u, 0x170E4Cu, 0x170E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E54u;
label_170e54:
    // 0x170e54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x170e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170e58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x170e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170e5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x170e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170e60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x170e60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170e64: 0xc05c734  jal         func_171CD0
    ctx->pc = 0x170E64u;
    SET_GPR_U32(ctx, 31, 0x170E6Cu);
    ctx->pc = 0x170E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170E64u;
    // 0x170e68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171CD0u, 0x170E64u, 0x170E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E6Cu;
label_170e6c:
    // 0x170e6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_170e70:
    // 0x170e70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x170e70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170e74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x170e74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170e78: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x170e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x170e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x170E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170E7Cu;
        // 0x170e80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170E84u;
    // 0x170e84: 0x0  nop
    ctx->pc = 0x170e84u;
    // NOP
    ctx->pc = 0x170e88u;
}
