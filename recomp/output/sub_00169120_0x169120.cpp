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

// Function: sub_00169120
// Address: 0x169120 - 0x169220
void sub_00169120_0x169120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169120_0x169120");
#endif

    switch (ctx->pc) {
        case 0x169150u: goto label_169150;
        case 0x169160u: goto label_169160;
        case 0x169180u: goto label_169180;
        case 0x169190u: goto label_169190;
        case 0x1691b8u: goto label_1691b8;
        default: break;
    }

    ctx->pc = 0x169120u;

    // 0x169120: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x169120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x169124: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x169124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x169128: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x169128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16912c: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x16912cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x169130: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x169130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x169134: 0x2610a080  addiu       $s0, $s0, -0x5F80
    ctx->pc = 0x169134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942848));
    // 0x169138: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x169138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x16913c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16913cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169140: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x169140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x169144: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x169144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x169148: 0xc04f898  jal         func_13E260
    ctx->pc = 0x169148u;
    SET_GPR_U32(ctx, 31, 0x169150u);
    ctx->pc = 0x16914Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169148u;
    // 0x16914c: 0x8e440218  lw          $a0, 0x218($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E260u, 0x169148u, 0x169150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169150u;
label_169150:
    // 0x169150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169154: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x169154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169158: 0xc0484da  jal         func_121368
    ctx->pc = 0x169158u;
    SET_GPR_U32(ctx, 31, 0x169160u);
    ctx->pc = 0x16915Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169158u;
    // 0x16915c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121368u, 0x169158u, 0x169160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169160u;
label_169160:
    // 0x169160: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x169160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169164: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x169164u;
    {
        const bool branch_taken_0x169164 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x169168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169164u;
        // 0x169168: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169164) {
            ctx->pc = 0x169204u;
            goto label_169204;
        }
    }
    ctx->pc = 0x16916Cu;
    // 0x16916c: 0x96530320  lhu         $s3, 0x320($s2)
    ctx->pc = 0x16916cu;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 800)));
    // 0x169170: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x169170u;
    {
        const bool branch_taken_0x169170 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x169174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169170u;
        // 0x169174: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169170) {
            ctx->pc = 0x169200u;
            goto label_169200;
        }
    }
    ctx->pc = 0x169178u;
    // 0x169178: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x169178u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x16917c: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x16917cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_169180:
    // 0x169180: 0x8e430324  lw          $v1, 0x324($s2)
    ctx->pc = 0x169180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x169184: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169188: 0xc040094  jal         func_100250
    ctx->pc = 0x169188u;
    SET_GPR_U32(ctx, 31, 0x169190u);
    ctx->pc = 0x16918Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169188u;
    // 0x16918c: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100250u, 0x169188u, 0x169190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169190u;
label_169190:
    // 0x169190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169194: 0x90460020  lbu         $a2, 0x20($v0)
    ctx->pc = 0x169194u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x169198: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x169198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16919c: 0xb1102b  sltu        $v0, $a1, $s1
    ctx->pc = 0x16919cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1691a0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1691A0u;
    {
        const bool branch_taken_0x1691a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1691A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1691A0u;
        // 0x1691a4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691a0) {
            ctx->pc = 0x1691D8u;
            goto label_1691d8;
        }
    }
    ctx->pc = 0x1691A8u;
    // 0x1691a8: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x1691a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1691ac: 0x50c2000a  beql        $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1691ACu;
    {
        const bool branch_taken_0x1691ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1691ac) {
            ctx->pc = 0x1691B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1691ACu;
            // 0x1691b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1691D8u;
            goto label_1691d8;
        }
    }
    ctx->pc = 0x1691B4u;
    // 0x1691b4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1691b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1691b8:
    // 0x1691b8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1691b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1691bc: 0x91182b  sltu        $v1, $a0, $s1
    ctx->pc = 0x1691bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1691c0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1691C0u;
    {
        const bool branch_taken_0x1691c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1691C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1691C0u;
        // 0x1691c4: 0x3a41021  addu        $v0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691c0) {
            ctx->pc = 0x1691D8u;
            goto label_1691d8;
        }
    }
    ctx->pc = 0x1691C8u;
    // 0x1691c8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1691c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1691cc: 0x14c3fffa  bne         $a2, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1691CCu;
    {
        const bool branch_taken_0x1691cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1691D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1691CCu;
        // 0x1691d0: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691cc) {
            ctx->pc = 0x1691B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1691b8;
        }
    }
    ctx->pc = 0x1691D4u;
    // 0x1691d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1691d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1691d8:
    // 0x1691d8: 0x54a00006  bnel        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1691D8u;
    {
        const bool branch_taken_0x1691d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1691d8) {
            ctx->pc = 0x1691DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1691D8u;
            // 0x1691dc: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1691F4u;
            goto label_1691f4;
        }
    }
    ctx->pc = 0x1691E0u;
    // 0x1691e0: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x1691e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1691e4: 0x8e430324  lw          $v1, 0x324($s2)
    ctx->pc = 0x1691e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x1691e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1691e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1691ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1691ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1691f0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1691f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1691f4:
    // 0x1691f4: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x1691f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1691f8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1691F8u;
    {
        const bool branch_taken_0x1691f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1691FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1691F8u;
        // 0x1691fc: 0x2141018  mult        $v0, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691f8) {
            ctx->pc = 0x169180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169180;
        }
    }
    ctx->pc = 0x169200u;
label_169200:
    // 0x169200: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x169200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_169204:
    // 0x169204: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x169204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169208: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x169208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16920c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x16920cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x169210: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x169210u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169214: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x169214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x169218: 0x3e00008  jr          $ra
    ctx->pc = 0x169218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169218u;
        // 0x16921c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169220u;
}
