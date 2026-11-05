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

// Function: sub_003AD830
// Address: 0x3ad830 - 0x3ada00
void sub_003AD830_0x3ad830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD830_0x3ad830");
#endif

    switch (ctx->pc) {
        case 0x3ad874u: goto label_3ad874;
        case 0x3ad8a8u: goto label_3ad8a8;
        case 0x3ad908u: goto label_3ad908;
        case 0x3ad968u: goto label_3ad968;
        case 0x3ad9f0u: goto label_3ad9f0;
        default: break;
    }

    ctx->pc = 0x3ad830u;

    // 0x3ad830: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3ad830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3ad834: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ad834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ad838: 0x8c4336fc  lw          $v1, 0x36FC($v0)
    ctx->pc = 0x3ad838u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4236FCu));
    // 0x3ad83c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ad83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ad840: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ad840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad844: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ad844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ad848: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ad848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad84c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ad84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ad850: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3ad850u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad854: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3ad854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3ad858: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3ad858u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad85c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3ad85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3ad860: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x3ad860u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad864: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AD864u;
    {
        const bool branch_taken_0x3ad864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD864u;
        // 0x3ad868: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad864) {
            ctx->pc = 0x3AD874u;
            goto label_3ad874;
        }
    }
    ctx->pc = 0x3AD86Cu;
    // 0x3ad86c: 0xc0eb602  jal         func_3AD808
    ctx->pc = 0x3AD86Cu;
    SET_GPR_U32(ctx, 31, 0x3AD874u);
    ctx->pc = 0x3AD808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD808u, 0x3AD86Cu, 0x3AD874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD874u;
label_3ad874:
    // 0x3ad874: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x3ad874u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3ad878: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x3ad878u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3ad87c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AD87Cu;
    {
        const bool branch_taken_0x3ad87c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD87Cu;
        // 0x3ad880: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad87c) {
            ctx->pc = 0x3AD88Cu;
            goto label_3ad88c;
        }
    }
    ctx->pc = 0x3AD884u;
    // 0x3ad884: 0x1a00004f  blez        $s0, . + 4 + (0x4F << 2)
    ctx->pc = 0x3AD884u;
    {
        const bool branch_taken_0x3ad884 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3AD888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD884u;
        // 0x3ad888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad884) {
            ctx->pc = 0x3AD9C4u;
            goto label_3ad9c4;
        }
    }
    ctx->pc = 0x3AD88Cu;
label_3ad88c:
    // 0x3ad88c: 0x3c0b0048  lui         $t3, 0x48
    ctx->pc = 0x3ad88cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)72 << 16));
    // 0x3ad890: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ad890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad894: 0x2562f540  addiu       $v0, $t3, -0xAC0
    ctx->pc = 0x3ad894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294964544));
    // 0x3ad898: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AD898u;
    {
        const bool branch_taken_0x3ad898 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3AD89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD898u;
        // 0x3ad89c: 0x844a0200  lh          $t2, 0x200($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad898) {
            ctx->pc = 0x3AD8FCu;
            goto label_3ad8fc;
        }
    }
    ctx->pc = 0x3AD8A0u;
    // 0x3ad8a0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3ad8a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad8a4: 0x0  nop
    ctx->pc = 0x3ad8a4u;
    // NOP
