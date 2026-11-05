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

// Function: sub_003DE8A8
// Address: 0x3de8a8 - 0x3de998
void sub_003DE8A8_0x3de8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE8A8_0x3de8a8");
#endif

    switch (ctx->pc) {
        case 0x3de8e0u: goto label_3de8e0;
        case 0x3de8ecu: goto label_3de8ec;
        case 0x3de904u: goto label_3de904;
        case 0x3de910u: goto label_3de910;
        case 0x3de91cu: goto label_3de91c;
        case 0x3de928u: goto label_3de928;
        case 0x3de934u: goto label_3de934;
        case 0x3de940u: goto label_3de940;
        case 0x3de94cu: goto label_3de94c;
        default: break;
    }

    ctx->pc = 0x3de8a8u;

    // 0x3de8a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3de8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3de8ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3de8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3de8b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3de8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3de8b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3de8b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de8b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3de8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3de8bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3de8bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de8c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3de8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3de8c4: 0x262201d8  addiu       $v0, $s1, 0x1D8
    ctx->pc = 0x3de8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
    // 0x3de8c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3DE8C8u;
    {
        const bool branch_taken_0x3de8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE8C8u;
        // 0x3de8cc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de8c8) {
            ctx->pc = 0x3DE8F8u;
            goto label_3de8f8;
        }
    }
    ctx->pc = 0x3DE8D0u;
    // 0x3de8d0: 0x263001f0  addiu       $s0, $s1, 0x1F0
    ctx->pc = 0x3de8d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
    // 0x3de8d4: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DE8D4u;
    {
        const bool branch_taken_0x3de8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3DE8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE8D4u;
        // 0x3de8d8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de8d4) {
            ctx->pc = 0x3DE8F8u;
            goto label_3de8f8;
        }
    }
    ctx->pc = 0x3DE8DCu;
    // 0x3de8dc: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x3de8dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_3de8e0:
    // 0x3de8e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3de8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de8e4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE8E4u;
    SET_GPR_U32(ctx, 31, 0x3DE8ECu);
    ctx->pc = 0x3DE8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE8E4u;
    // 0x3de8e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE8E4u, 0x3DE8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE8ECu;
label_3de8ec:
    // 0x3de8ec: 0x0  nop
    ctx->pc = 0x3de8ecu;
    // NOP
    // 0x3de8f0: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3DE8F0u;
    {
        const bool branch_taken_0x3de8f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x3DE8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE8F0u;
        // 0x3de8f4: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de8f0) {
            ctx->pc = 0x3DE8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3de8e0;
        }
    }
    ctx->pc = 0x3DE8F8u;
label_3de8f8:
    // 0x3de8f8: 0x262401d0  addiu       $a0, $s1, 0x1D0
    ctx->pc = 0x3de8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
    // 0x3de8fc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE8FCu;
    SET_GPR_U32(ctx, 31, 0x3DE904u);
    ctx->pc = 0x3DE900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE8FCu;
    // 0x3de900: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE8FCu, 0x3DE904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE904u;
label_3de904:
    // 0x3de904: 0x262401c8  addiu       $a0, $s1, 0x1C8
    ctx->pc = 0x3de904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 456));
    // 0x3de908: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE908u;
    SET_GPR_U32(ctx, 31, 0x3DE910u);
    ctx->pc = 0x3DE90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE908u;
    // 0x3de90c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE908u, 0x3DE910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE910u;
label_3de910:
    // 0x3de910: 0x262401c0  addiu       $a0, $s1, 0x1C0
    ctx->pc = 0x3de910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    // 0x3de914: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE914u;
    SET_GPR_U32(ctx, 31, 0x3DE91Cu);
    ctx->pc = 0x3DE918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE914u;
    // 0x3de918: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE914u, 0x3DE91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE91Cu;
label_3de91c:
    // 0x3de91c: 0x262401b8  addiu       $a0, $s1, 0x1B8
    ctx->pc = 0x3de91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 440));
    // 0x3de920: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE920u;
    SET_GPR_U32(ctx, 31, 0x3DE928u);
    ctx->pc = 0x3DE924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE920u;
    // 0x3de924: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE920u, 0x3DE928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE928u;
label_3de928:
    // 0x3de928: 0x262401a8  addiu       $a0, $s1, 0x1A8
    ctx->pc = 0x3de928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 424));
    // 0x3de92c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE92Cu;
    SET_GPR_U32(ctx, 31, 0x3DE934u);
    ctx->pc = 0x3DE930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE92Cu;
    // 0x3de930: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE92Cu, 0x3DE934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE934u;
label_3de934:
    // 0x3de934: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x3de934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x3de938: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE938u;
    SET_GPR_U32(ctx, 31, 0x3DE940u);
    ctx->pc = 0x3DE93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE938u;
    // 0x3de93c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE938u, 0x3DE940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE940u;
label_3de940:
    // 0x3de940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3de940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de944: 0xc0874f4  jal         func_21D3D0
    ctx->pc = 0x3DE944u;
    SET_GPR_U32(ctx, 31, 0x3DE94Cu);
    ctx->pc = 0x3DE948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE944u;
    // 0x3de948: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3D0u, 0x3DE944u, 0x3DE94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE94Cu;
label_3de94c:
    // 0x3de94c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3de94cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3de950: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3de950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3de954: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3de954u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3de958: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3de958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3de95c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3de95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3de960: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE960u;
        // 0x3de964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE968u;
    // 0x3de968: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3de968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de96c: 0x0  nop
    ctx->pc = 0x3de96cu;
    // NOP
    // 0x3de970: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3de970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de974: 0x0  nop
    ctx->pc = 0x3de974u;
    // NOP
    // 0x3de978: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3de978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de97c: 0x0  nop
    ctx->pc = 0x3de97cu;
    // NOP
    // 0x3de980: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3de980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de984: 0x0  nop
    ctx->pc = 0x3de984u;
    // NOP
    // 0x3de988: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3de988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de98c: 0x0  nop
    ctx->pc = 0x3de98cu;
    // NOP
    // 0x3de990: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3de990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de994: 0x0  nop
    ctx->pc = 0x3de994u;
    // NOP
    ctx->pc = 0x3de998u;
}
