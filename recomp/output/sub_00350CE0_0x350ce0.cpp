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

// Function: sub_00350CE0
// Address: 0x350ce0 - 0x350dc0
void sub_00350CE0_0x350ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350CE0_0x350ce0");
#endif

    switch (ctx->pc) {
        case 0x350d3cu: goto label_350d3c;
        case 0x350d48u: goto label_350d48;
        case 0x350d58u: goto label_350d58;
        case 0x350d6cu: goto label_350d6c;
        case 0x350d84u: goto label_350d84;
        case 0x350d90u: goto label_350d90;
        case 0x350da4u: goto label_350da4;
        default: break;
    }

    ctx->pc = 0x350ce0u;

    // 0x350ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350ce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350ce8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x350ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x350cec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x350cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x350cf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x350cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350cf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x350cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x350cf8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x350cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x350cfc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x350cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x350d00: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x350D00u;
    {
        const bool branch_taken_0x350d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x350D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350D00u;
        // 0x350d04: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350d00) {
            ctx->pc = 0x350D50u;
            goto label_350d50;
        }
    }
    ctx->pc = 0x350D08u;
    // 0x350d08: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x350d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x350d0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x350D0Cu;
    {
        const bool branch_taken_0x350d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350D0Cu;
        // 0x350d10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350d0c) {
            ctx->pc = 0x350D24u;
            goto label_350d24;
        }
    }
    ctx->pc = 0x350D14u;
    // 0x350d14: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x350D14u;
    {
        const bool branch_taken_0x350d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x350d14) {
            ctx->pc = 0x350D34u;
            goto label_350d34;
        }
    }
    ctx->pc = 0x350D1Cu;
    // 0x350d1c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x350D1Cu;
    {
        const bool branch_taken_0x350d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350D1Cu;
        // 0x350d20: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350d1c) {
            ctx->pc = 0x350D98u;
            goto label_350d98;
        }
    }
    ctx->pc = 0x350D24u;
label_350d24:
    // 0x350d24: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x350D24u;
    {
        const bool branch_taken_0x350d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x350d24) {
            ctx->pc = 0x350D7Cu;
            goto label_350d7c;
        }
    }
    ctx->pc = 0x350D2Cu;
    // 0x350d2c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x350D2Cu;
    {
        const bool branch_taken_0x350d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350D2Cu;
        // 0x350d30: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350d2c) {
            ctx->pc = 0x350D98u;
            goto label_350d98;
        }
    }
    ctx->pc = 0x350D34u;
label_350d34:
    // 0x350d34: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x350D34u;
    SET_GPR_U32(ctx, 31, 0x350D3Cu);
    ctx->pc = 0x350D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350D34u;
    // 0x350d38: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x350D34u, 0x350D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350D3Cu;
label_350d3c:
    // 0x350d3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x350d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350d40: 0xc0d1534  jal         func_3454D0
    ctx->pc = 0x350D40u;
    SET_GPR_U32(ctx, 31, 0x350D48u);
    ctx->pc = 0x350D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350D40u;
    // 0x350d44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3454D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3454D0u, 0x350D40u, 0x350D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350D48u;
label_350d48:
    // 0x350d48: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x350D48u;
    {
        const bool branch_taken_0x350d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350D48u;
        // 0x350d4c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350d48) {
            ctx->pc = 0x350D94u;
            goto label_350d94;
        }
    }
    ctx->pc = 0x350D50u;
label_350d50:
    // 0x350d50: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x350D50u;
    SET_GPR_U32(ctx, 31, 0x350D58u);
    ctx->pc = 0x350D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350D50u;
    // 0x350d54: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x350D50u, 0x350D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350D58u;
label_350d58:
    // 0x350d58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x350d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350d5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x350d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x350d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350d64: 0xc0d1534  jal         func_3454D0
    ctx->pc = 0x350D64u;
    SET_GPR_U32(ctx, 31, 0x350D6Cu);
    ctx->pc = 0x350D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350D64u;
    // 0x350d68: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3454D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3454D0u, 0x350D64u, 0x350D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350D6Cu;
label_350d6c:
    // 0x350d6c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x350d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x350d70: 0x246344d0  addiu       $v1, $v1, 0x44D0
    ctx->pc = 0x350d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17616));
    // 0x350d74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x350D74u;
    {
        const bool branch_taken_0x350d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350D74u;
        // 0x350d78: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350d74) {
            ctx->pc = 0x350D94u;
            goto label_350d94;
        }
    }
    ctx->pc = 0x350D7Cu;
label_350d7c:
    // 0x350d7c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x350D7Cu;
    SET_GPR_U32(ctx, 31, 0x350D84u);
    ctx->pc = 0x350D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350D7Cu;
    // 0x350d80: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x350D7Cu, 0x350D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350D84u;
label_350d84:
    // 0x350d84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x350d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350d88: 0xc0d4982  jal         func_352608
    ctx->pc = 0x350D88u;
    SET_GPR_U32(ctx, 31, 0x350D90u);
    ctx->pc = 0x350D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350D88u;
    // 0x350d8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352608u, 0x350D88u, 0x350D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350D90u;
label_350d90:
    // 0x350d90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x350d90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_350d94:
    // 0x350d94: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x350d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_350d98:
    // 0x350d98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x350d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350d9c: 0xc0fbc14  jal         func_3EF050
    ctx->pc = 0x350D9Cu;
    SET_GPR_U32(ctx, 31, 0x350DA4u);
    ctx->pc = 0x350DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350D9Cu;
    // 0x350da0: 0x2484be60  addiu       $a0, $a0, -0x41A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF050u, 0x350D9Cu, 0x350DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350DA4u;
label_350da4:
    // 0x350da4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x350da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350da8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x350da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350dac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x350dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x350db0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x350db0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350db4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x350db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x350db8: 0x3e00008  jr          $ra
    ctx->pc = 0x350DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350DB8u;
        // 0x350dbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350DC0u;
}
