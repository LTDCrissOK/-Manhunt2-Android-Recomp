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

// Function: sub_00327490
// Address: 0x327490 - 0x3274f8
void sub_00327490_0x327490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327490_0x327490");
#endif

    switch (ctx->pc) {
        case 0x3274d4u: goto label_3274d4;
        default: break;
    }

    ctx->pc = 0x327490u;

    // 0x327490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x327490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x327494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327498: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x327498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32749c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x32749cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3274a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3274a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3274a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3274a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3274a8: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x3274a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x3274ac: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x3274acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x3274b0: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x3274b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x3274b4: 0xaa230017  swl         $v1, 0x17($s1)
    ctx->pc = 0x3274b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3274b8: 0xba230014  swr         $v1, 0x14($s1)
    ctx->pc = 0x3274b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3274bc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3274bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3274c0: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x3274c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x3274c4: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x3274c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x3274c8: 0x96260006  lhu         $a2, 0x6($s1)
    ctx->pc = 0x3274c8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3274cc: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3274CCu;
    SET_GPR_U32(ctx, 31, 0x3274D4u);
    ctx->pc = 0x3274D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3274CCu;
    // 0x3274d0: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3274CCu, 0x3274D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3274D4u;
label_3274d4:
    // 0x3274d4: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x3274d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3274d8: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x3274d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x3274dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3274dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3274e0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3274e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3274e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3274e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3274e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3274e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3274ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3274ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3274F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3274ECu;
        // 0x3274f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3274ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3274F4u;
    // 0x3274f4: 0x0  nop
    ctx->pc = 0x3274f4u;
    // NOP
    ctx->pc = 0x3274f8u;
}
