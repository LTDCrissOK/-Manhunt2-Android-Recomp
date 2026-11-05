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

// Function: sub_003E1448
// Address: 0x3e1448 - 0x3e14c0
void sub_003E1448_0x3e1448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1448_0x3e1448");
#endif

    switch (ctx->pc) {
        case 0x3e1470u: goto label_3e1470;
        case 0x3e14a0u: goto label_3e14a0;
        default: break;
    }

    ctx->pc = 0x3e1448u;

    // 0x3e1448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e1448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e144c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3e144cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3e1450: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3e1450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3e1454: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e1454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1458: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3e1458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3e145c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e145cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1460: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3e1460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3e1464: 0x12110010  beq         $s0, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E1464u;
    {
        const bool branch_taken_0x3e1464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x3E1468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1464u;
        // 0x3e1468: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1464) {
            ctx->pc = 0x3E14A8u;
            goto label_3e14a8;
        }
    }
    ctx->pc = 0x3E146Cu;
    // 0x3e146c: 0x0  nop
    ctx->pc = 0x3e146cu;
    // NOP
label_3e1470:
    // 0x3e1470: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x3e1470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3e1474: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x3e1474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3e1478: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3e1478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e147c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3e147cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1480: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3e1480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e1484: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3e1484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3e1488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e1488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e148c: 0x9fa20000  lwu         $v0, 0x0($sp)
    ctx->pc = 0x3e148cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e1490: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3e1490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3e1494: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3e1494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3e1498: 0xc0f845e  jal         func_3E1178
    ctx->pc = 0x3E1498u;
    SET_GPR_U32(ctx, 31, 0x3E14A0u);
    ctx->pc = 0x3E149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1498u;
    // 0x3e149c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1178u, 0x3E1498u, 0x3E14A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E14A0u;
label_3e14a0:
    // 0x3e14a0: 0x1611fff3  bne         $s0, $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x3E14A0u;
    {
        const bool branch_taken_0x3e14a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x3e14a0) {
            ctx->pc = 0x3E1470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1470;
        }
    }
    ctx->pc = 0x3E14A8u;
label_3e14a8:
    // 0x3e14a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3e14a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e14ac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3e14acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e14b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3e14b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e14b4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3e14b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e14b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E14B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E14BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E14B8u;
        // 0x3e14bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E14B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E14C0u;
}
