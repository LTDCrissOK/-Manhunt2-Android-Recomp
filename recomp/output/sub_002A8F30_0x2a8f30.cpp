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

// Function: sub_002A8F30
// Address: 0x2a8f30 - 0x2a8fc8
void sub_002A8F30_0x2a8f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8F30_0x2a8f30");
#endif

    switch (ctx->pc) {
        case 0x2a8f78u: goto label_2a8f78;
        default: break;
    }

    ctx->pc = 0x2a8f30u;

    // 0x2a8f30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a8f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a8f34: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a8f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a8f38: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2a8f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2a8f3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a8f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f40: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2a8f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2a8f44: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a8f44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f48: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a8f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a8f4c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2a8f4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f50: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2a8f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2a8f54: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2a8f54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f58: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2a8f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2a8f5c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2a8f5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f60: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2a8f60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a8f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a8f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f6c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a8f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a8f70: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2A8F70u;
    SET_GPR_U32(ctx, 31, 0x2A8F78u);
    ctx->pc = 0x2A8F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8F70u;
    // 0x2a8f74: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2A8F70u, 0x2A8F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8F78u;
label_2a8f78:
    // 0x2a8f78: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2a8f78u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a8f7c: 0xa3b10000  sb          $s1, 0x0($sp)
    ctx->pc = 0x2a8f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x2a8f80: 0xa3b20001  sb          $s2, 0x1($sp)
    ctx->pc = 0x2a8f80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 18));
    // 0x2a8f84: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x2a8f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x2a8f88: 0xa3b30002  sb          $s3, 0x2($sp)
    ctx->pc = 0x2a8f88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x2a8f8c: 0xa3b40003  sb          $s4, 0x3($sp)
    ctx->pc = 0x2a8f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x2a8f90: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x2a8f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2a8f94: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x2a8f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2a8f98: 0xaa020003  swl         $v0, 0x3($s0)
    ctx->pc = 0x2a8f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a8f9c: 0xba020000  swr         $v0, 0x0($s0)
    ctx->pc = 0x2a8f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a8fa0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a8fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8fa4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2a8fa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a8fa8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a8fa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8fac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2a8facu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a8fb0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2a8fb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a8fb4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2a8fb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8fb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a8fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a8fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FBCu;
        // 0x2a8fc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8FC4u;
    // 0x2a8fc4: 0x0  nop
    ctx->pc = 0x2a8fc4u;
    // NOP
    ctx->pc = 0x2a8fc8u;
}
