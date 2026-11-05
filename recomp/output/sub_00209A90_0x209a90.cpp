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

// Function: sub_00209A90
// Address: 0x209a90 - 0x209c00
void sub_00209A90_0x209a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209A90_0x209a90");
#endif

    switch (ctx->pc) {
        case 0x209ac8u: goto label_209ac8;
        case 0x209ad0u: goto label_209ad0;
        case 0x209ad8u: goto label_209ad8;
        case 0x209aecu: goto label_209aec;
        case 0x209af8u: goto label_209af8;
        case 0x209b08u: goto label_209b08;
        case 0x209b1cu: goto label_209b1c;
        case 0x209b28u: goto label_209b28;
        case 0x209b70u: goto label_209b70;
        case 0x209ba8u: goto label_209ba8;
        case 0x209bb8u: goto label_209bb8;
        case 0x209be4u: goto label_209be4;
        default: break;
    }

    ctx->pc = 0x209a90u;

    // 0x209a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209a98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209a9c: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x209a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x209aa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x209aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x209aa4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x209aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x209aa8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x209aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x209aac: 0x8e042b6c  lw          $a0, 0x2B6C($s0)
    ctx->pc = 0x209aacu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B6Cu));
    // 0x209ab0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x209ab0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x209ab4: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x209AB4u;
    {
        const bool branch_taken_0x209ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x209AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AB4u;
        // 0x209ab8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ab4) {
            ctx->pc = 0x209B78u;
            goto label_209b78;
        }
    }
    ctx->pc = 0x209ABCu;
    // 0x209abc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x209abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ac0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x209AC0u;
    {
        const bool branch_taken_0x209ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AC0u;
        // 0x209ac4: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ac0) {
            ctx->pc = 0x209B20u;
            goto label_209b20;
        }
    }
    ctx->pc = 0x209AC8u;
label_209ac8:
    // 0x209ac8: 0xc0827f4  jal         func_209FD0
    ctx->pc = 0x209AC8u;
    SET_GPR_U32(ctx, 31, 0x209AD0u);
    ctx->pc = 0x209ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AC8u;
    // 0x209acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209FD0u, 0x209AC8u, 0x209AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AD0u;
label_209ad0:
    // 0x209ad0: 0xc082916  jal         func_20A458
    ctx->pc = 0x209AD0u;
    SET_GPR_U32(ctx, 31, 0x209AD8u);
    ctx->pc = 0x209AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AD0u;
    // 0x209ad4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A458u, 0x209AD0u, 0x209AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AD8u;
label_209ad8:
    // 0x209ad8: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x209ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x209adc: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x209ADCu;
    {
        const bool branch_taken_0x209adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x209adc) {
            ctx->pc = 0x209B00u;
            goto label_209b00;
        }
    }
    ctx->pc = 0x209AE4u;
    // 0x209ae4: 0xc0827f4  jal         func_209FD0
    ctx->pc = 0x209AE4u;
    SET_GPR_U32(ctx, 31, 0x209AECu);
    ctx->pc = 0x209AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AE4u;
    // 0x209ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209FD0u, 0x209AE4u, 0x209AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AECu;
label_209aec:
    // 0x209aec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209af0: 0xc082918  jal         func_20A460
    ctx->pc = 0x209AF0u;
    SET_GPR_U32(ctx, 31, 0x209AF8u);
    ctx->pc = 0x209AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209AF0u;
    // 0x209af4: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A460u, 0x209AF0u, 0x209AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209AF8u;
label_209af8:
    // 0x209af8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x209AF8u;
    {
        const bool branch_taken_0x209af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AF8u;
        // 0x209afc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209af8) {
            ctx->pc = 0x209B20u;
            goto label_209b20;
        }
    }
    ctx->pc = 0x209B00u;
label_209b00:
    // 0x209b00: 0xc0827f4  jal         func_209FD0
    ctx->pc = 0x209B00u;
    SET_GPR_U32(ctx, 31, 0x209B08u);
    ctx->pc = 0x209B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B00u;
    // 0x209b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209FD0u, 0x209B00u, 0x209B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B08u;
label_209b08:
    // 0x209b08: 0x8e232b6c  lw          $v1, 0x2B6C($s1)
    ctx->pc = 0x209b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11116)));
    // 0x209b0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b10: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x209b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x209b14: 0xc082918  jal         func_20A460
    ctx->pc = 0x209B14u;
    SET_GPR_U32(ctx, 31, 0x209B1Cu);
    ctx->pc = 0x209B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B14u;
    // 0x209b18: 0x80650058  lb          $a1, 0x58($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A460u, 0x209B14u, 0x209B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B1Cu;
label_209b1c:
    // 0x209b1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x209b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_209b20:
    // 0x209b20: 0xc0827fa  jal         func_209FE8
    ctx->pc = 0x209B20u;
    SET_GPR_U32(ctx, 31, 0x209B28u);
    ctx->pc = 0x209FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209FE8u, 0x209B20u, 0x209B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B28u;
