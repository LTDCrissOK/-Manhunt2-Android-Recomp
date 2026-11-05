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

// Function: sub_00275418
// Address: 0x275418 - 0x275488
void sub_00275418_0x275418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275418_0x275418");
#endif

    switch (ctx->pc) {
        case 0x275440u: goto label_275440;
        case 0x275468u: goto label_275468;
        default: break;
    }

    ctx->pc = 0x275418u;

    // 0x275418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27541c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27541cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x275420: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x275420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x275424: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x275424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x275428: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x275428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27542c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27542cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275430: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x275430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x275434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x275434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x275438: 0xc09cdd2  jal         func_273748
    ctx->pc = 0x275438u;
    SET_GPR_U32(ctx, 31, 0x275440u);
    ctx->pc = 0x27543Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275438u;
    // 0x27543c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273748u, 0x275438u, 0x275440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275440u;
label_275440:
    // 0x275440: 0x26110220  addiu       $s1, $s0, 0x220
    ctx->pc = 0x275440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x275444: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x275444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x275448: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x275448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x27544c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x27544cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x275450: 0xb2020227  sdl         $v0, 0x227($s0)
    ctx->pc = 0x275450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 551); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275454: 0xb6020220  sdr         $v0, 0x220($s0)
    ctx->pc = 0x275454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 544); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x275458: 0xae030228  sw          $v1, 0x228($s0)
    ctx->pc = 0x275458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 3));
    // 0x27545c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27545cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275460: 0xc09cdd8  jal         func_273760
    ctx->pc = 0x275460u;
    SET_GPR_U32(ctx, 31, 0x275468u);
    ctx->pc = 0x275464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275460u;
    // 0x275464: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273760u, 0x275460u, 0x275468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275468u;
label_275468:
    // 0x275468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27546c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27546cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275470: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x275470u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x275474: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x275474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x275478: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x275478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27547c: 0x3e00008  jr          $ra
    ctx->pc = 0x27547Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27547Cu;
        // 0x275480: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27547Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275484u;
    // 0x275484: 0x0  nop
    ctx->pc = 0x275484u;
    // NOP
    ctx->pc = 0x275488u;
}
