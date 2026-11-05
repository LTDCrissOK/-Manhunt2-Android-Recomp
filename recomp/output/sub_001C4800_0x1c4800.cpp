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

// Function: sub_001C4800
// Address: 0x1c4800 - 0x1c48f8
void sub_001C4800_0x1c4800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4800_0x1c4800");
#endif

    switch (ctx->pc) {
        case 0x1c4844u: goto label_1c4844;
        case 0x1c486cu: goto label_1c486c;
        case 0x1c488cu: goto label_1c488c;
        case 0x1c48acu: goto label_1c48ac;
        case 0x1c48b8u: goto label_1c48b8;
        default: break;
    }

    ctx->pc = 0x1c4800u;

    // 0x1c4800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c4800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c4804: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c4804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1c4808: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c480c: 0x24421458  addiu       $v0, $v0, 0x1458
    ctx->pc = 0x1c480cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5208));
    // 0x1c4810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4814: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c4814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c4818: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c4818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c481c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c481cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c4820: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x1c4820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1c4824: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c4824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c4828: 0x26120040  addiu       $s2, $s0, 0x40
    ctx->pc = 0x1c4828u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c482c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c482cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c4830: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x1c4830u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c4834: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c4834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c4838: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c4838u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c483c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C483Cu;
    SET_GPR_U32(ctx, 31, 0x1C4844u);
    ctx->pc = 0x1C4840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C483Cu;
    // 0x1c4840: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C483Cu, 0x1C4844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4844u;
label_1c4844:
    // 0x1c4844: 0x3c130043  lui         $s3, 0x43
    ctx->pc = 0x1c4844u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)67 << 16));
    // 0x1c4848: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x1c4848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x1c484c: 0x26730f90  addiu       $s3, $s3, 0xF90
    ctx->pc = 0x1c484cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3984));
    // 0x1c4850: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1c4850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1c4854: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x1c4854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x1c4858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c485c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c485cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c4860: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c4860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c4864: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C4864u;
    SET_GPR_U32(ctx, 31, 0x1C486Cu);
    ctx->pc = 0x1C4868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4864u;
    // 0x1c4868: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C4864u, 0x1C486Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C486Cu;
label_1c486c:
    // 0x1c486c: 0xae330018  sw          $s3, 0x18($s1)
    ctx->pc = 0x1c486cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
    // 0x1c4870: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c4870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4874: 0xae340010  sw          $s4, 0x10($s1)
    ctx->pc = 0x1c4874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 20));
    // 0x1c4878: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1c4878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1c487c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1c487cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1c4880: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1c4880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1c4884: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C4884u;
    SET_GPR_U32(ctx, 31, 0x1C488Cu);
    ctx->pc = 0x1C4888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4884u;
    // 0x1c4888: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C4884u, 0x1C488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C488Cu;
label_1c488c:
    // 0x1c488c: 0xae530018  sw          $s3, 0x18($s2)
    ctx->pc = 0x1c488cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 19));
    // 0x1c4890: 0x240404d0  addiu       $a0, $zero, 0x4D0
    ctx->pc = 0x1c4890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
    // 0x1c4894: 0xae540010  sw          $s4, 0x10($s2)
    ctx->pc = 0x1c4894u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 20));
    // 0x1c4898: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1c4898u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x1c489c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1c489cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1c48a0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1c48a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1c48a4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1C48A4u;
    SET_GPR_U32(ctx, 31, 0x1C48ACu);
    ctx->pc = 0x1C48A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C48A4u;
    // 0x1c48a8: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1C48A4u, 0x1C48ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48ACu;
label_1c48ac:
    // 0x1c48ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c48acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c48b0: 0xc070f90  jal         func_1C3E40
    ctx->pc = 0x1C48B0u;
    SET_GPR_U32(ctx, 31, 0x1C48B8u);
    ctx->pc = 0x1C48B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C48B0u;
    // 0x1c48b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3E40u, 0x1C48B0u, 0x1C48B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48B8u;
label_1c48b8:
    // 0x1c48b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c48b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c48bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c48bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c48c0: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x1c48c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x1c48c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c48c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c48c8: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x1c48c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
    // 0x1c48cc: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x1c48ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x1c48d0: 0xae040068  sw          $a0, 0x68($s0)
    ctx->pc = 0x1c48d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 4));
    // 0x1c48d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c48d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c48d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c48d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c48dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c48dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c48e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c48e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c48e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c48e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c48e8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c48e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c48ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c48ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c48f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C48F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C48F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C48F0u;
        // 0x1c48f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C48F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C48F8u;
}
