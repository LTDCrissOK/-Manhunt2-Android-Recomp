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

// Function: sub_001FC7E8
// Address: 0x1fc7e8 - 0x1fc868
void sub_001FC7E8_0x1fc7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC7E8_0x1fc7e8");
#endif

    switch (ctx->pc) {
        case 0x1fc82cu: goto label_1fc82c;
        default: break;
    }

    ctx->pc = 0x1fc7e8u;

    // 0x1fc7e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fc7ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fc7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fc7f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fc7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fc7f4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1fc7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc7f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fc7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fc7fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fc7fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc800: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fc800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fc804: 0x2e0235e2  sltiu       $v0, $s0, 0x35E2
    ctx->pc = 0x1fc804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)13794) ? 1 : 0);
    // 0x1fc808: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC808u;
    {
        const bool branch_taken_0x1fc808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC808u;
        // 0x1fc80c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc808) {
            ctx->pc = 0x1FC818u;
            goto label_1fc818;
        }
    }
    ctx->pc = 0x1FC810u;
    // 0x1fc810: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FC810u;
    {
        const bool branch_taken_0x1fc810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC810u;
        // 0x1fc814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc810) {
            ctx->pc = 0x1FC84Cu;
            goto label_1fc84c;
        }
    }
    ctx->pc = 0x1FC818u;
label_1fc818:
    // 0x1fc818: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1fc818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1fc81c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fc81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc820: 0x24849c38  addiu       $a0, $a0, -0x63C8
    ctx->pc = 0x1fc820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    // 0x1fc824: 0xc080a72  jal         func_2029C8
    ctx->pc = 0x1FC824u;
    SET_GPR_U32(ctx, 31, 0x1FC82Cu);
    ctx->pc = 0x1FC828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC824u;
    // 0x1fc828: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2029C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2029C8u, 0x1FC824u, 0x1FC82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC82Cu;
label_1fc82c:
    // 0x1fc82c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fc82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc830: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC830u;
    {
        const bool branch_taken_0x1fc830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC830u;
        // 0x1fc834: 0x340293a8  ori         $v0, $zero, 0x93A8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37800);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc830) {
            ctx->pc = 0x1FC848u;
            goto label_1fc848;
        }
    }
    ctx->pc = 0x1FC838u;
    // 0x1fc838: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1fc838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1fc83c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1fc83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1fc840: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc844: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1fc844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_1fc848:
    // 0x1fc848: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fc848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc84c:
    // 0x1fc84c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc84cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fc850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc854: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fc854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc858: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fc858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fc85c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC85Cu;
        // 0x1fc860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC864u;
    // 0x1fc864: 0x0  nop
    ctx->pc = 0x1fc864u;
    // NOP
    ctx->pc = 0x1fc868u;
}
