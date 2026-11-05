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

// Function: sub_003756E0
// Address: 0x3756e0 - 0x375768
void sub_003756E0_0x3756e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003756E0_0x3756e0");
#endif

    ctx->pc = 0x3756e0u;

    // 0x3756e0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3756e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3756e4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3756e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3756e8: 0x2442cd40  addiu       $v0, $v0, -0x32C0
    ctx->pc = 0x3756e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954304));
    // 0x3756ec: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x3756ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3756f0: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x3756f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3756f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3756f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3756f8: 0xdd280000  ld          $t0, 0x0($t1)
    ctx->pc = 0x3756f8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3756fc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3756fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x375700: 0x3402c000  ori         $v0, $zero, 0xC000
    ctx->pc = 0x375700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x375704: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x375704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x375708: 0x538fc  dsll32      $a3, $a1, 3
    ctx->pc = 0x375708u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 3));
    // 0x37570c: 0x248b80a0  addiu       $t3, $a0, -0x7F60
    ctx->pc = 0x37570cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934688));
    // 0x375710: 0x69630007  ldl         $v1, 0x7($t3)
    ctx->pc = 0x375710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x375714: 0x6d630000  ldr         $v1, 0x0($t3)
    ctx->pc = 0x375714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x375718: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x375718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37571c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x37571cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375720: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x375720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x375724: 0x10e2000e  beq         $a3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x375724u;
    {
        const bool branch_taken_0x375724 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x375728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375724u;
        // 0x375728: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375724) {
            ctx->pc = 0x375760u;
            goto label_375760;
        }
    }
    ctx->pc = 0x37572Cu;
    // 0x37572c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x37572cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x375730: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x375730u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x375734: 0x3c029fff  lui         $v0, 0x9FFF
    ctx->pc = 0x375734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40959 << 16));
    // 0x375738: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x375738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x37573c: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x37573cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x375740: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x375740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x375744: 0x8cc3cd00  lw          $v1, -0x3300($a2)
    ctx->pc = 0x375744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954240)));
    // 0x375748: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x375748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37574c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x37574cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x375750: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x375750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x375754: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x375754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x375758: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x375758u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x37575c: 0xacc3cd00  sw          $v1, -0x3300($a2)
    ctx->pc = 0x37575cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294954240), GPR_U32(ctx, 3));
label_375760:
    // 0x375760: 0x3e00008  jr          $ra
    ctx->pc = 0x375760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375760u;
        // 0x375764: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375768u;
}
