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

// Function: sub_003AD740
// Address: 0x3ad740 - 0x3ad7a8
void sub_003AD740_0x3ad740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD740_0x3ad740");
#endif

    switch (ctx->pc) {
        case 0x3ad740u: goto label_3ad740;
        case 0x3ad744u: goto label_3ad744;
        case 0x3ad748u: goto label_3ad748;
        case 0x3ad74cu: goto label_3ad74c;
        case 0x3ad750u: goto label_3ad750;
        case 0x3ad754u: goto label_3ad754;
        case 0x3ad758u: goto label_3ad758;
        case 0x3ad75cu: goto label_3ad75c;
        case 0x3ad760u: goto label_3ad760;
        case 0x3ad764u: goto label_3ad764;
        case 0x3ad768u: goto label_3ad768;
        case 0x3ad76cu: goto label_3ad76c;
        case 0x3ad770u: goto label_3ad770;
        case 0x3ad774u: goto label_3ad774;
        case 0x3ad778u: goto label_3ad778;
        case 0x3ad77cu: goto label_3ad77c;
        case 0x3ad780u: goto label_3ad780;
        case 0x3ad784u: goto label_3ad784;
        case 0x3ad788u: goto label_3ad788;
        case 0x3ad78cu: goto label_3ad78c;
        case 0x3ad790u: goto label_3ad790;
        case 0x3ad794u: goto label_3ad794;
        case 0x3ad798u: goto label_3ad798;
        case 0x3ad79cu: goto label_3ad79c;
        case 0x3ad7a0u: goto label_3ad7a0;
        case 0x3ad7a4u: goto label_3ad7a4;
        default: break;
    }

    ctx->pc = 0x3ad740u;

label_3ad740:
    // 0x3ad740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ad740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ad744:
    // 0x3ad744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ad744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3ad748:
    // 0x3ad748: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ad748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ad74c:
    // 0x3ad74c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ad74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3ad750:
    // 0x3ad750: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ad750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ad754:
    // 0x3ad754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ad754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3ad758:
    // 0x3ad758: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x3ad758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_3ad75c:
    // 0x3ad75c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3ad760:
    if (ctx->pc == 0x3AD760u) {
        ctx->pc = 0x3AD760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD75Cu;
        // 0x3ad760: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD764u;
        goto label_3ad764;
    }
    ctx->pc = 0x3AD75Cu;
    {
        const bool branch_taken_0x3ad75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD75Cu;
        // 0x3ad760: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad75c) {
            ctx->pc = 0x3AD774u;
            goto label_3ad774;
        }
    }
    ctx->pc = 0x3AD764u;
label_3ad764:
    // 0x3ad764: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3ad764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3ad768:
    // 0x3ad768: 0x8c4336e8  lw          $v1, 0x36E8($v0)
    ctx->pc = 0x3ad768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14056)));
label_3ad76c:
    // 0x3ad76c: 0x60f809  jalr        $v1
label_3ad770:
    if (ctx->pc == 0x3AD770u) {
        ctx->pc = 0x3AD774u;
        goto label_3ad774;
    }
    ctx->pc = 0x3AD76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AD774u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD76Cu, 0x3AD774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD774u;
label_3ad774:
    // 0x3ad774: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x3ad774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_3ad778:
    // 0x3ad778: 0xae3000b8  sw          $s0, 0xB8($s1)
    ctx->pc = 0x3ad778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 16));
label_3ad77c:
    // 0x3ad77c: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x3ad77cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3ad780:
    // 0x3ad780: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3ad784:
    if (ctx->pc == 0x3AD784u) {
        ctx->pc = 0x3AD784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD780u;
        // 0x3ad784: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD788u;
        goto label_3ad788;
    }
    ctx->pc = 0x3AD780u;
    {
        const bool branch_taken_0x3ad780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad780) {
            ctx->pc = 0x3AD784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD780u;
            // 0x3ad784: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD788u;
            goto label_3ad788;
        }
    }
    ctx->pc = 0x3AD788u;
label_3ad788:
    // 0x3ad788: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ad788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ad78c:
    // 0x3ad78c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ad78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ad790:
    // 0x3ad790: 0x1812  mflo        $v1
    ctx->pc = 0x3ad790u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_3ad794:
    // 0x3ad794: 0xae2300bc  sw          $v1, 0xBC($s1)
    ctx->pc = 0x3ad794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 3));
label_3ad798:
    // 0x3ad798: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ad798u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ad79c:
    // 0x3ad79c: 0x3e00008  jr          $ra
label_3ad7a0:
    if (ctx->pc == 0x3AD7A0u) {
        ctx->pc = 0x3AD7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD79Cu;
        // 0x3ad7a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD7A4u;
        goto label_3ad7a4;
    }
    ctx->pc = 0x3AD79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD79Cu;
        // 0x3ad7a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD7A4u;
label_3ad7a4:
    // 0x3ad7a4: 0x0  nop
    ctx->pc = 0x3ad7a4u;
    // NOP
    ctx->pc = 0x3ad7a8u;
}
