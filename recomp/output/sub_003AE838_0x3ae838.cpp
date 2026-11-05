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

// Function: sub_003AE838
// Address: 0x3ae838 - 0x3ae9c0
void sub_003AE838_0x3ae838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE838_0x3ae838");
#endif

    switch (ctx->pc) {
        case 0x3ae8b0u: goto label_3ae8b0;
        default: break;
    }

    ctx->pc = 0x3ae838u;

    // 0x3ae838: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ae838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3ae83c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3ae83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3ae840: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3ae840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3ae844: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3ae844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3ae848: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3ae848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x3ae84c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x3ae84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x3ae850: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3ae850u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae854: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x3ae854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x3ae858: 0x26d40048  addiu       $s4, $s6, 0x48
    ctx->pc = 0x3ae858u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 72));
    // 0x3ae85c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3ae85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3ae860: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3ae860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3ae864: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x3ae864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x3ae868: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x3ae868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x3ae86c: 0x8e910010  lw          $s1, 0x10($s4)
    ctx->pc = 0x3ae86cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3ae870: 0x8e920028  lw          $s2, 0x28($s4)
    ctx->pc = 0x3ae870u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x3ae874: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3AE874u;
    {
        const bool branch_taken_0x3ae874 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae874) {
            ctx->pc = 0x3AE878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE874u;
            // 0x3ae878: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE87Cu;
            goto label_3ae87c;
        }
    }
    ctx->pc = 0x3AE87Cu;
label_3ae87c:
    // 0x3ae87c: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x3ae87cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x3ae880: 0x8ec20044  lw          $v0, 0x44($s6)
    ctx->pc = 0x3ae880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 68)));
    // 0x3ae884: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3ae884u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3ae888: 0x8ed70040  lw          $s7, 0x40($s6)
    ctx->pc = 0x3ae888u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x3ae88c: 0x251001a  div         $zero, $s2, $s1
    ctx->pc = 0x3ae88cu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3ae890: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x3ae890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x3ae894: 0x8e9e0014  lw          $fp, 0x14($s4)
    ctx->pc = 0x3ae894u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x3ae898: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3ae898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3ae89c: 0x8e93000c  lw          $s3, 0xC($s4)
    ctx->pc = 0x3ae89cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x3ae8a0: 0x8010  mfhi        $s0
    ctx->pc = 0x3ae8a0u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x3ae8a4: 0x9012  mflo        $s2
    ctx->pc = 0x3ae8a4u;
    SET_GPR_U64(ctx, 18, ctx->lo);
    // 0x3ae8a8: 0xc0ec454  jal         func_3B1150
    ctx->pc = 0x3AE8A8u;
    SET_GPR_U32(ctx, 31, 0x3AE8B0u);
    ctx->pc = 0x3AE8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE8A8u;
    // 0x3ae8ac: 0x8e950020  lw          $s5, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1150u, 0x3AE8A8u, 0x3AE8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE8B0u;
label_3ae8b0:
    // 0x3ae8b0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x3ae8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3ae8b4: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x3ae8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3ae8b8: 0x518818  mult        $s1, $v0, $s1
    ctx->pc = 0x3ae8b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x3ae8bc: 0x2439018  mult        $s2, $s2, $v1
    ctx->pc = 0x3ae8bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x3ae8c0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3ae8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3ae8c4: 0x70539818  mult1       $s3, $v0, $s3
    ctx->pc = 0x3ae8c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x3ae8c8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3AE8C8u;
    {
        const bool branch_taken_0x3ae8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae8c8) {
            ctx->pc = 0x3AE8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE8C8u;
            // 0x3ae8cc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE8D0u;
            goto label_3ae8d0;
        }
    }
    ctx->pc = 0x3AE8D0u;
label_3ae8d0:
    // 0x3ae8d0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3ae8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ae8d4: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x3ae8d4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3ae8d8: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x3ae8d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3ae8dc: 0xaed30094  sw          $s3, 0x94($s6)
    ctx->pc = 0x3ae8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 148), GPR_U32(ctx, 19));
    // 0x3ae8e0: 0x8812  mflo        $s1
    ctx->pc = 0x3ae8e0u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x3ae8e4: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x3ae8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3ae8e8: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x3ae8e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x3ae8ec: 0x2b0a821  addu        $s5, $s5, $s0
    ctx->pc = 0x3ae8ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x3ae8f0: 0xaed00090  sw          $s0, 0x90($s6)
    ctx->pc = 0x3ae8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 144), GPR_U32(ctx, 16));
    // 0x3ae8f4: 0x2b7102a  slt         $v0, $s5, $s7
    ctx->pc = 0x3ae8f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x3ae8f8: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3AE8F8u;
    {
        const bool branch_taken_0x3ae8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE8F8u;
        // 0x3ae8fc: 0x2b7a823  subu        $s5, $s5, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae8f8) {
            ctx->pc = 0x3AE990u;
            goto label_3ae990;
        }
    }
    ctx->pc = 0x3AE900u;
    // 0x3ae900: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3ae900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae904: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AE904u;
    {
        const bool branch_taken_0x3ae904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3AE908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE904u;
        // 0x3ae908: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae904) {
            ctx->pc = 0x3AE918u;
            goto label_3ae918;
        }
    }
    ctx->pc = 0x3AE90Cu;
    // 0x3ae90c: 0x8ec200e8  lw          $v0, 0xE8($s6)
    ctx->pc = 0x3ae90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
    // 0x3ae910: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3AE910u;
    {
        const bool branch_taken_0x3ae910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE910u;
        // 0x3ae914: 0xdfbe0050  ld          $fp, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae910) {
            ctx->pc = 0x3AE958u;
            goto label_3ae958;
        }
    }
    ctx->pc = 0x3AE918u;
label_3ae918:
    // 0x3ae918: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x3ae918u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ae91c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3ae91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae920: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x3ae920u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3ae924: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3ae924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae928: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3ae928u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3ae92c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3ae92cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae930: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3ae930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae934: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3ae934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ae938: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3ae938u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ae93c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3ae93cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3ae940: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3ae940u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ae944: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3ae944u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ae948: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3ae948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3ae94c: 0x80eb9ea  j           func_3AE7A8
    ctx->pc = 0x3AE94Cu;
    ctx->pc = 0x3AE950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE94Cu;
    // 0x3ae950: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE7A8u, 0x3AE94Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE954u;
    // 0x3ae954: 0x0  nop
    ctx->pc = 0x3ae954u;
    // NOP
label_3ae958:
    // 0x3ae958: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3ae958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae95c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x3ae95cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3ae960: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3ae960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae964: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3ae964u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3ae968: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3ae968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae96c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3ae96cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae970: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3ae970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ae974: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3ae974u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ae978: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3ae978u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3ae97c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3ae97cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ae980: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3ae980u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ae984: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3ae984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3ae988: 0x80eba06  j           func_3AE818
    ctx->pc = 0x3AE988u;
    ctx->pc = 0x3AE98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE988u;
    // 0x3ae98c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE818u, 0x3AE988u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3AE990u;
label_3ae990:
    // 0x3ae990: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3ae990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae994: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3ae994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ae998: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3ae998u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ae99c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3ae99cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3ae9a0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3ae9a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ae9a4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3ae9a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3ae9a8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3ae9a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ae9ac: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x3ae9acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3ae9b0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x3ae9b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ae9b4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3ae9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3ae9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE9B8u;
        // 0x3ae9bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE9C0u;
}
