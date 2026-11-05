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

// Function: sub_0036DD88
// Address: 0x36dd88 - 0x36de40
void sub_0036DD88_0x36dd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DD88_0x36dd88");
#endif

    switch (ctx->pc) {
        case 0x36ddf8u: goto label_36ddf8;
        case 0x36de04u: goto label_36de04;
        case 0x36de2cu: goto label_36de2c;
        default: break;
    }

    ctx->pc = 0x36dd88u;

    // 0x36dd88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36dd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36dd8c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x36dd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x36dd90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36dd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36dd94: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x36dd94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x36dd98: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x36dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x36dd9c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x36dd9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x36dda0: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x36dda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x36dda4: 0x68c5000f  ldl         $a1, 0xF($a2)
    ctx->pc = 0x36dda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x36dda8: 0x6cc50008  ldr         $a1, 0x8($a2)
    ctx->pc = 0x36dda8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x36ddac: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x36ddacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36ddb0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x36ddb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36ddb4: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x36ddb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36ddb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x36ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x36ddbc: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x36ddbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36ddc0: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x36ddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x36ddc4: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x36ddc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x36ddc8: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x36ddc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x36ddcc: 0x684a000f  ldl         $t2, 0xF($v0)
    ctx->pc = 0x36ddccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x36ddd0: 0x6c4a0008  ldr         $t2, 0x8($v0)
    ctx->pc = 0x36ddd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x36ddd4: 0xb3a90017  sdl         $t1, 0x17($sp)
    ctx->pc = 0x36ddd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36ddd8: 0xb7a90010  sdr         $t1, 0x10($sp)
    ctx->pc = 0x36ddd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36dddc: 0xb3aa001f  sdl         $t2, 0x1F($sp)
    ctx->pc = 0x36dddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36dde0: 0xb7aa0018  sdr         $t2, 0x18($sp)
    ctx->pc = 0x36dde0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36dde4: 0x2484f8c8  addiu       $a0, $a0, -0x738
    ctx->pc = 0x36dde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965448));
    // 0x36dde8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36dde8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ddec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ddecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ddf0: 0xc0dc22a  jal         func_3708A8
    ctx->pc = 0x36DDF0u;
    SET_GPR_U32(ctx, 31, 0x36DDF8u);
    ctx->pc = 0x36DDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DDF0u;
    // 0x36ddf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3708A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3708A8u, 0x36DDF0u, 0x36DDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DDF8u;
label_36ddf8:
    // 0x36ddf8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x36ddf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ddfc: 0xc0db760  jal         func_36DD80
    ctx->pc = 0x36DDFCu;
    SET_GPR_U32(ctx, 31, 0x36DE04u);
    ctx->pc = 0x36DE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DDFCu;
    // 0x36de00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36DD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DD80u, 0x36DDFCu, 0x36DE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DE04u;
label_36de04:
    // 0x36de04: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x36de04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36de08: 0x9043cbe8  lbu         $v1, -0x3418($v0)
    ctx->pc = 0x36de08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FCBE8u));
    // 0x36de0c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36DE0Cu;
    {
        const bool branch_taken_0x36de0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DE0Cu;
        // 0x36de10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36de0c) {
            ctx->pc = 0x36DE30u;
            goto label_36de30;
        }
    }
    ctx->pc = 0x36DE14u;
    // 0x36de14: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x36de14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36de18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36de18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de1c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x36de1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36de20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36de20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de24: 0xc0db758  jal         func_36DD60
    ctx->pc = 0x36DE24u;
    SET_GPR_U32(ctx, 31, 0x36DE2Cu);
    ctx->pc = 0x36DE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DE24u;
    // 0x36de28: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36DD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DD60u, 0x36DE24u, 0x36DE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DE2Cu;
label_36de2c:
    // 0x36de2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36de30:
    // 0x36de30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36de30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36de34: 0x3e00008  jr          $ra
    ctx->pc = 0x36DE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DE34u;
        // 0x36de38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DE3Cu;
    // 0x36de3c: 0x0  nop
    ctx->pc = 0x36de3cu;
    // NOP
    ctx->pc = 0x36de40u;
}
