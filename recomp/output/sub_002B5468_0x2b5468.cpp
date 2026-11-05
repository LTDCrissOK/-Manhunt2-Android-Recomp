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

// Function: sub_002B5468
// Address: 0x2b5468 - 0x2b54f8
void sub_002B5468_0x2b5468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5468_0x2b5468");
#endif

    switch (ctx->pc) {
        case 0x2b5494u: goto label_2b5494;
        case 0x2b54bcu: goto label_2b54bc;
        case 0x2b54ccu: goto label_2b54cc;
        default: break;
    }

    ctx->pc = 0x2b5468u;

    // 0x2b5468: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b5468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b546c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2b546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b5470: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2b5470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2b5474: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2b5474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2b5478: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b547c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2b547cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2b5480: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b5480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5484: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2b5484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2b5488: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b5488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b548c: 0xc0acde0  jal         func_2B3780
    ctx->pc = 0x2B548Cu;
    SET_GPR_U32(ctx, 31, 0x2B5494u);
    ctx->pc = 0x2B5490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B548Cu;
    // 0x2b5490: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3780u, 0x2B548Cu, 0x2B5494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5494u;
label_2b5494:
    // 0x2b5494: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b5494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b5498: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2b5498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b549c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2b549cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b54a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b54a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b54a4: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2b54a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b54a8: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2b54a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b54ac: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x2b54acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b54b0: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x2b54b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b54b4: 0xc0ef2ce  jal         func_3BCB38
    ctx->pc = 0x2B54B4u;
    SET_GPR_U32(ctx, 31, 0x2B54BCu);
    ctx->pc = 0x2B54B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B54B4u;
    // 0x2b54b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCB38u, 0x2B54B4u, 0x2B54BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B54BCu;
label_2b54bc:
    // 0x2b54bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b54bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b54c0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2b54c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b54c4: 0xc0ef0b2  jal         func_3BC2C8
    ctx->pc = 0x2B54C4u;
    SET_GPR_U32(ctx, 31, 0x2B54CCu);
    ctx->pc = 0x2B54C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B54C4u;
    // 0x2b54c8: 0x27a60044  addiu       $a2, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x2B54C4u, 0x2B54CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B54CCu;
label_2b54cc:
    // 0x2b54cc: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x2b54ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2b54d0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2b54d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b54d4: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2b54d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2b54d8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2b54d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2b54dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2b54dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b54e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B54E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B54E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54E0u;
        // 0x2b54e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B54E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B54E8u;
    // 0x2b54e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b54e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b54ec: 0x0  nop
    ctx->pc = 0x2b54ecu;
    // NOP
    // 0x2b54f0: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2b54f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2b54f4: 0x0  nop
    ctx->pc = 0x2b54f4u;
    // NOP
    ctx->pc = 0x2b54f8u;
}
