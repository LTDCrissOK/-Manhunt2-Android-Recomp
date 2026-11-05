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

// Function: sub_003E07A8
// Address: 0x3e07a8 - 0x3e0860
void sub_003E07A8_0x3e07a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E07A8_0x3e07a8");
#endif

    switch (ctx->pc) {
        case 0x3e07f8u: goto label_3e07f8;
        case 0x3e082cu: goto label_3e082c;
        default: break;
    }

    ctx->pc = 0x3e07a8u;

    // 0x3e07a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e07a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e07ac: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3e07acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3e07b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e07b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e07b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3e07b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3e07b8: 0xb32823  subu        $a1, $a1, $s3
    ctx->pc = 0x3e07b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x3e07bc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3e07bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3e07c0: 0x590c3  sra         $s2, $a1, 3
    ctx->pc = 0x3e07c0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 3));
    // 0x3e07c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3e07c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3e07c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3e07c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3e07cc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3e07ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e07d0: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x3e07d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e07d4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3E07D4u;
    {
        const bool branch_taken_0x3e07d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E07D4u;
        // 0x3e07d8: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e07d4) {
            ctx->pc = 0x3E083Cu;
            goto label_3e083c;
        }
    }
    ctx->pc = 0x3E07DCu;
    // 0x3e07dc: 0x2642fffe  addiu       $v0, $s2, -0x2
    ctx->pc = 0x3e07dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x3e07e0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x3e07e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3e07e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e07e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e07e8: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x3e07e8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3e07ec: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x3e07ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x3e07f0: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x3e07f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3e07f4: 0x0  nop
    ctx->pc = 0x3e07f4u;
    // NOP
label_3e07f8:
    // 0x3e07f8: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x3e07f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3e07fc: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x3e07fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3e0800: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3e0800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e0804: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3e0804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0808: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3e0808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e080c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3e080cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0810: 0x9fa20000  lwu         $v0, 0x0($sp)
    ctx->pc = 0x3e0810u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e0814: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e0814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0818: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x3e0818u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3e081c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e081cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0820: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x3e0820u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3e0824: 0xc0f813a  jal         func_3E04E8
    ctx->pc = 0x3E0824u;
    SET_GPR_U32(ctx, 31, 0x3E082Cu);
    ctx->pc = 0x3E0828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0824u;
    // 0x3e0828: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E04E8u, 0x3E0824u, 0x3E082Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E082Cu;
label_3e082c:
    // 0x3e082c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E082Cu;
    {
        const bool branch_taken_0x3e082c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E082Cu;
        // 0x3e0830: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e082c) {
            ctx->pc = 0x3E083Cu;
            goto label_3e083c;
        }
    }
    ctx->pc = 0x3E0834u;
    // 0x3e0834: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x3E0834u;
    {
        const bool branch_taken_0x3e0834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0834u;
        // 0x3e0838: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0834) {
            ctx->pc = 0x3E07F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e07f8;
        }
    }
    ctx->pc = 0x3E083Cu;
label_3e083c:
    // 0x3e083c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3e083cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e0840: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3e0840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e0844: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3e0844u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e0848: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3e0848u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e084c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3e084cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e0850: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e0850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e0854: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0854u;
        // 0x3e0858: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E085Cu;
    // 0x3e085c: 0x0  nop
    ctx->pc = 0x3e085cu;
    // NOP
    ctx->pc = 0x3e0860u;
}
