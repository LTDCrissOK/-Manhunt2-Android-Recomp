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

// Function: sub_00139C68
// Address: 0x139c68 - 0x139df8
void sub_00139C68_0x139c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139C68_0x139c68");
#endif

    switch (ctx->pc) {
        case 0x139c88u: goto label_139c88;
        case 0x139c98u: goto label_139c98;
        case 0x139cacu: goto label_139cac;
        case 0x139cecu: goto label_139cec;
        case 0x139d04u: goto label_139d04;
        case 0x139d1cu: goto label_139d1c;
        case 0x139d40u: goto label_139d40;
        case 0x139d54u: goto label_139d54;
        case 0x139d74u: goto label_139d74;
        case 0x139da0u: goto label_139da0;
        case 0x139db8u: goto label_139db8;
        case 0x139de0u: goto label_139de0;
        default: break;
    }

    ctx->pc = 0x139c68u;

    // 0x139c68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x139c6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x139c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x139c70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x139c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x139c74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x139c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x139c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x139c7c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x139c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x139c80: 0xc04eee8  jal         func_13BBA0
    ctx->pc = 0x139C80u;
    SET_GPR_U32(ctx, 31, 0x139C88u);
    ctx->pc = 0x139C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139C80u;
    // 0x139c84: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BBA0u, 0x139C80u, 0x139C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C88u;
label_139c88:
    // 0x139c88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x139C88u;
    {
        const bool branch_taken_0x139c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139C88u;
        // 0x139c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139c88) {
            ctx->pc = 0x139CA0u;
            goto label_139ca0;
        }
    }
    ctx->pc = 0x139C90u;
    // 0x139c90: 0xc04ef18  jal         func_13BC60
    ctx->pc = 0x139C90u;
    SET_GPR_U32(ctx, 31, 0x139C98u);
    ctx->pc = 0x139C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139C90u;
    // 0x139c94: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BC60u, 0x139C90u, 0x139C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C98u;
label_139c98:
    // 0x139c98: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x139C98u;
    {
        const bool branch_taken_0x139c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139C98u;
        // 0x139c9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139c98) {
            ctx->pc = 0x139DE4u;
            goto label_139de4;
        }
    }
    ctx->pc = 0x139CA0u;
label_139ca0:
    // 0x139ca0: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x139ca0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x139ca4: 0xc04e94c  jal         func_13A530
    ctx->pc = 0x139CA4u;
    SET_GPR_U32(ctx, 31, 0x139CACu);
    ctx->pc = 0x139CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139CA4u;
    // 0x139ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A530u, 0x139CA4u, 0x139CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139CACu;
label_139cac:
    // 0x139cac: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x139CACu;
    {
        const bool branch_taken_0x139cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139CACu;
        // 0x139cb0: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139cac) {
            ctx->pc = 0x139D48u;
            goto label_139d48;
        }
    }
    ctx->pc = 0x139CB4u;
    // 0x139cb4: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x139cb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x139cb8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x139cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x139cbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x139cbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139cc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x139cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x139cc4: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x139cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x139cc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x139cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x139ccc: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x139cccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139cd0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x139cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x139cd4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x139cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x139cd8: 0x8c84020c  lw          $a0, 0x20C($a0)
    ctx->pc = 0x139cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x139cdc: 0x50800041  beql        $a0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x139CDCu;
    {
        const bool branch_taken_0x139cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x139cdc) {
            ctx->pc = 0x139CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139CDCu;
            // 0x139ce0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139DE4u;
            goto label_139de4;
        }
    }
    ctx->pc = 0x139CE4u;
    // 0x139ce4: 0xc043996  jal         func_10E658
    ctx->pc = 0x139CE4u;
    SET_GPR_U32(ctx, 31, 0x139CECu);
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x139CE4u, 0x139CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139CECu;
label_139cec:
    // 0x139cec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x139CECu;
    {
        const bool branch_taken_0x139cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139CECu;
        // 0x139cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139cec) {
            ctx->pc = 0x139D0Cu;
            goto label_139d0c;
        }
    }
    ctx->pc = 0x139CF4u;
    // 0x139cf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139cf8: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x139cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x139cfc: 0xc04dbd4  jal         func_136F50
    ctx->pc = 0x139CFCu;
    SET_GPR_U32(ctx, 31, 0x139D04u);
    ctx->pc = 0x139D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139CFCu;
    // 0x139d00: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F50u, 0x139CFCu, 0x139D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D04u;
label_139d04:
    // 0x139d04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x139D04u;
    {
        const bool branch_taken_0x139d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D04u;
        // 0x139d08: 0x26429a08  addiu       $v0, $s2, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d04) {
            ctx->pc = 0x139D20u;
            goto label_139d20;
        }
    }
    ctx->pc = 0x139D0Cu;
label_139d0c:
    // 0x139d0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d10: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x139d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x139d14: 0xc04dbd4  jal         func_136F50
    ctx->pc = 0x139D14u;
    SET_GPR_U32(ctx, 31, 0x139D1Cu);
    ctx->pc = 0x139D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139D14u;
    // 0x139d18: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F50u, 0x139D14u, 0x139D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D1Cu;
