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

// Function: sub_00208370
// Address: 0x208370 - 0x208558
void sub_00208370_0x208370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208370_0x208370");
#endif

    switch (ctx->pc) {
        case 0x2083c0u: goto label_2083c0;
        case 0x2083d4u: goto label_2083d4;
        case 0x208458u: goto label_208458;
        case 0x2084a8u: goto label_2084a8;
        case 0x2084b0u: goto label_2084b0;
        default: break;
    }

    ctx->pc = 0x208370u;

    // 0x208370: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x208370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x208374: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x208374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208378: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x208378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20837c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20837cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x208380: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x208380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208384: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x208384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x208388: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x208388u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20838c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20838cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x208390: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x208390u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208394: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x208394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x208398: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x208398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x20839c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x20839cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2083a0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2083a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2083a4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2083a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2083a8: 0x1242005f  beq         $s2, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2083A8u;
    {
        const bool branch_taken_0x2083a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2083ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083A8u;
        // 0x2083ac: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083a8) {
            ctx->pc = 0x208528u;
            goto label_208528;
        }
    }
    ctx->pc = 0x2083B0u;
    // 0x2083b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2083b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2083b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2083b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2083b8: 0xc0821c2  jal         func_208708
    ctx->pc = 0x2083B8u;
    SET_GPR_U32(ctx, 31, 0x2083C0u);
    ctx->pc = 0x2083BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2083B8u;
    // 0x2083bc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208708u, 0x2083B8u, 0x2083C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2083C0u;
label_2083c0:
    // 0x2083c0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2083c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2083c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2083c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2083c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2083c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2083cc: 0xc0821c2  jal         func_208708
    ctx->pc = 0x2083CCu;
    SET_GPR_U32(ctx, 31, 0x2083D4u);
    ctx->pc = 0x2083D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2083CCu;
    // 0x2083d0: 0x26860001  addiu       $a2, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208708u, 0x2083CCu, 0x2083D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2083D4u;
label_2083d4:
    // 0x2083d4: 0x568023  subu        $s0, $v0, $s6
    ctx->pc = 0x2083d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2083d8: 0x12000053  beqz        $s0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2083D8u;
    {
        const bool branch_taken_0x2083d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2083DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083D8u;
        // 0x2083dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083d8) {
            ctx->pc = 0x208528u;
            goto label_208528;
        }
    }
    ctx->pc = 0x2083E0u;
    // 0x2083e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2083e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2083e4: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2083E4u;
    {
        const bool branch_taken_0x2083e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2083E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2083E4u;
        // 0x2083e8: 0x2406003b  addiu       $a2, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2083e4) {
            ctx->pc = 0x208408u;
            goto label_208408;
        }
    }
    ctx->pc = 0x2083ECu;
    // 0x2083ec: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x2083ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2083f0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2083f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2083f4: 0x2432018  mult        $a0, $s2, $v1
    ctx->pc = 0x2083f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2083f8: 0x941821  addu        $v1, $a0, $s4
    ctx->pc = 0x2083f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2083fc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2083fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x208400: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x208400u;
    {
        const bool branch_taken_0x208400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208400u;
        // 0x208404: 0xa0602d80  sb          $zero, 0x2D80($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 11648), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208400) {
            ctx->pc = 0x208528u;
            goto label_208528;
        }
    }
    ctx->pc = 0x208408u;
label_208408:
    // 0x208408: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x208408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x20840c: 0x2461018  mult        $v0, $s2, $a2
    ctx->pc = 0x20840cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x208410: 0x2452818  mult        $a1, $s2, $a1
    ctx->pc = 0x208410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x208414: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x208414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x208418: 0x26242d80  addiu       $a0, $s1, 0x2D80
    ctx->pc = 0x208418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11648));
    // 0x20841c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x20841cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x208420: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x208420u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208424: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x208424u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208428: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x208428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x20842c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20842cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x208430: 0x26221760  addiu       $v0, $s1, 0x1760
    ctx->pc = 0x208430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5984));
    // 0x208434: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x208434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x208438: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x208438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x20843c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20843cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208444: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x208444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208448: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x208448u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20844c: 0x1a000009  blez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20844Cu;
    {
        const bool branch_taken_0x20844c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x208450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20844Cu;
        // 0x208450: 0x80970000  lb          $s7, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20844c) {
            ctx->pc = 0x208474u;
            goto label_208474;
        }
    }
    ctx->pc = 0x208454u;
    // 0x208454: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x208454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208458:
    // 0x208458: 0xa71004  sllv        $v0, $a3, $a1
    ctx->pc = 0x208458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x20845c: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x20845cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x208460: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x208460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x208464: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x208464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x208468: 0xb0182a  slt         $v1, $a1, $s0
    ctx->pc = 0x208468u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x20846c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20846Cu;
    {
        const bool branch_taken_0x20846c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x208470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20846Cu;
        // 0x208470: 0x82980a  movz        $s3, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20846c) {
            ctx->pc = 0x208458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208458;
        }
    }
    ctx->pc = 0x208474u;
