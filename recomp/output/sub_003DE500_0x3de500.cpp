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

// Function: sub_003DE500
// Address: 0x3de500 - 0x3de5f8
void sub_003DE500_0x3de500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE500_0x3de500");
#endif

    switch (ctx->pc) {
        case 0x3de548u: goto label_3de548;
        case 0x3de554u: goto label_3de554;
        case 0x3de588u: goto label_3de588;
        case 0x3de594u: goto label_3de594;
        case 0x3de5acu: goto label_3de5ac;
        case 0x3de5b8u: goto label_3de5b8;
        case 0x3de5c4u: goto label_3de5c4;
        case 0x3de5d0u: goto label_3de5d0;
        default: break;
    }

    ctx->pc = 0x3de500u;

    // 0x3de500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3de500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3de504: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3de504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3de508: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3de508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3de50c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3de50cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de510: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3de510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3de514: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3de514u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de518: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3de518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3de51c: 0x264213d0  addiu       $v0, $s2, 0x13D0
    ctx->pc = 0x3de51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5072));
    // 0x3de520: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3de520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3de524: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3de524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3de528: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3de528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3de52c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3DE52Cu;
    {
        const bool branch_taken_0x3de52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE52Cu;
        // 0x3de530: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de52c) {
            ctx->pc = 0x3DE560u;
            goto label_3de560;
        }
    }
    ctx->pc = 0x3DE534u;
    // 0x3de534: 0x265013e8  addiu       $s0, $s2, 0x13E8
    ctx->pc = 0x3de534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5096));
    // 0x3de538: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DE538u;
    {
        const bool branch_taken_0x3de538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3DE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE538u;
        // 0x3de53c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de538) {
            ctx->pc = 0x3DE560u;
            goto label_3de560;
        }
    }
    ctx->pc = 0x3DE540u;
    // 0x3de540: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x3de540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x3de544: 0x0  nop
    ctx->pc = 0x3de544u;
    // NOP
label_3de548:
    // 0x3de548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3de548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de54c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE54Cu;
    SET_GPR_U32(ctx, 31, 0x3DE554u);
    ctx->pc = 0x3DE550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE54Cu;
    // 0x3de550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE54Cu, 0x3DE554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE554u;
label_3de554:
    // 0x3de554: 0x0  nop
    ctx->pc = 0x3de554u;
    // NOP
    // 0x3de558: 0x1630fffb  bne         $s1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3DE558u;
    {
        const bool branch_taken_0x3de558 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x3DE55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE558u;
        // 0x3de55c: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de558) {
            ctx->pc = 0x3DE548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3de548;
        }
    }
    ctx->pc = 0x3DE560u;
label_3de560:
    // 0x3de560: 0x265101d8  addiu       $s1, $s2, 0x1D8
    ctx->pc = 0x3de560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 472));
    // 0x3de564: 0x265301cc  addiu       $s3, $s2, 0x1CC
    ctx->pc = 0x3de564u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 460));
    // 0x3de568: 0x265401c0  addiu       $s4, $s2, 0x1C0
    ctx->pc = 0x3de568u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    // 0x3de56c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3DE56Cu;
    {
        const bool branch_taken_0x3de56c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE56Cu;
        // 0x3de570: 0x265501a4  addiu       $s5, $s2, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 420));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de56c) {
            ctx->pc = 0x3DE5A0u;
            goto label_3de5a0;
        }
    }
    ctx->pc = 0x3DE574u;
    // 0x3de574: 0x26501398  addiu       $s0, $s2, 0x1398
    ctx->pc = 0x3de574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5016));
    // 0x3de578: 0x1230000a  beq         $s1, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3DE578u;
    {
        const bool branch_taken_0x3de578 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x3DE57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE578u;
        // 0x3de57c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de578) {
            ctx->pc = 0x3DE5A4u;
            goto label_3de5a4;
        }
    }
    ctx->pc = 0x3DE580u;
    // 0x3de580: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x3de580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x3de584: 0x0  nop
    ctx->pc = 0x3de584u;
    // NOP
label_3de588:
    // 0x3de588: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3de588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de58c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE58Cu;
    SET_GPR_U32(ctx, 31, 0x3DE594u);
    ctx->pc = 0x3DE590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE58Cu;
    // 0x3de590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE58Cu, 0x3DE594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE594u;
label_3de594:
    // 0x3de594: 0x0  nop
    ctx->pc = 0x3de594u;
    // NOP
    // 0x3de598: 0x1630fffb  bne         $s1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3DE598u;
    {
        const bool branch_taken_0x3de598 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x3DE59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE598u;
        // 0x3de59c: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de598) {
            ctx->pc = 0x3DE588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3de588;
        }
    }
    ctx->pc = 0x3DE5A0u;
label_3de5a0:
    // 0x3de5a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3de5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3de5a4:
    // 0x3de5a4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE5A4u;
    SET_GPR_U32(ctx, 31, 0x3DE5ACu);
    ctx->pc = 0x3DE5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE5A4u;
    // 0x3de5a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE5A4u, 0x3DE5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE5ACu;
label_3de5ac:
    // 0x3de5ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3de5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de5b0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE5B0u;
    SET_GPR_U32(ctx, 31, 0x3DE5B8u);
    ctx->pc = 0x3DE5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE5B0u;
    // 0x3de5b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE5B0u, 0x3DE5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE5B8u;
label_3de5b8:
    // 0x3de5b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3de5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de5bc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE5BCu;
    SET_GPR_U32(ctx, 31, 0x3DE5C4u);
    ctx->pc = 0x3DE5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE5BCu;
    // 0x3de5c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE5BCu, 0x3DE5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE5C4u;
label_3de5c4:
    // 0x3de5c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3de5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de5c8: 0xc0874f4  jal         func_21D3D0
    ctx->pc = 0x3DE5C8u;
    SET_GPR_U32(ctx, 31, 0x3DE5D0u);
    ctx->pc = 0x3DE5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE5C8u;
    // 0x3de5cc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3D0u, 0x3DE5C8u, 0x3DE5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE5D0u;
label_3de5d0:
    // 0x3de5d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3de5d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3de5d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3de5d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3de5d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3de5d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3de5dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3de5dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3de5e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3de5e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3de5e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3de5e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3de5e8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3de5e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3de5ec: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3de5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3de5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE5F0u;
        // 0x3de5f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE5F8u;
}
