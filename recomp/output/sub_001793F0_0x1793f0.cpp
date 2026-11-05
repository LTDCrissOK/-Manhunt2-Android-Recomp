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

// Function: sub_001793F0
// Address: 0x1793f0 - 0x1794c0
void sub_001793F0_0x1793f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001793F0_0x1793f0");
#endif

    switch (ctx->pc) {
        case 0x179438u: goto label_179438;
        case 0x17945cu: goto label_17945c;
        case 0x179468u: goto label_179468;
        default: break;
    }

    ctx->pc = 0x1793f0u;

    // 0x1793f0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1793f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1793f4: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x1793f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x1793f8: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x1793f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x1793fc: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x1793fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x179400: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x179400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179404: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x179404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x179408: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x179408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17940c: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x17940cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x179410: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x179410u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179414: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x179414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x179418: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x179418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x17941c: 0x92420530  lbu         $v0, 0x530($s2)
    ctx->pc = 0x17941cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1328)));
    // 0x179420: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x179420u;
    {
        const bool branch_taken_0x179420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179420u;
        // 0x179424: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179420) {
            ctx->pc = 0x179498u;
            goto label_179498;
        }
    }
    ctx->pc = 0x179428u;
    // 0x179428: 0x24150028  addiu       $s5, $zero, 0x28
    ctx->pc = 0x179428u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x17942c: 0x24140012  addiu       $s4, $zero, 0x12
    ctx->pc = 0x17942cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x179430: 0x2151018  mult        $v0, $s0, $s5
    ctx->pc = 0x179430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x179434: 0x0  nop
    ctx->pc = 0x179434u;
    // NOP
label_179438:
    // 0x179438: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x179438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x17943c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x17943cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x179440: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x179440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179444: 0x1074000c  beq         $v1, $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x179444u;
    {
        const bool branch_taken_0x179444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x179448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179444u;
        // 0x179448: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179444) {
            ctx->pc = 0x179478u;
            goto label_179478;
        }
    }
    ctx->pc = 0x17944Cu;
    // 0x17944c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x17944cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x179450: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x179450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x179454: 0xc05a60c  jal         func_169830
    ctx->pc = 0x179454u;
    SET_GPR_U32(ctx, 31, 0x17945Cu);
    ctx->pc = 0x179458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179454u;
    // 0x179458: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x169830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169830u, 0x179454u, 0x17945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17945Cu;
label_17945c:
    // 0x17945c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17945cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179460: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x179460u;
    SET_GPR_U32(ctx, 31, 0x179468u);
    ctx->pc = 0x179464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179460u;
    // 0x179464: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x179460u, 0x179468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179468u;
label_179468:
    // 0x179468: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179468u;
    {
        const bool branch_taken_0x179468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179468u;
        // 0x17946c: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179468) {
            ctx->pc = 0x17947Cu;
            goto label_17947c;
        }
    }
    ctx->pc = 0x179470u;
    // 0x179470: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x179470u;
    {
        const bool branch_taken_0x179470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179470u;
        // 0x179474: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179470) {
            ctx->pc = 0x17949Cu;
            goto label_17949c;
        }
    }
    ctx->pc = 0x179478u;
label_179478:
    // 0x179478: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x179478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17947c:
    // 0x17947c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17947cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x179480: 0x2e030014  sltiu       $v1, $s0, 0x14
    ctx->pc = 0x179480u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x179484: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x179484u;
    {
        const bool branch_taken_0x179484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x179488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179484u;
        // 0x179488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179484) {
            ctx->pc = 0x17949Cu;
            goto label_17949c;
        }
    }
    ctx->pc = 0x17948Cu;
    // 0x17948c: 0x92420530  lbu         $v0, 0x530($s2)
    ctx->pc = 0x17948cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1328)));
    // 0x179490: 0x1622ffe9  bne         $s1, $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x179490u;
    {
        const bool branch_taken_0x179490 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x179494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179490u;
        // 0x179494: 0x2151018  mult        $v0, $s0, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179490) {
            ctx->pc = 0x179438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179438;
        }
    }
    ctx->pc = 0x179498u;
label_179498:
    // 0x179498: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x179498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17949c:
    // 0x17949c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x17949cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1794a0: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x1794a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1794a4: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x1794a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1794a8: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x1794a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1794ac: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x1794acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1794b0: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x1794b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1794b4: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x1794b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1794b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1794B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1794BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794B8u;
        // 0x1794bc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1794B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1794C0u;
}
