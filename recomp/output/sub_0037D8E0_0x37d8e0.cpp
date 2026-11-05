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

// Function: sub_0037D8E0
// Address: 0x37d8e0 - 0x37d9b0
void sub_0037D8E0_0x37d8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D8E0_0x37d8e0");
#endif

    switch (ctx->pc) {
        case 0x37d914u: goto label_37d914;
        case 0x37d940u: goto label_37d940;
        case 0x37d974u: goto label_37d974;
        default: break;
    }

    ctx->pc = 0x37d8e0u;

    // 0x37d8e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37d8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37d8e4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x37d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x37d8e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x37d8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x37d8ec: 0x2463ce08  addiu       $v1, $v1, -0x31F8
    ctx->pc = 0x37d8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954504));
    // 0x37d8f0: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x37d8f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    // 0x37d8f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37d8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37d8f8: 0x8e222d5c  lw          $v0, 0x2D5C($s1)
    ctx->pc = 0x37d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482D5Cu));
    // 0x37d8fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37d8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d900: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37d900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37d904: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37d904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37d908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37d908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37d90c: 0xc0dde56  jal         func_377958
    ctx->pc = 0x37D90Cu;
    SET_GPR_U32(ctx, 31, 0x37D914u);
    ctx->pc = 0x37D910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D90Cu;
    // 0x37d910: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377958u, 0x37D90Cu, 0x37D914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D914u;
label_37d914:
    // 0x37d914: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x37d914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x37d918: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x37d918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x37d91c: 0x246370c8  addiu       $v1, $v1, 0x70C8
    ctx->pc = 0x37d91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28872));
    // 0x37d920: 0x26060088  addiu       $a2, $s0, 0x88
    ctx->pc = 0x37d920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x37d924: 0x8e242d5c  lw          $a0, 0x2D5C($s1)
    ctx->pc = 0x37d924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11612)));
    // 0x37d928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37d928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d92c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x37d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x37d930: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x37D930u;
    {
        const bool branch_taken_0x37d930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D930u;
        // 0x37d934: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d930) {
            ctx->pc = 0x37D968u;
            goto label_37d968;
        }
    }
    ctx->pc = 0x37D938u;
    // 0x37d938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37d938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d93c: 0x0  nop
    ctx->pc = 0x37d93cu;
    // NOP
label_37d940:
    // 0x37d940: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x37d940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x37d944: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x37d944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x37d948: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x37d948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37d94c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x37d94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x37d950: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x37d950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37d954: 0x8c822d5c  lw          $v0, 0x2D5C($a0)
    ctx->pc = 0x37d954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11612)));
    // 0x37d958: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x37d958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x37d95c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x37d95cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37d960: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x37D960u;
    {
        const bool branch_taken_0x37d960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D960u;
        // 0x37d964: 0x24c6fff8  addiu       $a2, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d960) {
            ctx->pc = 0x37D940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37d940;
        }
    }
    ctx->pc = 0x37D968u;
label_37d968:
    // 0x37d968: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x37d968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x37d96c: 0xc0dde5c  jal         func_377970
    ctx->pc = 0x37D96Cu;
    SET_GPR_U32(ctx, 31, 0x37D974u);
    ctx->pc = 0x37D970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D96Cu;
    // 0x37d970: 0x24845300  addiu       $a0, $a0, 0x5300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377970u, 0x37D96Cu, 0x37D974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D974u;
label_37d974:
    // 0x37d974: 0x3c046c08  lui         $a0, 0x6C08
    ctx->pc = 0x37d974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27656 << 16));
    // 0x37d978: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x37d978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x37d97c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x37d97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x37d980: 0x34630101  ori         $v1, $v1, 0x101
    ctx->pc = 0x37d980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)257);
    // 0x37d984: 0x3c046000  lui         $a0, 0x6000
    ctx->pc = 0x37d984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
    // 0x37d988: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x37d988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x37d98c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x37d98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x37d990: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x37d990u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x37d994: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x37d994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x37d998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37d998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d99c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x37d99cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37d9a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37d9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x37D9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D9A4u;
        // 0x37d9a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D9ACu;
    // 0x37d9ac: 0x0  nop
    ctx->pc = 0x37d9acu;
    // NOP
    ctx->pc = 0x37d9b0u;
}