label_208474:
    // 0x208474: 0x1a600021  blez        $s3, . + 4 + (0x21 << 2)
    ctx->pc = 0x208474u;
    {
        const bool branch_taken_0x208474 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x208478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208474u;
        // 0x208478: 0x2402003b  addiu       $v0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208474) {
            ctx->pc = 0x2084FCu;
            goto label_2084fc;
        }
    }
    ctx->pc = 0x20847Cu;
    // 0x20847c: 0x240300ec  addiu       $v1, $zero, 0xEC
    ctx->pc = 0x20847cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x208480: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x208480u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x208484: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x208484u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208488: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x208488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x20848c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x20848cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x208490: 0x102a021  addu        $s4, $t0, $v0
    ctx->pc = 0x208490u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x208494: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x208494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208498: 0x800013  mtlo        $a0
    ctx->pc = 0x208498u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x20849c: 0x72431800  madd        $v1, $s2, $v1
    ctx->pc = 0x20849cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2084a0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2084a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2084a4: 0x0  nop
    ctx->pc = 0x2084a4u;
    // NOP
label_2084a8:
    // 0x2084a8: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2084A8u;
    SET_GPR_U32(ctx, 31, 0x2084B0u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2084A8u, 0x2084B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2084B0u;
label_2084b0:
    // 0x2084b0: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x2084b0u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2084b4: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2084B4u;
    {
        const bool branch_taken_0x2084b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2084b4) {
            ctx->pc = 0x2084B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2084B4u;
            // 0x2084b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2084BCu;
            goto label_2084bc;
        }
    }
    ctx->pc = 0x2084BCu;
label_2084bc:
    // 0x2084bc: 0x1810  mfhi        $v1
    ctx->pc = 0x2084bcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2084c0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2084c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2084c4: 0xde1804  sllv        $v1, $fp, $a2
    ctx->pc = 0x2084c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), GPR_U32(ctx, 6) & 0x1F));
    // 0x2084c8: 0x2a31024  and         $v0, $s5, $v1
    ctx->pc = 0x2084c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
    // 0x2084cc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2084CCu;
    {
        const bool branch_taken_0x2084cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2084D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084CCu;
        // 0x2084d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2084cc) {
            ctx->pc = 0x2084F4u;
            goto label_2084f4;
        }
    }
    ctx->pc = 0x2084D4u;
    // 0x2084d4: 0x56e60003  bnel        $s7, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2084D4u;
    {
        const bool branch_taken_0x2084d4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 6));
        if (branch_taken_0x2084d4) {
            ctx->pc = 0x2084D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2084D4u;
            // 0x2084d8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2084E4u;
            goto label_2084e4;
        }
    }
    ctx->pc = 0x2084DCu;
    // 0x2084dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2084DCu;
    {
        const bool branch_taken_0x2084dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2084dc) {
            ctx->pc = 0x2084F4u;
            goto label_2084f4;
        }
    }
    ctx->pc = 0x2084E4u;
label_2084e4:
    // 0x2084e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2084e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2084e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2084e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2084ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2084ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2084f0: 0xa2860000  sb          $a2, 0x0($s4)
    ctx->pc = 0x2084f0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 6));
label_2084f4:
    // 0x2084f4: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2084F4u;
    {
        const bool branch_taken_0x2084f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2084f4) {
            ctx->pc = 0x2084A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2084a8;
        }
    }
    ctx->pc = 0x2084FCu;
label_2084fc:
    // 0x2084fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2084fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208500: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x208500u;
    {
        const bool branch_taken_0x208500 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x208504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208500u;
        // 0x208504: 0x2c61021  addu        $v0, $s6, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208500) {
            ctx->pc = 0x208528u;
            goto label_208528;
        }
    }
    ctx->pc = 0x208508u;
    // 0x208508: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x208508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20850c: 0x240200ec  addiu       $v0, $zero, 0xEC
    ctx->pc = 0x20850cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x208510: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x208510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208514: 0x600013  mtlo        $v1
    ctx->pc = 0x208514u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x208518: 0x72421000  madd        $v0, $s2, $v0
    ctx->pc = 0x208518u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20851c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20851cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x208520: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x208520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x208524: 0x2c61021  addu        $v0, $s6, $a2
    ctx->pc = 0x208524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
label_208528:
    // 0x208528: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x208528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20852c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20852cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x208530: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x208530u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208534: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x208534u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x208538: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x208538u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20853c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x20853cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x208540: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x208540u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x208544: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x208544u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208548: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x208548u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20854c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x20854cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x208550: 0x3e00008  jr          $ra
    ctx->pc = 0x208550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208550u;
        // 0x208554: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208558u;
}
