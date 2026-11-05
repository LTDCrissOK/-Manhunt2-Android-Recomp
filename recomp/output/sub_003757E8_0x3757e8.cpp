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

// Function: sub_003757E8
// Address: 0x3757e8 - 0x375860
void sub_003757E8_0x3757e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003757E8_0x3757e8");
#endif

    ctx->pc = 0x3757e8u;

    // 0x3757e8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3757e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3757ec: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3757ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3757f0: 0x2442cd50  addiu       $v0, $v0, -0x32B0
    ctx->pc = 0x3757f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954320));
    // 0x3757f4: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x3757f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x3757f8: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x3757f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3757fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3757fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375800: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x375800u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x375804: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x375804u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375808: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x375808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x37580c: 0x30e301c0  andi        $v1, $a3, 0x1C0
    ctx->pc = 0x37580cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)448);
    // 0x375810: 0x244b8168  addiu       $t3, $v0, -0x7E98
    ctx->pc = 0x375810u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934888));
    // 0x375814: 0x69650007  ldl         $a1, 0x7($t3)
    ctx->pc = 0x375814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x375818: 0x6d650000  ldr         $a1, 0x0($t3)
    ctx->pc = 0x375818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x37581c: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x37581cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375820: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x375820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375824: 0x1068000b  beq         $v1, $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x375824u;
    {
        const bool branch_taken_0x375824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x375828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375824u;
        // 0x375828: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375824) {
            ctx->pc = 0x375854u;
            goto label_375854;
        }
    }
    ctx->pc = 0x37582Cu;
    // 0x37582c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x37582cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x375830: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x375830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x375834: 0x8cc3cd00  lw          $v1, -0x3300($a2)
    ctx->pc = 0x375834u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCD00u));
    // 0x375838: 0x2402fe3f  addiu       $v0, $zero, -0x1C1
    ctx->pc = 0x375838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x37583c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x37583cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x375840: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x375840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x375844: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x375844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x375848: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x375848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x37584c: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x37584cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x375850: 0xacc3cd00  sw          $v1, -0x3300($a2)
    ctx->pc = 0x375850u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294954240), GPR_U32(ctx, 3));
label_375854:
    // 0x375854: 0x3e00008  jr          $ra
    ctx->pc = 0x375854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375854u;
        // 0x375858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37585Cu;
    // 0x37585c: 0x0  nop
    ctx->pc = 0x37585cu;
    // NOP
    ctx->pc = 0x375860u;
}