label_139d1c:
    // 0x139d1c: 0x26429a08  addiu       $v0, $s2, -0x65F8
    ctx->pc = 0x139d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941192));
label_139d20:
    // 0x139d20: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x139d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x139d24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x139d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139d28: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x139d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x139d2c: 0x8e070ab0  lw          $a3, 0xAB0($s0)
    ctx->pc = 0x139d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2736)));
    // 0x139d30: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x139d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x139d34: 0x8c460108  lw          $a2, 0x108($v0)
    ctx->pc = 0x139d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x139d38: 0xc04668a  jal         func_119A28
    ctx->pc = 0x139D38u;
    SET_GPR_U32(ctx, 31, 0x139D40u);
    ctx->pc = 0x139D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139D38u;
    // 0x139d3c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x139D38u, 0x139D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D40u;
label_139d40:
    // 0x139d40: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x139D40u;
    {
        const bool branch_taken_0x139d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D40u;
        // 0x139d44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d40) {
            ctx->pc = 0x139DE4u;
            goto label_139de4;
        }
    }
    ctx->pc = 0x139D48u;
label_139d48:
    // 0x139d48: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x139d48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x139d4c: 0xc04e976  jal         func_13A5D8
    ctx->pc = 0x139D4Cu;
    SET_GPR_U32(ctx, 31, 0x139D54u);
    ctx->pc = 0x139D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139D4Cu;
    // 0x139d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A5D8u, 0x139D4Cu, 0x139D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D54u;
label_139d54:
    // 0x139d54: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x139D54u;
    {
        const bool branch_taken_0x139d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139d54) {
            ctx->pc = 0x139D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139D54u;
            // 0x139d58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x139DE4u;
            goto label_139de4;
        }
    }
    ctx->pc = 0x139D5Cu;
    // 0x139d5c: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x139d5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x139d60: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x139d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x139d64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x139d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x139d68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x139d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139d6c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x139D6Cu;
    SET_GPR_U32(ctx, 31, 0x139D74u);
    ctx->pc = 0x139D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139D6Cu;
    // 0x139d70: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x139D6Cu, 0x139D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D74u;
label_139d74:
    // 0x139d74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x139d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x139d78: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x139d78u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x139d7c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x139D7Cu;
    {
        const bool branch_taken_0x139d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139d7c) {
            ctx->pc = 0x139D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x139D7Cu;
            // 0x139d80: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x139D84u;
            goto label_139d84;
        }
    }
    ctx->pc = 0x139D84u;
label_139d84:
    // 0x139d84: 0x2010  mfhi        $a0
    ctx->pc = 0x139d84u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x139d88: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x139D88u;
    {
        const bool branch_taken_0x139d88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x139D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D88u;
        // 0x139d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d88) {
            ctx->pc = 0x139DA8u;
            goto label_139da8;
        }
    }
    ctx->pc = 0x139D90u;
    // 0x139d90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d94: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x139d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x139d98: 0xc04dbd4  jal         func_136F50
    ctx->pc = 0x139D98u;
    SET_GPR_U32(ctx, 31, 0x139DA0u);
    ctx->pc = 0x139D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139D98u;
    // 0x139d9c: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F50u, 0x139D98u, 0x139DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139DA0u;
label_139da0:
    // 0x139da0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x139DA0u;
    {
        const bool branch_taken_0x139da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DA0u;
        // 0x139da4: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139da0) {
            ctx->pc = 0x139DBCu;
            goto label_139dbc;
        }
    }
    ctx->pc = 0x139DA8u;
label_139da8:
    // 0x139da8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139dac: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x139dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x139db0: 0xc04dbd4  jal         func_136F50
    ctx->pc = 0x139DB0u;
    SET_GPR_U32(ctx, 31, 0x139DB8u);
    ctx->pc = 0x139DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139DB0u;
    // 0x139db4: 0x24070028  addiu       $a3, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F50u, 0x139DB0u, 0x139DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139DB8u;
label_139db8:
    // 0x139db8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x139db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_139dbc:
    // 0x139dbc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x139dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x139dc0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x139dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x139dc4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x139dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x139dc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x139dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139dcc: 0x8e070ab0  lw          $a3, 0xAB0($s0)
    ctx->pc = 0x139dccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2736)));
    // 0x139dd0: 0x8c460108  lw          $a2, 0x108($v0)
    ctx->pc = 0x139dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x139dd4: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x139dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x139dd8: 0xc04668a  jal         func_119A28
    ctx->pc = 0x139DD8u;
    SET_GPR_U32(ctx, 31, 0x139DE0u);
    ctx->pc = 0x139DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139DD8u;
    // 0x139ddc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x139DD8u, 0x139DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139DE0u;
label_139de0:
    // 0x139de0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x139de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_139de4:
    // 0x139de4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x139de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139de8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x139de8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139dec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x139decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139df0: 0x3e00008  jr          $ra
    ctx->pc = 0x139DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DF0u;
        // 0x139df4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139DF8u;
}
