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

// Function: sub_001D7AF0
// Address: 0x1d7af0 - 0x1d7c10
void sub_001D7AF0_0x1d7af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7AF0_0x1d7af0");
#endif

    switch (ctx->pc) {
        case 0x1d7b20u: goto label_1d7b20;
        case 0x1d7b2cu: goto label_1d7b2c;
        case 0x1d7b34u: goto label_1d7b34;
        case 0x1d7b44u: goto label_1d7b44;
        case 0x1d7b60u: goto label_1d7b60;
        case 0x1d7b74u: goto label_1d7b74;
        case 0x1d7b7cu: goto label_1d7b7c;
        case 0x1d7b84u: goto label_1d7b84;
        case 0x1d7b8cu: goto label_1d7b8c;
        case 0x1d7ba8u: goto label_1d7ba8;
        case 0x1d7bb0u: goto label_1d7bb0;
        case 0x1d7bb8u: goto label_1d7bb8;
        case 0x1d7bc4u: goto label_1d7bc4;
        case 0x1d7bd4u: goto label_1d7bd4;
        case 0x1d7bf0u: goto label_1d7bf0;
        default: break;
    }

    ctx->pc = 0x1d7af0u;

    // 0x1d7af0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x1d7af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x1d7af4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1d7af4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1d7af8: 0xffb10208  sd          $s1, 0x208($sp)
    ctx->pc = 0x1d7af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 17));
    // 0x1d7afc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d7afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b00: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x1d7b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d7b04: 0xffb00200  sd          $s0, 0x200($sp)
    ctx->pc = 0x1d7b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
    // 0x1d7b08: 0xffb20210  sd          $s2, 0x210($sp)
    ctx->pc = 0x1d7b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 18));
    // 0x1d7b0c: 0x24c690e0  addiu       $a2, $a2, -0x6F20
    ctx->pc = 0x1d7b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938848));
    // 0x1d7b10: 0xffbf0218  sd          $ra, 0x218($sp)
    ctx->pc = 0x1d7b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 31));
    // 0x1d7b14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d7b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b18: 0xc075e68  jal         func_1D79A0
    ctx->pc = 0x1D7B18u;
    SET_GPR_U32(ctx, 31, 0x1D7B20u);
    ctx->pc = 0x1D7B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B18u;
    // 0x1d7b1c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D79A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D79A0u, 0x1D7B18u, 0x1D7B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B20u;
label_1d7b20:
    // 0x1d7b20: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x1d7b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x1d7b24: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1D7B24u;
    SET_GPR_U32(ctx, 31, 0x1D7B2Cu);
    ctx->pc = 0x1D7B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B24u;
    // 0x1d7b28: 0x2484ec20  addiu       $a0, $a0, -0x13E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1D7B24u, 0x1D7B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B2Cu;
label_1d7b2c:
    // 0x1d7b2c: 0xc09dc80  jal         func_277200
    ctx->pc = 0x1D7B2Cu;
    SET_GPR_U32(ctx, 31, 0x1D7B34u);
    ctx->pc = 0x1D7B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B2Cu;
    // 0x1d7b30: 0x3a22021  addu        $a0, $sp, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277200u, 0x1D7B2Cu, 0x1D7B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B34u;
label_1d7b34:
    // 0x1d7b34: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1D7B34u;
    {
        const bool branch_taken_0x1d7b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B34u;
        // 0x1d7b38: 0xdfb00200  ld          $s0, 0x200($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b34) {
            ctx->pc = 0x1D7BFCu;
            goto label_1d7bfc;
        }
    }
    ctx->pc = 0x1D7B3Cu;
    // 0x1d7b3c: 0xc0b32e4  jal         func_2CCB90
    ctx->pc = 0x1D7B3Cu;
    SET_GPR_U32(ctx, 31, 0x1D7B44u);
    ctx->pc = 0x2CCB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCB90u, 0x1D7B3Cu, 0x1D7B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B44u;
label_1d7b44:
    // 0x1d7b44: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D7B44u;
    {
        const bool branch_taken_0x1d7b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B44u;
        // 0x1d7b48: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b44) {
            ctx->pc = 0x1D7B8Cu;
            goto label_1d7b8c;
        }
    }
    ctx->pc = 0x1D7B4Cu;
    // 0x1d7b4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d7b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b50: 0x26104ef0  addiu       $s0, $s0, 0x4EF0
    ctx->pc = 0x1d7b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20208));
    // 0x1d7b54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d7b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b58: 0xc0aecae  jal         func_2BB2B8
    ctx->pc = 0x1D7B58u;
    SET_GPR_U32(ctx, 31, 0x1D7B60u);
    ctx->pc = 0x1D7B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B58u;
    // 0x1d7b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB2B8u, 0x1D7B58u, 0x1D7B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B60u;
label_1d7b60:
    // 0x1d7b60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d7b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d7b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7b68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d7b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7b6c: 0xc0b3368  jal         func_2CCDA0
    ctx->pc = 0x1D7B6Cu;
    SET_GPR_U32(ctx, 31, 0x1D7B74u);
    ctx->pc = 0x1D7B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B6Cu;
    // 0x1d7b70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCDA0u, 0x1D7B6Cu, 0x1D7B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B74u;
