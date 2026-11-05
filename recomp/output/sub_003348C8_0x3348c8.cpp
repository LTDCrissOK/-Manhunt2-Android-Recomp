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

// Function: sub_003348C8
// Address: 0x3348c8 - 0x334960
void sub_003348C8_0x3348c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003348C8_0x3348c8");
#endif

    switch (ctx->pc) {
        case 0x3348f8u: goto label_3348f8;
        case 0x334920u: goto label_334920;
        default: break;
    }

    ctx->pc = 0x3348c8u;

    // 0x3348c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3348c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3348cc: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x3348ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x3348d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3348d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3348d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3348d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3348d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3348d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3348dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3348dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3348e0: 0x24446e70  addiu       $a0, $v0, 0x6E70
    ctx->pc = 0x3348e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28272));
    // 0x3348e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3348e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3348e8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3348e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5B6E74u));
    // 0x3348ec: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x3348ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5B6E7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6E7Cu, _value); } while (0);
    // 0x3348f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3348F0u;
    {
        const bool branch_taken_0x3348f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3348F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3348F0u;
        // 0x3348f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3348f0) {
            ctx->pc = 0x334928u;
            goto label_334928;
        }
    }
    ctx->pc = 0x3348F8u;
label_3348f8:
    // 0x3348f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3348F8u;
    {
        const bool branch_taken_0x3348f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3348FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3348F8u;
        // 0x3348fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3348f8) {
            ctx->pc = 0x334904u;
            goto label_334904;
        }
    }
    ctx->pc = 0x334900u;
    // 0x334900: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x334900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_334904:
    // 0x334904: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x334904u;
    {
        const bool branch_taken_0x334904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334904u;
        // 0x334908: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334904) {
            ctx->pc = 0x334914u;
            goto label_334914;
        }
    }
    ctx->pc = 0x33490Cu;
    // 0x33490c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x33490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x334910: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x334910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_334914:
    // 0x334914: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x334914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334918: 0xc0c9be0  jal         func_326F80
    ctx->pc = 0x334918u;
    SET_GPR_U32(ctx, 31, 0x334920u);
    ctx->pc = 0x33491Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334918u;
    // 0x33491c: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326F80u, 0x334918u, 0x334920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334920u;
label_334920:
    // 0x334920: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x334920u;
    {
        const bool branch_taken_0x334920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334920u;
        // 0x334924: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334920) {
            ctx->pc = 0x334948u;
            goto label_334948;
        }
    }
    ctx->pc = 0x334928u;
label_334928:
    // 0x334928: 0x26236e70  addiu       $v1, $s1, 0x6E70
    ctx->pc = 0x334928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 28272));
    // 0x33492c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x33492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x334930: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x334930u;
    {
        const bool branch_taken_0x334930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334930u;
        // 0x334934: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334930) {
            ctx->pc = 0x33493Cu;
            goto label_33493c;
        }
    }
    ctx->pc = 0x334938u;
    // 0x334938: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x334938u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33493c:
    // 0x33493c: 0x1600ffee  bnez        $s0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x33493Cu;
    {
        const bool branch_taken_0x33493c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x33493c) {
            ctx->pc = 0x3348F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3348f8;
        }
    }
    ctx->pc = 0x334944u;
    // 0x334944: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x334944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_334948:
    // 0x334948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x334948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33494c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33494cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x334950: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x334950u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334954: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x334954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x334958: 0x3e00008  jr          $ra
    ctx->pc = 0x334958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334958u;
        // 0x33495c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334960u;
}
