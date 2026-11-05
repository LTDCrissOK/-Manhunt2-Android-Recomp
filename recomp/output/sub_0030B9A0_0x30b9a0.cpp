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

// Function: sub_0030B9A0
// Address: 0x30b9a0 - 0x30ba50
void sub_0030B9A0_0x30b9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B9A0_0x30b9a0");
#endif

    switch (ctx->pc) {
        case 0x30b9bcu: goto label_30b9bc;
        case 0x30b9d8u: goto label_30b9d8;
        case 0x30ba04u: goto label_30ba04;
        case 0x30ba10u: goto label_30ba10;
        case 0x30ba28u: goto label_30ba28;
        default: break;
    }

    ctx->pc = 0x30b9a0u;

    // 0x30b9a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30b9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30b9a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30b9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30b9a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30b9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30b9ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30b9acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b9b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30b9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30b9b4: 0xc0c4882  jal         func_312208
    ctx->pc = 0x30B9B4u;
    SET_GPR_U32(ctx, 31, 0x30B9BCu);
    ctx->pc = 0x30B9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B9B4u;
    // 0x30b9b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312208u, 0x30B9B4u, 0x30B9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B9BCu;
label_30b9bc:
    // 0x30b9bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30b9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b9c0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x30b9c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30b9c4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30B9C4u;
    {
        const bool branch_taken_0x30b9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B9C4u;
        // 0x30b9c8: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b9c4) {
            ctx->pc = 0x30B9FCu;
            goto label_30b9fc;
        }
    }
    ctx->pc = 0x30B9CCu;
    // 0x30b9cc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30B9CCu;
    {
        const bool branch_taken_0x30b9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B9CCu;
        // 0x30b9d0: 0x2403005f  addiu       $v1, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b9cc) {
            ctx->pc = 0x30B9F0u;
            goto label_30b9f0;
        }
    }
    ctx->pc = 0x30B9D4u;
    // 0x30b9d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30b9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_30b9d8:
    // 0x30b9d8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x30b9d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30b9dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30B9DCu;
    {
        const bool branch_taken_0x30b9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b9dc) {
            ctx->pc = 0x30B9FCu;
            goto label_30b9fc;
        }
    }
    ctx->pc = 0x30B9E4u;
    // 0x30b9e4: 0x0  nop
    ctx->pc = 0x30b9e4u;
    // NOP
    // 0x30b9e8: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30B9E8u;
    {
        const bool branch_taken_0x30b9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30b9e8) {
            ctx->pc = 0x30B9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B9E8u;
            // 0x30b9ec: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b9d8;
        }
    }
    ctx->pc = 0x30B9F0u;
label_30b9f0:
    // 0x30b9f0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x30b9f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30b9f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30B9F4u;
    {
        const bool branch_taken_0x30b9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B9F4u;
        // 0x30b9f8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b9f4) {
            ctx->pc = 0x30BA08u;
            goto label_30ba08;
        }
    }
    ctx->pc = 0x30B9FCu;
label_30b9fc:
    // 0x30b9fc: 0xc0c4882  jal         func_312208
    ctx->pc = 0x30B9FCu;
    SET_GPR_U32(ctx, 31, 0x30BA04u);
    ctx->pc = 0x30BA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B9FCu;
    // 0x30ba00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312208u, 0x30B9FCu, 0x30BA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BA04u;
label_30ba04:
    // 0x30ba04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30ba04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ba08:
    // 0x30ba08: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x30BA08u;
    SET_GPR_U32(ctx, 31, 0x30BA10u);
    ctx->pc = 0x30BA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BA08u;
    // 0x30ba0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x30BA08u, 0x30BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BA10u;
label_30ba10:
    // 0x30ba10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30BA10u;
    {
        const bool branch_taken_0x30ba10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BA10u;
        // 0x30ba14: 0x3c050031  lui         $a1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba10) {
            ctx->pc = 0x30BA30u;
            goto label_30ba30;
        }
    }
    ctx->pc = 0x30BA18u;
    // 0x30ba18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30ba18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba1c: 0x24a5b9a0  addiu       $a1, $a1, -0x4660
    ctx->pc = 0x30ba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949280));
    // 0x30ba20: 0xc0c4898  jal         func_312260
    ctx->pc = 0x30BA20u;
    SET_GPR_U32(ctx, 31, 0x30BA28u);
    ctx->pc = 0x30BA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BA20u;
    // 0x30ba24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312260u, 0x30BA20u, 0x30BA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BA28u;
label_30ba28:
    // 0x30ba28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30BA28u;
    {
        const bool branch_taken_0x30ba28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BA28u;
        // 0x30ba2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba28) {
            ctx->pc = 0x30BA3Cu;
            goto label_30ba3c;
        }
    }
    ctx->pc = 0x30BA30u;
label_30ba30:
    // 0x30ba30: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x30ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x30ba34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30ba34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ba38: 0xac70bb98  sw          $s0, -0x4468($v1)
    ctx->pc = 0x30ba38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3FBB98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBB98u, _value); } while (0);
label_30ba3c:
    // 0x30ba3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30ba3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ba40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30ba40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30ba44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30ba44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ba48: 0x3e00008  jr          $ra
    ctx->pc = 0x30BA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BA48u;
        // 0x30ba4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BA50u;
}
