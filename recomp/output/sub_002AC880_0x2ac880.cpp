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

// Function: sub_002AC880
// Address: 0x2ac880 - 0x2ac9f0
void sub_002AC880_0x2ac880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC880_0x2ac880");
#endif

    switch (ctx->pc) {
        case 0x2ac8a8u: goto label_2ac8a8;
        case 0x2ac8e4u: goto label_2ac8e4;
        case 0x2ac924u: goto label_2ac924;
        case 0x2ac950u: goto label_2ac950;
        default: break;
    }

    ctx->pc = 0x2ac880u;

    // 0x2ac880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ac880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ac884: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ac884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ac888: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ac888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ac88c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ac88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ac890: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ac890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ac894: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2ac894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2ac898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ac898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ac89c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ac89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ac8a0: 0xc0ab1e8  jal         func_2AC7A0
    ctx->pc = 0x2AC8A0u;
    SET_GPR_U32(ctx, 31, 0x2AC8A8u);
    ctx->pc = 0x2AC8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC8A0u;
    // 0x2ac8a4: 0x241400b0  addiu       $s4, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC7A0u, 0x2AC8A0u, 0x2AC8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC8A8u;
label_2ac8a8:
    // 0x2ac8a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ac8a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac8ac: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2ac8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2ac8b0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ac8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2ac8b4: 0x24722508  addiu       $s2, $v1, 0x2508
    ctx->pc = 0x2ac8b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 9480));
    // 0x2ac8b8: 0x8c449160  lw          $a0, -0x6EA0($v0)
    ctx->pc = 0x2ac8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F9160u));
    // 0x2ac8bc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2ac8bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac8c0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2ac8c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac8c4: 0x941018  mult        $v0, $a0, $s4
    ctx->pc = 0x2ac8c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ac8c8: 0x244200ec  addiu       $v0, $v0, 0xEC
    ctx->pc = 0x2ac8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 236));
    // 0x2ac8cc: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x2ac8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2ac8d0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2ac8d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ac8d4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2AC8D4u;
    {
        const bool branch_taken_0x2ac8d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC8D4u;
        // 0x2ac8d8: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac8d4) {
            ctx->pc = 0x2AC904u;
            goto label_2ac904;
        }
    }
    ctx->pc = 0x2AC8DCu;
    // 0x2ac8dc: 0xc0ab14e  jal         func_2AC538
    ctx->pc = 0x2AC8DCu;
    SET_GPR_U32(ctx, 31, 0x2AC8E4u);
    ctx->pc = 0x2AC8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC8DCu;
    // 0x2ac8e0: 0x3c10004c  lui         $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC538u, 0x2AC8DCu, 0x2AC8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC8E4u;
label_2ac8e4:
    // 0x2ac8e4: 0xae022438  sw          $v0, 0x2438($s0)
    ctx->pc = 0x2ac8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9272), GPR_U32(ctx, 2));
    // 0x2ac8e8: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2ac8e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2ac8ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC8ECu;
    {
        const bool branch_taken_0x2ac8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC8ECu;
        // 0x2ac8f0: 0x8ea29160  lw          $v0, -0x6EA0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294938976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac8ec) {
            ctx->pc = 0x2AC910u;
            goto label_2ac910;
        }
    }
    ctx->pc = 0x2AC8F4u;
    // 0x2ac8f4: 0x541818  mult        $v1, $v0, $s4
    ctx->pc = 0x2ac8f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ac8f8: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x2ac8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2ac8fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC8FCu;
    {
        const bool branch_taken_0x2ac8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC8FCu;
        // 0x2ac900: 0xac5100f0  sw          $s1, 0xF0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac8fc) {
            ctx->pc = 0x2AC910u;
            goto label_2ac910;
        }
    }
    ctx->pc = 0x2AC904u;
label_2ac904:
    // 0x2ac904: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ac904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ac908: 0xac622438  sw          $v0, 0x2438($v1)
    ctx->pc = 0x2ac908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9272), GPR_U32(ctx, 2));
    // 0x2ac90c: 0xacb10004  sw          $s1, 0x4($a1)
    ctx->pc = 0x2ac90cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
label_2ac910:
    // 0x2ac910: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ac910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2ac914: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x2ac914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x2ac918: 0xfc51aa00  sd          $s1, -0x5600($v0)
    ctx->pc = 0x2ac918u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 17)); ps2TraceGuestWrite(rdram, 0x3FAA00u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3FAA00u, _value); } while (0);
    // 0x2ac91c: 0xc075e34  jal         func_1D78D0
    ctx->pc = 0x2AC91Cu;
    SET_GPR_U32(ctx, 31, 0x2AC924u);
    ctx->pc = 0x2AC920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC91Cu;
    // 0x2ac920: 0x2484dc80  addiu       $a0, $a0, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D78D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D78D0u, 0x2AC91Cu, 0x2AC924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC924u;
