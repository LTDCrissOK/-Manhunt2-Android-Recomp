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

// Function: sub_0030F840
// Address: 0x30f840 - 0x30f8f0
void sub_0030F840_0x30f840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F840_0x30f840");
#endif

    switch (ctx->pc) {
        case 0x30f878u: goto label_30f878;
        case 0x30f884u: goto label_30f884;
        case 0x30f8a8u: goto label_30f8a8;
        case 0x30f8b4u: goto label_30f8b4;
        case 0x30f8d0u: goto label_30f8d0;
        default: break;
    }

    ctx->pc = 0x30f840u;

    // 0x30f840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30f840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30f844: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30f844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30f848: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30f848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30f84c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30f84cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f850: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30f850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30f854: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x30f854u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f858: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30f858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30f85c: 0x26420580  addiu       $v0, $s2, 0x580
    ctx->pc = 0x30f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x30f860: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x30F860u;
    {
        const bool branch_taken_0x30f860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F860u;
        // 0x30f864: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f860) {
            ctx->pc = 0x30F890u;
            goto label_30f890;
        }
    }
    ctx->pc = 0x30F868u;
    // 0x30f868: 0x26500670  addiu       $s0, $s2, 0x670
    ctx->pc = 0x30f868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1648));
    // 0x30f86c: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30F86Cu;
    {
        const bool branch_taken_0x30f86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x30F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F86Cu;
        // 0x30f870: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f86c) {
            ctx->pc = 0x30F890u;
            goto label_30f890;
        }
    }
    ctx->pc = 0x30F874u;
    // 0x30f874: 0x2610ffe8  addiu       $s0, $s0, -0x18
    ctx->pc = 0x30f874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
label_30f878:
    // 0x30f878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30f878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f87c: 0xc0c9a46  jal         func_326918
    ctx->pc = 0x30F87Cu;
    SET_GPR_U32(ctx, 31, 0x30F884u);
    ctx->pc = 0x30F880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F87Cu;
    // 0x30f880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326918u, 0x30F87Cu, 0x30F884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F884u;
label_30f884:
    // 0x30f884: 0x0  nop
    ctx->pc = 0x30f884u;
    // NOP
    // 0x30f888: 0x5630fffb  bnel        $s1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30F888u;
    {
        const bool branch_taken_0x30f888 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x30f888) {
            ctx->pc = 0x30F88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F888u;
            // 0x30f88c: 0x2610ffe8  addiu       $s0, $s0, -0x18 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f878;
        }
    }
    ctx->pc = 0x30F890u;
label_30f890:
    // 0x30f890: 0x26510210  addiu       $s1, $s2, 0x210
    ctx->pc = 0x30f890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
    // 0x30f894: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x30F894u;
    {
        const bool branch_taken_0x30f894 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F894u;
        // 0x30f898: 0x32730001  andi        $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f894) {
            ctx->pc = 0x30F8C0u;
            goto label_30f8c0;
        }
    }
    ctx->pc = 0x30F89Cu;
    // 0x30f89c: 0x26500530  addiu       $s0, $s2, 0x530
    ctx->pc = 0x30f89cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1328));
    // 0x30f8a0: 0x12300007  beq         $s1, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30F8A0u;
    {
        const bool branch_taken_0x30f8a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x30F8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F8A0u;
        // 0x30f8a4: 0x2610ffb0  addiu       $s0, $s0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f8a0) {
            ctx->pc = 0x30F8C0u;
            goto label_30f8c0;
        }
    }
    ctx->pc = 0x30F8A8u;
label_30f8a8:
    // 0x30f8a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30f8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f8ac: 0xc0c374e  jal         func_30DD38
    ctx->pc = 0x30F8ACu;
    SET_GPR_U32(ctx, 31, 0x30F8B4u);
    ctx->pc = 0x30F8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F8ACu;
    // 0x30f8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DD38u, 0x30F8ACu, 0x30F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F8B4u;
label_30f8b4:
    // 0x30f8b4: 0x0  nop
    ctx->pc = 0x30f8b4u;
    // NOP
    // 0x30f8b8: 0x1630fffb  bne         $s1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30F8B8u;
    {
        const bool branch_taken_0x30f8b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x30F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F8B8u;
        // 0x30f8bc: 0x2610ffb0  addiu       $s0, $s0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f8b8) {
            ctx->pc = 0x30F8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f8a8;
        }
    }
    ctx->pc = 0x30F8C0u;
label_30f8c0:
    // 0x30f8c0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x30F8C0u;
    {
        const bool branch_taken_0x30f8c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F8C0u;
        // 0x30f8c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f8c0) {
            ctx->pc = 0x30F8D4u;
            goto label_30f8d4;
        }
    }
    ctx->pc = 0x30F8C8u;
    // 0x30f8c8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x30F8C8u;
    SET_GPR_U32(ctx, 31, 0x30F8D0u);
    ctx->pc = 0x30F8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F8C8u;
    // 0x30f8cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x30F8C8u, 0x30F8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F8D0u;
label_30f8d0:
    // 0x30f8d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30f8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30f8d4:
    // 0x30f8d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30f8d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30f8d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30f8d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f8dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30f8dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30f8e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30f8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30f8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x30F8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F8E4u;
        // 0x30f8e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F8ECu;
    // 0x30f8ec: 0x0  nop
    ctx->pc = 0x30f8ecu;
    // NOP
    ctx->pc = 0x30f8f0u;
}
