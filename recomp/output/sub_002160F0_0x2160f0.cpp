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

// Function: sub_002160F0
// Address: 0x2160f0 - 0x2161d8
void sub_002160F0_0x2160f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002160F0_0x2160f0");
#endif

    switch (ctx->pc) {
        case 0x216130u: goto label_216130;
        case 0x216158u: goto label_216158;
        case 0x216178u: goto label_216178;
        case 0x216184u: goto label_216184;
        default: break;
    }

    ctx->pc = 0x2160f0u;

    // 0x2160f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2160f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2160f4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2160f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2160f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2160f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2160fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2160fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216100: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x216100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x216104: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x216104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x216108: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x216108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21610c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21610cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x216110: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x216110u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x216114: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x216114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x216118: 0x37a70008  ori         $a3, $sp, 0x8
    ctx->pc = 0x216118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x21611c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x21611cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x216120: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x216120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x216124: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x216124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x216128: 0xc0856f4  jal         func_215BD0
    ctx->pc = 0x216128u;
    SET_GPR_U32(ctx, 31, 0x216130u);
    ctx->pc = 0x21612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216128u;
    // 0x21612c: 0x37a8000c  ori         $t0, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215BD0u, 0x216128u, 0x216130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216130u;
label_216130:
    // 0x216130: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x216130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216134: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x216134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216138: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x216138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x21613c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x21613Cu;
    {
        const bool branch_taken_0x21613c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21613Cu;
        // 0x216140: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21613c) {
            ctx->pc = 0x2161B0u;
            goto label_2161b0;
        }
    }
    ctx->pc = 0x216144u;
    // 0x216144: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x216144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x216148: 0x24160014  addiu       $s6, $zero, 0x14
    ctx->pc = 0x216148u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21614c: 0x2455e4c0  addiu       $s5, $v0, -0x1B40
    ctx->pc = 0x21614cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960320));
    // 0x216150: 0x24140280  addiu       $s4, $zero, 0x280
    ctx->pc = 0x216150u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x216154: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x216154u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_216158:
    // 0x216158: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x216158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x21615c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x21615cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x216160: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x216160u;
    {
        const bool branch_taken_0x216160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216160u;
        // 0x216164: 0x24920001  addiu       $s2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216160) {
            ctx->pc = 0x216198u;
            goto label_216198;
        }
    }
    ctx->pc = 0x216168u;
    // 0x216168: 0x942818  mult        $a1, $a0, $s4
    ctx->pc = 0x216168u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x21616c: 0x2361818  mult        $v1, $s1, $s6
    ctx->pc = 0x21616cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x216170: 0xb51021  addu        $v0, $a1, $s5
    ctx->pc = 0x216170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x216174: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x216174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_216178:
    // 0x216178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21617c: 0xc085454  jal         func_215150
    ctx->pc = 0x21617Cu;
    SET_GPR_U32(ctx, 31, 0x216184u);
    ctx->pc = 0x216180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21617Cu;
    // 0x216180: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215150u, 0x21617Cu, 0x216184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216184u;
label_216184:
    // 0x216184: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x216184u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x216188: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x216188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x21618c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x21618cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x216190: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x216190u;
    {
        const bool branch_taken_0x216190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216190u;
        // 0x216194: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216190) {
            ctx->pc = 0x216178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216178;
        }
    }
    ctx->pc = 0x216198u;
label_216198:
    // 0x216198: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x216198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21619c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21619cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2161a0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2161a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2161a4: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2161A4u;
    {
        const bool branch_taken_0x2161a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2161A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2161A4u;
        // 0x2161a8: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2161a4) {
            ctx->pc = 0x216158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216158;
        }
    }
    ctx->pc = 0x2161ACu;
    // 0x2161ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2161acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2161b0:
    // 0x2161b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2161b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2161b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2161b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2161b8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2161b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2161bc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2161bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2161c0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2161c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2161c4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2161c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2161c8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2161c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2161cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2161CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2161D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2161CCu;
        // 0x2161d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2161CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2161D4u;
    // 0x2161d4: 0x0  nop
    ctx->pc = 0x2161d4u;
    // NOP
    ctx->pc = 0x2161d8u;
}