label_209b28:
    // 0x209b28: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x209b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x209b2c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x209B2Cu;
    {
        const bool branch_taken_0x209b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B2Cu;
        // 0x209b30: 0x8e222b6c  lw          $v0, 0x2B6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209b2c) {
            ctx->pc = 0x209AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209ac8;
        }
    }
    ctx->pc = 0x209B34u;
    // 0x209b34: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x209b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x209b38: 0x8e4793dc  lw          $a3, -0x6C24($s2)
    ctx->pc = 0x209b38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939612)));
    // 0x209b3c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x209b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x209b40: 0x80430004  lb          $v1, 0x4($v0)
    ctx->pc = 0x209b40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x209b44: 0x14640028  bne         $v1, $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x209B44u;
    {
        const bool branch_taken_0x209b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x209B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B44u;
        // 0x209b48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209b44) {
            ctx->pc = 0x209BE8u;
            goto label_209be8;
        }
    }
    ctx->pc = 0x209B4Cu;
    // 0x209b4c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x209b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x209b50: 0x904393d9  lbu         $v1, -0x6C27($v0)
    ctx->pc = 0x209b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F93D9u));
    // 0x209b54: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x209B54u;
    {
        const bool branch_taken_0x209b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B54u;
        // 0x209b58: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209b54) {
            ctx->pc = 0x209BE8u;
            goto label_209be8;
        }
    }
    ctx->pc = 0x209B5Cu;
    // 0x209b5c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x209b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x209b60: 0x8c4593e0  lw          $a1, -0x6C20($v0)
    ctx->pc = 0x209b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939616)));
    // 0x209b64: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x209b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b68: 0xc082794  jal         func_209E50
    ctx->pc = 0x209B68u;
    SET_GPR_U32(ctx, 31, 0x209B70u);
    ctx->pc = 0x209B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209B68u;
    // 0x209b6c: 0x24c693e8  addiu       $a2, $a2, -0x6C18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209E50u, 0x209B68u, 0x209B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B70u;
label_209b70:
    // 0x209b70: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x209B70u;
    {
        const bool branch_taken_0x209b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B70u;
        // 0x209b74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209b70) {
            ctx->pc = 0x209BE8u;
            goto label_209be8;
        }
    }
    ctx->pc = 0x209B78u;
label_209b78:
    // 0x209b78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x209b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209b7c: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x209B7Cu;
    {
        const bool branch_taken_0x209b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x209b7c) {
            ctx->pc = 0x209B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209B7Cu;
            // 0x209b80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209BE8u;
            goto label_209be8;
        }
    }
    ctx->pc = 0x209B84u;
    // 0x209b84: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x209b84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x209b88: 0x24021007  addiu       $v0, $zero, 0x1007
    ctx->pc = 0x209b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4103));
    // 0x209b8c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x209B8Cu;
    {
        const bool branch_taken_0x209b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x209B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B8Cu;
        // 0x209b90: 0x2402100f  addiu       $v0, $zero, 0x100F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209b8c) {
            ctx->pc = 0x209BE4u;
            goto label_209be4;
        }
    }
    ctx->pc = 0x209B94u;
    // 0x209b94: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x209B94u;
    {
        const bool branch_taken_0x209b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x209B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B94u;
        // 0x209b98: 0x248401c0  addiu       $a0, $a0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209b94) {
            ctx->pc = 0x209BB0u;
            goto label_209bb0;
        }
    }
    ctx->pc = 0x209B9Cu;
    // 0x209b9c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x209b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x209ba0: 0xc082502  jal         func_209408
    ctx->pc = 0x209BA0u;
    SET_GPR_U32(ctx, 31, 0x209BA8u);
    ctx->pc = 0x209BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BA0u;
    // 0x209ba4: 0x24840c98  addiu       $a0, $a0, 0xC98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209408u, 0x209BA0u, 0x209BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209BA8u;
label_209ba8:
    // 0x209ba8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x209BA8u;
    {
        const bool branch_taken_0x209ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BA8u;
        // 0x209bac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ba8) {
            ctx->pc = 0x209BE8u;
            goto label_209be8;
        }
    }
    ctx->pc = 0x209BB0u;
label_209bb0:
    // 0x209bb0: 0xc0efb2d  jal         func_3BECB4
    ctx->pc = 0x209BB0u;
    SET_GPR_U32(ctx, 31, 0x209BB8u);
    ctx->pc = 0x209BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BB0u;
    // 0x209bb4: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BECB4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BECB4u, 0x209BB0u, 0x209BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209BB8u;
label_209bb8:
    // 0x209bb8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x209BB8u;
    {
        const bool branch_taken_0x209bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209bb8) {
            ctx->pc = 0x209BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209BB8u;
            // 0x209bbc: 0x8e052b6c  lw          $a1, 0x2B6C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209BCCu;
            goto label_209bcc;
        }
    }
    ctx->pc = 0x209BC0u;
    // 0x209bc0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x209bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x209bc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x209bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x209bc8: 0x8e052b6c  lw          $a1, 0x2B6C($s0)
    ctx->pc = 0x209bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11116)));
label_209bcc:
    // 0x209bcc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x209bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x209bd0: 0x24840cb0  addiu       $a0, $a0, 0xCB0
    ctx->pc = 0x209bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3248));
    // 0x209bd4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x209bd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209bd8: 0x84a60002  lh          $a2, 0x2($a1)
    ctx->pc = 0x209bd8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x209bdc: 0xc082534  jal         func_2094D0
    ctx->pc = 0x209BDCu;
    SET_GPR_U32(ctx, 31, 0x209BE4u);
    ctx->pc = 0x209BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BDCu;
    // 0x209be0: 0x24a501c0  addiu       $a1, $a1, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2094D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2094D0u, 0x209BDCu, 0x209BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209BE4u;
label_209be4:
    // 0x209be4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_209be8:
    // 0x209be8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x209be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209bec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x209becu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209bf0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x209bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x209bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x209BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BF4u;
        // 0x209bf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209BFCu;
    // 0x209bfc: 0x0  nop
    ctx->pc = 0x209bfcu;
    // NOP
    ctx->pc = 0x209c00u;
}
