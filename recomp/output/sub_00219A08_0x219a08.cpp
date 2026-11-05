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

// Function: sub_00219A08
// Address: 0x219a08 - 0x219b08
void sub_00219A08_0x219a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219A08_0x219a08");
#endif

    switch (ctx->pc) {
        case 0x219a28u: goto label_219a28;
        case 0x219a38u: goto label_219a38;
        case 0x219a54u: goto label_219a54;
        case 0x219a60u: goto label_219a60;
        case 0x219a70u: goto label_219a70;
        case 0x219a80u: goto label_219a80;
        case 0x219a88u: goto label_219a88;
        case 0x219a90u: goto label_219a90;
        case 0x219aa0u: goto label_219aa0;
        case 0x219ab0u: goto label_219ab0;
        case 0x219abcu: goto label_219abc;
        case 0x219accu: goto label_219acc;
        case 0x219ad4u: goto label_219ad4;
        case 0x219ae0u: goto label_219ae0;
        case 0x219aecu: goto label_219aec;
        default: break;
    }

    ctx->pc = 0x219a08u;

    // 0x219a08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x219a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x219a0c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x219a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x219a10: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x219a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x219a14: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x219a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x219a18: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x219a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x219a1c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x219a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x219a20: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x219A20u;
    SET_GPR_U32(ctx, 31, 0x219A28u);
    ctx->pc = 0x219A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A20u;
    // 0x219a24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x219A20u, 0x219A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A28u;
label_219a28:
    // 0x219a28: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x219a28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x219a2c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x219a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x219a30: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x219A30u;
    SET_GPR_U32(ctx, 31, 0x219A38u);
    ctx->pc = 0x219A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A30u;
    // 0x219a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x219A30u, 0x219A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A38u;
label_219a38:
    // 0x219a38: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x219a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x219a3c: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x219a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    // 0x219a40: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x219a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x219a44: 0x2472fe40  addiu       $s2, $v1, -0x1C0
    ctx->pc = 0x219a44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966848));
    // 0x219a48: 0x26103570  addiu       $s0, $s0, 0x3570
    ctx->pc = 0x219a48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13680));
    // 0x219a4c: 0xc09eb20  jal         func_27AC80
    ctx->pc = 0x219A4Cu;
    SET_GPR_U32(ctx, 31, 0x219A54u);
    ctx->pc = 0x219A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A4Cu;
    // 0x219a50: 0x2484edf0  addiu       $a0, $a0, -0x1210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC80u, 0x219A4Cu, 0x219A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A54u;
label_219a54:
    // 0x219a54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x219a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a58: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x219A58u;
    SET_GPR_U32(ctx, 31, 0x219A60u);
    ctx->pc = 0x219A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A58u;
    // 0x219a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x219A58u, 0x219A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A60u;
label_219a60:
    // 0x219a60: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x219a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x219a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a68: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x219A68u;
    SET_GPR_U32(ctx, 31, 0x219A70u);
    ctx->pc = 0x219A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A68u;
    // 0x219a6c: 0x24a5ee70  addiu       $a1, $a1, -0x1190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x219A68u, 0x219A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A70u;
label_219a70:
    // 0x219a70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a78: 0xc09dd98  jal         func_277660
    ctx->pc = 0x219A78u;
    SET_GPR_U32(ctx, 31, 0x219A80u);
    ctx->pc = 0x219A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A78u;
    // 0x219a7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x219A78u, 0x219A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A80u;
label_219a80:
    // 0x219a80: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x219A80u;
    {
        const bool branch_taken_0x219a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A80u;
        // 0x219a84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219a80) {
            ctx->pc = 0x219AB4u;
            goto label_219ab4;
        }
    }
    ctx->pc = 0x219A88u;
label_219a88:
    // 0x219a88: 0xc0833cc  jal         func_20CF30
    ctx->pc = 0x219A88u;
    SET_GPR_U32(ctx, 31, 0x219A90u);
    ctx->pc = 0x20CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CF30u, 0x219A88u, 0x219A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A90u;
label_219a90:
    // 0x219a90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x219a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a94: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x219a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219a98: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x219A98u;
    SET_GPR_U32(ctx, 31, 0x219AA0u);
    ctx->pc = 0x219A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A98u;
    // 0x219a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x219A98u, 0x219AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219AA0u;
label_219aa0:
    // 0x219aa0: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x219aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x219aa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219aa8: 0xc0f787c  jal         func_3DE1F0
    ctx->pc = 0x219AA8u;
    SET_GPR_U32(ctx, 31, 0x219AB0u);
    ctx->pc = 0x219AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AA8u;
    // 0x219aac: 0x248434e0  addiu       $a0, $a0, 0x34E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE1F0u, 0x219AA8u, 0x219AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219AB0u;
label_219ab0:
    // 0x219ab0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_219ab4:
    // 0x219ab4: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x219AB4u;
    SET_GPR_U32(ctx, 31, 0x219ABCu);
    ctx->pc = 0x219AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AB4u;
    // 0x219ab8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x219AB4u, 0x219ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219ABCu;
label_219abc:
    // 0x219abc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x219ABCu;
    {
        const bool branch_taken_0x219abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219abc) {
            ctx->pc = 0x219A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219a88;
        }
    }
    ctx->pc = 0x219AC4u;
    // 0x219ac4: 0xc09dd92  jal         func_277648
    ctx->pc = 0x219AC4u;
    SET_GPR_U32(ctx, 31, 0x219ACCu);
    ctx->pc = 0x219AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AC4u;
    // 0x219ac8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277648u, 0x219AC4u, 0x219ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219ACCu;
label_219acc:
    // 0x219acc: 0xc0866c2  jal         func_219B08
    ctx->pc = 0x219ACCu;
    SET_GPR_U32(ctx, 31, 0x219AD4u);
    ctx->pc = 0x219AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219ACCu;
    // 0x219ad0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219B08u, 0x219ACCu, 0x219AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219AD4u;
label_219ad4:
    // 0x219ad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ad8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x219AD8u;
    SET_GPR_U32(ctx, 31, 0x219AE0u);
    ctx->pc = 0x219ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AD8u;
    // 0x219adc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x219AD8u, 0x219AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219AE0u;
label_219ae0:
    // 0x219ae0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x219ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ae4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x219AE4u;
    SET_GPR_U32(ctx, 31, 0x219AECu);
    ctx->pc = 0x219AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AE4u;
    // 0x219ae8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x219AE4u, 0x219AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219AECu;
label_219aec:
    // 0x219aec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x219aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219af0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x219af0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x219af4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x219af4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x219af8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x219af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x219afc: 0x3e00008  jr          $ra
    ctx->pc = 0x219AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AFCu;
        // 0x219b00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219B04u;
    // 0x219b04: 0x0  nop
    ctx->pc = 0x219b04u;
    // NOP
    ctx->pc = 0x219b08u;
}
