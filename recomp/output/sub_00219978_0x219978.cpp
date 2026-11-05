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

// Function: sub_00219978
// Address: 0x219978 - 0x219a08
void sub_00219978_0x219978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219978_0x219978");
#endif

    switch (ctx->pc) {
        case 0x2199a8u: goto label_2199a8;
        case 0x2199b0u: goto label_2199b0;
        default: break;
    }

    ctx->pc = 0x219978u;

    // 0x219978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x219978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21997c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x21997cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x219980: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x219980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x219984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219988: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x219988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21998c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21998cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x219990: 0x244434d0  addiu       $a0, $v0, 0x34D0
    ctx->pc = 0x219990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13520));
    // 0x219994: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x219994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x219998: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x219998u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A34D4u));
    // 0x21999c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x21999cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4A34DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A34DCu, _value); } while (0);
    // 0x2199a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2199A0u;
    {
        const bool branch_taken_0x2199a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2199A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2199A0u;
        // 0x2199a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2199a0) {
            ctx->pc = 0x2199BCu;
            goto label_2199bc;
        }
    }
    ctx->pc = 0x2199A8u;
label_2199a8:
    // 0x2199a8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2199A8u;
    SET_GPR_U32(ctx, 31, 0x2199B0u);
    ctx->pc = 0x2199ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199A8u;
    // 0x2199ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2199A8u, 0x2199B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2199B0u;
label_2199b0:
    // 0x2199b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2199b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2199b4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2199B4u;
    {
        const bool branch_taken_0x2199b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2199B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2199B4u;
        // 0x2199b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2199b4) {
            ctx->pc = 0x2199ECu;
            goto label_2199ec;
        }
    }
    ctx->pc = 0x2199BCu;
label_2199bc:
    // 0x2199bc: 0x262334d0  addiu       $v1, $s1, 0x34D0
    ctx->pc = 0x2199bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 13520));
    // 0x2199c0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2199c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2199c4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2199C4u;
    {
        const bool branch_taken_0x2199c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2199C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2199C4u;
        // 0x2199c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2199c4) {
            ctx->pc = 0x2199D0u;
            goto label_2199d0;
        }
    }
    ctx->pc = 0x2199CCu;
    // 0x2199cc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2199ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2199d0:
    // 0x2199d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2199D0u;
    {
        const bool branch_taken_0x2199d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2199d0) {
            ctx->pc = 0x2199E0u;
            goto label_2199e0;
        }
    }
    ctx->pc = 0x2199D8u;
    // 0x2199d8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2199d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2199dc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2199dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_2199e0:
    // 0x2199e0: 0x1600fff1  bnez        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2199E0u;
    {
        const bool branch_taken_0x2199e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2199E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2199E0u;
        // 0x2199e4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2199e0) {
            ctx->pc = 0x2199A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2199a8;
        }
    }
    ctx->pc = 0x2199E8u;
    // 0x2199e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2199e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2199ec:
    // 0x2199ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2199ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2199f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2199f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2199f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2199f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2199f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2199f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2199fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2199FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2199FCu;
        // 0x219a00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2199FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219A04u;
    // 0x219a04: 0x0  nop
    ctx->pc = 0x219a04u;
    // NOP
    ctx->pc = 0x219a08u;
}