label_2ac924:
    // 0x2ac924: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ac924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac928: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2ac928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac92c: 0x19000014  blez        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2AC92Cu;
    {
        const bool branch_taken_0x2ac92c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2AC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC92Cu;
        // 0x2ac930: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac92c) {
            ctx->pc = 0x2AC980u;
            goto label_2ac980;
        }
    }
    ctx->pc = 0x2AC934u;
    // 0x2ac934: 0x26622508  addiu       $v0, $s3, 0x2508
    ctx->pc = 0x2ac934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 9480));
    // 0x2ac938: 0x904300ec  lbu         $v1, 0xEC($v0)
    ctx->pc = 0x2ac938u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x2ac93c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AC93Cu;
    {
        const bool branch_taken_0x2ac93c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC93Cu;
        // 0x2ac940: 0x81040  sll         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac93c) {
            ctx->pc = 0x2AC984u;
            goto label_2ac984;
        }
    }
    ctx->pc = 0x2AC944u;
    // 0x2ac944: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x2ac944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2ac948: 0x26662508  addiu       $a2, $s3, 0x2508
    ctx->pc = 0x2ac948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 9480));
    // 0x2ac94c: 0xa71818  mult        $v1, $a1, $a3
    ctx->pc = 0x2ac94cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2ac950:
    // 0x2ac950: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ac950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ac954: 0xa8202a  slt         $a0, $a1, $t0
    ctx->pc = 0x2ac954u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2ac958: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2ac958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ac95c: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x2ac95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x2ac960: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC960u;
    {
        const bool branch_taken_0x2ac960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC960u;
        // 0x2ac964: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac960) {
            ctx->pc = 0x2AC980u;
            goto label_2ac980;
        }
    }
    ctx->pc = 0x2AC968u;
    // 0x2ac968: 0xa71818  mult        $v1, $a1, $a3
    ctx->pc = 0x2ac968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ac96c: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x2ac96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ac970: 0x904300ec  lbu         $v1, 0xEC($v0)
    ctx->pc = 0x2ac970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x2ac974: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2AC974u;
    {
        const bool branch_taken_0x2ac974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC974u;
        // 0x2ac978: 0xa71818  mult        $v1, $a1, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac974) {
            ctx->pc = 0x2AC950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ac950;
        }
    }
    ctx->pc = 0x2AC97Cu;
    // 0x2ac97c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ac97cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ac980:
    // 0x2ac980: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x2ac980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2ac984:
    // 0x2ac984: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2ac984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2ac988: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2ac988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ac98c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC98Cu;
    {
        const bool branch_taken_0x2ac98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC98Cu;
        // 0x2ac990: 0x8ea29160  lw          $v0, -0x6EA0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294938976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac98c) {
            ctx->pc = 0x2AC9B0u;
            goto label_2ac9b0;
        }
    }
    ctx->pc = 0x2AC994u;
    // 0x2ac994: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x2ac994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2ac998: 0x26642508  addiu       $a0, $s3, 0x2508
    ctx->pc = 0x2ac998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 9480));
    // 0x2ac99c: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x2ac99cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ac9a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ac9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac9a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ac9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ac9a8: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x2ac9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ac9ac: 0x8ea29160  lw          $v0, -0x6EA0($s5)
    ctx->pc = 0x2ac9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294938976)));
label_2ac9b0:
    // 0x2ac9b0: 0x240300b0  addiu       $v1, $zero, 0xB0
    ctx->pc = 0x2ac9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2ac9b4: 0x26642508  addiu       $a0, $s3, 0x2508
    ctx->pc = 0x2ac9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 9480));
    // 0x2ac9b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ac9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac9bc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2ac9bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ac9c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ac9c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac9c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ac9c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ac9c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ac9c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac9cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ac9ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac9d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ac9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ac9d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ac9d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac9d8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2ac9d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ac9dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ac9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ac9e0: 0xa04500ec  sb          $a1, 0xEC($v0)
    ctx->pc = 0x2ac9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ac9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC9E4u;
        // 0x2ac9e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC9ECu;
    // 0x2ac9ec: 0x0  nop
    ctx->pc = 0x2ac9ecu;
    // NOP
    ctx->pc = 0x2ac9f0u;
}