label_3ad8a8:
    // 0x3ad8a8: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x3ad8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x3ad8ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ad8acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ad8b0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3ad8b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ad8b4: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x3ad8b4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3ad8b8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3ad8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3ad8bc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3ad8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3ad8c0: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x3ad8c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x3ad8c4: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x3ad8c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3ad8c8: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x3ad8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x3ad8cc: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x3ad8ccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3ad8d0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3ad8d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad8d4: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x3ad8d4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x3ad8d8: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x3ad8d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x3ad8dc: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x3ad8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x3ad8e0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3ad8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ad8e4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3ad8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ad8e8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3ad8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3ad8ec: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3AD8ECu;
    {
        const bool branch_taken_0x3ad8ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD8ECu;
        // 0x3ad8f0: 0x846a0000  lh          $t2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad8ec) {
            ctx->pc = 0x3AD8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad8a8;
        }
    }
    ctx->pc = 0x3AD8F4u;
    // 0x3ad8f4: 0x2562f540  addiu       $v0, $t3, -0xAC0
    ctx->pc = 0x3ad8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294964544));
    // 0x3ad8f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ad8f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad8fc:
    // 0x3ad8fc: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3AD8FCu;
    {
        const bool branch_taken_0x3ad8fc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3AD900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD8FCu;
        // 0x3ad900: 0x84480400  lh          $t0, 0x400($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad8fc) {
            ctx->pc = 0x3AD954u;
            goto label_3ad954;
        }
    }
    ctx->pc = 0x3AD904u;
    // 0x3ad904: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3ad904u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ad908:
    // 0x3ad908: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x3ad908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x3ad90c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ad90cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ad910: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3ad910u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ad914: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x3ad914u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3ad918: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3ad918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3ad91c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3ad91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3ad920: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x3ad920u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x3ad924: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x3ad924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3ad928: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x3ad928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x3ad92c: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x3ad92cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3ad930: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3ad930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad934: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x3ad934u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x3ad938: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x3ad938u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x3ad93c: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x3ad93cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x3ad940: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3ad940u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ad944: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3ad944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ad948: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3ad948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3ad94c: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3AD94Cu;
    {
        const bool branch_taken_0x3ad94c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD94Cu;
        // 0x3ad950: 0x84680000  lh          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad94c) {
            ctx->pc = 0x3AD908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad908;
        }
    }
    ctx->pc = 0x3AD954u;
label_3ad954:
    // 0x3ad954: 0x2562f540  addiu       $v0, $t3, -0xAC0
    ctx->pc = 0x3ad954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294964544));
    // 0x3ad958: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ad958u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad95c: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3AD95Cu;
    {
        const bool branch_taken_0x3ad95c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3AD960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD95Cu;
        // 0x3ad960: 0x84440600  lh          $a0, 0x600($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad95c) {
            ctx->pc = 0x3AD9B4u;
            goto label_3ad9b4;
        }
    }
    ctx->pc = 0x3AD964u;
    // 0x3ad964: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3ad964u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ad968:
    // 0x3ad968: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x3ad968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x3ad96c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ad96cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3ad970: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3ad970u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ad974: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x3ad974u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3ad978: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3ad978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3ad97c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3ad97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3ad980: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x3ad980u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x3ad984: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x3ad984u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3ad988: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x3ad988u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3ad98c: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x3ad98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x3ad990: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3ad990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad994: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x3ad994u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x3ad998: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x3ad998u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x3ad99c: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x3ad99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x3ad9a0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3ad9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ad9a4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3ad9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ad9a8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3ad9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3ad9ac: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3AD9ACu;
    {
        const bool branch_taken_0x3ad9ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD9ACu;
        // 0x3ad9b0: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad9ac) {
            ctx->pc = 0x3AD968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad968;
        }
    }
    ctx->pc = 0x3AD9B4u;
label_3ad9b4:
    // 0x3ad9b4: 0xa64a0000  sh          $t2, 0x0($s2)
    ctx->pc = 0x3ad9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x3ad9b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ad9b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad9bc: 0xa6680000  sh          $t0, 0x0($s3)
    ctx->pc = 0x3ad9bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x3ad9c0: 0xa6840000  sh          $a0, 0x0($s4)
    ctx->pc = 0x3ad9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
label_3ad9c4:
    // 0x3ad9c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ad9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ad9c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ad9c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ad9cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ad9ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ad9d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3ad9d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ad9d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3ad9d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ad9d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3ad9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3ad9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD9DCu;
        // 0x3ad9e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD9E4u;
    // 0x3ad9e4: 0x0  nop
    ctx->pc = 0x3ad9e4u;
    // NOP
    // 0x3ad9e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3ad9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3ad9ec: 0x0  nop
    ctx->pc = 0x3ad9ecu;
    // NOP
label_3ad9f0:
    // 0x3ad9f0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3ad9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3ad9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD9F4u;
        // 0x3ad9f8: 0xac44371c  sw          $a0, 0x371C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 14108), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD9FCu;
    // 0x3ad9fc: 0x0  nop
    ctx->pc = 0x3ad9fcu;
    // NOP
    ctx->pc = 0x3ada00u;
}
