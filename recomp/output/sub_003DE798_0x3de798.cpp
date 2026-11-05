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

// Function: sub_003DE798
// Address: 0x3de798 - 0x3de8a8
void sub_003DE798_0x3de798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE798_0x3de798");
#endif

    switch (ctx->pc) {
        case 0x3de7e0u: goto label_3de7e0;
        case 0x3de7ecu: goto label_3de7ec;
        case 0x3de820u: goto label_3de820;
        case 0x3de82cu: goto label_3de82c;
        case 0x3de844u: goto label_3de844;
        case 0x3de850u: goto label_3de850;
        case 0x3de85cu: goto label_3de85c;
        case 0x3de868u: goto label_3de868;
        default: break;
    }

    ctx->pc = 0x3de798u;

    // 0x3de798: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3de798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3de79c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3de79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3de7a0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3de7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3de7a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3de7a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de7a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3de7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3de7ac: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3de7acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de7b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3de7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3de7b4: 0x264213d0  addiu       $v0, $s2, 0x13D0
    ctx->pc = 0x3de7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5072));
    // 0x3de7b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3de7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3de7bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3de7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3de7c0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3de7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3de7c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3DE7C4u;
    {
        const bool branch_taken_0x3de7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE7C4u;
        // 0x3de7c8: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de7c4) {
            ctx->pc = 0x3DE7F8u;
            goto label_3de7f8;
        }
    }
    ctx->pc = 0x3DE7CCu;
    // 0x3de7cc: 0x265013e8  addiu       $s0, $s2, 0x13E8
    ctx->pc = 0x3de7ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5096));
    // 0x3de7d0: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DE7D0u;
    {
        const bool branch_taken_0x3de7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3DE7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE7D0u;
        // 0x3de7d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de7d0) {
            ctx->pc = 0x3DE7F8u;
            goto label_3de7f8;
        }
    }
    ctx->pc = 0x3DE7D8u;
    // 0x3de7d8: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x3de7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x3de7dc: 0x0  nop
    ctx->pc = 0x3de7dcu;
    // NOP
label_3de7e0:
    // 0x3de7e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3de7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de7e4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE7E4u;
    SET_GPR_U32(ctx, 31, 0x3DE7ECu);
    ctx->pc = 0x3DE7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE7E4u;
    // 0x3de7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE7E4u, 0x3DE7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE7ECu;
label_3de7ec:
    // 0x3de7ec: 0x0  nop
    ctx->pc = 0x3de7ecu;
    // NOP
    // 0x3de7f0: 0x1630fffb  bne         $s1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3DE7F0u;
    {
        const bool branch_taken_0x3de7f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x3DE7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE7F0u;
        // 0x3de7f4: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de7f0) {
            ctx->pc = 0x3DE7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3de7e0;
        }
    }
    ctx->pc = 0x3DE7F8u;
label_3de7f8:
    // 0x3de7f8: 0x265101d8  addiu       $s1, $s2, 0x1D8
    ctx->pc = 0x3de7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 472));
    // 0x3de7fc: 0x265301cc  addiu       $s3, $s2, 0x1CC
    ctx->pc = 0x3de7fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 460));
    // 0x3de800: 0x265401c0  addiu       $s4, $s2, 0x1C0
    ctx->pc = 0x3de800u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    // 0x3de804: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3DE804u;
    {
        const bool branch_taken_0x3de804 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE804u;
        // 0x3de808: 0x265501a4  addiu       $s5, $s2, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de804) {
            ctx->pc = 0x3DE838u;
            goto label_3de838;
        }
    }
    ctx->pc = 0x3DE80Cu;
    // 0x3de80c: 0x26501398  addiu       $s0, $s2, 0x1398
    ctx->pc = 0x3de80cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5016));
    // 0x3de810: 0x1230000a  beq         $s1, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3DE810u;
    {
        const bool branch_taken_0x3de810 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x3DE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE810u;
        // 0x3de814: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de810) {
            ctx->pc = 0x3DE83Cu;
            goto label_3de83c;
        }
    }
    ctx->pc = 0x3DE818u;
    // 0x3de818: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x3de818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x3de81c: 0x0  nop
    ctx->pc = 0x3de81cu;
    // NOP
label_3de820:
    // 0x3de820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3de820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de824: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE824u;
    SET_GPR_U32(ctx, 31, 0x3DE82Cu);
    ctx->pc = 0x3DE828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE824u;
    // 0x3de828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE824u, 0x3DE82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE82Cu;
label_3de82c:
    // 0x3de82c: 0x0  nop
    ctx->pc = 0x3de82cu;
    // NOP
    // 0x3de830: 0x1630fffb  bne         $s1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3DE830u;
    {
        const bool branch_taken_0x3de830 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x3DE834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE830u;
        // 0x3de834: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de830) {
            ctx->pc = 0x3DE820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3de820;
        }
    }
    ctx->pc = 0x3DE838u;
label_3de838:
    // 0x3de838: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3de838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3de83c:
    // 0x3de83c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE83Cu;
    SET_GPR_U32(ctx, 31, 0x3DE844u);
    ctx->pc = 0x3DE840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE83Cu;
    // 0x3de840: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE83Cu, 0x3DE844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE844u;
label_3de844:
    // 0x3de844: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3de844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de848: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE848u;
    SET_GPR_U32(ctx, 31, 0x3DE850u);
    ctx->pc = 0x3DE84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE848u;
    // 0x3de84c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE848u, 0x3DE850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE850u;
label_3de850:
    // 0x3de850: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3de850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de854: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE854u;
    SET_GPR_U32(ctx, 31, 0x3DE85Cu);
    ctx->pc = 0x3DE858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE854u;
    // 0x3de858: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE854u, 0x3DE85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE85Cu;
label_3de85c:
    // 0x3de85c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3de85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de860: 0xc0874f4  jal         func_21D3D0
    ctx->pc = 0x3DE860u;
    SET_GPR_U32(ctx, 31, 0x3DE868u);
    ctx->pc = 0x3DE864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE860u;
    // 0x3de864: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3D0u, 0x3DE860u, 0x3DE868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE868u;
label_3de868:
    // 0x3de868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3de868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3de86c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3de86cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3de870: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3de870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3de874: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3de874u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3de878: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3de878u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3de87c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3de87cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3de880: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3de880u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3de884: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3de884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3de888: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE888u;
        // 0x3de88c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE890u;
    // 0x3de890: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3de890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de894: 0x0  nop
    ctx->pc = 0x3de894u;
    // NOP
    // 0x3de898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3de898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de89c: 0x0  nop
    ctx->pc = 0x3de89cu;
    // NOP
    // 0x3de8a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3de8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3de8a4: 0x0  nop
    ctx->pc = 0x3de8a4u;
    // NOP
    ctx->pc = 0x3de8a8u;
}
