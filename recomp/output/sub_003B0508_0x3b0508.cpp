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

// Function: sub_003B0508
// Address: 0x3b0508 - 0x3b0610
void sub_003B0508_0x3b0508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0508_0x3b0508");
#endif

    switch (ctx->pc) {
        case 0x3b0560u: goto label_3b0560;
        case 0x3b05acu: goto label_3b05ac;
        case 0x3b05d0u: goto label_3b05d0;
        default: break;
    }

    ctx->pc = 0x3b0508u;

    // 0x3b0508: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3b0508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3b050c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b050cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b0510: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x3b0510u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b0514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b0514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b0518: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3b0518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3b051c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b051cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0520: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b0520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b0524: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3b0524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0528: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b0528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b052c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b052cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0530: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3b0530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3b0534: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B0534u;
    {
        const bool branch_taken_0x3b0534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0534) {
            ctx->pc = 0x3B0538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0534u;
            // 0x3b0538: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B053Cu;
            goto label_3b053c;
        }
    }
    ctx->pc = 0x3B053Cu;
label_3b053c:
    // 0x3b053c: 0x4012  mflo        $t0
    ctx->pc = 0x3b053cu;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x3b0540: 0x3810  mfhi        $a3
    ctx->pc = 0x3b0540u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x3b0544: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3b0544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0548: 0xa2070000  sb          $a3, 0x0($s0)
    ctx->pc = 0x3b0548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3b054c: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B054Cu;
    {
        const bool branch_taken_0x3b054c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b054c) {
            ctx->pc = 0x3B0550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B054Cu;
            // 0x3b0550: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0560u;
            goto label_3b0560;
        }
    }
    ctx->pc = 0x3B0554u;
    // 0x3b0554: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3B0554u;
    {
        const bool branch_taken_0x3b0554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0554u;
        // 0x3b0558: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0554) {
            ctx->pc = 0x3B059Cu;
            goto label_3b059c;
        }
    }
    ctx->pc = 0x3B055Cu;
    // 0x3b055c: 0x0  nop
    ctx->pc = 0x3b055cu;
    // NOP
label_3b0560:
    // 0x3b0560: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x3b0560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3b0564: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3B0564u;
    {
        const bool branch_taken_0x3b0564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0564u;
        // 0x3b0568: 0x2053021  addu        $a2, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0564) {
            ctx->pc = 0x3B059Cu;
            goto label_3b059c;
        }
    }
    ctx->pc = 0x3B056Cu;
    // 0x3b056c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3b056cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3b0570: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3b0570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3b0574: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x3b0574u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b0578: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B0578u;
    {
        const bool branch_taken_0x3b0578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0578) {
            ctx->pc = 0x3B057Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0578u;
            // 0x3b057c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0580u;
            goto label_3b0580;
        }
    }
    ctx->pc = 0x3B0580u;
label_3b0580:
    // 0x3b0580: 0x4012  mflo        $t0
    ctx->pc = 0x3b0580u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x3b0584: 0x3810  mfhi        $a3
    ctx->pc = 0x3b0584u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x3b0588: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3b0588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b058c: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x3b058cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x3b0590: 0x5480fff3  bnel        $a0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x3B0590u;
    {
        const bool branch_taken_0x3b0590 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0590) {
            ctx->pc = 0x3B0594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0590u;
            // 0x3b0594: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b0560;
        }
    }
    ctx->pc = 0x3B0598u;
    // 0x3b0598: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x3b0598u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
label_3b059c:
    // 0x3b059c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3b059cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3b05a0: 0x245191d0  addiu       $s1, $v0, -0x6E30
    ctx->pc = 0x3b05a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939088));
    // 0x3b05a4: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3B05A4u;
    SET_GPR_U32(ctx, 31, 0x3B05ACu);
    ctx->pc = 0x3B05A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B05A4u;
    // 0x3b05a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3B05A4u, 0x3B05ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B05ACu;
label_3b05ac:
    // 0x3b05ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3b05acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b05b0: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x3b05b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3b05b4: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x3b05b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b05b8: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x3b05b8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x3b05bc: 0x18e0000b  blez        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x3B05BCu;
    {
        const bool branch_taken_0x3b05bc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x3B05C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B05BCu;
        // 0x3b05c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b05bc) {
            ctx->pc = 0x3B05ECu;
            goto label_3b05ec;
        }
    }
    ctx->pc = 0x3B05C4u;
    // 0x3b05c4: 0xf11021  addu        $v0, $a3, $s1
    ctx->pc = 0x3b05c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x3b05c8: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x3b05c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3b05cc: 0x0  nop
    ctx->pc = 0x3b05ccu;
    // NOP
label_3b05d0:
    // 0x3b05d0: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x3b05d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x3b05d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3b05d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3b05d8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x3b05d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b05dc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3b05dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3b05e0: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x3b05e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3b05e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B05E4u;
    {
        const bool branch_taken_0x3b05e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B05E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B05E4u;
        // 0x3b05e8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b05e4) {
            ctx->pc = 0x3B05D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b05d0;
        }
    }
    ctx->pc = 0x3B05ECu;
label_3b05ec:
    // 0x3b05ec: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x3b05ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x3b05f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b05f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b05f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b05f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b05f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b05f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b05fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3b05fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b0600: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x3b0600u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b0604: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0604u;
        // 0x3b0608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B060Cu;
    // 0x3b060c: 0x0  nop
    ctx->pc = 0x3b060cu;
    // NOP
    ctx->pc = 0x3b0610u;
}
