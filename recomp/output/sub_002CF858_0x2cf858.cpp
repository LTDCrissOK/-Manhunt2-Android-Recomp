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

// Function: sub_002CF858
// Address: 0x2cf858 - 0x2cf968
void sub_002CF858_0x2cf858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF858_0x2cf858");
#endif

    switch (ctx->pc) {
        case 0x2cf880u: goto label_2cf880;
        case 0x2cf89cu: goto label_2cf89c;
        case 0x2cf94cu: goto label_2cf94c;
        default: break;
    }

    ctx->pc = 0x2cf858u;

    // 0x2cf858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf85c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf860: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cf860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cf864: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf868: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cf868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cf86c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cf86cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf870: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2cf870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2cf874: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cf874u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf878: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x2CF878u;
    SET_GPR_U32(ctx, 31, 0x2CF880u);
    ctx->pc = 0x2CF87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF878u;
    // 0x2cf87c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x2CF878u, 0x2CF880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF880u;
label_2cf880:
    // 0x2cf880: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2cf880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2cf884: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2cf884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2cf888: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2cf888u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cf88c: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2CF88Cu;
    {
        const bool branch_taken_0x2cf88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF88Cu;
        // 0x2cf890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf88c) {
            ctx->pc = 0x2CF944u;
            goto label_2cf944;
        }
    }
    ctx->pc = 0x2CF894u;
    // 0x2cf894: 0xc0b3dbe  jal         func_2CF6F8
    ctx->pc = 0x2CF894u;
    SET_GPR_U32(ctx, 31, 0x2CF89Cu);
    ctx->pc = 0x2CF898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF894u;
    // 0x2cf898: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF6F8u, 0x2CF894u, 0x2CF89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF89Cu;
label_2cf89c:
    // 0x2cf89c: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x2cf89cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cf8a0: 0x4830005  bgezl       $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CF8A0u;
    {
        const bool branch_taken_0x2cf8a0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2cf8a0) {
            ctx->pc = 0x2CF8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF8A0u;
            // 0x2cf8a4: 0x8e02005c  lw          $v0, 0x5C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF8B8u;
            goto label_2cf8b8;
        }
    }
    ctx->pc = 0x2CF8A8u;
    // 0x2cf8a8: 0xde220008  ld          $v0, 0x8($s1)
    ctx->pc = 0x2cf8a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2cf8ac: 0x4400025  bltz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2CF8ACu;
    {
        const bool branch_taken_0x2cf8ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2CF8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF8ACu;
        // 0x2cf8b0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf8ac) {
            ctx->pc = 0x2CF944u;
            goto label_2cf944;
        }
    }
    ctx->pc = 0x2CF8B4u;
    // 0x2cf8b4: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2cf8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2cf8b8:
    // 0x2cf8b8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2cf8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2cf8bc: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2cf8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2cf8c0: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2cf8c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cf8c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cf8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cf8c8: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x2cf8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x2cf8cc: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2cf8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2cf8d0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2cf8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2cf8d4: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2cf8d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cf8d8: 0xde240008  ld          $a0, 0x8($s1)
    ctx->pc = 0x2cf8d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2cf8dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cf8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cf8e0: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x2cf8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x2cf8e4: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2cf8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2cf8e8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2cf8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2cf8ec: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2cf8ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2cf8f0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2cf8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2cf8f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cf8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cf8f8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2cf8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2cf8fc: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x2cf8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2cf900: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2cf900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2cf904: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x2cf904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2cf908: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2cf908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2cf90c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2cf90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cf910: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2cf910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x2cf914: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2cf914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2cf918: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2cf918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2cf91c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2cf91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2cf920: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2cf920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2cf924: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x2cf924u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cf928: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2cf928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cf92c: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x2cf92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x2cf930: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CF930u;
    {
        const bool branch_taken_0x2cf930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf930) {
            ctx->pc = 0x2CF934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF930u;
            // 0x2cf934: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF938u;
            goto label_2cf938;
        }
    }
    ctx->pc = 0x2CF938u;
label_2cf938:
    // 0x2cf938: 0x2810  mfhi        $a1
    ctx->pc = 0x2cf938u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2cf93c: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x2cf93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x2cf940: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2cf940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf944:
    // 0x2cf944: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x2CF944u;
    SET_GPR_U32(ctx, 31, 0x2CF94Cu);
    ctx->pc = 0x2CF948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF944u;
    // 0x2cf948: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x2CF944u, 0x2CF94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF94Cu;
label_2cf94c:
    // 0x2cf94c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2cf94cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf950: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf954: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cf954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf958: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cf958u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf95c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cf95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cf960: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF960u;
        // 0x2cf964: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF968u;
}