label_1d7b74:
    // 0x1d7b74: 0xc0ae9f6  jal         func_2BA7D8
    ctx->pc = 0x1D7B74u;
    SET_GPR_U32(ctx, 31, 0x1D7B7Cu);
    ctx->pc = 0x1D7B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B74u;
    // 0x1d7b78: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA7D8u, 0x1D7B74u, 0x1D7B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B7Cu;
label_1d7b7c:
    // 0x1d7b7c: 0xc0ae94a  jal         func_2BA528
    ctx->pc = 0x1D7B7Cu;
    SET_GPR_U32(ctx, 31, 0x1D7B84u);
    ctx->pc = 0x1D7B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B7Cu;
    // 0x1d7b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA528u, 0x1D7B7Cu, 0x1D7B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B84u;
label_1d7b84:
    // 0x1d7b84: 0xc0b3360  jal         func_2CCD80
    ctx->pc = 0x1D7B84u;
    SET_GPR_U32(ctx, 31, 0x1D7B8Cu);
    ctx->pc = 0x2CCD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCD80u, 0x1D7B84u, 0x1D7B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B8Cu;
label_1d7b8c:
    // 0x1d7b8c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d7b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1d7b90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7b94: 0x24504d00  addiu       $s0, $v0, 0x4D00
    ctx->pc = 0x1d7b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19712));
    // 0x1d7b98: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x1d7b98u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
    // 0x1d7b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ba0: 0xc0ae360  jal         func_2B8D80
    ctx->pc = 0x1D7BA0u;
    SET_GPR_U32(ctx, 31, 0x1D7BA8u);
    ctx->pc = 0x1D7BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7BA0u;
    // 0x1d7ba4: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D80u, 0x1D7BA0u, 0x1D7BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7BA8u;
label_1d7ba8:
    // 0x1d7ba8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7BA8u;
    {
        const bool branch_taken_0x1d7ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7ba8) {
            ctx->pc = 0x1D7BCCu;
            goto label_1d7bcc;
        }
    }
    ctx->pc = 0x1D7BB0u;
label_1d7bb0:
    // 0x1d7bb0: 0xc0ae56e  jal         func_2B95B8
    ctx->pc = 0x1D7BB0u;
    SET_GPR_U32(ctx, 31, 0x1D7BB8u);
    ctx->pc = 0x1D7BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7BB0u;
    // 0x1d7bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B95B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B95B8u, 0x1D7BB0u, 0x1D7BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7BB8u;
label_1d7bb8:
    // 0x1d7bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7bbc: 0xc0ae360  jal         func_2B8D80
    ctx->pc = 0x1D7BBCu;
    SET_GPR_U32(ctx, 31, 0x1D7BC4u);
    ctx->pc = 0x1D7BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7BBCu;
    // 0x1d7bc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D80u, 0x1D7BBCu, 0x1D7BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7BC4u;
label_1d7bc4:
    // 0x1d7bc4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D7BC4u;
    {
        const bool branch_taken_0x1d7bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7bc4) {
            ctx->pc = 0x1D7BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7bb0;
        }
    }
    ctx->pc = 0x1D7BCCu;
label_1d7bcc:
    // 0x1d7bcc: 0xc075eba  jal         func_1D7AE8
    ctx->pc = 0x1D7BCCu;
    SET_GPR_U32(ctx, 31, 0x1D7BD4u);
    ctx->pc = 0x1D7AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7AE8u, 0x1D7BCCu, 0x1D7BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7BD4u;
label_1d7bd4:
    // 0x1d7bd4: 0x9223b44c  lbu         $v1, -0x4BB4($s1)
    ctx->pc = 0x1d7bd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294947916)));
    // 0x1d7bd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7bdc: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1d7bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1d7be0: 0xa222b44c  sb          $v0, -0x4BB4($s1)
    ctx->pc = 0x1d7be0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294947916), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d7be4: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x1d7be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x1d7be8: 0xc07f482  jal         func_1FD208
    ctx->pc = 0x1D7BE8u;
    SET_GPR_U32(ctx, 31, 0x1D7BF0u);
    ctx->pc = 0x1D7BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7BE8u;
    // 0x1d7bec: 0xa2438d50  sb          $v1, -0x72B0($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 4294937936), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD208u, 0x1D7BE8u, 0x1D7BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7BF0u;
label_1d7bf0:
    // 0x1d7bf0: 0x92428d50  lbu         $v0, -0x72B0($s2)
    ctx->pc = 0x1d7bf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294937936)));
    // 0x1d7bf4: 0xa222b44c  sb          $v0, -0x4BB4($s1)
    ctx->pc = 0x1d7bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294947916), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d7bf8: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x1d7bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_1d7bfc:
    // 0x1d7bfc: 0xdfb10208  ld          $s1, 0x208($sp)
    ctx->pc = 0x1d7bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1d7c00: 0xdfb20210  ld          $s2, 0x210($sp)
    ctx->pc = 0x1d7c00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1d7c04: 0xdfbf0218  ld          $ra, 0x218($sp)
    ctx->pc = 0x1d7c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x1d7c08: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C08u;
        // 0x1d7c0c: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7C10u;
}
