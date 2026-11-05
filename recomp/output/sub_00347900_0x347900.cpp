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

// Function: sub_00347900
// Address: 0x347900 - 0x3479f8
void sub_00347900_0x347900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347900_0x347900");
#endif

    switch (ctx->pc) {
        case 0x347924u: goto label_347924;
        case 0x347938u: goto label_347938;
        case 0x347948u: goto label_347948;
        case 0x347950u: goto label_347950;
        case 0x347958u: goto label_347958;
        case 0x347964u: goto label_347964;
        case 0x347998u: goto label_347998;
        case 0x3479b8u: goto label_3479b8;
        case 0x3479c0u: goto label_3479c0;
        case 0x3479d0u: goto label_3479d0;
        case 0x3479e0u: goto label_3479e0;
        default: break;
    }

    ctx->pc = 0x347900u;

    // 0x347900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x347900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x347904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x347904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x347908: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x347908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34790c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34790cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347910: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x347910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x347914: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x347914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347918: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x347918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34791c: 0xc0c3212  jal         func_30C848
    ctx->pc = 0x34791Cu;
    SET_GPR_U32(ctx, 31, 0x347924u);
    ctx->pc = 0x347920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34791Cu;
    // 0x347920: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x34791Cu, 0x347924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347924u;
label_347924:
    // 0x347924: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x347924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x347928: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x347928u;
    {
        const bool branch_taken_0x347928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347928u;
        // 0x34792c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347928) {
            ctx->pc = 0x34795Cu;
            goto label_34795c;
        }
    }
    ctx->pc = 0x347930u;
    // 0x347930: 0xc085d4e  jal         func_217538
    ctx->pc = 0x347930u;
    SET_GPR_U32(ctx, 31, 0x347938u);
    ctx->pc = 0x347934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347930u;
    // 0x347934: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x347930u, 0x347938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347938u;
label_347938:
    // 0x347938: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x347938u;
    {
        const bool branch_taken_0x347938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347938u;
        // 0x34793c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347938) {
            ctx->pc = 0x34795Cu;
            goto label_34795c;
        }
    }
    ctx->pc = 0x347940u;
    // 0x347940: 0xc0837b4  jal         func_20DED0
    ctx->pc = 0x347940u;
    SET_GPR_U32(ctx, 31, 0x347948u);
    ctx->pc = 0x347944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347940u;
    // 0x347944: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DED0u, 0x347940u, 0x347948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347948u;
label_347948:
    // 0x347948: 0xc0c3dc2  jal         func_30F708
    ctx->pc = 0x347948u;
    SET_GPR_U32(ctx, 31, 0x347950u);
    ctx->pc = 0x34794Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347948u;
    // 0x34794c: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F708u, 0x347948u, 0x347950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347950u;
label_347950:
    // 0x347950: 0xc0c47ba  jal         func_311EE8
    ctx->pc = 0x347950u;
    SET_GPR_U32(ctx, 31, 0x347958u);
    ctx->pc = 0x347954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347950u;
    // 0x347954: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311EE8u, 0x347950u, 0x347958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347958u;
label_347958:
    // 0x347958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34795c:
    // 0x34795c: 0xc0d2790  jal         func_349E40
    ctx->pc = 0x34795Cu;
    SET_GPR_U32(ctx, 31, 0x347964u);
    ctx->pc = 0x347960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34795Cu;
    // 0x347960: 0x32320001  andi        $s2, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x349E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349E40u, 0x34795Cu, 0x347964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347964u;
label_347964:
    // 0x347964: 0x920200f2  lbu         $v0, 0xF2($s0)
    ctx->pc = 0x347964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 242)));
    // 0x347968: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x347968u;
    {
        const bool branch_taken_0x347968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347968u;
        // 0x34796c: 0x26110078  addiu       $s1, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347968) {
            ctx->pc = 0x3479B8u;
            goto label_3479b8;
        }
    }
    ctx->pc = 0x347970u;
    // 0x347970: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x347970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x347974: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x347974u;
    {
        const bool branch_taken_0x347974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x347974) {
            ctx->pc = 0x3479B8u;
            goto label_3479b8;
        }
    }
    ctx->pc = 0x34797Cu;
    // 0x34797c: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x34797cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x347980: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x347980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x347984: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x347984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x347988: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x347988u;
    {
        const bool branch_taken_0x347988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x34798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347988u;
        // 0x34798c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347988) {
            ctx->pc = 0x3479B0u;
            goto label_3479b0;
        }
    }
    ctx->pc = 0x347990u;
    // 0x347990: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x347990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x347994: 0x0  nop
    ctx->pc = 0x347994u;
    // NOP
label_347998:
    // 0x347998: 0x0  nop
    ctx->pc = 0x347998u;
    // NOP
    // 0x34799c: 0x0  nop
    ctx->pc = 0x34799cu;
    // NOP
    // 0x3479a0: 0x0  nop
    ctx->pc = 0x3479a0u;
    // NOP
    // 0x3479a4: 0x0  nop
    ctx->pc = 0x3479a4u;
    // NOP
    // 0x3479a8: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3479A8u;
    {
        const bool branch_taken_0x3479a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3479ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3479A8u;
        // 0x3479ac: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3479a8) {
            ctx->pc = 0x347998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347998;
        }
    }
    ctx->pc = 0x3479B0u;
label_3479b0:
    // 0x3479b0: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3479B0u;
    SET_GPR_U32(ctx, 31, 0x3479B8u);
    ctx->pc = 0x3479B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3479B0u;
    // 0x3479b4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3479B0u, 0x3479B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3479B8u;
label_3479b8:
    // 0x3479b8: 0xc0d5818  jal         func_356060
    ctx->pc = 0x3479B8u;
    SET_GPR_U32(ctx, 31, 0x3479C0u);
    ctx->pc = 0x356060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356060u, 0x3479B8u, 0x3479C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3479C0u;
label_3479c0:
    // 0x3479c0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x3479c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3479c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3479c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3479c8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3479C8u;
    SET_GPR_U32(ctx, 31, 0x3479D0u);
    ctx->pc = 0x3479CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3479C8u;
    // 0x3479cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3479C8u, 0x3479D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3479D0u;
label_3479d0:
    // 0x3479d0: 0x52400004  beql        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3479D0u;
    {
        const bool branch_taken_0x3479d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3479d0) {
            ctx->pc = 0x3479D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3479D0u;
            // 0x3479d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3479E4u;
            goto label_3479e4;
        }
    }
    ctx->pc = 0x3479D8u;
    // 0x3479d8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3479D8u;
    SET_GPR_U32(ctx, 31, 0x3479E0u);
    ctx->pc = 0x3479DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3479D8u;
    // 0x3479dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3479D8u, 0x3479E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3479E0u;
label_3479e0:
    // 0x3479e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3479e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3479e4:
    // 0x3479e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3479e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3479e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3479e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3479ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3479ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3479f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3479F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3479F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3479F0u;
        // 0x3479f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3479F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3479F8u;
}
