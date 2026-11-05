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

// Function: sub_002D58B0
// Address: 0x2d58b0 - 0x2d59a8
void sub_002D58B0_0x2d58b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D58B0_0x2d58b0");
#endif

    switch (ctx->pc) {
        case 0x2d5910u: goto label_2d5910;
        case 0x2d5950u: goto label_2d5950;
        case 0x2d595cu: goto label_2d595c;
        default: break;
    }

    ctx->pc = 0x2d58b0u;

    // 0x2d58b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d58b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d58b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d58b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d58b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d58b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d58bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d58bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d58c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d58c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d58c4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d58c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2d58c8: 0x24040118  addiu       $a0, $zero, 0x118
    ctx->pc = 0x2d58c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x2d58cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d58ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d58d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d58d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d58d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d58d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d58d8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d58d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d58dc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2d58dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2d58e0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d58e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d58e4: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x2d58e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2d58e8: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2d58e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2d58ec: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2d58ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d58f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d58f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d58f4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2d58f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d58f8: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x2d58f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d58fc: 0x1a80001e  blez        $s4, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D58FCu;
    {
        const bool branch_taken_0x2d58fc = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2D5900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D58FCu;
        // 0x2d5900: 0x24560018  addiu       $s6, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d58fc) {
            ctx->pc = 0x2D5978u;
            goto label_2d5978;
        }
    }
    ctx->pc = 0x2D5904u;
    // 0x2d5904: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x2d5904u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5908: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x2d5908u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2d590c: 0xb5102a  slt         $v0, $a1, $s5
    ctx->pc = 0x2d590cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_2d5910:
    // 0x2d5910: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5910u;
    {
        const bool branch_taken_0x2d5910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5910u;
        // 0x2d5914: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5910) {
            ctx->pc = 0x2D5924u;
            goto label_2d5924;
        }
    }
    ctx->pc = 0x2D5918u;
    // 0x2d5918: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2d5918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2d591c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D591Cu;
    {
        const bool branch_taken_0x2d591c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D591Cu;
        // 0x2d5920: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d591c) {
            ctx->pc = 0x2D5928u;
            goto label_2d5928;
        }
    }
    ctx->pc = 0x2D5924u;
label_2d5924:
    // 0x2d5924: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x2d5924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_2d5928:
    // 0x2d5928: 0x571018  mult        $v0, $v0, $s7
    ctx->pc = 0x2d5928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d592c: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x2d592cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2d5930: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d5930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d5934: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2d5934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d5938: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d5938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d593c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D593Cu;
    {
        const bool branch_taken_0x2d593c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D5940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D593Cu;
        // 0x2d5940: 0x24b20001  addiu       $s2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d593c) {
            ctx->pc = 0x2D5968u;
            goto label_2d5968;
        }
    }
    ctx->pc = 0x2D5944u;
    // 0x2d5944: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d5944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d5948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d594c: 0x0  nop
    ctx->pc = 0x2d594cu;
    // NOP
label_2d5950:
    // 0x2d5950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5954: 0xc0b4f90  jal         func_2D3E40
    ctx->pc = 0x2D5954u;
    SET_GPR_U32(ctx, 31, 0x2D595Cu);
    ctx->pc = 0x2D5958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5954u;
    // 0x2d5958: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3E40u, 0x2D5954u, 0x2D595Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D595Cu;
label_2d595c:
    // 0x2d595c: 0x0  nop
    ctx->pc = 0x2d595cu;
    // NOP
    // 0x2d5960: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D5960u;
    {
        const bool branch_taken_0x2d5960 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5960u;
        // 0x2d5964: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5960) {
            ctx->pc = 0x2D5950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5950;
        }
    }
    ctx->pc = 0x2D5968u;
label_2d5968:
    // 0x2d5968: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d5968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d596c: 0xb4102a  slt         $v0, $a1, $s4
    ctx->pc = 0x2d596cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2d5970: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2D5970u;
    {
        const bool branch_taken_0x2d5970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5970u;
        // 0x2d5974: 0xb5102a  slt         $v0, $a1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5970) {
            ctx->pc = 0x2D5910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5910;
        }
    }
    ctx->pc = 0x2D5978u;
label_2d5978:
    // 0x2d5978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d5978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d597c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d597cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d5980: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d5980u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5984: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d5984u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5988: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d5988u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d598c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d598cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5990: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d5990u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5994: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d5994u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d5998: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d5998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d599c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D599Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D59A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D599Cu;
        // 0x2d59a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D599Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D59A4u;
    // 0x2d59a4: 0x0  nop
    ctx->pc = 0x2d59a4u;
    // NOP
    ctx->pc = 0x2d59a8u;
}
