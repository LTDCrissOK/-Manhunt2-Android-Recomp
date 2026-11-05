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

// Function: sub_001FF9E0
// Address: 0x1ff9e0 - 0x1ffa68
void sub_001FF9E0_0x1ff9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF9E0_0x1ff9e0");
#endif

    switch (ctx->pc) {
        case 0x1ffa04u: goto label_1ffa04;
        case 0x1ffa38u: goto label_1ffa38;
        case 0x1ffa4cu: goto label_1ffa4c;
        default: break;
    }

    ctx->pc = 0x1ff9e0u;

    // 0x1ff9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff9e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ff9e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ff9e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ff9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ff9ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ff9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ff9f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ff9f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff9f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff9f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ff9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ff9fc: 0xc07fe34  jal         func_1FF8D0
    ctx->pc = 0x1FF9FCu;
    SET_GPR_U32(ctx, 31, 0x1FFA04u);
    ctx->pc = 0x1FFA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF9FCu;
    // 0x1ffa00: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF8D0u, 0x1FF9FCu, 0x1FFA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFA04u;
label_1ffa04:
    // 0x1ffa04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ffa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ffa08: 0x12220010  beq         $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FFA08u;
    {
        const bool branch_taken_0x1ffa08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FFA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA08u;
        // 0x1ffa0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa08) {
            ctx->pc = 0x1FFA4Cu;
            goto label_1ffa4c;
        }
    }
    ctx->pc = 0x1FFA10u;
    // 0x1ffa10: 0xae5100b8  sw          $s1, 0xB8($s2)
    ctx->pc = 0x1ffa10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 17));
    // 0x1ffa14: 0x2631fffb  addiu       $s1, $s1, -0x5
    ctx->pc = 0x1ffa14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967291));
    // 0x1ffa18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ffa18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ffa1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ffa1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ffa20: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x1ffa20u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ffa24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ffa24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa28: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x1ffa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1ffa2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ffa2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffa30: 0xc07fe1c  jal         func_1FF870
    ctx->pc = 0x1FFA30u;
    SET_GPR_U32(ctx, 31, 0x1FFA38u);
    ctx->pc = 0x1FFA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFA30u;
    // 0x1ffa34: 0x8c47009c  lw          $a3, 0x9C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF870u, 0x1FFA30u, 0x1FFA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFA38u;
label_1ffa38:
    // 0x1ffa38: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1ffa38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1ffa3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ffa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa40: 0x8e0600a8  lw          $a2, 0xA8($s0)
    ctx->pc = 0x1ffa40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1ffa44: 0xc07fe04  jal         func_1FF810
    ctx->pc = 0x1FFA44u;
    SET_GPR_U32(ctx, 31, 0x1FFA4Cu);
    ctx->pc = 0x1FFA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFA44u;
    // 0x1ffa48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF810u, 0x1FFA44u, 0x1FFA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFA4Cu;
label_1ffa4c:
    // 0x1ffa4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ffa4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffa50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ffa50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ffa54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ffa54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffa58: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ffa58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ffa5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA5Cu;
        // 0x1ffa60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFA64u;
    // 0x1ffa64: 0x0  nop
    ctx->pc = 0x1ffa64u;
    // NOP
    ctx->pc = 0x1ffa68u;
}
